///複習剝皮法
#include <iostream>
using namespace std;

int main(){
    int n = 12345;
    cout << "原本N是:  " << n << "\n";
    cout << "撥下最右邊的皮: " << n%10 << "\n";
    n = n/10;
    \
    cout << "n變小了 現在:  " << n << "\n";
    cout << "撥下最右邊的皮: " << n%10 << "\n";
    n = n/10;

    cout << "n變小了 現在:  " << n << "\n";
    cout << "撥下最右邊的皮: " << n%10 << "\n";
    n = n/10;

    cout << "n變小了 現在:  " << n << "\n";
    cout << "撥下最右邊的皮: " << n%10 << "\n";
    n = n/10;

    cout << "n變小了 現在:  " << n << "\n";
    cout << "撥下最右邊的皮: " << n%10 << "\n";
    n = n/10;

    cout << "n變小了 現在:  " << n << "\n";
    cout << "撥下最右邊的皮: " << n%10 << "\n";
    n = n/10;
}
