#include <iostream>
using namespace std;

/// 你書class Cat 再加大括號 codeBlacks 他會幫你加下括號和分號

class Mouse{
public:
    void print(){
        cout << "I am mouse, mou mou\n";
    }
};

class Cat{
public:
    void print(){
        cout << "I am a cat, meow meow\n";
    }
};

int main(){

    Mouse mouse1, mouse2;
    Cat cat1, cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
}
