#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<iomanip>
using namespace std;
#include<stdio.h>

//class Account
//{
//public:
//	void set(char ac[], char pas[], char na[], double ba)
//	{
//		strcpy_s(account, ac);
//		strcpy_s(password, pas);
//		strcpy_s(name, na);
//		balance = ba;
//	}
//	bool check(char ac[], char pas[])
//	{
//		/*if (!check(ac, pas))*/
//		if (strcmp(ac, account)==0 && strcmp(pas, password)==0)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	void deposit();
//	void drawing();
//	void getbalance();
//private:
//	char account[20];
//	char password[9];
//	char name[10];
//	double balance;
//
//};
//void Account::deposit()
//{
//	double A; bool ck;
//	char ac[20]; char pas[9];
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	ck = check(ac, pas);
//	if (ck ==true)
//	{
//		cout << "输入存款金额：" << endl;
//		cin >> A;
//		balance = balance + A;
//	}
//	else
//		cout << "false";
//}
//void Account::drawing()
//{
//	double A; bool ck;
//	char ac[20]; char pas[9];
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	ck = check(ac, pas);
//	if (ck == true)
//	{
//		cout << "输入取款金额：" << endl;
//		cin >> A;
//		balance = balance -A;
//	}
//	else
//		cout << "false";
//}
//void Account::getbalance()
//{
//	double A; bool ck;
//	char ac[20]; char pas[9];
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	ck = check(ac, pas);
//	if (ck == true)
//	{
//		cout << "剩余金额："<< endl<<balance;
//	}
//	else
//		cout << "false";
//}
//int main()
//{
//	char ac[] = { "10086" };
//	char pas[] = { "666666" };
//	char na[] = { "Q" };
//	double ba = 100000;
//	Account a;
//	a.set(ac, pas, na, ba);
//	a.deposit();
//	a.drawing();
//	a.getbalance();
//	return 0;
//}
//class Account
//{
//public:
//	void set(char ac[], char pas[], char na[], double ba)
//	{
//		strcpy_s(account, ac);
//		strcpy_s(password, pas);
//		strcpy_s(name, na);
//		balance = ba;
//	}
//	bool check(char ac[], char pas[])
//	{
//		if (strcmp(ac, account) == 0 && strcmp(pas, password) == 0)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	void ATM();
//private:
//	char account[20];
//	char password[9];
//	char name[10];
//	double balance;
//
//};
//void Account::ATM()
//{
//	double A; bool ck;
//	char ac[20]; char pas[9];
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	ck = check(ac, pas);
//		if (ck == true)
//	{
//			for (int i = 1; i !=0; i++)
//			{
//				cout << "请选择服务:" << endl << "1.存款  " << "2.取款  " << "3.余额查询  " <<"4.退卡"<< endl;
//				int a;
//				cin >> a;
//				if (a == 1)
//				{
//					cout << "输入存款金额：" << endl;
//					cin >> A;
//					balance = balance + A;
//				}
//				else if (a == 2)
//				{
//					cout << "输入取款金额：" << endl;
//					cin >> A;
//					if (A < balance)
//						balance = balance - A;
//					else
//						cout << "余额不足"<<endl;
//				}
//				else if (a == 3)
//					cout << name<<"的余额:  "<<balance << endl;
//				else
//				{
//					cout << "请收取你的磁卡" << endl;
//					break;
//				}
//			}
//	}
//	else
//		cout << "false";
//}
//
//int main()
//{
//	char ac[] = { "10086" };
//	char pas[] = { "666666" };
//	char na[] = { "Q" };
//	double ba = 100000;
//	Account a;
//	a.set(ac, pas, na, ba);
//	a.ATM();
//	return 0;
//}

//class Account
//{
//public:
//	void set(string ac, string pas, string na, double ba)
//	{
//		account = ac;
//		password = pas;
//		name = na;
//		balance = ba;
//	}
//	bool check(string ac, string pas)
//	{
//		if (ac==account && pas==password)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	void deposit();
//	void drawing();
//	void getbalance();
//private:
//	string account;
//	string password;
//	string name;
//	double balance;
//
//};
//void Account::deposit()
//{
//	double A; bool ck;
//	string ac; string pas;
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	ck = check(ac, pas);
//	if (ck ==true)
//	{
//		cout << "输入存款金额：" << endl;
//		cin >> A;
//		balance = balance + A;
//	}
//	else
//		cout << "false" << endl;
//}
//void Account::drawing()
//{
//	double A; bool ck;
//	string ac; string pas;
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	ck = check(ac, pas);
//	if (ck == true)
//	{
//		cout << "输入取款金额：" << endl;
//		cin >> A;
//		balance = balance -A;
//	}
//	else
//		cout << "false" << endl;
//}
//void Account::getbalance()
//{
//	double A; bool ck;
//	string ac; string pas;
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	ck = check(ac, pas);
//	if (ck == true)
//	{
//		cout << "剩余金额："<< endl<<balance;
//	}
//	else
//		cout << "false"<<endl;
//}
//int main()
//{
//	string ac = {"10086"};
//	string pas = { "666666" };
//	string na = { "Q" };
//	double ba = 100000;
//	Account a;
//	a.set(ac, pas, na, ba);
//	a.deposit();
//	a.drawing();
//	a.getbalance();
//	return 0;
//}
//class Account
//{
//public:
//	void set(string ac, string pas, string na, double ba)
//	{
//		account = ac;
//		password = pas;
//		name = na;
//		balance = ba;
//	}
//	bool check(string ac, string pas)
//	{
//		if (ac == account && pas == password)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	bool deposit();
//	bool drawing();
//	double getbalance();
//private:
//	string account;
//	string password;
//	string name;
//	double balance;
//
//};
//bool Account::deposit()
//{
//	double A;
//	string ac; string pas;
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	if (check(ac, pas))
//	{
//		cout << "输入存款金额：" << endl;
//		cin >> A;
//		balance = balance + A;
//		return true;
//	}
//	else
//		return false;
//}
//bool Account::drawing()
//{
//	double A;
//	string ac; string pas;
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	
//	if (check(ac, pas))
//	{
//		cout << "输入取款金额：" << endl;
//		cin >> A;
//		balance = balance - A;
//		return true;
//	}
//	else
//		return false;
//}
//double Account::getbalance()
//{
//	double A;
//	string ac; string pas;
//	cout << "输入银行账号：" << endl;
//	cin >> ac;
//	cout << "输入银行账号密码：" << endl;
//	cin >> pas;
//	if (check(ac, pas))
//	{
//		cout << balance;
//		return balance;
//	}
//	else
//		cout << "false" << endl;
//}
//int main()
//{
//	string ac = { "10086" };
//	string pas = { "666666" };
//	string na = { "Q" };
//	double ba = 100000;
//	Account a;
//	a.set(ac, pas, na, ba);
//	a.deposit();
//	a.drawing();
//	a.getbalance();
//	return 0;
//}
//class MyTime
//{
//public:
//	//MyTime()//无参构造函数：默认调用；更规范；避免出错;
//	//{
//	//	cout << "调用了无参的构造函数：";
//	//	cout << "输入当前时间" << endl;
//	//	cin >> hour >> minute >> second;
//	//}
//	//MyTime(int h, int m, int s)//有参构造函数：默认调用；更规范；
//	//{
//	//	cout << "调用了有参的构造函数：";
//	//	hour = h;
//	//	minute = m;
//	//	second = s;
//	//}
//	/*MyTime(const MyTime& t)
//	{
//		hour = t.hour;
//		minute = t.minute;
//		second = t.second;
//	}*/
//	MyTime(int h, int m, int s):hour(h),minute(m),second(s){}
//	void settime(int h, int m, int s);
//	void settime(MyTime t1)
//	{
//		hour = t1.hour;
//		minute = t1.minute;
//		second = t1.second;
//	}
//	void printtime();
//protected://能被继承，被子代访问
//
//private:
//	int hour;
//	int minute;
//	int second;
//};
//void MyTime::settime(int h, int m, int s)
//{
//	hour = h;
//	minute = m;
//	second = s;
//}
//void MyTime::printtime()
//{
//	cout << hour <<":"<< minute <<":"<< second;
//}
//int main()
//{
//	MyTime t1/*(1,2,3)*/;
//	t1.settime(1,2,3);
//	/*t.settime(1,1,12);*/
//	MyTime t2;
//	t1.printtime();
//	t2.settime(t1);
//	t2.printtime();
//}
//作业：学生类，数组类；银行类；
//加带参和不带参构造函数；
//定义2对象对应；
//class student
//{
//public:
//	student()
//	{
//		cout << "以下为学生信息" << endl;
//	}
//	student(string na,int ag):name(na),age(ag){}
//	void print();
//private:
//	string name;
//	int age;
//};
//void student::print()
//{
//	cout << "姓名：" << name << "    年龄：" << age << endl;
//}
//class check
//{
//public:
//	check()
//	{
//		cout << "以下为账单详情" << endl;
//	}
//	check(double dep1, double dep2, double dra1, double dra2) /*:deposit[0](dep1), deposit[1](dep2), drawing[0](dra1), drawing[1](dra2) {}*/
//	{
//		deposit[0] = dep1; 
//		deposit[1] = dep2; 
//		drawing[0] = dra1 ; 
//		drawing[1] = dra2;
//	}
//	void print();
//private:
//	double deposit[2];
//	double drawing[2];
//};
//void check::print()
//{
//	cout << "第1次存款："<<deposit[0]<<endl<< "第2次存款：" << deposit[1] << endl<< "第1次取款："<< drawing[0]<<endl<< "第2次取款：" << drawing[1] << endl;
//}
//class bank
//{
//public:
//	bank()
//	{
//		cout << "以下为客户信息"<<endl;
//	}
//	bank(string ac,double ba):account(ac),balance(ba){}
//	void print();
//private:
//	string account;
//	double balance;
//};
//void bank::print()
//{
//	cout << "账号：" << account << "   余额：" << balance<< endl;
//}
//int main()
//{
//	student a;
//	student b("sakura", 20);
//	b.print();
//	check c;
//	check d(112, 23132, 312312, 3312);
//	d.print();
//	bank e;
//	bank f("718442231", 99999);
//	f.print();
//	return 0;
//}
//class Array
//{
//public:
//	Array(int n = 10)
//	{
//		cout << "调用了构造函数：";
//		a = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = i;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << " "<<a[i];
//		}
//	}
//	~Array()
//	{
//		cout << endl<<"调用了析构函数：";
//		delete[]a;
//	}
//private:
//	int* a;
//};
//#include"Arra.h"
//int main()
//{
//	Arra a1(1);
//	Arra a2(2);
//	Arra a3(3);
//	return 0;
//}
//class Array
//{
//public:
//	Array()
//	{
//		n=10;m=10;
//		cout << "调用了构造函数：";
//		a = new int*[n];
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = new int[m];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//				a[i][j] = i + j;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				cout << "        " << a[i][j];
//			}
//			cout << endl;
//		}
//	}
//	~Array()
//	{
//		cout << endl << "调用了析构函数：";
//		for (int i = 0; i < n; i++)
//		{
//			delete []a[i];
//		}
//		delete a;
//	}
//private:
//	int** a;
// int n;
// int m;
//};
//int main()
//{
//	Array a;
//	return 0;
//}
//#include"student.h"
//int main()
//{
//	char na[] = "sakura";
//	student s(na, 20);
//	s.print();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class student
//{
//public:
//	student( int a)
//	{
//		
//		int n = 10;
//		name = new char[n];
//		cin >> name;
//		age = a;
//	}
//	~student()
//	{
//		delete[]name;
//	}
//	void print();
//private:
//	char* name;
//	int age;
//	int n;
//};
//void student::print()
//{
//	cout << "姓名：" << name;
//	cout << endl << "年龄:" << age;
//}
//int main()
//{
//	char na[] = "sakura";
//	student s(20);
//	s.print();
//	return 0;
//}
//class MyTime
//{
//public:
//	MyTime()//无参构造函数：默认调用；更规范；避免出错;
//	{
//		cout << "调用了无参的构造函数：";
//		/*cout << "输入当前时间" << endl;
//		cin >> hour >> minute >> second;*/
//	}
//	//MyTime(int h, int m, int s)//有参构造函数：默认调用；更规范；
//	//{
//	//	cout << "调用了有参的构造函数：";
//	//	hour = h;
//	//	minute = m;
//	//	second = s;
//	//}
//	/*MyTime(const MyTime& t)
//	{
//		hour = t.hour;
//		minute = t.minute;
//		second = t.second;
//	}*/
//	MyTime(int h, int m, int s) :hour(h), minute(m), second(s) {}
//	void settime(int h, int m, int s);
//	void settime(MyTime t1)
//	{
//		hour = t1.hour;
//		minute = t1.minute;
//		second = t1.second;
//	}
//	void printtime();
//protected://能被继承，被子代访问
//
//private:
//	int hour;
//	int minute;
//	int second;
//};
//void MyTime::settime(int h, int m, int s)
//{
//	hour = h;
//	minute = m;
//	second = s;
//}
//void MyTime::printtime()
//{
//	cout << hour << ":" << minute << ":" << second;
//}
//int main()
//{
//	MyTime t1(1,2,3);
//	t1.settime(1, 2, 3);
//	/*t.settime(1,1,12);*/
//	MyTime t2;
//	t1.printtime();
//	t2.settime(t1);
//	t2.printtime();
//}
//#include"student.h"
//int main()
//{
//	char na[] = "sakura";
//	student s(na, 20);
//	student s1(s);
	//student a[3]{ student(na,20),student(na,20),student(na,20) };
	///*student* t = new student[3]{student(na,20),student(na,20),student(na,20)};*/
	//a[0].print();
	//a[1].print();
	//a[2].print();
	//int n=20;
	//student* a = new student[n]{ student(na,20),student(na,20),student(na,20) };
	///*cin >> n;*/
	//for (int i = 0; i < n; i++)
	//{
	//	a[i].print();
	//}
