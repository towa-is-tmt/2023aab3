class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {}; //陣列超大 都設為0
        for(char c : s){ //針對左邊的字串s裡面的每個字c
            H[c]++; //把 Histogrom 統計圖資料 H[c]加1 多1次

        }
        for(char c : t){ //針對右邊的字串s裡面的每個字c
            H[c]--; //用掉剛剛黑機的那個 H[c]++;
            if(H[c]<0) return c; //不夠用? 找到兇手了!
        }
        return 0;
    }
};