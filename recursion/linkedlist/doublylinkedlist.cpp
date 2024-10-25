#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
 Node(int data){


    this->data=data;
    this->prev=NULL;
    this->next=NULL;
 }


 ~Node(){
    int value=this->data;
    while (next!=NULL)
    {
      delete next;
      this->next=NULL;



    }
    
 }
};
void print (Node * &head){
  Node * temp=head;
  while(temp!=NULL){

    cout<<temp->data<<" ";
    temp=temp->next;
  }
    cout<<endl;

}

void insertHead(Node* &head,int data){
   
   Node * temp=new Node(data);

   temp->next=head;
   head->prev=temp;
   head=temp;
   


}
void insertTail(Node * & tail,int d){
    Node * temp=new Node(d);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;




}

void insertMiddle(Node * & Head,int pos,int d){
 
if(pos==1){
    insertHead(Head,d);
    return ;
}
  else{ 
    Node *temp=new Node(d);
  int cnt=1;
 Node * curr=Head;


 while(cnt<pos){

    curr=curr->next;
    cnt++;

 }

temp->next=curr->next;
curr->next->prev=temp;
curr->next=temp;
temp->prev=curr;
 
 

  }


}
void deletefromdoubly(Node * &head,int pos){


    if(pos==1){
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
else{
    Node * curr=head;
    Node *prev=NULL;
    int cnt=1;
      while (cnt<pos)
      {

        prev=curr;
        curr=curr->next;
        cnt++;
        
      }
      
      
      prev->next=curr->next;
      prev->next->prev=NULL;
      curr->next->prev=prev;
      curr->next=NULL;
      delete curr;
}
}

void deleteTail(Node * &tail){
  Node * temp=tail;
  temp->prev->next=NULL;
  tail=temp->prev;
  temp->prev=NULL;
  delete temp;

}






int main(){



    Node * Head=new Node(2);
    Node *tail= Head;
    insertHead(Head,1);
    insertTail(tail,4);
    insertMiddle(Head,2,3);
    deleteTail(tail);
    

    print(Head);
}
