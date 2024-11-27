// week12-3.cpp
// 練習題 Linked List 第1題
// LeetCode 21. Merge Two Sorted Lists

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(); // 空白答案
        ListNode* now = ans; // 答案的當下 now 節點

        while(list1 != nullptr || list2 != nullptr) { // 任何一邊還有資料，就繼續做
            if(list1 == nullptr) { // 但是已經空的
                now->next = list2; // 另外一邊的，全都貼上
                list2 = nullptr;
            } else if(list2 == nullptr) { // 但是已經空的
                now->next = list1; // 另外一邊的，全都貼上
                list1 = nullptr;
            } else if(list1->val < list2->val) { // list1 是小的
                now->next = new ListNode(list1->val); // 答案放入 now 的下一筆，放小的
                list1 = list1->next; // list1 下移一筆
                now = now->next; // 現在也換下一筆
            } else { // list2 是小的
                now->next = new ListNode(list2->val); // 答案放入 now 的下一筆，放小的
                list2 = list2->next; // list2 下移一筆
                now = now->next; // 現在也換下一筆
            }
        }
        return ans->next; // 空白答案的下一筆，才是真正的答案
    }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

