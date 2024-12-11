class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(); // 建立頭結點
        ListNode* now = ans;           // 當前節點
        int carry = 0;                 // 進位值

        while (l1 != nullptr || l2 != nullptr) { // 只計算其中一個鏈表有值
            if (l1 == nullptr) { // 如果 list1 是空的，處理 list2
                int here = l2->val + carry;       // 計算當前值
                now->next = new ListNode(here % 10); // 建立節點
                carry = here / 10;                // 更新進位
                l2 = l2->next;                   // 移動 l2
            } else if (l2 == nullptr) { // 如果 list2 是空的，處理 list1
                int here = l1->val + carry;       // 計算當前值
                now->next = new ListNode(here % 10); // 建立節點
                carry = here / 10;                // 更新進位
                l1 = l1->next;                   // 移動 l1
            } else { // 同時處理 list1 和 list2
                int here = l1->val + l2->val + carry; // 計算當前值
                now->next = new ListNode(here % 10);  // 建立節點
                carry = here / 10;                    // 更新進位
                l1 = l1->next;                        // 移動 l1
                l2 = l2->next;                        // 移動 l2
            }
            now = now->next; // 移動到下一個節點
        }

        if (carry > 0) { // 最後如果還有進位
            now->next = new ListNode(carry);
        }

        return ans->next; // 返回結果鏈表，跳過頭結點
    }
};
