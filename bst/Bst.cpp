#include<bits/stdc++.h>
using namespace std;
class Node{
 

 public:
   int data;
   Node * left;
   Node * right;

   Node(int d){
      this->data=d;
      this->left=this->right=NULL;


   }



};

Node * insertBst(Node * & root,int data){

    if(root==NULL){
        root =new Node(data);
        return root;
    }
  if(data>root->data){

    root->right=insertBst(root->right,data);
  }
else{
    root->left-insertBst(root->left,data);
}
 return root;



}

void takeInput(Node * &root){

    int data;
    cin>>data;

    while (data!=-1)
    {
      root= insertBst(root,data);
      cin>>data;
    }
    
}

void levelOderTravesal(Node * root){
queue <Node *>q;
q.push(root);
q.push(NULL);


while(!q.empty()){
Node * temp=q.front();
q.pop();


if(temp==NULL){
    cout<<endl;
    if(!q.empty()){
        q.push(NULL);
    }
}

else{
    cout<<temp->data<<" ";
    if(temp->left){q.push(temp->left);}
    if(temp->right){q.push(temp->right);}
}



}

}



int main(){




    Node * root=NULL;
    takeInput(root);

    levelOderTravesal(root);
}