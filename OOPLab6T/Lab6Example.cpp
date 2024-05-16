﻿#include <iostream>
#include <string>
using namespace std;
//Звичайне спадкування
class A {
protected:
	int m_numb;
public:
	A() {
		m_numb = 0;
	}
	A(int numb) {
		m_numb = numb;
	}
	~A() {
		cout << "Deleting A;" << endl;
	}
	void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};

class B :public A {
protected:
	int m_numb;
public:
	B() {
		m_numb = 0;
	}
	B(int numb) {
		m_numb = numb;
	}
	~B() {
		cout << "Deleting B;" << endl;
	}
	void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};

class C :public A {
protected:
	int m_numb;
public:
	C() {
		m_numb = 0;
	}
	C(int numb) {
		m_numb = numb;
	}
	~C() {
		cout << "Deleting C;" << endl;
	}
	void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};


class E :public B {
protected:
	int m_numb;
public:
	E() {
		m_numb = 0;
	}
	E(int numb) {
		m_numb = numb;
	}
	~E() {
		cout << "Deleting E;" << endl;
	}
	void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};


class D :public C {
protected:
	int m_numb;
public:
	D() {
		m_numb = 0;
	}
	D(int numb) {
		m_numb = numb;
	}
	~D() {
		cout << "Deleting D;" << endl;
	}
	void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};


class F :public A, public D, public E {
protected:
	int m_numb;
public:
	F() {
		m_numb = 0;
	}
	F(int numb) {
		m_numb = numb;
	}
	~F() {
		cout << "Deleting F;" << endl;
	}
	void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};

//Virtual

class A1 {
protected:
	int m_numb;
public:
	A1() {
		m_numb = 0;
	}
	A1(int numb) {
		m_numb = numb;
	}
	~A1() {
		cout << "Deleting A1;" << endl;
	}
	virtual void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};

class B1 :virtual public A1 {
protected:
	int m_numb;
public:
	B1() {
		m_numb = 0;
	}
	B1(int numb) {
		m_numb = numb;
	}
	~B1() {
		cout << "Deleting B1;" << endl;
	}
	virtual void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};

class C1 :virtual public A1 {
protected:
	int m_numb;
public:
	C1() {
		m_numb = 0;
	}
	C1(int numb) {
		m_numb = numb;
	}
	~C1() {
		cout << "Deleting C1;" << endl;
	}
	virtual void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};


class E1 :virtual public B1 {
protected:
	int m_numb;
public:
	E1() {
		m_numb = 0;
	}
	E1(int numb) {
		m_numb = numb;
	}
	~E1() {
		cout << "Deleting E1;" << endl;
	}
	virtual void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};


class D1 :virtual public C1 {
protected:
	int m_numb;
public:
	D1() {
		m_numb = 0;
	}
	D1(int numb) {
		m_numb = numb;
	}
	~D1() {
		cout << "Deleting D1;" << endl;
	}
	virtual void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};


class F1 :virtual public A1, virtual public D1, virtual public E1 {
protected:
	int m_numb;
public:
	F1() {
		m_numb = 0;
	}
	F1(int numb) {
		m_numb = numb;
	}
	~F1() {
		cout << "Deleting F1:" << endl;
	}
	virtual void get_numb() {
		cout << "Numb is:" << m_numb << endl;
	}
};

void task1() {
	cout << "Testing non-virtual inheritance:" << endl;
	A a(1);
	B b(2);
	C c(3);
	D d(4);
	E e(5);
	F f(6);

	cout << "Size of A: " << sizeof(A) << endl;
	a.get_numb();
	cout << "Size of B: " << sizeof(B) << endl;
	b.get_numb();
	cout << "Size of C: " << sizeof(C) << endl;
	c.get_numb();
	cout << "Size of D: " << sizeof(D) << endl;
	d.get_numb();
	cout << "Size of E: " << sizeof(E) << endl;
	e.get_numb();
	cout << "Size of F: " << sizeof(F) << endl;
	f.get_numb();

	cout << endl << "Testing virtual inheritance:" << endl;
	A1 a1(10);
	B1 b1(20);
	C1 c1(30);
	D1 d1(40);
	E1 e1(50);
	F1 f1(60);

	cout << "Size of A1: " << sizeof(A1) << endl;
	a1.get_numb();
	cout << "Size of B1: " << sizeof(B1) << endl;
	b1.get_numb();
	cout << "Size of C1: " << sizeof(C1) << endl;
	c1.get_numb();
	cout << "Size of D1: " << sizeof(D1) << endl;
	d1.get_numb();
	cout << "Size of E1: " << sizeof(E1) << endl;
	e1.get_numb();
	cout << "Size of F1: " << sizeof(F1) << endl;
	f1.get_numb();
}

class Figure {
protected:
	string m_name;
	int m_number_of_sides;
public:
	Figure() {
		m_name = "Not Find:";
		m_number_of_sides = 0;
	}
	Figure(string name, int number_of_sides) {
		m_name = name;
		m_number_of_sides = number_of_sides;

	}
	~Figure() {
		cout << "Deleting Figura:" << endl;
	}
	virtual float area() = 0;
};

class Rectangle :public Figure {
protected:
	float m_side1;
	float m_side2;
public:
	Rectangle() :Figure("Rectangle", 4) {
		m_side1 = 0;
		m_side2 = 0;
	}
	Rectangle(float numb1, float numb2) :Figure("Rectangle", 4) {
		m_side1 = numb1;
		m_side2 = numb2;
	}
	~Rectangle() {
		cout << "Deleting Rectangle:" << endl;
	}
	virtual float area() override {
		return m_side1 * m_side2;
	}
};

