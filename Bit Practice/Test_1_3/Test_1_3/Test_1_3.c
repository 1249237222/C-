#define _CRT_SECURE_NO_WARNINGS 1

  //��һ��c������Ŀ

//int main������
//printf - �⺯�� - ����Ļ�ϴ�ӡ��Ϣ
//printf ��ʹ�ã�Ҳ�ô��к�(����ͷ�ļ� stdio.h)	

#include <stdio.h>

//int main()
//{
//	printf("Hello,World!\n");
//	return 0;
//}

// \n�ǻ���
//main�����ǳ�������
//һ��������main��������ֻ��һ�� 
//����+����+���д���
//��ݼ�ctrl+f5

  //��ʶ��������

//char �ַ���������
// char ch = 'a';
//short ������
// shourt sum = 10;
//int ����
// int age = 20;
//long ������
//long long ����������
//float �����ȸ�����
// float weight = 55.5;
//double ˫���ȸ�����
// double d = 0.0;
//printf("%d\n",100);//��ӡһ������ %d
//sizeof - �ؼ��� - ������ - �������ͻ������ռ�Ŀռ�Ĵ�С
//sizeof�ĵ�λ�� �ֽ�byte

int main()
{
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8

	return 0;
}
