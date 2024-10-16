#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a;
    int now;
    while(cin >> now){
        a.push_back(now);
        cout << now << "\n";
    }
}

