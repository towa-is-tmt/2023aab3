int main() {
    int a,b;
    vector<int>A, B;
    while( cin >> a >> b ){
        A.push_back(a); //��a��J�}�CA
        B.push_back(b); //��b��J�}�CB
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int ans=0;
    for(int i=0; i< A.size(); i++){
        //cout << A[i] << " ";  //�L�X�� �ݬݬO���O�q�p��j�ƨ�n
        ans += abs(A[i] -B[i]);//�۴� �u������
    }
    cout << "�[�_�Ӫ����׬O" << ans;

}
