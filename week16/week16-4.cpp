#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a;
	int now;
	while(cin >> now){
		if(now == 0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for(int n : a){
		if(n==now) ans++;
	}
	cout << ans << "\n";
}
