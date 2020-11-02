#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//判断当前机器是采用大端还是小端
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		return 1;//小端
	else
		return 0;//大端
}

int main()
{
	int a = 1;

	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	
	//  0x 00 00 00 01
	//     低       高
	//大端 01 00 00 00 
    //     低------>高
	//小端 00 00 00 01
	//     低------>高
	return 0;
}
//原码 - 有符号数，直接根据正负数值给出二进制序列就是原码
//反码 - 原码的符号位不变，其他为按位取反
//补码 - 反码二进制的最低位+1得到