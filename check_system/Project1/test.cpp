#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�жϵ�ǰ�����ǲ��ô�˻���С��
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		return 1;//С��
	else
		return 0;//���
}

int main()
{
	int a = 1;

	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	
	//  0x 00 00 00 01
	//     ��       ��
	//��� 01 00 00 00 
    //     ��------>��
	//С�� 00 00 00 01
	//     ��------>��
	return 0;
}
//ԭ�� - �з�������ֱ�Ӹ���������ֵ�������������о���ԭ��
//���� - ԭ��ķ���λ���䣬����Ϊ��λȡ��
//���� - ��������Ƶ����λ+1�õ