// ������������ ������ ������� C++
#include <iostream>

using namespace std;

struct coordinates {
	int X;
	int Y;
};

void showCoordinates(coordinates &C) { // �������� ��� � ������ ������ �������, �.�. � �. // �� ������ ����� (����� ������). ������ ������ ����� � ���������� �������.
	C.X = 0;
	C.Y = 0;
	//cout << &C << endl;
	// cout << "X = " << C.X << endl;
	// cout << "Y = " << C.Y << endl;
}

coordinates inputObj() {
	coordinates newObj;
	cout << "������� X: ";
	cin >> newObj.X;
	cout << "������� Y: ";
	cin >> newObj.Y;
	return newObj;
}

void fillObj(coordinates &C) { // �� �������� ����� ������
	cout << "������� X: ";
	cin >> C.X;
	cout << "������� Y: ";
	cin >> C.Y;
}

int main() {
	setlocale(LC_ALL, "Russian");

	coordinates pointA = { 6, 5 };
	coordinates pointB = { 9, 0 };
	coordinates pointC = { 3, 10 };
	coordinates pointE;
	fillObj(pointE);
	cout << "E.X = " << pointE.X << endl;
	cout << "E.Y = " << pointE.Y << endl;

	/*coordinates pointD = inputObj();
	cout << pointD.X << " " << pointD.Y << endl;
	pointA = inputObj();
	cout << pointA.X << " " << pointA.Y << endl;

	cout << inputObj().X << endl; // ����� �������. ����� ������� ������ 1 ���, �.�. ���� ��� �����������.
	*/

	/*cout << "Point A:\n";
	showCoordinates(pointA);

	cout << "Point B:\n";
	showCoordinates(pointB);

	cout << "Point C:\n";
	showCoordinates(pointC); */

	//cout << &pointA << endl;
	//showCoordinates(pointA);
	
	//cout << pointA.X << " " << pointA.Y << endl;

	/*struct date {
		int day;
		int month;
		int year;
	} ; 

	struct person {
		string name;
		date birthday;
	} Tom;
	Tom.name = "Tom Smith";
	Tom.birthday = { 1, 2, 1998 };
	Tom.birthday.day = 20;
	Tom.birthday.month = 12;
	Tom.birthday.year = 1999;

	cout << Tom.name << endl;
	cout << Tom.birthday.day << ".";
	cout << Tom.birthday.month << ".";
	cout << Tom.birthday.year << endl;

	person Bob = { "Bob", {15, 6, 1980} };

	cout << Bob.name << endl;
	cout << Bob.birthday.day << ".";
	cout << Bob.birthday.month << ".";
	cout << Bob.birthday.year << endl;

	person* pB = &Bob;

	cout << pB->name << endl; // ������ ������� �������������. ������� ��� ����� ���������.
	pB->name = "Bob Thomson"; // ������ ��� ������� ����� ��� ���������.

	cout << Bob.name << endl;

	pB = &Tom; // �������������� ��������� �� ������ ������

	cout << pB->name << endl; // �������. */

	/*
	struct date {
		int day = 15; // �������� �� ��������� (15)
		int month = 5;
		int year = 1000;
		string note = "Hello world!";
	} birthday = { 1, 1, 1, "" }, date1; // ����� ����� ���������������� � ��������� ����������.
	*/
	/*birthday.day = 10; // ���� ������� (day)
	birthday.month = 5; // ���� ������� (month)
	birthday.year = 1970; // ���� ������� (year)
	birthday.note = "Ivans birthday";
	date1 = { 18, 3, 2022, "Homeworks" };
	cout << birthday.day << "." << birthday.month << "." <<
		birthday.year << " - " << birthday.note << endl;
	date1.day += 10;
	date1.month = 7;
	cin >> date1.year;
	date1.note += "!";

	cout << date1.day << "." << date1.month << "." <<
		date1.year << " - " << date1.note << endl;

	date date2 = {2, 3, 2000, "My first trip"};

	cout << date2.day << "." << date2.month << "." <<
		date2.year << " - " << date2.note << endl;
	 */


	return 0;
}