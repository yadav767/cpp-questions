//we use fast and slow algorithm
/*
    void detect_cycle(Node* head){

        Node* slow=head;
        Node* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=slow->next->next;

            if(slow==fast){
               
                return true;
            }
        
        }
            
        return false;


    }

*/