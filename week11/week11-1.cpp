/// Hash Map or Hash Set
/// 不能直接在 codeblocks 用 因為是 C++2021
/// setting-complier 嫁入 C++11 就可以
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> table;
    table[9977341] = 9;
    table[4433997] = 4;
    cout << table[9977341] << "\n";
    cout << table[4433997] << "\n";
}
