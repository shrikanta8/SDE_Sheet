class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        
        ListNode * h1=headA,*h2=headB;
        while(h1!=h2){
            if(!h1){    //if h1 got NULL then strt from headB
                h1=headB;
            }
            else
                h1=h1->next;
                
            if(!h2){
                h2=headA;   //if h2 got NULL then strt from headA
            }
            else
                h2=h2->next;
       }
       
       //if there's no intersection then it will return NULL
       //both pointers h1 and h2 traverse x+y i.e., x=length of 1st LL and y = length of 2nd LL
        return h1;
    }
};


Time Complexity: O(2*max(length of list1,length of list2))

Reason: Uses the same concept of difference of lengths of two lists.

Space Complexity: O(1)
