#include <iostream>
#include <string>
using namespace std;
int main()
{
	string firstname,lastname;
	float salary,sale,percent,total;
	cout << "*********Homework2*********" << endl;
	cout << "Enter Name   : ";
	cin >> firstname;
	cin >> lastname;
	cout << "Enter Salary : "; 
	cin >> salary;
	cout << "Enter Sale   : "; 
	cin >> sale;
	cout << "Enter Commission Percent : ";
	cin >> percent;

	total = (sale * percent / 100 ) + salary;

	cout << "*********output*********" << endl;
	cout << "Yore name = " << firstname << " " << lastname << endl;
	cout << "Total Revenue " << total << " Bath" << endl;

	// Watchara Homprapai
}