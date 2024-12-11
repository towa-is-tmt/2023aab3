class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(); // �إ��Y���I
        ListNode* now = ans;           // ��e�`�I
        int carry = 0;                 // �i���

        while (l1 != nullptr || l2 != nullptr) { // �u�p��䤤�@�������
            if (l1 == nullptr) { // �p�G list1 �O�Ū��A�B�z list2
                int here = l2->val + carry;       // �p���e��
                now->next = new ListNode(here % 10); // �إ߸`�I
                carry = here / 10;                // ��s�i��
                l2 = l2->next;                   // ���� l2
            } else if (l2 == nullptr) { // �p�G list2 �O�Ū��A�B�z list1
                int here = l1->val + carry;       // �p���e��
                now->next = new ListNode(here % 10); // �إ߸`�I
                carry = here / 10;                // ��s�i��
                l1 = l1->next;                   // ���� l1
            } else { // �P�ɳB�z list1 �M list2
                int here = l1->val + l2->val + carry; // �p���e��
                now->next = new ListNode(here % 10);  // �إ߸`�I
                carry = here / 10;                    // ��s�i��
                l1 = l1->next;                        // ���� l1
                l2 = l2->next;                        // ���� l2
            }
            now = now->next; // ���ʨ�U�@�Ӹ`�I
        }

        if (carry > 0) { // �̫�p�G�٦��i��
            now->next = new ListNode(carry);
        }

        return ans->next; // ��^���G���A���L�Y���I
    }
};