//	s.print();
//	s1.print();
//	/*delete[]a;*/
//	return 0;
//}
//#include"Matrix.h"
//#include<iostream>
//using namespace std;
//class Matrix
//{
//public:
//	Matrix()
//	{
//
//	}
//	Matrix(int rows, int cols);
//	Matrix(const Matrix& t)
//	{
//		data = new double* [rows];
//		for (int i = 0; i < rows; i++)
//			data[i] = new double[cols];
//		data = t.data;
//	}
//	~Matrix()
//	{
//		for (int i = 0; i < rows; i++)
//			delete[]data[i];
//		delete[]data;
//	}
//	Matrix plus(Matrix t1, Matrix t2);
//	Matrix minus(Matrix t1, Matrix t2);
//	void print();
//private:
//	double** data;
//	int rows;
//	int cols;
//};
//Matrix::Matrix(int rows, int cols)
//{
//
//	data = new double* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		data[i] = new double[cols];
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> data[i][j];
//		}
//	}
//}
//Matrix Matrix::plus(Matrix t1, Matrix t2)
//{
//	Matrix t;
//	data = new double* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		data[i] = new double[cols];
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			t.data[i][j] = t1.data[i][j] + t2.data[i][j];
//		}
//	}
//	return t;
//}
//Matrix Matrix::minus(Matrix t1, Matrix t2)
//{
//	Matrix t;
//	data = new double* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		data[i] = new double[cols];
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			t.data[i][j] = t1.data[i][j] - t2.data[i][j];
//		}
//	}
//	return t;
//}
//void Matrix::print()
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << data[i][j];
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	Matrix t1(n,m);
//	Matrix t2(t1);
//	Matrix t3;
//	t3.plus(t1, t1);
//	Matrix t4;
//	t4.minus(t1, t2);
//	t3.print();
//	t4.print();
//}
//#include<iostream>
//using namespace std;
//class user
//{
//public:
//	user()
//	{
//
//	}
//	user(char na[], char ph[], int num)//对参数赋初值从zuo开始；
//	{
//		strcpy(name, na);
//		strcpy(phone, ph);
//		number = num;
//	}
//	~user()
//	{
//			
//	}
//	/*void set(char* na, char *phone, int number);*/
//	
//	void compute(int number);
//	void setnumber(int cnt)
//	{
//		number = cnt;
//	}
//	int getnumber()
//	{
//		return number;
//	}
//	void print()
//	{
//		cout << name << "\t";
//		cout << phone<< "\t";
//		cout << number;
//		cout << endl;
//	}
//	void set(char na[], char ph[], int num)
//	{
//
//		strcpy(name, na);
//		strcpy(phone, ph);
//		number = num;
//	}
//private:
//	char *name=new char[20];
//	char* phone= new char[20];
//	int number;
//	double discount;
//};
////void user::print()
////{
////	
////}
//
//int main()
//{
//	char na[] = { "a" };
//	char ph[] = { "101" };
//	user t;
//	t.setnumber(5);
//	/*int a;
//	a = t.getnumber();
//	cout << a;*/
//	string s = "" + 1;
//	/*cout << s;
//	int i = 5;*/
//	/*char l = 'A'+1;
//	cout << l;*/
//	user us[10];
//	for (int i = 0; i < 10; i++)
//	{
//		char a = 48 + i;
//		char name[20] = "用户";
//		int n = strlen(name);
//		cout << n;
//		name[strlen(name)] = a;
//		char num[20] = "1000";
//		num[strlen(num)] = a;
//		us[i].set(name, num, i);
//		/*us[i].name = ;*/
//		us[i].print();
//	}
//}
//class student
//{
//public:
//	void setname(char na[]);
//	void setscore(float s);
//	void setclassfore(float f);
//	void getname();
//	void getscore();
//	void getclassfore();
//private:
//	char name[20];
//	float score;
//	static float classfore;
//};
//float student::classfore = 0;
//void student::setname(char na[])
//{
//	strcpy(name, na);
//}
//void student::setscore(float s)
//{
//	score = s;
//}
//void student::setclassfore(float f)
//{
//	student::classfore = f;
//}
//void student::getname()
//{
//	cout << name;
//}
//void student::getscore()
//{
//	cout << score;
//}
//void student::getclassfore()
//{
//	cout << student::classfore;
//}
//int main()
//{
//	student s1,s2;
//	s1.setname((char*)"xxx");
//	s1.setscore(80);
//	s1.setclassfore(5000);
//	s1.getname();
//	s1.getscore();
//	s1.getclassfore();
//	return 0;
//}
//class student
//{
//public:
//	student(int n, int s):number(n),score(s){}
//	void print()
//	{
//		cout << " "<<number<<" " << score;
//	}
//private:
//	int number;
//	int score;
//};
//int main()
//{
//	student s[5] = {student(1,66),student(2,76) ,student(3,86) ,student(4,96) ,student(5,99) };
//	student* p;
//	p = s;
//	int k = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		(p + k)->print();
//			k = k + 2;
//	}
//	return 0;
//}
//class student
//{
//public:
//	student(int n, int s) :number(n), score(s) {}
//	static void max(student* p,int n)
//	{
//		int pmax = p->score;
//		int t=0;
//		for (int i = 1; i < n; i++)
//		{
//			if ((p + i)->score > pmax)
//			{
//				pmax = (p + i)->score;
//				t = i;
//			}
//		}
//		cout << (p + t)->number;
//	}
//private:
//	int number;
//	int score;
//};
//int main()
//{
//	student s[5] = { student(1,66),student(2,76) ,student(3,99) ,student(4,97) ,student(5,59) };
//	student::max(s, 5);
//	return 0;
//}
//int GCD(int m, int n)
//{
//	int t;
//	for (int i = 1; i != 0; i++)
//	{
//		if (m > n)
//		{
//			t = m % n;
//			if (t == 0)
//			{
//				return n;	
//			}
//			m = t;
//			
//		}
//		if (n > m)
//		{
//			t = n % m;
//			if (t == 0)
//			{
//				return m;	
//			}
//			n = t;
//		}
//	}
//}
//int LCM(int m, int n,int GCD)
//{
//	int x;
//	x = m * n/ GCD;
//	return x;
//}
//int main()
//{
//	int a ,b;
// cin>>a>>b;
//	int c = GCD(a, b);
//	int d = LCM(a, b, c);
//	cout << c<<"\t"<<d;
//}
//double root1(double a, double b, double c,double t,double *x2)
//{
//	double x1;
//	x1 = ((-b) + t) / (a * 2);
//	*x2 = ((-b) - t) / (a * 2);
//	return x1;
//}
//double root2(double a, double b, double c)
//{
//	double x;
//	x=(-b)/ (a * 2);
//	return x;
//}
//void root3()
//{
//	cout << "一对共轭复数根";
//}
//int main()
//{
//	double a = 1, b = 6, c = -27;
//	double t,x1,x2;
//	t = sqrt(b * b - 4 * a * c);
//	if (t > 0)
//	{
//		x1 = root1(a, b, c, t, &x2);
//		cout << x1 << "\t" << x2;
//	}
//	else  if(t==0)
//		cout << root2(a, b, c);
//	else
//	{
//		root3();
//	}
//	return 0;
//}
//int fac(int n)
//{
//	int t=1;
//	for (int i = 1; i <= n; i++)
//	{
//		t = t * i;
//	}
//	return t;
//}
//int main()
//{
//	int a = 3, b = 4, c = 5;
//	int x = fac(a) + fac(b) + fac(c);
//	cout << x;
//}
//int sum(int n)
//{
//	int t;
//	if (n == 1)
//	{
//		t = 1;
//	}
//	else
//	{
//			t = sum(n - 1) + n * n;
//	}
//	return t;
//}
//int main()
//{
//	int n,t;
//	cin >> n;
//	t = sum(n);
//	cout << t;
//}
//double s1(double a, double b, double c)
//{
//	double s;
//	s = (a + b + c) / 2;
//	return s;
//}
//double area1(double a, double b, double c,double s)
//{
//	double area;
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	return area;
//}
//int main()
//{
//	double a=3, b=4, c=5;
//	double s, area;
//	s = s1(a, b, c);
//	area = area1(a, b, c,s);
//	cout << s <<"\t"<< area;
//}
//class store
//{
//public:
//	store(int n, int q, double p)
//	{
//		num = n;
//		quantity = q;
//		price = p;
//	}
//	static double discount;
//	static double sum;
//	static int n;
//	static void average(store *s);
//	static void display();
//private:
//	int num;
//	int quantity;
//	double price;
//};
//void store::average(store *s)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		n += s[i].quantity;
//		sum += s[i].price * s[i].quantity;
//	}
//	cout<<( sum / n)<<endl;
//}
//void store::display()
//{
//	
//	cout<< sum;
//}
//int store::n = 0;
//double store::sum=0;
//double store::discount = 0;
//int main()
//{
//	store s[3] = { store(101,5,23.5),store(102,12,24.56),store(103,100,21.5) };
//	store::average(s);
//	store::display();
//}
////class store
////{
////public:
////	store(int n, int q, double p)
////	{
////		num = n;
////		quantity = q;
////		price = p;
////	}
////	static double discount;
////	static double sum;
////	static int n;
////	static double average(store s[]);
////	static void display(store s[]);
////private:
////	int num;
////	int quantity;
////	double price;
////};
////double store::average(store s[])
////{
////	for (int i = 0; i < 3; i++)
////	{
////		n += s[i].quantity;
////		sum += s[i].price * s[i].quantity;
////	}
////	return sum / n;
////}
////void store::display(store s[])
////{
////	cout << sum << "\t" << store::average(s);
////}
////int store::n = 0;
////double store::sum = 0;
////double store::discount = 0;
////int main()
////{
////	store s[3] = { store(101,5,23.5),store(102,12,24.56),store(103,100,21.5) };
////	store::average(s);
////	store::display(s);
////}
//class Time;
//class Date
//{
//public:
//	Date(int m,int d,int y):month(m),day(d),year(y){}
//	friend void display(Date&d, Time& t);
//private:
//	int month;
//	int day;
//	int year;
//};
//class Time
//{
//public:
//	Time(int h,int m,int s):hour(h),minute(m),sec(s){}
//	friend void display(Date& d, Time& t);
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//void display(Date& d, Time& t)
//	
//{
//	cout << d.month<<t.minute;
//}
//int main()
//{
//	Date d(2, 3, 4);
//	Time t(1, 2, 3);
//	display(d, t);
//}
//class Student;
//class Teacher
//{
//private:
//	int no;
//	char name[20];
//public:
//	Teacher(int n = 1, char na[] = (char*)"xx")
//	{
//		no = n;
//		strcpy(name, na);
//	}
//	void setscore(Student& st, int s);
//	void setno(Student& st, int s);
//};
//
//class Student
//{
//private:
//	int no;
//	char name[20];
//	int score;
//public:
//	Student(int n = 1, char na[] = (char*)"xx",int s=0)
//	{
//		no = n;
//		strcpy(name, na);
//		score = s;
//	}
//	friend  Teacher;
//	void show()
//	{
//		cout << name << ":" << score<<endl;
//		cout << name << ":" << no;
//	}
//};
//void Teacher::setscore(Student& st, int s)
//{
//	st.score = s;
//}
//void Teacher::setno(Student& st, int s)
//{
//	st.no = s;
//}
//int main()
//{
//	Teacher te(1001, (char*)"wang");
//	Student st(1001, (char*)"zhang", 80);
//	te.setscore(st, 85);
//	te.setno(st, 1009);
//	st.show();
//	return 0;
//}
//class point
//{
//public:
//	point(int xx = 0, int yy = 0)
//	{
//		x = xx;
//		y = yy;
//	}
//	int Getx() { return x; };
//	int Gety() { return y; };
//	friend double distance(point& p,point &b);
//private:
//	int x;
//	int y;
//};
//double distance(point& a,point &b)
//{
//	int c = (b.x - a.x) * (b.x - a.x);
//	int d = (b.y - b.x) * (b.y - b.x);
//	return sqrt(c+d);
//}
//int main()
//{
//	point a(1, 2);
//	point b(2, 3);
//	double x = distance(a, b);
//	cout<< x;
//}
//void max(int *a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if ( a[j] >a[j+1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << "\t";
//	}
//}
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	max(a, 10);
//}
//int main()
//{
//	void m(int* p, int n);
//	int a[] = { 2,5,4,8,7,1,555,66,91 };
//	m(a, 9);
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//void m(int* p, int n)
//{
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (*(p + j) < *(p + j + 1))
//			{
//				int t = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = t;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		sum =sum+ a[i][i]+a[i][2-i];
//	}
//	cout << sum;
//}
//int main()
//{
//	int a[10] = { 1,2,3,5,6,7,8,9,10 };
//	int x=4;
//	a[9] = x;
//	for (int i = 0; i < 10 - 1; i++)
//		{
//		for (int j = 0; j < 10 - i - 1; j++)
//			{
//			  if ( a[j] >a[j+1])
//				{
//					int t = a[j];
//					a[j] = a[j + 1];
//					a[j + 1] = t;
//				}
//			}
//		}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i]<<"\t";
//	}
//}
//int main()
//{
//	int a[10] = { 1,2,3,5,6,7,8,9,10};
//	for (int i = 0; i < (int)(10/2); i++)
//	{
//		int t = a[i];
//		a[i] = a[9 - i];
//		a[9 - i] = t;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << "\t";
//	}
//}
//class student
//{
//public:
//	void set(int n, char na[], int s)
//	{
//		num = n;
//		strcpy(name, na);
//		score = s;
//	}
//	void show()
//	{
//		cout << num << name << score;
//	}
//private:
//	int num;
//	char name[20];
//	int score;
//};
//class student1 :public student
//{
//public:
//	void set(int n, char na[], int s,int ag, char ad[])
//	{
//		student::set(n,na,s);
//		age = ag;
//		strcpy(adress, ad);
//	}
//	void show()
//	{
//		student::show();
//		cout << age << adress;
//	}
//private:
//	int age;
//	char adress[20];
//};
//int main()
//{
//	student1 st1;
//	/*st1.set(101, (char*)"xx", 80);*/
//	st1.student::set(101, (char*)"xx", 80);
//	st1.set(101, (char*)"xx", 80,20, (char*)"zg");
//	st1.student::show();
//	st1.show();
//	return 0;
//}
//class student
//{
//public:
//	void set(int n, char na[], int s)
//	{
//		num = n;
//		strcpy(name, na);
//		score = s;
//	}
//	void show()
//	{
//		cout << num << name << score;
//	}
//private:
//	int num;
//	char name[20];
//	int score;
//};
//class student1 :private student
//{
//public:
//	void set(int n, char na[], int s,int ag, char ad[])
//	{
//		student::set(n, na, s);
//		age = ag;
//		strcpy(adress, ad);
//	}
//	void show()
//	{ 
//		student::show();
//		cout << age << adress;
//	}
//private:
//	int age;
//	char adress[20];
//};
//int main()
//{
//	student1 st1;
//	st1.set(101,(char*)"xx",80,20, (char*)"zg");
//	st1.show();
//	return 0;
//}
//class student
//{
//public:
//	void set(int n, char na[], int s)
//	{
//		num = n;
//		strcpy(name, na);
//		score = s;
//	}
//	void show()
//	{
//		cout << num << name << score;
//	}
//protected:
//	int num;
//	char name[20];
//	int score;
//};
//class student1 :protected student
//{
//public:
//	void set(int n, char na[], int s, int ag, char ad[])
//	{
		/*student::set(n, na, s);*/
