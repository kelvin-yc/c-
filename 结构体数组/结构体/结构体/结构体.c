#include<stdio.h>

//�ṹ�������c���Դ����µ����ͳ���
struct stu
{
	char name[20];
	int age;
	double score;
};
//����һ���������
struct book
{
	char name[20];//��Ա����
	float price;
	char id[30];
};
int main()
{
	struct stu a = { "����",20,85.5 };  //�ṹ��Ĵ����ͳ�ʼ��
	printf("1,%s %d %f\n", a.name,a.age,a.score);
	struct stu* pa = &a; 
	printf("2,%s %d %f\n", (*pa).name, (*pa).age, (*pa).score);
	printf("3,%s %d %f\n", pa->name, pa->age, pa->score);
	
	return 0;
}