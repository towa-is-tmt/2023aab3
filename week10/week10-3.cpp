#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name; ///變數
    void print(){ ///函式
        cout << "I am a cat. My namr is " << name << ".\n";
    }
};

int main(){
    Cat cat1,cat2;
    cat1.name = "小花";
    cat1.print();
    cat2.name = "小白";
    cat2.print();
}


