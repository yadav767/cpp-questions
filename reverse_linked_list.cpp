#include <iostream>
#include <set>
using namespace std;

class Node{
    public:
    int data; 
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insert_node(Node* &head,int d){//Insert at last
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newnode=new Node(d);
    temp->next=newnode;

}


void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void reverse_linklist(Node* &head){ // Reverse a linked list
    Node* previous = NULL;
    Node* currect = head;
    Node* front = NULL;

    while(currect!=NULL){
        front=currect->next;
        currect->next=previous;
        previous=currect;
        currect=front;
    }

    head=previous;

    print(head);

}

void middle_element(Node* &head){ //Using fast and slow
    
    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    cout << "The middle element is : " << slow->data<<endl;
    return;
}


void add_at_head(Node* &head, int d){ //Insert at head
    Node* node=new Node(d);

    node->next=head;
    head=node;
}

void insert_at_position(Node* &head,int p ,int d){ //Insert at any position
    Node* temp=head;
    int count =1;
    while(count<p-1){
        temp=temp->next;
        count++;
    }
    Node* node=new Node(d);
    node->next=temp->next;
    temp->next=node;

    print(head);
}

void remove_duplicates(Node* &head , bool sort){

    if(sort){
        Node* current=head;
        while(current!=NULL && current->next!=NULL){
            if(current->data==current->next->data){
                Node* to_delete=current->next;
                current->next=current->next->next;
                delete to_delete;
            }else{
                current=current->next;
            }
        }
    }else{
        set<int> seen;

        Node* current=head;
        Node* previous=NULL;
        while(current!=NULL){
            if(seen.count(current->data)){
                previous->next=current->next;
                Node* to_delete=current;
                current=current->next;
                delete to_delete;
            }else{
                seen.insert(current->data);
                previous=current;
                current=current->next;
            }
        }

    }
    print(head);
}

void merge_two_sorted_ll(Node* head1, Node* head2  ){
    Node* p1=head1;
    Node* p2=head2;
    Node* dummy=new Node(-1);
    Node* tail=dummy;
    while(p1!=NULL && p2!=NULL){
        if(p1->data <= p2->data){
            tail->next=p1;
            p1=p1->next;
            tail=tail->next;
        }else{
            tail->next=p2;
            p2=p2->next;
            tail=tail->next;
        }
    }
    tail->next=p1!=NULL ? p1 : p2;
    print(dummy->next);
}

int main(){

    Node* node1=new Node(10);
    Node* node2=new Node(11);
    Node* head2=node2;
    insert_node(head2,31);
    insert_node(head2,35);
    insert_node(head2,36);
    insert_node(head2,49);
    print(head2);
    Node* head=node1;
    insert_node(head,20);
    insert_node(head,30);
    insert_node(head,40);
    insert_node(head,40);
    insert_node(head,50);
    insert_node(head,60);
    print(head);
    // reverse_linklist(head);

    // middle_element(head);
    // add_at_head(head,5);
    // print(head);

    // insert_at_position(head,4,35);
    // remove_duplicates(head,true);
    merge_two_sorted_ll(head,head2);
  

    return 0;
}