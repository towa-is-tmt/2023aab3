///WEEK12-1.CPP �ǲ߸�Ƶ��c�� struct vs. class
#include <iostream>
#include <string> ///���F�ߪ��W�l
using namespace std;

///struct Node(); ///������������ C�y�����c
///class Cat{}; ///���e�X�P ���йLC++��j

struct Node{
    int val; ///value�Y�g �o��Node �̭�����
};
class Cat{
public:
    string name; ///�ߪ��W�l ���e�йL
};
int main(){
    Cat cat1;
    cat1.name = "cattle";
    Node node;
    node.val = 1;
}
