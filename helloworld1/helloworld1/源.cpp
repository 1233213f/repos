#include<iostream>
#include<iomanip>
#include<string>
#include <ctime>
#include<time.h>
using namespace std;

#define a  8

int main() 
{
	//int b = 10;
	//char m[] = "hello world";
	//float c = 1.9543;

	// bool z = true;

	//cout << "a=" << a <<  endl;
	//cout << "len=" << sizeof(a) << endl;
	//cout << "c=" << fixed << setprecision(5) << c << endl;
	//cout << "m\t=\n" << m[0] << endl;
	//cout << "��ʵ�ǣ�" << z << endl;

	//z = false;
	//cout << "��ʵ�ǣ�" << z << endl;

	//int h;
	//cout << "input" << endl;
	//cin >> h;
	//cout << h << endl;

	/*string char1;
	cin >> char1;
	cout << char1 << endl;*/

	/*bool a1;
	cin >> a1;
	cout << a1 << endl;*/

	//double a2, a3;
	//cin >> a2 >> a3;
	//cout << "\n" << a2 / a3 << endl;


	//int a4;
	//cin >> a4;
	//int a5 = ++a4*10;
	//cout << a4 << "\t" << a5 << endl;

	//int a6, a7=5;
	//a6 = 4;
	//a7 %= a6;
	//cout << a6 << "\t" << a7 << endl;

	//int b1, b2, b3;
	//int n;
	//cout << "��������ֻС�������kg(��ʽ��1 2 3)��\n" ;
	//cin >> b1 >> b2 >> b3;
	//
	//if (b1 > b2 )
	//{
	//	if (b1 > b3)
	//	{
	//		cout << "���ص��ǵ�һֻ��" << b1 << "kg" << endl;
	//	}
	//	else
	//	{
	//		cout << "���ص��ǵ���ֻ��" << b3 << "kg" << endl;
	//	}
	//}
	//else
	//{
	//	if (b2 > b3)
	//	{
	//		cout << "���ص��ǵڶ�ֻ��" << b2 << "kg" << endl;
	//	}
	//	else
	//	{
	//		cout << "���ص��ǵ���ֻ��" << b3 << "kg" << endl;
	//	}
	//}

	//int c1, c2, c3;
	//cin >> c1 >> c2;
	//c3 = c1 > c2 ? c1 : c2;
	//cout << c3 << endl;

	int  c4;
	int c6 = 100, c5 = 0;
	time_t c3;
	c3 = time(&c3) % (c6 - c5 + 1) + c5;
	//cout << c3 << endl;
	//do
	//{
	//	cin >> c4;
	//	if (c3 > c4)
	//	{
	//		cout << "��С��" << endl;
	//	}
	//	else if (c3 < c4)
	//	{
	//		cout << "�´���" << endl;
	//	}
	//	else
	//	{
	//		cout << "�¶��ˣ�" << endl;
	//	}
	//	//cout << rand() << "\t" << endl;
	//}while (c3 != c4);



	system("pause");

	return 0;
}