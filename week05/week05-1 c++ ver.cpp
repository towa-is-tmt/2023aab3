
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	for(char c : s){
		if(isupper(c)) c = tolower(c);
		else if (islower(c))  c  = toupper(c);
		cout << c;
	}
	
	//cout << s;
	cout <<"\n";
}
