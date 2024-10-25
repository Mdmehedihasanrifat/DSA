#include<bits/stdc++.h>
using namespace std;

class Stack{

public:
   int size;
   int *arr;
   int top;

   Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;

   }







};

void push(int n){

    if(top==size){cout<<"stack is full"<<endl;}

    if(size-top>1){
        top++;
        arr[top]=n;
    }
}

void pop(){


    if (top>=0){
        top--;

    }
    else{cout<<"stack is empty"<<endl;}
}

int top(){
    return arr[top];
}


bool isFull(){


    if(top==-1){return true;}
    else return false;
}
int main(){



}