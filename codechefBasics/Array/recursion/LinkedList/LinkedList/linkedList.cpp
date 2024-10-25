#include<bits/stdc++.h>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){

        int value =this->data;

        if(this->next !=NULL){
            delete next;
           this->next=NULL;
        }
    }

    

};


void insertatHead(Node * &head,int d){

 Node *temp =new Node(d);
temp->next=head;
 head=temp;


}


void insertTail(Node * &tail,int d){

    Node *temp=new Node(d);

    tail->next=temp;
    tail=temp;
}


void insertpos(Node *&head ,Node *&tail,int pos,int d){



if(pos==1){
    insertatHead(head,d);
    return ;
}

Node *temp =head;

int cnt=1;

while(cnt<pos){
 temp=temp->next;
 cnt++;

}
if(temp->next==NULL){
    insertTail(tail,d);

}

Node *insertNode=new Node(d);

insertNode->next=temp->next;
temp->next=insertNode;  



}

void NodeDelete(int pos , Node * &head,Node *&tail){

    if(pos==1){

        Node * temp =head;

        head=head->next;
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
       prev->next =curr->next;
        tail =prev;
       delete curr;


    }
}

void print(Node* &head) {

   
    Node* temp = head;
  
    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){



Node * node1=new Node(5);
Node *head=node1;
Node *tail=node1;



// insertatHead(head,10);
// print (head);

insertTail (tail,5);
print(head);



insertTail (tail,11);
print(head);


insertpos(head,tail,2,6);

print(head);

NodeDelete(1,head,tail);

print(head);


NodeDelete(3,head,tail);
print(head);


cout<<head->data<<endl;
cout<<tail->data<<endl;
}

