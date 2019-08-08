/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    
    typedef struct ListNode Node;
    Node *head;
    if (l1->val <= l2->val){
        head = l1;
        l1 = l1->next;
    }
    else if (l1->val > l2->val){
        head = l2;
        l2 = l2->next;
    }
    Node *tail = head;
    
    while(l1 != NULL || l2 != NULL){
        if (l1 == NULL){
            tail->next = l2;
            break;
        }
        if (l2 == NULL){
            tail->next = l1;
            break;
        }
        
        if (l1->val <= l2->val){
            tail->next = l1;
            l1 = l1->next;
        }
        else if (l1->val > l2->val){
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    return head;
}


