#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<math.h>

//喝汽水：1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以买多少瓶汽水
void Num(int m){
	int n1 = m;//买的瓶数
	int sum = n1;
	while (n1 != 0 && n1 != 1){

		sum += n1 / 2;
		n1 = n1 / 2 + n1 % 2;
	}
	printf("你可以买%d瓶汽水！\n", sum);
}
int main(){
	//菱形	
	int mon = 0;
	printf("请输入钱数：\n");
	scanf("%d", &mon);
	Num(mon);
	return 0;
}