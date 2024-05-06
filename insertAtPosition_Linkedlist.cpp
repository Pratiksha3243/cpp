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

void insertAtPosition(Node* &head,int val,int pos){

  if(pos==0){
    insertAthead(head,val);
  }
  Node* new_node=new Node(val);
  Node* temp=head;
  int current_pos=0;
  while(current_pos!=pos-1){
    temp=temp->next;
    current_pos++;
  }
  new_node->next=temp->next;
  temp->next=new_node;
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
  display(head);
  insertAthead(head,1);
  display(head);
  insertAthead(head,4);
  display(head);

insertAtPosition(head,9,1);
display(head);
return 0;
}