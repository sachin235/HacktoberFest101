ListNode *detectCycle(ListNode *head) 
    {
        ListNode *slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
              if(slow==fast)
                break;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==NULL||fast->next==NULL)
            return NULL;
        slow=head;
        if(slow==fast)
            return slow;
        while(slow!=fast)
            slow=slow->next,fast=fast->next;
        return fast;
    }
