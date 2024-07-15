/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }

        ListNode* a = headA;
        ListNode* b = headB;
        std::unordered_map<ListNode*, int> map;

        while (a != nullptr || b != nullptr) {
            if (a != nullptr) {
                if (map.find(a) != map.end()) {
                    return a;
                } else {
                    map[a]++;
                }
                a = a->next;
            }

            if (b != nullptr) {
                if (map.find(b) != map.end()) {
                    return b;
                } else {
                    map[b]++;
                }
                b = b->next;
            }
        }
        return nullptr;
    }
};