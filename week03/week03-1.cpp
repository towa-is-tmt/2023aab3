///�ĤG�P�Ҹ��D��
///range-based for�j��n�b (2011�~)��~�� �{�b�O1998�~����
///�p�G��C++98  ���ॿ�`�ϥνsĶ ����|�X�� �j��X����
///codeblocks 17.12�� setting-compiler �ĲĤG��  -std=c++11
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