class Circle :public Figure {
protected:
	float m_radius;
public:
	Circle() : Figure("Сircle", 0) {
		m_radius = 1;
	}
	Circle(float radius) : Figure("Сircle", 0) {
		m_radius = radius;
	}
	~Circle() {
		cout << "Deleting Сircle:" << endl;
	}
	virtual float area() override {
		return 3.1415 * m_radius * m_radius;
	}
};

class Triangle :public Figure {
protected:
	float m_height;
	float m_base;
public:
	Triangle() : Figure("Triangle", 3) {
		m_height = 1;
		m_base = 1;
	}
	Triangle(float height, float base) : Figure("Triangle", 3) {
		m_height = height;
		m_base = base;
	}
	~Triangle() {
		cout << "Deleting Triangle:" << endl;
	}
	virtual float area() override {
		return 0.5 * m_base * m_height;
	}
};

class Trapeze :public Figure {
protected:
	float m_side1;
	float m_side2;
	float m_height;
public:
	Trapeze() {
		m_side1 = 0;
		m_side2 = 0;
		m_height = 0;
	}
	Trapeze(float numb1, float numb2, float height) {
		m_side1 = numb1;
		m_side2 = numb2;
		m_height = height;

	}
	~Trapeze() {
		cout << "Deleting Trapeze:" << endl;
	}
	virtual float area() override {
		return (m_side1 + m_side2) * m_height * 0.5;
	}
};

void task2() {
	const int SIZE = 4;
	Figure* figures[SIZE];

	figures[0] = new Rectangle(4, 5);
	figures[1] = new Circle(3);
	figures[2] = new Triangle(3, 4);
	figures[3] = new Trapeze(2, 3, 1.5);

	for (int i = 0; i < SIZE; ++i) {
		cout << "Area of " << typeid(*figures[i]).name() << ": " << figures[i]->area() << endl;
	}

	for (int i = 0; i < SIZE; ++i) {
		delete figures[i];
	}
}

//task3

class Student {
protected:
	string m_speciality;
	int m_loans;
	int m_year;
public:
	Student() {
		m_speciality = "Not Found";
		m_year = 1;
		m_loans = 0;
	}
	Student(string speciality, int loan, int year) {
		m_speciality = speciality;
		m_year = year;
		m_loans = loan;
	}

	virtual ~Student() {
		cout << "Deleting Student:" << endl;
	}

	virtual void display() const {
		cout << "Speciality: " << m_speciality << ", Year: " << m_year << ", Loans: " << m_loans << endl;
	}

	friend ostream& operator<<(ostream& out, const Student& student);
	friend istream& operator>>(istream& in, Student& student);
};

ostream& operator<<(ostream& out, const Student& student) {
	out << "Student Info: ";
	student.display();
	return out;
}

istream& operator>>(istream& in, Student& student) {
	cout << "Enter speciality: ";
	in >> student.m_speciality;
	cout << "Enter year: ";
	in >> student.m_year;
	cout << "Enter loans: ";
	in >> student.m_loans;
	return in;
}

class Father {
protected:
	string m_name;
	int m_age;
	int m_wage;
	int m_kids;
public:
	Father() {
		m_name = "Stu";
		m_age = 20;
		m_kids = 1;
		m_wage = 1000;
	}
	Father(string name, int wage, int kids, int age) {
		m_age = age;
		m_kids = kids;
		m_name = name;
		m_wage = wage;
	}

	virtual ~Father() {
		cout << "Deleting Father:" << endl;
	}

	virtual void display() const {
		cout << "Name: " << m_name << ", Age: " << m_age << ", Wage: " << m_wage << ", Kids: " << m_kids << endl;
	}

	friend ostream& operator<<(ostream& out, const Father& father);
	friend istream& operator>>(istream& in, Father& father);
};

ostream& operator<<(ostream& out, const Father& father) {
	out << "Father Info: ";
	father.display();
	return out;
}

istream& operator>>(istream& in, Father& father) {
	cout << "Enter name: ";
	in >> father.m_name;
	cout << "Enter age: ";
	in >> father.m_age;
	cout << "Enter wage: ";
	in >> father.m_wage;
	cout << "Enter number of kids: ";
	in >> father.m_kids;
	return in;
}


class StudentFather : public Father, public Student {
protected:
	int income;
public:
	StudentFather() : Father(), Student() {
		income = m_loans + m_wage;
	}
	StudentFather(string name, int age, int loans, int wage, int year, string speciality, int kids) : Father(name, wage, kids, age), Student(speciality, loans, year) {
		income = loans + wage;
	}

	virtual ~StudentFather() {
		cout << "Deleting StudentFather:" << endl;
	}

	virtual void display() const override {
		cout << "Student-Father Info:" << endl;
		cout << "Income: " << income << endl;
		cout << "From Student:" << endl;
		Student::display();
		cout << "From father:" << endl;
		Father::display();
	}
};

void task3() {
	Student studentObj("Engineering", 5000, 2);
	Father fatherObj("John", 3000, 2, 45);
	StudentFather studentFatherObj("Mark", 25, 2000, 4000, 3, "Medicine", 1);
	Student obj;

	cout << "Student Info:" << endl;
	cout << studentObj << endl;

	cout << "Father Info:" << endl;
	cout << fatherObj << endl;

	cout << "Student-Father Info:" << endl;
	studentFatherObj.display();
}

int main()
{
	int choice;
	cout << "Choose task" << endl;
	cout << "1.Task 1 (Tree)" << endl;
	cout << "2.Task 2 (Figure)" << endl;
	cout << "3.Task 3(Student,Father,StudentFather)" << endl;
	cout << "4.Exit" << endl;

	cin >> choice;

	switch (choice) {
	case 1: task1(); break;
	case 2: task2(); break;
	case 3: task3(); break;
	case 4: return 0;
	default: cout << "Error" << endl;
	}
}