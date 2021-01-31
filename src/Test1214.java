import java.util.Scanner;

public class Test1214 {
    public static void main(String[] args){
        //计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值
//        double result = seriesSum(100);
//        System.out.println(result);
        // 求两个整数的最大公约数
//        int result = calcGreatestCommonDivisor(200, 120);
//        System.out.println(result);
        //求一个整数，在内存当中存储时，二进制1的个数。
//        int i=1;
//        int count=0;
//        Scanner sc=new Scanner(System.in);
//        int n=sc.nextInt();
//        while(i!=0){
//            if((n&i)!=0){
//                count++;
//            }
//            i<<=1;
//        }
//        System.out.println(count);
        //获取一个数二进制序列中所有的偶数位和奇数位,分别输出二进制序列
        //首位为奇数位
//        Scanner sc=new Scanner(System.in);
//        System.out.println("请输入一个整数：");
//        int num=sc.nextInt();
//        System.out.println("奇数位：");
//        odd(num);
//        System.out.println();
//        System.out.println("偶数位：");
//        even(num);
        //编写代码模拟三次密码输入的场景
        //最多能输入三次密码，密码正确，提示 “登录成功”，密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//        inputPassword();
        //输出一个整数的每一位，如：123的每一位是1 ， 2 ， 3
//        Scanner scanner = new Scanner(System.in);
//        System.out.println("请输入一个整数：");
//        int n = scanner.nextInt();
//        print(n);
        //输出n*n的乘法口诀表，n由用户输入
        // 先按行打印
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入一个整数：");
        int n = scanner.nextInt();
        for (int row = 1; row <= n; row++) {
            printLine(row);
        }
    }

    public static double seriesSum(int n) {
        double sum = 0.0;
        for (int i = 1; i <= n; i += 2) {
            sum += calcItem(i);
        }
        return sum;
    }
    public static double calcItem(double i) {
        return 1 / i - 1 / (i+1);
    }

    public static int calcGreatestCommonDivisor(int a, int b) {
        // 暴力搜索的方式来求解
        // 从 a 和 b 的较小值开始, 依次递减的进行求解.
        // 拿到当前的数字, 来试试, 看这个数字能否同时被 a 和 b 整除
        // 如果能同时整除了, 该数字一定就是最大公约数.

        // 1. 先找出 a 和 b 的较小值
        int min = min(a, b);
        // 2. 从 min 开始循环, 到 1 结束, 看这个数字是不是公约数
        for (int i = min; i > 1; i--) {
            if (a % i == 0 && b % i == 0) {
                return i;
            }
        }
        return 1;
    }
    // 求两个整数的最小值
    public static int min(int a, int b) {
        if (a < b) {
            return a;
        } else {
            return b;
        }
    }

    public static void odd(int num) {
        for (int i = 30; i >= 0; i = i - 2) {
            if ((num & (1 << i)) != 0) {
                System.out.print("1 ");
            } else {
                System.out.print("0 ");
            }
        }
    }
    public static void even(int num) {
        for (int i = 31; i >= 0; i = i - 2) {
            if ((num & (1 << i)) != 0) {
                System.out.print("1 ");
            } else {
                System.out.print("0 ");
            }
        }
    }

    public static void inputPassword() {
        String password = "123456";
        Scanner scanner = new Scanner(System.in);
        int i = 0;
        for (i = 0 ; i < 3; i++) {
            System.out.println("请输入密码: ");
            String input = scanner.next();
            if (input.equals(password)) {
                System.out.println("密码正确, 登陆成功");
                break;
            } else {
                System.out.println("密码错误, 请重新输入");
            }
        }
        if (i == 3) {
            System.out.println("您已经连续失败 3 次, 系统强制退出");
        }
    }

    public static void print(int n) {
        //当输入一个负数时，先把它变成正数
        if(n < 0) {
            n = -n;
        }
        if(n>9) {
            print(n/10);//递归
        }
        System.out.println(n%10);//打印个位数
    }

    public static void printLine(int row) {
        // 乘法口诀表上, 第 row 行有 row 列
        for (int col = 1; col <= row; col++) {
            System.out.printf("%dx%d=%d ", col, row, row * col);
        }
        // 如果 println 没有参数, 就只打印一个换行符
        System.out.println();
    }
}
