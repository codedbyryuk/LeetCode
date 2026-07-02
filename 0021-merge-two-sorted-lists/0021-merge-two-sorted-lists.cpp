/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 1. Check if either list is empty (return the other directly)
2. Compare the head values of both lists
3. Pick the smaller one, add it to result
4. Move the pointer of the chosen list forward
5. Repeat until one list is exhausted
6. Attach remaining nodes from non-empty list
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        ListNode* result = new ListNode();
        ListNode* current = result;
        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }

            current = current->next;
        }
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        return result->next;
    }
};