//		num = n;
//		strcpy(name, na);
//		score = s;
//		age = ag;
//		strcpy(adress, ad);
//	}
//	void show()
//	{
//		student::show();
//		cout << age << adress;
//	}
//private:
//	int age;
//	char adress[20];
//};
//int main()
//{
//	student1 st1;
//	st1.set(101, (char*)"xx", 80, 20, (char*)"zg");
//	st1.show();
//	return 0;
//}
//class student
//{
//private:
//	int num;
//	char name[20];
//	int score;
//public:
//	void set(int n,  char na[], int s)
//	{
//		num = n;
//		strcpy(name, na);
//		score = s;
//	}
//
//	void show()
//	{
//		cout << num << name << score;
//	}
//};
//class student1 :public student
//{
//private:
//	int age;
//	char addr[20];
//public:
//	void set(int n, char na[], int s, int a, char ad[])
//	{
//		student::set(n, na, s);
//		age = a;
//		strcpy(addr, ad);
//	}
//	void show()
//	{
//		student::show();
//		cout << age << addr;
//	}
//};
//int main()
//{
//	student1 st;
//	st.set(101, (char*)"xx", 90,20, (char*)"zg");
//	st.show();
//}
//class student
//{
//public:
//	student(int n, string na, int s)
//	{
//		num = n;
//		name = na;
//		score = s;
//	}
//	void display()
//	{
//		cout << num << name << score;
//	}
//private:
//	int num;
//	string name;
//	int score;
//};
//class student1 :public student
//{
//public:
//	student1(int n, string na, int s, int a, string ad):student(n,na,s)
//	{
//
//	}
//	void display()
//	{
//		
//	}
//private:
//	int age;
//	string addr;
//};
//class Date
//{
//public:
//	Date(int y, int m, int d)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	void show()
//	{
//		cout << year << month << day;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};
//class student
//{
//public:
//	student(string na, int n, float s)
//	{
//		name = na;
//		num = n;
//		score = s;
//	}
//	void display()
//	{
//		cout << name << num << score;
//	}
//protected:
//	string name;
//	int num;
//	float score;
//};
//class student1 :protected student
//{
//public:
//	student1(string na, int n, float s, int y, int m, int d, string addr):student(na,n,s),birthday(y,m,d)
//	{
//		address = addr;
//	}
//	void display1()
//	{
//		cout << name << num << score << address;
//		birthday.show();
//	}
//private:
//	Date birthday;
//	string address;
//};
//int main()
//{
//	student1 st("zs", 101, 90, 2020, 4, 29, "jx");
//	st.display1();
//}
//#include <iostream>                                                                      
//using namespace std;
//class Sort
//{
//public:
//	virtual void mysort(int* a, int n) = 0;
//	void swap(int& a, int& b)
//	{
//		int c = a;
//		a = b;
//		b = c;
//	}
//};
//class selectsort :public Sort
//{
//public:
//	void mysort(int* a, int n)
//	{
//		for (int i = 0; i < n - 1; i++)
//		{
//			int min = i;
//			for (int j = i; j < n; j++)
//			{
//				if (a[min] > a[j])
//				{
//					min = j;
//				}
//			}
//			swap(a[min], a[i]);
//			for (int i = 0; i < n; i++)
//				cout << a[i] << " ";
//			cout << endl;
//		}
//	}
//};
//class Bubblesort :public Sort
//{
//public:
//	void mysort(int* a, int n)
//	{
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = 0; j < n - i - 1; j++)
//			{
//				{
//					if (a[j] > a[j + 1])
//					{
//						swap(a[j], a[j + 1]);
//					}
//					for (int i = 0; i < n; i++)
//					{
//						cout << a[i] << " ";
//					}
//					cout << endl;
//				}
//			}
//		}
//	}
//};
//int main()
//{
//	int a[5] = { 4,1,5,2,3 };
//	int b[5] = { 4,1,5,2,3 };
//	cout << "排序前" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	Sort* s = new selectsort();
//	cout << "选择" << endl;
//	s->mysort(a, 5);
//	s = new Bubblesort();
//	cout << "冒泡" << endl;
//	s->mysort(b, 5);
//}
//#include<iostream>
//using namespace std;
//class sort
//{
//public:
//	virtual void mysort(int* a, int n) = 0;
//	void swap(int& a, int& b)
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//};
//class selectsort :public sort
//{
//public:
//	void mysort(int* a, int n)
//	{
//		for (int i = 0; i < n - 1; i++)
//		{
//			int min = i;
//			for (int j = i; j < n; j++)
//			{
//				if (a[j] < a[min])
//				{
//					min = j;
//				}
//			}
//			swap(a[min], a[i]);
//			for (int i = 0; i < n; i++)
//			{
//				cout << a[i] << " ";
//			}
//			cout << endl;
//		}
//	}
//};
//class Bubblesort :public sort
//{
//public:
//	void mysort(int* a, int n)
//	{
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = 0; j < n-i-1; j++)
//			{
//				if (a[j] > a[j+1])
//				{
//					swap(a[j+1], a[j]);
//					
//				}
//				for (int i = 0; i < n; i++)
//					{
//						cout << a[i]<<" ";
//					}
//					cout << endl;
//			}
//		}
//	}
//};
//int main()
//{
//	int a[5] = { 4,1,5,2,3 };
//	int b[5] = { 4,1,5,2,3 };
//	cout << "排序前" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	sort* s = new selectsort();
//	cout << "选择" << endl;
//	s->mysort(a, 5);
//	s = new Bubblesort();
//	cout << "冒泡" << endl;
//	s->mysort(b, 5);
//
//#include<iostream>
//using namespace std;
//class Matrix
//{
//public:
//	Matrix()
//	{
//
//	}
//	Matrix(int rows, int cols);
//	Matrix(const Matrix& t)
//	{
//		cols = t.cols;
//		rows = t.rows;
//		data = new double* [rows];
//		for (int i = 0; i < rows; i++)
//			data[i] = new double[cols];
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < cols; j++)
//			{
//				data[i][j] = t.data[i][j];
//			}
//		}
//	}
//	~Matrix()
//	{
//		for (int i = 0; i < rows; i++)
//			delete[]data[i];
//		delete[]data;
//	}
//	Matrix operator+(Matrix t1);
//	void print();
//private:
//	double** data;
//	int rows;
//	int cols;
//};
//Matrix::Matrix(int rows, int cols)
//{
//
//	data = new double* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		data[i] = new double[cols];
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> data[i][j];
//		}
//	}
//}
//Matrix Matrix::operator+(Matrix t1)
//{
//	Matrix t;
//	t.rows = t1.rows;
//	t.cols = t1.cols;
//	t.data = new double* [t.rows];
//	for (int i = 0; i < rows; i++)
//	{
//		t.data[i] = new double[t.cols];
//	}
//	for (int i = 0; i < t.rows; i++)
//	{
//		for (int j = 0; j < t.cols; j++)
//		{
//			t.data[i][j] = t1.data[i][j]+data[i][j];
//		}
//	}
//	return t;
//}
//
//void Matrix::print()
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << data[i][j];
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	Matrix t1(n,m);
//	Matrix t2(t1);
//	Matrix t3;
//	t3=t1+t2;
//	t3.print();
//}
//class point
//{
//public:
//	float operator-(point& p)
//	{
//
//	}
//};
//class Date
//{
//private:
//	int year;
//	int month;
//	int day;
//public:
//	Date(int y = 0, int m = 0, int d = 0)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	void show()
//	{
//		cout << year << month << day;
//	}
//	Date operator-(Date& t)
//	{
//		Date d;
//		d.year = year - t.year;
//		d.month = month - t.month;
//		d.day = day - t.day;
//		return d;
//	}
//	bool operator>(Date& t)
//	{
//		return(year > t.year);
//	}
//	bool operator < (Date& t)
//	{
//		return(year < t.year);
//	}
//	friend ostream& operator<<(ostream& out, Date& t);
//};
//ostream& operator<<(ostream& out, Date& t)
//{
//	out << t.year << t.month << t.day;
//	return out;
//}
//bool b(int a, int c)
//{
//	return a > c;
//}
//int main()
//{
//	Date t1(2020, 2, 1),t2(2021,2,3),t3;
//	t3 = t1 - t2;
//	cout << t3;
//	cout<<(t1 > t2);
//	cout << (t1< t2);
//}
//class student
//{
//private:
	
