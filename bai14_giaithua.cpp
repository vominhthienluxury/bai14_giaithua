// bai14_giaithua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
	cout << "giai Thua:" << endl;
	int so, giaithua = 1;
	cout << "nhap so:\n";
	cin >> so;
	for (int i = 1; i <= so; i++)
	{
		giaithua *= i;
	}
	cout << so << "!" << "=" << giaithua << endl;
	return 0;
}