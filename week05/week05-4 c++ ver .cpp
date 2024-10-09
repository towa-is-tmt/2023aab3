#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main(){
	//step6 keyboard keys string 
	string s = "123456789-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c; // step 1 input
	while(scanf("%c", &c) == 1){
		c = tolower(c); //step3 tower(c)
		
		if(c==' ' || c=='\n') cout << c; //step2; output
		else{
			int i = s.find(c);//step4 find()
			cout << s[i-2];		//step5 outputs[i-2]
		}
	}
}