//public:
//	student(string na = "0", int i = 0, float s = 0)
//	{
//		name = na;
//		id = i;
//		score = s;
//	}
//	student operator+(student& t)
//	{
//		student s;
//		s.score = score + t.score;
//		return s;
//	}
//	string name;
//	int id;
//	float score;
//};
//int main()
//{
//	student s1("xx", 1001, 90), s2("xxx", 1002, 88.6), s3;
//	s3 = s1 + s2;
//	cout << s3.score;
//}
//int main()
//{
//	cout<< setfill("*");
//}
//int main()
//{
//	ofstream outfile("D:\\xxx.txt");
//	int a = 5;
//	float b = 4.5;
//	outfile << a <<" "<< b;
//	outfile.close();
//	
//	
//}
//int main()
//{
//	ofstream of("D:\\xxx.txt");
//	for (int i = 0; i < 10; i++)
//	{
//		of << (i + 1) << " " << 1012.233 << " " << 28242.98 << " " << 44<<endl;
//	}
//	of.close();
//	ifstream out("D:\\xxx.txt");
//	for (int i = 0; i < 10; i++)
//	{
//		int k;
//		float a, b, c;
//		out >> k >> a >> b >> c;
//		cout << k << a << b << c<<endl;
//	}
//	out.close();
//}
//class POS
//{
//private:
//	int ID;
//	float gpstime;
//	float longitude;
//	float latitude;
//	float height;
//	float azimuth;
//	float rolling;
//	float pitch;
//public:
//	POS(int ID = 0, float GPS = 0, float L = 0, float W = 0, float H = 0, float F = 0, float C = 0, float G = 0)
//	{
//		this->ID = ID;
//		gpstime = GPS;
//		longitude = L;
//		latitude = W;
//		height = H;
//		azimuth = F;
//		rolling = C;
//		pitch = G;
//	}
//	friend ofstream& operator<<(ofstream& out, POS& t);
//	friend ifstream& operator>>(ifstream& out, POS& t);
//	friend ostream& operator<<(ostream& out, POS& t);
//};
//ofstream& operator<<(ofstream& out, POS& t)
//{
//	out << t.ID <<" "<< t.gpstime <<" " << t.longitude <<" " << t.latitude <<" " << t.height <<" " << t.azimuth <<" " << t.rolling <<" " << t.pitch <<endl;
//	return out;
//}
//ifstream& operator>>(ifstream& out, POS& t)
//{
//	out >>t.ID >> t.gpstime >> t.longitude >> t.latitude >> t.height >> t.azimuth >> t.rolling >>t.pitch;
//	return out;
//}
//ostream& operator<<(ostream& out, POS& t)
//{
//	out << t.ID << " " << t.gpstime << " " << t.longitude << " " << t.latitude << " " << t.height << " " << t.azimuth << " " << t.rolling << " " << t.pitch << endl;
//	return out;
//}
//int main()
//{
//	
//	ofstream of("D:\\xxx.txt");
//	for (int i = 0; i < 10; i++)
//	{
//		POS p(100+i, 2+i, 30.1+5*i, 40.1+i, 50.8+i, 60.7+i, 70.5+i, 80.2+i);
//		of << p << endl;
//	}
//	of.close();
//	ifstream out("D:\\xxx.txt");
//	for (int i = 0; i < 10; i++)
//	{
//		POS p;
//		out >> p;
//		cout << p<<endl;
//	}
//	out.close();
//}
//class date
//{
//public:
//	date(int y = 0, int m = 0,int d = 0)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	friend ofstream& operator<<(ofstream& out, date& t);
//	friend ifstream& operator>>(ifstream& out, date& t);
//	friend ostream& operator<<(ostream& out, date& t);
//private:
//	int year;
//	int month;
//	int day;
//};
//ofstream& operator<<(ofstream& out, date& t)
//{
//	out << t.year << " " << t.month << " " << t.day;
//	return out;
//}
//ifstream& operator>>(ifstream& out, date& t)
//{
//	out >> t.year>>t.month >>t.day;
//	return out;
//}
//ostream& operator<<(ostream& out, date& t)
//{
//	out << t.year << " " << t.month << " " << t.day;
//	return out;
//}
//int main()
//{
//	ofstream out("D:\\zlm.txt");
//	date t(2021, 6, 1);
//	out << t<<endl;
//	out.close();
//	ifstream ou("D:\\zlm.txt");
//	ou >> t;
//	out.close();
//	cout << t;
//}
//class A
//{
//public:
//	A(int x1=0):x(x1){}
//	int x;
//	virtual void show() = 0;
//};
//class B:public A
//{
//public:
//	B(int x1=0,int y1=0):A(x1),y(y1){}
//	int y;
//	void show()
//	{
//		cout << x;
//	}
//};
//class C :public A
//{
//public:
//	C(int x1=0,int z1=0) :A(x1),z(z1){}
//		int z;
//		void show()
//		{
//			cout << x;
//		}
//};
//int main()
//{
//	C c1( 2, 2);
//	c1.x = 8;
//	A *a1 =&c1;
//	a1->show();
//	A* a2 = new B();
//	a2->show();
//}
//int main()
//{
//	for (int i = 0; i < 8; i++)
//	{
//		cout<<setw(8 - i);
//		for (int j = 0; j <2*i+1; j++)
//		{
//			
//			cout << 'B';
//		}
//		cout << endl;
//	}
//}
//class student
//{
//public:
//	student(int n = 0, string na = "0", int a = 0)
//	{
//		num = n;
//		name = na;
//		age = a;
//	}
//	friend ofstream& operator<<(ofstream& out, student& s);
//	friend void sort(student* s,int n);
//private:
//	int num;
//	string name;
//	int age;
//};
//void sort(student* s,int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int min = i;
//		for (int j = i; j < n; j++)
//		{
//			if (s[min].num > s[j].num)
//			{
//				min = j;
//			}
//		}
//		student t = s[min];
//		s[min] = s[i];
//		s[i] = t;
//	}
//}
//ofstream& operator<<(ofstream& out, student& s)
//{
//	out << s.num << " " << s.name << " " << s.age<<endl;
//	return out;
//}
//int main()
//{
//	student s[3] = { student(2,"b",19),student(3,"c",20),student(1,"a",18) };
//	student a(5, "e", 22);
//	s[1] = a;
//	sort(s,3);
//	ofstream out("D:\\xxx.txt");
//		for (int i = 0; i < 3; i++)
//		{
//			out << s[i];
//		}
//		out.close();
//}
//考点：1.数据类型，变量   2.== && || ！  3.选择，循环   4.函数定义，声明，调用，重载  5.数组（一维，二维），指针 （排序，年积日）
// 1.cin>> cout<< | 引用作参数 new,delete  2.类和对象，构造函数，析构函数，调用顺序   3.派生类定义  4.运算符重载
//int sum(int year, int month, int day)
//{
//	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int d = day;
//	for (int i = 0; i < month-1; i++)
//	{
//		d = d + a[i];
//	}
//	if ((year % 4 == 0) &&( year % 100 != 0 )||( year % 400==0 )&& (month >= 3))
//	{
//		d += 1;
//	}
//	return d;
//}
//int main()
//{
//	int year, month,  day;
//	cin >> year >> month >> day;
//	int d = sum(year, month, day);
//	cout << d;
//}
//int setmin(int* a, int n)
//{
//	int min = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//	}
//	return min;
//}
//int main()
//{
//	int a[10] = { 3,5,2,1,0,6,8,3,4,8 };
//	int min = setmin(a, 10);
//	cout << min;
//}
//void sort(int* a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j +1];
//				a[j + 1] = t;
//			}
//		}
//	}
//
//void sort(int* a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int min = i;
//		for (int j = i; j < n; j++)
//		{
//			if (a[min] > a[j])
//			{
//				min = j;
//			}
//		}
//		int t = a[i];
//		a[i] = a[min];
//		a[min] = t;
//	}
//}
//int main()
//{
//	int a[10] = { 3,5,2,1,0,6,8,3,4,8 };
//	sort(a, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
#include<iostream>  
//using namespace std;
///*
//    圆面积S=3.14*r*r
//    矩形面积S=长*宽
//    三角形面积S=(底*高)/2
//    正方形面积S=a*a
//    梯形面积S=(（上底+下底）*高)/2
//*/
//class Shape//抽象基类  
//{
//public:
//    virtual float area()const = 0;
//    virtual void display()const = 0;
//};
//class Circle :public Shape// 园面积  
//{
//public:
//    Circle(double a) :r(a) {}
//    virtual float area()const { return 3.14 * r * r; }
//    virtual void display()const
//    {
//        cout << "圆面积" << area() << endl;
//    }
//
//private:
//    double r;
//};
//
//class Rectangle :public Shape//矩形面积  
//{
//public:
//    Rectangle(double a, double b) :l(a), w(b) {}
//    virtual float area()const { return l * w; }
//    virtual void display()const
//    {
//        cout << "矩形面积" << area() << endl;
//    }
//private:
//    double l;
//    double w;
//};
//class Triangle :public Shape//三角形面积  
//{
//public:
//    Triangle(double a, double b) :d(a), h(b) {}
//    virtual float area()const { return (d * h) / 2; }
//    virtual void display()const
//    {
//        cout << "三角形面积" << area() << endl;
//    }
//private:
//    double d;
//    double h;
//};
//class Square :public Shape//正方形面积  
//{
//public:
//    Square(double a) :a1(a) {}
//    virtual float area()const { return a1 * a1; }
//    virtual void display()const
//    {
//        cout << "正方形面积" << area() << endl;
//    }
//private:
//    double a1;
//};
//class Trapezoid :public Shape//梯形面积  
//{
//public:
//    Trapezoid(double sd, double xd, double h) :shad(sd), xiad(xd), hight(h) {}
//    virtual float area()const { return ((shad + xiad) * hight) / 2; }
//    virtual void display()const
//    {
//        cout << "梯形面积" << area() << endl;
//    }
//private:
//    double shad;
//    double xiad;
//    double hight;
//};
//
//int main()
//{
//
//    Circle c1(4);
//    Rectangle r1(3, 6);
//    Triangle t1(2.5, 5);
//    Square s1(3.4);
//    Trapezoid tr1(3.2, 4.5, 7);
//    Shape* p[5] = { &c1,&r1,&t1,&s1,&tr1 };
//
//    int i;
//    double m = 0.0;
//    for (i = 0; i < 5; i++)
//    {
//        p[i]->display();
//        m = m + p[i]->area();
//    }
//
//
//    cout << "总面积:" << m << endl;
//}
//class A
//{
//public:
//	virtual int sum() = 0;
//};
//class B :public A
//{
//public:
//	int sum()
//	{
//		return 1;
//	}
//};
//class C :public A
//{
//public:
//	int sum()
//	{
//		return 2;
//	}
//};
//class D :public A
//{
//public:
//	int sum()
//	{
//		return 3;
//	}
//};
//int main()
//{
//	B b;
//	C c;
//	D d;
//	A* p[3] = {&b,&c,&d};
//	int sum1 = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		sum1 += p[i]->sum();
//	}
//	cout << sum1;
//}
//class student
//{
//public:
//	student(int i, string na, float sco) { id = i, name = na, score = sco; }
//	friend float operator +(student& sd1, student& sd2);
//	friend  ostream& operator <<(ostream&, student&);
//private:
//	int id;
//	string name;
//	float score;
//};
//float operator +(student& sd1, student& sd2)
//{
//	student sd3(6, "ymj", 100);
//	sd3.score = (sd1.score) + (sd2.score);
//	return sd3.score;
//}
//ostream& operator <<(ostream& op, student& p)
//{
//	op << p.id <<" " << p.name<<" " << p.score<<" " << endl;
//	return op;
//}
//int main()
//{
//	student sd1(1, "llt", 99);
//	student sd2(2, "flp", 89);
//	cout << (sd1 + sd2) << endl;
//	cout << sd1 << endl;
//	cout << sd2 << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int js(int year, int month, int day)
//{
//	int a[12] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
//	for (int i = 0; i < (month - 1); i++)
//	{
//		day += a[1];
//	}
//	if (((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) && (month >= 3))
//	{
//		day += 1;
//	}
//	return day;
//}
//int max_qiu(int a[], int n)
//{
//	int max = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > max)
//		{
//			a[i] = max;
//		}
//	}
//	return max;
//}
//void paixun(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i;)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//int main()
//{
//	cout << js(2001, 6, 4);
//	int b[3] = { 5,2,7 };
//	cout << max_qiu(b, 3);
//	paixun(b, 3);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int js(int year, int month, int day)
//{
//	int a[12] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
//	for (int i = 0; i < (month - 1); i++)
//	{
//		day += a[1];
//	}
//	if (((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) && (month >= 3))
//	{
//		day += 1;
//	}
//	return day;
//}
//int max_qiu(int a[], int n)
//{
//	int max = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > max)
//		{
//			a[i] = max;
//		}
//	}
//	return max;
//}
//void paixun(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i;)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//int main()
//{
//	cout << js(2001, 6, 4);
//	int b[3] = { 5,2,7 };
//	cout << max_qiu(b, 3);
//	paixun(b, 3);
//	return 0;
//}
//int js(int year, int month, int day)
//{
//	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (int i = 0; i < (month - 1); i++)
//	{
//		day += a[i];
//	}
//	if (((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) && (month >= 3))
//	{
//		day += 1;
//	}
//	return day;
//}
//int max_qiu(int a[], int n)
//{
//	int max = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > max)
//		{
//			 max=a[i] ;
//		}
//	}
//	return max;
//}
//void paixun(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i;j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//int main()
//{
//	cout << js(2001, 6, 4)<<endl;
//	int b[3] = { 5,2,7 };
//	cout << max_qiu(b, 3)<<endl;
//	paixun(b, 3);
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class Bank
//{
//private:
//	char account[20];//账号
//	char password[9];//密码
//	char name[10];//姓名
//	double balance;//余额
//public:
//	void set(char ac[20], char pa[9], char na[10], double ba);
//	bool deposit(char ac[20], char pa[9], double ck);
//	bool drawing(char ac[20], char pa[9], double qk);
//	double getbalance(char ac[20], char pa[9]);
//	bool check(char ac[20], char pa[9]);
//};
//void Bank::set(char ac[20], char pa[9], char na[10], double ba)
//{
//	strcpy(account, ac); strcpy(password, pa);
//	strcpy(name, pa); balance = ba;
//}
//bool Bank::check(char ac[20], char pa[9])
//{
//	if (strcmp(ac,account)==0 && strcmp(pa,password)==0)
//		return true;
//	else return false;
//}
//bool Bank::deposit(char ac[20], char pa[9], double ck)
//{
//	if (check(ac, pa))
//	{
//		 balance+=ck ;
//		return true;
//	}
//	else return false;
//}
//bool Bank::drawing(char ac[20], char pa[9], double qk)
//{
//	if (check(ac, pa))
//	{
//		 balance -=qk;
//		return true;
//	}
//	else return false;
//}
//double Bank::getbalance(char ac[20], char pa[9])
//{
//	if (check(ac, pa)) return balance;
//}
//void main()
//{
//	Bank b;
//	b.set((char*)"10010", (char*)"344500", (char*)"lzk", 2000);
//	b.deposit((char*)"10010", (char*)"344500", 20);
//	b.drawing((char*)"10010", (char*)"344500", 19);
//	cout << b.getbalance((char*)"10010", (char*)"344500");
//}
//class Array
//{
//private:
//	int* a;
//	int n;
//public:
//	Array(int n)
//	{
//		this->n = n;
//		a = new int[n];
//	}
// ~Array()
// {
//		delete[]a;
// }
//	void set()
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << a[i] << " ";
//		
//		}
//	cout << endl;
//	}
//		void set1(int s[])
//		{
//			
//			for (int i = 0; i < n; i++)
//			{
//				a[i] = s[i];
//			}
//			for (int i = 0; i < n - 1; i++)
//			{
//				for (int j = 0; j < n - i - 1; j++)
//				{
//					if (a[j] > a[j + 1])
//					{
//						int t = a[j];
//						a[j] = a[j + 1];
//						a[j + 1] = t;
//					}
//				}
//			}
//			for (int i = 0; i < n; i++)
//			{
//				cout << a[i] << " ";
//			}
//		}
//	};
//	int main()
//	{
//		int s[5] = { 8,9,5,6,3 };
//		Array a(5), b(5);
//		a.set();
//		b.set1(s);
//	}
//class Array
//{
//private:
//	int** a;
//	int n;
//public:
//	Array(int n)
//	{
//		this->n = n;
//		a = new int*[n];
//		for (int i = 0; i < n; i++)
//		{
//			a[i]=new int[n];
//		}
//	}
// ~Array()
// {
//	 for (int i = 0; i < n; i++)
//	 {
//		 delete[]a[i];
//	 }
//	 delete[]a;
// }
//	void set()
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin >> a[i][j];
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << a[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//		void set1(int s[3][3])
//		{
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					a[i][j] = s[i][j];
//				}
//			}
//			for (int i = 0; i < n - 1; i++)
//			{
//				for (int j = 0; j < n - i - 1; j++)
//				{
//					if (a[i][j] > a[i][j + 1])
//					{
//						int t = a[i][j];
//						a[i][j] = a[i][j + 1];
//						a[i][j + 1] = t;
//					}
//				}
//			}
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					cout << a[i][j] << " ";
//				}
//				cout << endl;
//			}
//		}
//	};
//	int main()
//	{
//		int s[3][3] = { 2,10,8,7,9,5,1,6,3 };
//		Array a(3), b(3);
//		a.set();
//		b.set1(s);
//	}
//class Date
//{
//public:
//	Date(int y, int m, int d)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	void show()
//	{
//		cout << year << " " << month << " " << day;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};
//class student
//{
//public:
//	student(string na,int n,float s)
//	{
//		name = na;
//		num = n;
//		score = s;
//	}
//	void set()
//	{
//
//	}
//	void display()
//	{
//		cout << name << " " << num << " " << score;
//	}
//protected:
//	string name;
//	int num;
//	float score;
//};
//class student1 :protected student
//{
//public:
//	student1(string na, int n, float s,int y,int m,int d,string add):student(na,n,s),birthday(y,m,d)
//	{
//		address = add;
//	}
//	void display1()
//	{
//		student::display();
//		birthday.show();
//		cout << address;
//	}
//private:
//	Date birthday;
//	string address;
//};
//int main()
//{
//	student1 s("sakura", 110, 99, 2021, 6, 19, "china");
//	s.display1();
//}
//int sum(int year, int month, int day)
//{
//	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (int i = 0; i < month - 1; i++)
//	{
//		day += a[i];
//	}
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 && month >= 3)
//	{
//		day += 1;
//	}
//	return day;
//}
//int main()
//{
//	int year, month, day;
//	cin >> year >> month >> day;
//	int d = sum(year, month, day);
//	cout << d;
//}
//void sort(int* a,int n)
//{
//	for (int i = 0; i < n - 1;i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//}
 /*void sort(int* a,int n)
{
	for (int i = 0; i < n - 1;i++)
	{
		int max = i;
		for (int j = i; j < n; j++)
		{
			if (a[max] < a[j])
			{
				max = j;
			}
		}
				int t = a[max];
				a[max] = a[i];
				a[i] = t;
	}
}*/

