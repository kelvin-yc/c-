/*#include<iostream>
using namespace std;
#include<string>
//�ṹ��ָ��
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	//����ѧ���ṹ�����
	struct student s = { "zs",18,100 };

	//ͨ��ָ��ָ��ṹ�����
	//int* p = &s;           //������
	struct student* p = &s;
	//����
	//student* p = &s;

	//ͨ��ָ����ʽṹ������е�����
	//s.name = "zs";
	p->name = "����";
	cout << "������ " << p->name << "���䣺 " << p->age << "������ " << p->score << endl;


	system("pause");
	return 0;
}*/