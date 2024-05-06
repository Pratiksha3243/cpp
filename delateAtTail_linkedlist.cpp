#include<iostream>
using namespace std;

class Node{

    public:
      int val;
      Node* next;

      Node(int data){
        val=data;
        next=NULL;
      }
};

void insertAthead(Node* &head,int val){

    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}

void deleteAtTail(Node* &head){
  Node* second_last=head;

  while(second_last->next->next!=NULL){
    second_last=second_last->next;
  }
  Node* temp=second_last->next;
  second_last->next=NULL;
  free(temp);
}


void display(Node* head)
{

    Node* temp=head;

    while(temp!=NULL){

        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
  Node* head=NULL;
  insertAthead(head,2);
  
  insertAthead(head,1);
  
  insertAthead(head,4);
  display(head);

  deleteAtTail(head);
  display(head);


return 0;
}