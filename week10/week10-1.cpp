#include <iostream>
using namespace std;

int main(){
	double h, w;
	cin >> h >> w;
	double BMI = w/(h*h);
	cout << BMI << "\n";

	if(BMI<18.5) cout << "too thin";
	else if(BMI<24) cout <<"standard";
	else cout << "too fat";
}
