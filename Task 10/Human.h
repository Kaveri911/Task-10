#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	string surname;
	string name;
	string midname;
	int age;

public:
	Human()
	{
		this->surname = "";
		this->name = "";
		this->midname = "";
		this->age = 0;
	}

	Human(string a, string b, string c, int d)
	{
		this->surname = a;
		this->name = b;
		this->midname = c;
		this->age = d;
	}

	string Get_surname()
	{
		return this->surname;
	}

	string Get_name()
	{
		return this->name;
	}

	string Get_midname()
	{
		return this->midname;
	}

	int Get_age()
	{
		return this->age;
	}

	virtual ~Human() = default;

	virtual void print() = 0;
};

class Student :public Human
{
	bool on_lesson = false;
public:
	Student()
	{
		this->on_lesson = false;
	}

	Student(const string& a, const string& b, const string& c, const int& d, const bool& e) :Human(a, b, c, d)
	{
		this->on_lesson = e;
	}

	void print() override
	{
		cout << "Работник" << endl;
		cout << "ФИО: " << this->Get_surname() << " " << this->Get_name() << " " << this->Get_midname() << endl;
		cout << "Возраст " << this->Get_age() << endl;
		cout << "На занятии: ";
		if (this->on_lesson)
		{
			cout << "ДА" << endl;
		}
		else
		{
			cout << "НЕТ" << endl;
		}
		cout << "================" << endl;
	}
};

class Boss :public Human
{
	int number_of_workers;
public:
	Boss()
	{
		this->number_of_workers = 0;
	}

	Boss(const string& a, const string& b, const string& c, const int& d, const int& e) :Human(a, b, c, d)
	{
		this->number_of_workers = e;
	}

	void print() override
	{
		cout << "Управляющий" << endl;
		cout << "ФИО: " << this->Get_surname() << " " << this->Get_name() << " " << this->Get_midname() << endl; 
		cout << "Возраст " << this->Get_age() << endl; 
		cout<<"Число работников: " << this->number_of_workers << endl;
	}
};
#endif