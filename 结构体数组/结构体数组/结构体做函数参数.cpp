/*#include<iostream>
using namespace std;
#include<string>
//ֵ���ݺ͵�ַ����
//�ṹ���������Ĳ���
//��ѧ�����뵽һ�������У���ӡѧ������������Ϣ
struct student
{
	string name;
	int age;
	int score;
};

//��ӡѧ����Ϣ�ĺ���
//1��ֵ����
void printStudent1(struct student s)
{
	s.age = 60;
	cout << "�Ӻ���һ�� ���� " << s.name << endl << "�Ӻ���һ�� ���� " << s.age << endl << "�Ӻ���һ�� �ɼ� " << s.score << endl;
}
//2����ַ����
void printStudent2(struct student *p)
{
	p->age = 90;
	cout << "�Ӻ������� ���� " << p->name << endl << "�Ӻ������� ���� " << p->age << endl << "�Ӻ������� �ɼ� " << p->score << endl;
}

int main()
{
	struct student s;
	s.name = "����";
	s.age = 10;
	s.score = 100;

	//cout << " xm " << s.name << "  age  " << s.age << "  score  " << endl;

	printStudent1(s);
	printStudent2(&s);
	cout << "main������ ���� " << s.name << endl << "main������ ���� " << s.age << endl << "main������ �ɼ� " << s.score << endl;
	
	system("pause");
	return 0;
}*/