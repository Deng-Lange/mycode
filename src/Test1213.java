import java.util.Random;
import java.util.Scanner;

public class Test1213 {
    public static void main(String[] args){
        //计算1~100中9的个数
//        int count = calcNineCount();
//        System.out.println(count);
        //输出1000-2000之间所有的闰年
//        for (int year = 1000; year <= 2000; year++) {
//            if (isLeapYear(year)) {
//                System.out.println(year);
//            }
//        }
        //打印1-100之间所有的素数
//        for (int i = 1; i <= 100; i++) {
//            if (isPrime(i)) {
//                System.out.println(i);
//            }
//        }
        //给定一个数字，判定一个数字是否是素数
//        System.out.println("请输入一个整数");
//        Scanner scanner = new Scanner(System.in);
//        int num=scanner.nextInt();
//        if(isPrime(num)){
//            System.out.println("是素数");
//        }
//        else{
//            System.out.println("不是素数");
//        }
        //根据输入的年龄, 来打印出当前年龄的人是
        //少年(低于18), 青年(19-28), 中年(29-55), 老年(56以上)
//        System.out.println("请输入一个年龄");
//        Scanner scanner = new Scanner(System.in);
//        int age=scanner.nextInt();
//        if(age<=18){
//            System.out.println("少年");
//
//        }
//        if(age>=19&&age<=28){
//            System.out.println("青年");
//        }
//        if(age>=29&&age<=55){
//            System.out.println("中年");
//        }
//        if(age>=56){
//            System.out.println("老年");
//        }
        //打印X图形
//        Scanner scanner = new Scanner(System.in);
//        int num = scanner.nextInt();
//        int up;    //上半部分行数
//        int down;   //下半部分行数
//        if (num % 2 != 0){    //判断奇数行还是偶数行
//            up = 1 + num / 2;
//            down = num - up;
//            oddNum(up,down);
//        }
//        else{
//            up = num / 2;
//            down = num - up;
//            evenNum(up,down);
//        }
        //猜数字游戏
        //1. 先生成一个随机整数 [1, 100]
//        Random random = new Random();
//        Scanner scanner = new Scanner(System.in);
//        int toGuess = random.nextInt(100) + 1;
//        while (true) {
//            // 2. 提示用户进行输入
//            System.out.println("请输入一个要猜的数字[1, 100]:");
//            int num = scanner.nextInt();
//            // 3. 进行比较
//            if (num < toGuess) {
//                System.out.println("低了");
//            } else if (num > toGuess) {
//                System.out.println("高了");
//            } else {
//                System.out.println("猜对了");
//                break;
//            }
//
//        }
        //求出0～999之间的所有“水仙花数”并输出。
        //“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3，则153是一个“水仙花数”。
//        for (int i = 0; i <= 999; i++) {
//            if (isNarcissusNum(i)) {
//                System.out.println(i);
//            }
//        }
    }

    public static boolean isNarcissusNum(int num) {
        // 1. 取出个位
        int theUnit = num % 10;
        // 2. 取出十位
        int tmp = num / 10;
        int decade = tmp % 10;
        // 3. 取出百位
        tmp = num / 100;
        int hundred = tmp % 10;
        // 4. 判定是不是立方和相等
        if (power3(theUnit) + power3(decade)
                + power3(hundred) == num) {
            return true;
        }
        return false;
    }

    public static int power3(int num) {
        return num * num * num;
    }

    public static void oddNum (int up,int down) {    //奇数行图形
        for(int i = 1; i <= up; i++){  //打印上半部分
            for(int j = 1; j < i; j++){
                System.out.print(" ");
            }
            System.out.print("*");
            for(int k = 2 * (up - i) - 1; k > 0; k--){
                System.out.print(" ");
            }
            if ( i != up){
                System.out.print("*");   //末尾最右边的 “*”号
            }
            System.out.println();
        }
        for (int i = 1; i <= down; i++){   // 打印下半部分
            for (int j = down - i ; j > 0 ; j--){
                System.out.print(" ");
            }
            System.out.printf("*");
            for (int k = 1; k <= 2 * i - 1; k++ ){
                System.out.printf(" ");
            }
            System.out.println("*");

        }
    }
    public static void evenNum (int up,int down) {    //偶数行图形
        for(int i = 1; i <= up; i++) {  //打印上半部分
            for(int j = 1; j < i; j++){
                System.out.print(" ");
            }
            System.out.print("*");
            for(int k = 2 * (up - i); k > 0; k--){
                System.out.print(" ");
            }
            System.out.println("*");   //末尾最右边的 “*”号
        }
        for (int i = 1; i <= down; i++){   // 打印下半部分
            for (int j = down - i ; j > 0 ; j--){
                System.out.print(" ");
            }
            System.out.printf("*");
            for (int k = 2 * ( i - 1 ); k > 0 ; k--){
                System.out.printf(" ");
            }
            System.out.println("*");

        }
    }

    public static int calcNineCount() {
        int count = 0;
        for (int i = 1; i <= 100; i++) {
            if (i % 10 == 9) {
                count++;
            }
            if ((i / 10) % 10 == 0) {
                count++;
            }
        }
        return count;
    }

    public static boolean isLeapYear(int year) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            if (year % 4 == 0) {
                return true;
            } else {
                return false;
            }
        }
    }

    // 判定是不是素数
    // 返回true就是素数, 返回false就不是素数
    // 返回值是boolean的方法, 方法名一般都叫isXXX
    public static boolean isPrime(int num) {
        // 核心思路: 找反例, 只要找到某个整数能被num整除
        // 就认为这个num不是素数. 所有数字都找了一遍也找不到
        // 就认为是素数
        if (num == 1 || num == 0) {
            return false;
        }
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

}
