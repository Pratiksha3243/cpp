#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
    Node(int d)  {
        this->data=d;
        this->next=NULL;
    }
};

class stack{
   Node* head;
   int capacity;
   int currsize;

   public:
     stack(int c){
        this->capacity=c;
        this->currsize=0;
        head=NULL;
     }
     bool isEmpty(){
        return this->head=NULL;
     }
     bool isFull(){
        return this->currsize=this->capacity;
     }
     void push(int data){
        if(this->currsize==this->capacity){
            cout<<"overflow";
            return;
        }
        Node* new_node=new Node(data);
        new_node->next=this->head;
        this->head=new_node;
        this->currsize++;
     }
     int pop(){
        if(this->head==NULL){
            cout<<"underflow";
        
        }
     
     Node* new_head=this->head->next;
     this->head->next=NULL;
     Node* tobeRemoved=this->head;
     int result=tobeRemoved->data;
     delete tobeRemoved;
     this->head=new_head;
     return result;
}
    int size(){
        return this->currsize;
    }
    int gettop(){
        if(this->head==NULL){
            cout<<"underflow";
        }
        return this->head->data;
    }

};

int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.gettop()<<"\n";
    st.push(4);
    st.push(5);
    cout<<st.gettop()<<"\n";
    st.pop();
    cout<<st.gettop()<<"\n";
    return 0;
}