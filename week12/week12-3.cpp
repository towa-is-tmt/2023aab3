// week12-3.cpp
// �m���D Linked List ��1�D
// LeetCode 21. Merge Two Sorted Lists

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(); // �ťյ���
        ListNode* now = ans; // ���ת���U now �`�I

        while(list1 != nullptr || list2 != nullptr) { // ����@���٦���ơA�N�~��
            if(list1 == nullptr) { // ���O�w�g�Ū�
                now->next = list2; // �t�~�@�䪺�A�����K�W
                list2 = nullptr;
            } else if(list2 == nullptr) { // ���O�w�g�Ū�
                now->next = list1; // �t�~�@�䪺�A�����K�W
                list1 = nullptr;
            } else if(list1->val < list2->val) { // list1 �O�p��
                now->next = new ListNode(list1->val); // ���ש�J now ���U�@���A��p��
                list1 = list1->next; // list1 �U���@��
                now = now->next; // �{�b�]���U�@��
            } else { // list2 �O�p��
                now->next = new ListNode(list2->val); // ���ש�J now ���U�@���A��p��
                list2 = list2->next; // list2 �U���@��
                now = now->next; // �{�b�]���U�@��
            }
        }
        return ans->next; // �ťյ��ת��U�@���A�~�O�u��������
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

