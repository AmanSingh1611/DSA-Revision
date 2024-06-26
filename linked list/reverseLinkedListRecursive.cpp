
 
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr ){
            return head;
        }

        ListNode* temp = reverseList(head->next);

        ListNode* reversed_ll_tail=head->next;

        reversed_ll_tail->next=head;

        head->next = nullptr;

        return temp;
    }
};