//void sort(int* a, int n, int x)
//{
//	int k = -1;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (x < a[i])
//		{
//			k = i;
//			break;
//		}
//	}
//	if (k == -1)
//	{
//		a[n - 1] = x;
//	}
//	else
//	{
//		for (int i = n - 2; i >= k; i--)
//		{
//			a[i + 1] = a[i];
//		}
//		a[k] = x;
//	}
//}
//int main()
//{
//	int a[7] = { 1,2,4,5,6,7 };
//	int x = 3;
//	sort(a, 7, x);
//	for (int i = 0; i < 7; i++)
//	{
//		cout << a[i]<<" ";
//	}
//}
//int max(int* a, int n)
//{
//	int max = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int a[6] = { 1,2,45,5,6,7 };
//	int x = 3;
//	int max1=max(a, 7);
//	cout << max1;
//}
//class student
//{
//private:
//	int score;
//public:
//	student(int score=0)
//	{
//		this->score = score;
//	}
//	student operator+(student& t)
//	{
//		student s;
//		s.score = score + t.score;
//		return s;
//	}
//	void show()
//	{
//		cout << score;
//	}
//};
//int main()
//{
//	student t1(85),t2(18);
//	student t3 = t1 + t2;
//	t3.show();
//}
//int main()
//{
//	char i = 65;
//	char k = i + 70;
//	char j = i + 70;
//	cout << j<<endl;
//	printf("%d",k);
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout.fill('&');
//	int w = cout.width(30);
//	cout << "default field width = " << w << ":\n";
//	cout.width(5);
//	cout << "N" << ':';
//	cout.width(8);
//	cout << "N * N" << ":";
//	cout.width(9);
//	cout << "12345\n";
//	for (long i = 1; i <= 100; i *= 10)
//	{
//		cout.fill(' ');
//		cout.width(5);
//		cout << i << ':';
//		cout.width(8);
//		cout << i * i << ":\n";
//	}
//	cout << "1234567890";
//	cout.precision(2);//precision函数控制输出有效数字个数
//	double a = 3.1415926;
//	cout << a << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	//precision函数控制输出有效数字个数
//	double a = 3.1415926;
//	cout.precision(1);//输出小数点后一位
//	cout << "the first : " << a << endl;
//	cout.precision(2);//输出小数点后一位
//	cout << "the second : " << a << endl;
//	cout.precision(3);//输出小数点后一位
//	cout << "the third ：" << a << endl;
//	a = 0.001415926;
//	cout.precision(1);//输出小数点后一位
//	cout << "the first : " << a << endl;
//	cout.precision(2);//输出小数点后一位
//	cout << "the second : " << a << endl;
//	cout.precision(3);//输出小数点后一位
//	cout << "the third ：" << a << endl;
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//
//	//showpoint 显示末尾小数点
//	cout << 3.1400 << endl;
//	cout.setf(ios_base::showpoint);
//	cout << 3.1400 << endl;
//	cout << 3.1400 << endl;
//	float a = 2;
//	cout << a << endl;
//	return 0;
//}
/*使用方法一  fmtflags setf(fmtflags)

语法

功能

ios_base：：boolalpha

输入和输出bool值，可以为true或false

ios_base：：showbase

对于输出，使用C++基数前缀（0, 0x）

ios_base：：showpoint

显示末尾的小数点

ios_base：：uppercase

对于16进制输出，使用大写字母E表示法

ios_base::showpos     */

