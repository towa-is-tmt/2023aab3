#include <iostream>
#include <string> //newing
using namespace std;

int main(){
	string s;
	cin >> s;
	for(char c : s){
		if(c != '2') cout << c;
	}
	//cout << s;
	cout <<"\n";
	
}