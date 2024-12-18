class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ���������
        l1 = MyReverse(l1);
        l2 = MyReverse(l2);

        ListNode* ans = new ListNode();
        ListNode* now = ans;
        int carry = 0;

        // �M��������A�i��[�k�B��
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

            // ��s���G���M�i��
            now->next = new ListNode(sum % 10);
            carry = sum / 10;
            now = now->next;
        }

        // �Y�̫ᤴ���i��A�s�W�@�Ӹ`�I
        if (carry) {
            now->next = new ListNode(carry);
        }

        // ��^����᪺���G
        return MyReverse(ans->next);
    }

    ListNode* MyReverse(ListNode* l1) {
        vector<int> a;

        // �N������s�J vector
        while (l1 != nullptr) {
            a.push_back(l1->val);
            l1 = l1->next;
        }

        ListNode* ans = new ListNode();
        ListNode* now = ans;

        // �˧ǳЫطs�����
        int N = a.size();
        for (int i = N - 1; i >= 0; i--) {
            now->next = new ListNode(a[i]);
            now = now->next;
        }

        return ans->next;
    }
};
