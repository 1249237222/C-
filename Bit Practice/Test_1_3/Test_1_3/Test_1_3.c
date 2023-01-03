#define _CRT_SECURE_NO_WARNINGS 1

  //第一个c语言项目

//int main主函数
//printf - 库函数 - 在屏幕上打印信息
//printf 的使用，也得打招呼(引用头文件 stdio.h)	

#include <stdio.h>

//int main()
//{
//	printf("Hello,World!\n");
//	return 0;
//}

// \n是换行
//main函数是程序的入口
//一个工程中main函数有且只有一个 
//编译+链接+运行代码
//快捷键ctrl+f5

  //初识数据类型

//char 字符数据类型
// char ch = 'a';
//short 短整型
// shourt sum = 10;
//int 整形
// int age = 20;
//long 长整型
//long long 更长的整型
//float 单精度浮点数
// float weight = 55.5;
//double 双精度浮点数
// double d = 0.0;
//printf("%d\n",100);//打印一个整数 %d
//sizeof - 关键字 - 操作符 - 计算类型或变量所占的空间的大小
//sizeof的单位是 字节byte

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
