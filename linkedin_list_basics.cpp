#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next =NULL;
    }
};


void insert_node_at_head(Node* &head , int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}   


void insert_at_position(Node* &head, int position, int d){

    //Insert at head
    if(position==1){
        insert_node_at_head(head,d);
        return;
    }

    Node* temp = head;

    int count = 1;

    //React 1 less than the node inserted
    while(count <position-1){
        temp=temp->next;
        count++;
    }

    Node* nodeToBeInserted = new Node(d);

    nodeToBeInserted->next=temp->next;

    temp->next=nodeToBeInserted;



}



void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }

    cout << endl;
    
}

int main(){

    Node* node1=new Node(10);
    
    Node* head=node1;
    // Node* tail=node1;

    print(head);
    
    insert_node_at_head(head,11);
    
    print(head);
    
    insert_node_at_head(head,12);
    
    print(head);

    insert_node_at_head(head,13);
    
    print(head);

    insert_at_position(head,1,21);

    print(head);

    return 0;
}