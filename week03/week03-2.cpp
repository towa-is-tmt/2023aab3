/// 想了解字串string 字元char 的差別
#include <stdio.h> ///c語言的輸入輸出
#include <iostream> ///C++的輸入輸出
#include <string>
using namespace std;
int main(){
	printf("%d\n", 'a'); ///單引號代表 1個字母 會對應一個數值
	printf("%d\n","a"); /// 雙引號代表很多個字母(字串) 就是陣列 就是指標

    if('a'==97) printf("其實 'a' 是數值 97\n");
}
