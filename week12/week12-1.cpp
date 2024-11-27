///WEEK12-1.CPP 學習資料結構的 struct vs. class
#include <iostream>
#include <string> ///為了貓的名子
using namespace std;

///struct Node(); ///都有分號結尾 C語言結構
///class Cat{}; ///之前幾周 都教過C++更強

struct Node{
    int val; ///value縮寫 這個Node 裡面的值
};
class Cat{
public:
    string name; ///貓的名子 之前教過
};
int main(){
    Cat cat1;
    cat1.name = "cattle";
    Node node;
    node.val = 1;
}