//int main()
//{
//	/*int i = 1; int sum = 0;
//	while (i <= 10)
//	{
//		sum = i + sum;
//		i++;
//	}
//	cout << sum;*/
//	/*char i = 64;
//	i = i << 1;
//	printf("%d", i);*/
//	//char i = 105;
//	///*char j = 60;
//	//i = i & j;*/
//	///*i = ~i;*/
//	///*i = !i;*/
//	//printf("%d", i);
//	/*第五位取1*/
//	/*00001001 00001001 00001001 00001001*/
//	/*00001001 00001001 00001001 00101001*/
//	/*int i = 1;
//	i = i | (1 << 5);
//	printf("%d", i);*/
//	/*第五位清零*/
//	/*00001001 00001001 00001001 00001001*/
//	/*00000000 00000000 00000000 00000001*/
//	/*00000000 00000000 00000000 00100000*/
//	/*11111111 11111111 11111111 11011111*/
//	/*00001001 00001001 00001001 00101001*/
//	/*int i = 1;
//	i = i & ~(1 << 5);
//  printf("%d", i);*/
//}
//void seg(unsigned char pos)
//{
//	switch (pos)
//	{
//	case '1':cout << "1"; break;
//	case '2':cout << "2"; break;
//	case '3':cout << "3"; break;
//	case '4':cout << "4"; break;
//	case '5':cout << "5"; break;
//	case '6':cout << "6"; break;
//	default:
//		break;
//	}
//}
//int main()
//{
//	seg('1');
//	seg('3');
//}
//void main()
//{
//	/*for (char i = 49; i <= 57; i++)
//	{
//		cout << i;
//	}*/
//	int a = 3;
//	int m;
//int *p1,  *p2;
//p1 = &a;
//p2 =p1++;
//cout << "a="<< & a << endl;
//cout <<"p1="<<p1 << endl;
//cout << "p2="<<p2<<endl;
//cout << (char*)p2 - (char*)p1;
//}//int a[10] = { 1,2,3 };
	//int* p = a;
	///*p++;*/
	//cout <<"p= " <<&p << endl << "a0="<< & a[0] << endl <<"a1="<< &a[1] << endl << *p<<endl;
	/*int a = 0;
	int b = 44;
	int c = 1;
	int d = 0;
	cout << &a<< endl << &b<<endl<<&c<<endl<<&d;*/
