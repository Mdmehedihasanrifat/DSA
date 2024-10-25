#include<bits/stdc++.h>
using namespace std;




class Node
{
private:
    
public:
      int data;
      Node* left;
      Node* right;
    
    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};
Node * buildTree(Node * root){
cout<<"enter your data:::";
int d;
cin>>d;
root=new Node(d);

if(d==-1){return NULL;}

cout<<"Enter Left Data of::"<<d<<endl;
root->left=buildTree(root->left);
cout<<"Enter Right Data of::"<<d<<endl;
root->right=buildTree(root->right);


return root;


}
// void inorder(Node *root){

//     if(root==NULL){return ;}
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
void levelorder(Node *root){

    queue<Node *> q;
    q.push(root);
    while(!q.empty()){

        Node * temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
         if(temp->right){
            q.push(temp->right);
        }
    }

}


int main(){


Node * root=NULL;
root=buildTree(root);
// inorder(root);
levelorder(root);
}