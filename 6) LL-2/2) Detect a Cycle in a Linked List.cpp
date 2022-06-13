//brute force:
make a hash table and traverse the LL, if the node came back again then there is an cycle



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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        
        ListNode *s=head,*f = head;
        while(f && f->next){
            s=s->next;

            f=f->next->next;
            if(s==f)        //they both meet that means there is cycle
                return true;
            
        }
        return false;   //no cycle
    }
};


Time Complexity: O(N)

Reason: In the worst case, all the nodes of the list are visited.

Space Complexity: O(1)