//char* p = a;
//	int num = 0;
//	while(*p != '\0') {
//		p++;
//		num++;
//	}
//	int m = strlen(p);
//int Mystrlen(char *p)
//{
//	int m = strlen(p);
//	return m;
//}
//void ss(char* str1, char* str2)
//{
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = '\0';
//	/*strcat(str1, str2);*/
//}
//void sss(char* str1, char* str2)
//{
//	/*while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = '\0';*/
//	strcpy(str1, str2);
//}
//void main()
//{
//	
//	char a[20] = "Hello";
//	char b[20] = "world";
//	/*ss(a, b);*/
//	int s = Mystrlen(a);
//	sss(a, b);
//	cout << a<<endl<<s<<endl;
//}
//void main()
//{
//	int n,l=0,m=0;
//	while (m < 20) {
//		if (l == 0 || l == n + 1) {n = l;
//			l++;
//			
//		}
//		if (l == 8 || l == n - 1)
//		{n = l;
//			l--;
//			
//		}
//		cout << l << endl;
//		m++;
//	}
//}

//void main()
//{
//	/*int l = 0, num, n = 0, i = 0;
//	while (i < 20)
//	{
//
//	if (l == 8 || l == n - 1)
//	{
//		n = l;
//		l--;
//		num = (0x80 >> 8 - l);
//	}
//	if (l == 0 || l == n + 1) {
//			n = l;
//			num = (1 << l);
//			l++;
//		}
//	cout << num<<endl;
//	i++;
//}*/
///*char s[100]; int c, i;
//scanf("%c", &c);
//scanf("%d", &i); scanf("%s", s); printf("%c,%d,%s\n",c,i,s);*/
//	int a = 1, b = 2, c;
//	b = b << 2;
//		cout << b << endl;
//	c = a ^ (b << 2);
//	cout << c;
//}
//int main()
//{
// int a=1,b=0;
// switch(a)
//{
//case 1: switch (b)
//{
//case 0: printf("**0**");break; case 1: printf("**1**");break;
//}
//cout<<endl<<a<<endl;
//case 3: printf("**2**");
//case 2: printf("**3**");break;
// }
// }

//int main()
//{
//	static char a[4] = { 1,2,3,4 };
//	for (int i = 0; i < 4; i++)
//	{
//		cout << a[i];
//	}
//}/*char a[] = "\71287669\09768563435678";
	/*cout << strlen(a);*/
	/*char name[20];
	int num;
	scanf("name=%s num=%d", name, &num);
	cout << name << endl << num;*/
//int fun(char p[][10])
//	{
//		int n =0,i;
//		for (i = 0; i < 7; i++)
//			if (p[i][0] == 'T')
//				n++; return n;
//	}
//int main()
//{

	/*char str[][10] =
	{ "Mon","Tue","Wed","Thu","Fri","Sat","Sun" };
		printf("%d\n",fun(str));*/
		/*int a = 8.0E5;
		cout << a;*/
		//char str[] = { "\064"};
		//cout << str;
	/*union
	{char ch[2]; int d;
}s;
		s.d = 0x4321;
		printf("%x，%x\n",s.ch[0],s.ch[1]);*/
	/*int a;
	int i = (a = 2 * 3, a * 5);
	cout << i;*/
	/*char a = 100;
	char b = a + 28;
	cout << (int)b;*/
	/*int a[3] = { 9,7,3 };
	int* p = a;
	cout<<*p++<<endl;
	cout << *p;
	}*/
	/*struct aa{ int n; float m; 
	void (*s)();
	};
	void ss()
	{
		printf("%f", 1.0);
	}
	int main()
	{
		struct aa a = { 1,5 };
		a.s = ss;
		a.s();
	}*/
//enum language { Basic = 3, Assembly, Ada = 100, COBOL, Fortran };
//union student {
//	int i;
//	unsigned char x;
//	float d;
//}stu1;
//	
//void main()
//{
//	union
//	{
//		int i;
//		long k;
//		char c[4];
//	}r;
//	r.c[0] = 0x39;
//	r.c[1] = 0x38;
//	r.c[2] = 0x37;
//	r.c[3] = 0x36;
//	r.i = 0x36373839;
//	printf("%o\n",r.c[0]);
//	/*stu1.i = 0xff;
//	stu1.d = 48;
//	printf("%d",stu1.i);*/
//}
//struct st { int a; char c;double b;  };
//void main()
//{
//	int i, a,c=-1;
//	i = (a = 2 * 3, a * 5), a + 6;
//	cout << sizeof(struct st)<<endl;
//	printf("%x", c);
//}
//int add(int a, int b) 
//{ return (a+b); }
//int main()
//{
//	int (*f)(int a,int b),k, a = 5, b = 10;
//	f=add;
//}
//struct st { int n; struct st* next; };
//static struct st a[3] = { 5,&a[1],7,&a[2],9,0 }, * p;
//int main()
//{
//	p = &a[0];
//	cout << (*p).n++;
//
//}
//struct st
//{
//	int x; int* y;
//}*pt;
//void main() {
//	int a[] = { 1,2 }, b[] = { 3,4 };
//	struct st c[2] = { 10,a,20,b };
//	pt = c;
//	cout << (pt++)->x;
//} 
//fff(float x)
//{
//	printf("%d\n", x * x);
//}
//void main()
//{
//	FILE* fp = fopen("D:\\test.txt", "wt");
//	fputc('A', fp); fputc('\n', fp);
//	fputc('B', fp); fputc('\n', fp);
//	fputc('C', fp);
//	fclose(fp);
//	char a[20];
//	FILE* f = fopen("D:\\test.txt", "r");
//	for (int i = 0; i < 20; i++)
//	{
//		fscanf(f, "%c", &a[i]);
//	}
//	int s = strlen(a);
//	for (int i = 0; i < s; i++)
//	{
//		printf("%c", a[i]);
//	}
//char s[] = "\\141\141\0abc\t";
//printf("%d\n", strlen(s)); 
	//int i = 033;
	//cout << i;
		/*int* ptr, * p[5], i;
		if ((ptr = (int*)malloc(100 * sizeof(int))) != NULL)
		{
			p[0] = ptr;
			for (i = 1; i < 5; i++)
				p[i] = p[i - 1] + 7;
			for (i = 0; i < 100; i++)
				*ptr++ = i+1;
			for (i = 0; i < 5; i++)
				printf("%3d", *p[i]);
		}*/
	/*char s[] = "abcde", * p=s; p += 2;
	printf("%d\n", p[0]);*/
		/*char name[20];
	int num;
	scanf("name = %s num = %d", name, &num);
	cout << name;*/
	/*int a = 1;
	cout << ++a;*/
	/*cout <<a++;*/
	
