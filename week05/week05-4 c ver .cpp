
#include <stdio.h>
#include <string.h>
#include <ctype.h>//step4 tolower(c)

int main(){
	//step3 keyboard keys
	char s[] = "123456789-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	
	char c;
	// step 1 input
	while(scanf("%c", &c) == 1){
		c = tolower(c);
		
		if(c==' ' || c=='\n') printf("%c", c);
		else{
			c = *(strchr(s,c)-2);
			printf("%c", c);
		}
	}
}

