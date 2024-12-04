int main() {
    int a,b;
    vector<int>A, B;
    while( cin >> a >> b ){
        A.push_back(a); //把a放入陣列A
        B.push_back(b); //把b放入陣列B
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int ans=0;
    for(int i=0; i< A.size(); i++){
        //cout << A[i] << " ";  //印出來 看看是不是從小到大排到好
        ans += abs(A[i] -B[i]);//相減 只取正的
    }
    cout << "加起來的答案是" << ans;

}
