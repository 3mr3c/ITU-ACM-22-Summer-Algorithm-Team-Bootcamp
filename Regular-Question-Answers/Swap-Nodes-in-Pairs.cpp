// Author: Emre Çelik
// Reviewer: 
// Question Link: https://leetcode.com/problems/swap-nodes-in-pairs/


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
    ListNode* swapPairs(ListNode* head) {
        // If rest of our linked list is empty or have one nosw, return it as a head. 
        if(head == NULL or head->next == NULL){
            return head;
        }
        // Initialize our head and next of our head.    
        ListNode* tempHead = head;
        ListNode* temp = tempHead->next;
        
        // Swap our nodes.
        tempHead->next = tempHead->next->next;
        temp->next = tempHead;

        //Return next node as a head recursively.
        tempHead->next = swapPairs(tempHead->next);

        return temp;
    }
};
