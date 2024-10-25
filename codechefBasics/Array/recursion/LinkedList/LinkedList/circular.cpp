#include <bits/stdc++.h>
using namespace std;


class Node{


    public:

    int data;
    Node * next;



    Node(int data){
        this->data=data;
        this->next=NULL;


    }


  ~Node(){

    if(this->next!=NULL){
        delete next;
        next=NULL;
    }
  }
};



void insertNode(Node * &tail,int element ,int d){

    if(tail==NULL){

        Node * newNode =new Node(d);
        tail=newNode;
        newNode->next=newNode;

    }

    else {
    Node *curr =tail;

    while (curr->data!=element){

        curr=curr->next;
    }
    Node *temp =new Node(d);

    temp->next=curr->next;
    curr->next=temp;

    }


}

void Delete(Node * &tail,int value){

if(tail==NULL){cout<<"List is empty"<<endl;}
else{

    Node * prev=tail;
    Node * curr=tail->next;

    while (curr->data !=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
     if(curr==prev){
        tail=NULL;
     }
    if(tail==curr){

        tail=prev; 
    }
    curr->next=NULL;
    delete curr;
}

}

void print(Node *&tail ){

Node *temp =tail;
do{

    cout<<tail->data<<" ";
    tail=tail->next;
}while(tail->next!=temp);
cout<<endl;


}
int main(){



    Node *tail =NULL;


   insertNode(tail,5,3);

   print(tail);


}