//
//}
//void display(char* str)
//{
//	int num=0;
//	while (*(str+num) != 'o')
//	{
//		num++;
//	}
//	/*if (*(str + num) == 'o')
//	{*/
//		for (int i = 0; i < num; i++)
//		{
//				cout << str[i];
//		}
//		cout << endl;
//	//}
//}
//void main() {
//	char str[] = "helloword";
//	display(str);
//	char s[] = "gdshhdhhhsddshdgcshdjajdhshfs";
//	display(s);
//}
//void sort(int a[],int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				/*int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;*/
//				a[j] = a[j] ^ a[j + 1];
//				a[j + 1] = a[j] ^ a[j + 1];
//				a[j] = a[j] ^ a[j + 1];
//			}
//		}
//	}
//}
/*void sort(int* a,int n)
{
	for (int i = 0; i < n - 1;i++)
	{
		int max = i;
		for (int j = i; j < n; j++)
		{
			if (a[max] < a[j])
			{
				max = j;
			}
		}
				int t = a[max];
				a[max] = a[i];
				a[i] = t;
	}
}*/
//int main()
//{
//	int a[7] = { 1,3,2,4,5,7,6 };
//	sort(a, 7);
//	for (int i = 0; i < 7; i++)
//	{
//		cout << a[i];
//	}
//}
//void Delay_OneWire(unsigned int t)  //STC89C52RC
//{
//	unsigned char i;
//	while (t--) {
//		for (i = 0; i < 12; i++);
//	}
//}
//char init_ds18b20(void)
//{
//	char initflag = 0;
//	int DQ;
//	DQ = 1;
//	Delay_OneWire(12);//
//	DQ = 0;
//	Delay_OneWire(80);
//	DQ = 1;
//	Delay_OneWire(10);
//	initflag = DQ;
//	Delay_OneWire(5);
//
//	return initflag;
//}
//int main()
//{
//	int a=init_ds18b20();
//	cout << a;
//}
//void disp(char* a, int* b)
//{
//	cout << &(a+2) << endl<<a<<endl;
//	cout << b;
//}
/*void main()
{
	//unsigned char a[6] = { 0 }; unsigned int ck= 0;
	//a[0] = 0xaa; a[1] = 0xbb; a[2] = 0x33; a[3] = 0x55; a[4] = 0xff;
	//ck = /*(unsigned int)a[2] + /*(unsigned int)a[3] + /*(unsigned int)a[4];
	//if (ck== (unsigned int)a[2] + (unsigned int)a[3] + (unsigned int)a[4])
	//	/*cout << "true";*/
	//	cout <<ck;
	//else
	//	cout << "flase";
	/*char a[] = "helloword";
	int n[] = { 1,2,3,4,5 };
	int b = 222;
	disp(a, &b);*/
	/*cout << &b;

}*/
#include <stdio.h>
#include <string.h>
	typedef struct led {
		char* name;
		void (*led_init)(void);
		void (*led_display)(void);
	}led_t, * p_led;
	void A_board_init(void)
	{
		printf("板子A已经完成LED初始化\r\n");
	}
	void A_board_display(void)
	{
		printf("板子A已经完成LED显示\r\n");
	}
	void B_board_init(void)
	{
		printf("板子B已经完成LED初始化\r\n");
	}
	void B_board_display(void)
	{
		printf("板子B已经完成LED显示\r\n");
	}
	led_t led_source[] = {
		{"RGB"  , A_board_init, A_board_display},
		{"WS128", B_board_init, B_board_display},
	};
	p_led get_led_type(char* name)
	{
		int i = 0;
		for (i = 0; i < sizeof(led_source) / sizeof(led_source[0]); i++) {
			if (strcmp(name, led_source[i].name) == 0) {
				return &led_source[i];
			}
		}
		return NULL;
	}
	void Func(void)
	{
		cout << "hello";
	}
	/*void remove(int counter);*/
	/*void main()
	{*/
		/*p_led led1;
		led1 = get_led_type("RGB");
		led1->led_init();
		led1->led_display();*/

		//int b[4] = { 1,2,3,4 };
		//int a[4] = { 12,34,56,78 };//a不是指针
		//int c[4] = { 6,7,8,9 };
		//int* p = a;
		//cout << *(p + 1)<<endl;
		//cout<<p[1] << endl;
		//cout<<*(a + 1) << endl;
		//cout<<a[1] << endl;
		//cout<<*(1 + p) << endl;
		//cout<<1[p] << endl;
		//cout<<1[a] << endl;
		//cout << sizeof(int*) << endl;
		//cout << sizeof(p) << endl;
		//cout << sizeof(a) << endl;//int ()[6]
		//cout << a[5];//1
		//cout << a[-1];//9

		
		//int a[2][3] = { 11,22,33,44,55,66 };
		//cout << a[0][3];//a[1][0]

		//int a[4] = { 12,34,56,78 };
		//int* p = a;  //p->int *
		//int b[2][3] = { {11,22,33},{44.55,66} };
		//数组指针
		//int (*p)[3] = b;//*p-> int ()[3]   p->int(*)[3]    a[1][2]->*(*(p+1)+2)
		//指针数组
		//int* p[3];
		//char* p[3] = { "liming","lihua","zhangsan" };
		//cout << p[0];

		
		//函数指针
		//void (*p)(void);
		//p = Func;//0x12345678
		//(*p)();//*0x12345678=0x12345678
		//p();
		//(*******p)();

		////指针函数
		//char* func(char *str);

		/*int a[2][3] = { 1,2,3,4,5,6 };
		int* p[2] ;
		int* x;
		int* y;
		x = a[0];
		y = a[1];
		p[0] = a[0];
		p[1] = a[1];
		cout << *(p[1]+2);
		cout << *(x + 2);
		cout << *(a[1]+1);*/


		/*int a[2][3] = { 1,2,3,4,5,6 };
		int(*p)[3];

		p= a;
		char f;*/
		/*cout << *(*(p + 1)+1)<<endl;
		cout << p<<endl;
		cout << *p << endl;
		cout << p + 1<<endl;*/

		/*int a[2][3] = { 1,2,3,4,5,6 };
		int* p;

		p = &a[0][0];
		cout << *(p+ 5);*/


		/*int a[3][3] = { 1,2,3,4,5,6,7,8,9};
		int b[3][3] = { 1,2,3,4,5,6,7,8,9 };
		cout << &a[0] << endl;
		cout << &a[0][0]<<endl;
		cout << &a[0][1] << endl;
		cout << &a[0][2] << endl;
		cout << &a[1][0] << endl;
		cout << &a[1][1] << endl;
		cout << &a[1][2] << endl;
		cout << &a[2][0] << endl;
		cout << &a[2][1] << endl;
		cout << &a[2][2] << endl<<endl;

		cout << &b[0][0] << endl;
		cout << &b[0][1] << endl;
		cout << &b[0][2] << endl;
		cout << &b[1][0] << endl;
		cout << &b[1][1] << endl;
		cout << &b[1][2] << endl;
		cout << &b[2][0] << endl;
		cout << &b[2][1] << endl;
		cout << &b[2][2] << endl;*/
		/*unsigned int cc = 0;
		unsigned char ccc = cc - 1;
		cout << - 1+cc;*/

	//}
	/*
	
	*/

//#ifndef INTEGERSET
//#define INTEGERSET

#include<iostream>
using namespace std;

const int MAXELEMENTS = 100;                      // 集合最多可拥有的元素个数

class IntegerSet {
	int elem[MAXELEMENTS];                        // 用于存放集合元素的数组
	int counter;                                  // 用于记录集合中元素个数的计数器
public:
	IntegerSet() : counter(0) {}                    // 创建一个空集合
	IntegerSet(int data[], int size);             // 利用数组提供的数据创建一个整数集合
	void add(int element);                        // 添加一个元素到集合中
	void remove(int element);                     // 删除集合中指定的元素
	int getCount()const { return counter; }         // 返回集合中元素的个数
	int getElement(int i)const { return elem[i]; }  // 返回集合中指定的元素
	void show()const;
	void disp()
	{
		for (int i = 0; i < counter; i++)
		{
			cout <<elem[i]<<" ";
		}
	}
};

void WriteToFile(char*);
#include<iomanip>
#include<fstream>

IntegerSet::IntegerSet(int data[], int size) : counter(0) {
	for (int i = 0; i < size; i++) add(data[i]);
}

void IntegerSet::add(int element) {
	int j;
	//从后往前寻找第一个小于等于element的元素
	for (j = counter; j > 0; j--)
		if (element >= elem[j - 1]) break;
	//如果找到的是等于element的元素，说明要添加的元素已经存在，直接返回
	if (j > 0)
		if (element == elem[j - 1]) return;
	//如果找到的是小于element的元素，j就是要添加的位置
	//该元素及其后面的元素依次后移，腾出插入位置
	for (int k = counter; k > j; k--) elem[k] = elem[k - 1];
	elem[j] = element; //将element插入到该位置
	counter++;   //计数器加1
}

void IntegerSet::remove(int element) {
	for (int i = 0; i < counter; i++) {
		if (element == elem[i]) {
			for (int j = i; j < counter - 1; j++)
				elem[j] = elem[j + 1];
			counter--;
			break;
		}
	}
}

void IntegerSet::show()const {
	for (int i = 0; i < getCount(); i++)
		cout << setw(4) << getElement(i);
	cout << endl;
}

int main()
{
	/*int d[] = { 5,28,2,4,5,3,2,75,27,27,66,31 };
	IntegerSet s(d, 11); s.show();
	s.add(6);   s.show();
	s.add(19);   s.show();
	s.remove(2);  s.show();

	s.add(4);   s.show();
	WriteToFile("");*/
	//int arr[] = { 1,2,3,4,5 };
	//int* ptr = arr;
	//*(ptr++) += 123;
	//printf("%d%d\n", *ptr, *(++ptr));
	///*int i = 0;
 //printf ("%d,%d,%d",++i,++i,++i);
	//*/
	/*int i = 0;
	printf("%d,%d,%d,%d,%d\n", ++i, ++i, i++, ++i, i++);*/
	/*int a = 20;
	char pucstr[] = "1234";
	printf("%as",pucstr);*/
	//void fn(int a, int b, int c);
	//int a = 3;
	//fn(a++, a++, a++);
	/*int a=1;
 cout<<a++<<a;*/
	/*char ptr[30] = "CNBR:A001:200202133000";
	char type[5];
	sprintf(type, "%0.4s", ptr + 5);
		printf("%s", type);*/
	/*char type[22];
	int u = 4;
	sprintf(type, "%02d-%02d-%02d",u,u,u);
	printf("%s", type); */
	/*int i = 4.929132443354645756;
	printf("%.3000lf", i);*/
	/*char i =1;
	cout << (int)(i);*/
	/*char str[20];
	double f = 14.309948;
	sprintf(str, " % 6.2f", f);
	printf("%s", str);*/

	/*int data[8];
	cout << &data<<endl;
	cout << data << endl;
	cout << &data[0] << endl;*/


	/*float i = 2;

	cout << sqrt(i);*/

	int a = 1;
	char p[8]="123";
	printf("%x",*(&p));
}
//void fn(int a, int b, int c)
//{
//	printf("%d,%d,%d", a, b, c);
//}
void WriteToFile(char* path)
{
	char filename[30];
	strcpy(filename, path);
	strcat(filename, "out.dat");
	ofstream fout(filename);

	int d[] = { 9,27,42,66,5,23,29,55,51,4,12,28,47,75 };
	IntegerSet s(d, 14);
	s.remove(5);
	for (int i = 0; i < s.getCount(); i++)
	{
		fout << s.getElement(i) << ",";
	}
	fout.close();
}
//#endif