#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
int data;
    Node *prev;
    Node *next;


Node(int data){

    this->data =data;
    this->prev =NULL;
    this->next=NULL;
} 

~Node(){


if(this->next!=NULL){
    delete next;
    this->next=NULL;
   
}


};

void print(Node *& head){

 Node *temp=head;


    while (temp!=NULL){

        cout<<temp->data<<" ";
        temp=temp->next;

    }

    cout<<endl;
}

void insertatHead(Node * &head, Node * &tail,int d){
if(head==NULL){
    Node *nd=new Node(d);
    head=nd;
    tail=nd;
}
else{
 Node *temp =new Node(d);

    temp->next=head;
    head->prev=temp;
    head=temp;}


}

void insertTail(Node * &head,Node * &tail,int d){

if(head==NULL){
    Node *nd=new Node(d);
    tail=nd;
    head=nd;
}
else{

    Node *temp=new Node(d);

    tail->next=temp;
    temp->prev =tail;
    tail=temp;}
}


void insertpos(Node *&head ,Node *&tail,int pos,int d){


if(pos==1){
    insertatHead(head,tail,d);
    return ;
}

Node *temp =head;

int cnt=1;

while(cnt<pos){
 temp=temp->next;
 cnt++;

}
if(temp->next==NULL){
    insertTail(head,tail,d);

}

Node * InsertNode= new Node(d);

InsertNode->next=temp->next;

temp->next->prev=InsertNode;

temp->next=InsertNode;

InsertNode ->prev=temp;



}


void NodeDelete(int pos , Node * &head,Node *&tail){

    if(pos==1){

        Node * temp =head;
        temp->next->prev =NULL; 
        head=temp->next;
          temp->next=NULL;

         delete temp;
       
    }


    else{

        Node * curr=head;
        Node * prev=NULL;

        int cnt=1;

       while(cnt<pos){
       prev=curr;
       curr=curr->next;
       cnt++;}

       curr->prev=NULL;
       pre->next=curr->next;
       curr->next=NULL;
       delete curr;


    }
}








int main(){


    Node *node1 =new Node(5);

    Node *head=node1;
    Node *tail =node1;



    print(head);


    insertatHead(head,tail,7);
    print(head);
}