#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
      int data;
      Node *next;
      
      Node(int data){
        this->data=data;
        this->next=NULL;

      }
      ~Node(){
        int value=this->data;
        if(this->next!=NULL){
          delete next;
          this->next=NULL;
        }
      }
};

void insertAtHead(Node * &head,int d){

    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtEnd(Node *&tail,int d){

 Node *temp=new Node(d);
 temp->next=tail->next;
 tail->next=temp;
 tail=temp;

}

void delete(int pos,Node * &head){


  if (pos==1)
  {Node *temp=head;
    head=head->next;
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
      curr->next=NULL;
      delete curr;
      



  }
  
}


void print(Node * &head){

    Node  * temp =head;

    while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
         cout<<endl;


    }
}
void insertAtmiddle(Node * &head, int pos,int data){
Node * temp=head;


if(pos==1){
  insertAtHead(temp,d);
  return;
}
int cnt=1;

while(cnt<pos-1){

  temp=temp->next;
  cnt++;
}


Node * nodeInsert=new Node(d);
nodeInsert->next=temp->next;
temp->next=nodeInsert;



}



int main(){


Node *node=new Node(11);

Node *head=node;
Node *tail=node;

insertAtHead(head,10);
insertAtEnd(tail,12);
print(head);



}
