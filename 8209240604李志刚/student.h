
#pragma once
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	Student();
	Student(int, const char*, char);
	void set_value(int, const char*, char);
private:
	int num;
	char name[20];
	char sex;
};