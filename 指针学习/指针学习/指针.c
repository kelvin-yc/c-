//ָ�룺�ڴ�
#include<stdio.h>
//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�-4���ֽ�
//	&a;      //ֻ���ó���һ���ֽڵĵ�ַ
//	printf("%p\n", &a);//%pר�Ŵ�ӡ��ַ
//	int *pa = &a;       //pa��������ŵ�ַ�ģ���c�����У�pa������ָ�����
//	//*˵��pa��ָ��
//	//int˵��paִ�еĶ�����int���͵�
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", &ch);
//	return 0;
//}

//int main()
//{
//	int* pa = &pa;
//	return 0;
//}

//ָ����ǵ�ַ
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*�����ò���  *pa����ͨ��pa����ĵ�ַ�ҵ�a
//	// int* ��һ������
//	printf("%d\n", a);
//
//	return 0;
//}

//ָ������ж��
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}