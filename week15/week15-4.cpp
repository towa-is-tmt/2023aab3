class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // 反轉兩個鏈表
        l1 = MyReverse(l1);
        l2 = MyReverse(l2);

        ListNode* ans = new ListNode();
        ListNode* now = ans;
        int carry = 0;

        // 遍歷兩個鏈表，進行加法運算
        while (l1 != nullptr || l2 != nullptr) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            // 更新結果鏈表和進位
            now->next = new ListNode(sum % 10);
            carry = sum / 10;
            now = now->next;
        }

        // 若最後仍有進位，新增一個節點
        if (carry) {
            now->next = new ListNode(carry);
        }

        // 返回反轉後的結果
        return MyReverse(ans->next);
    }

    ListNode* MyReverse(ListNode* l1) {
        vector<int> a;

        // 將鏈表元素存入 vector
        while (l1 != nullptr) {
            a.push_back(l1->val);
            l1 = l1->next;
        }

        ListNode* ans = new ListNode();
        ListNode* now = ans;

        // 倒序創建新的鏈表
        int N = a.size();
        for (int i = N - 1; i >= 0; i--) {
            now->next = new ListNode(a[i]);
            now = now->next;
        }

        return ans->next;
    }
};
