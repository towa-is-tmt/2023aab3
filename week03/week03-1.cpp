///第二周考試題目
///range-based for迴圈要在 (2011年)後才行 現在是1998年版本
///如果用C++98  不能正常使用編譯 執行會出錯 迴圈出不來
///codeblocks 17.12裡 setting-compiler 勾第二個  -std=c++11
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
	for(char c : s){
		if(c != '2') cout << c;

	}
	cout << "\n";

}
