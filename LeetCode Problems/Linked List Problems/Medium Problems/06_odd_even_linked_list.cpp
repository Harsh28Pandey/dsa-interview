// Problem - Odd even linked list (328) - LeetCode

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
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *temp = head;
        ListNode *newList = NULL;
        int count = 1;
        while(temp != NULL) {
            if(count % 2 == 1) {
                ListNode *newNode = new ListNode(temp->val);
                if(newList == NULL) {
                    newList = newNode;
                } else {
                    ListNode *temp1 = newList;
                    while(temp1->next != NULL) {
                        temp1 = temp1->next;
                    }
                    temp1->next = newNode;
                }
            }
            count++;
            temp  =temp->next;
        }

        count = 1;
        temp = head;
        while(temp != NULL) {
            if(count % 2 == 0) {
                ListNode *newNode = new ListNode(temp->val);
                ListNode *temp1 = newList;
                    while(temp1->next != NULL) {
                        temp1 = temp1->next;
                    }
                    temp1->next = newNode;
            }
            count++;
            temp  =temp->next;
        }
        return newList;
    }
};