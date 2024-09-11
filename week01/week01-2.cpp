#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int d50 = n/50;
	int d5 = n%50/5;
	int d1 = n%5/1;
	cout << n << "=50*" << d50 << "+5*" << d5
		<<"+1*" << d1 << endl;

}

