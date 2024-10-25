#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node *left;
    node *right;


    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;


    }
};
node* buildTree(node * root){
  
  cout<<"Enter your data"<<endl;

   int data;
   cin>> data;

   root =new node(data);
   if(data==-1){return NULL;}

   cout<<"Enter data for left"<<data<<endl;
root->left=buildTree(root->left);


 cout<<"enter data for right"<<data<<endl;
 root->right=buildTree(root->right);


 return root;

}


void levelOrderTravase(node * root){
queue <node *> q;
q.push(root);
q.push(NULL);

while(!q.empty()){
node * temp = q.front();
q.pop();


if(temp==NULL){

    if(!q.empty()){
      q.push(NULL);
        }
    cout<<endl;
}


else{
cout<<temp->data<<" ";
if(temp->left){

    q.push(temp->left);
}
if(temp->right){

    q.push(temp->right);
    
}

}


}



}


int main(){

    node * root=NULL;

    root=buildTree(root);
    levelOrderTravase(root);
}