#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<math.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����������ƿ��ˮ
void Num(int m){
	int n1 = m;//���ƿ��
	int sum = n1;
	while (n1 != 0 && n1 != 1){

		sum += n1 / 2;
		n1 = n1 / 2 + n1 % 2;
	}
	printf("�������%dƿ��ˮ��\n", sum);
}
int main(){
	//����	
	int mon = 0;
	printf("������Ǯ����\n");
	scanf("%d", &mon);
	Num(mon);
	return 0;
}