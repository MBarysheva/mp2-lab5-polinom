#include "Polinom.h"
#include <iostream>
#include <string>
using namespace std;
void main()
{
	TPolinom p1, p2, res, copyofp1=p1;
	TMonom m;
	int n=2;
	cin >> p1;
	cin >>p2;
	res = p1 + p2;
	cout << "Result = p1 + p2" << endl << res << endl;
	res = p1 * p2;
	cout << "Result = p1 * p2" << endl << res << endl;
	res = p1 * m;
	cout << "Result = p1 * m" << endl << res << endl;
	res = p1 * n;
	cout << "Result = p1 * n" << endl << res << endl; 
	p1 *= p2;
	cout << "Result of p1 *= p2" << endl << p1 << endl;
	copyofp1 += p2;
	cout << "Result of p1 += p2" << endl << copyofp1 << endl;
	exit(0);
}