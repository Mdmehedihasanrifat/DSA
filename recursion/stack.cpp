#include<bits/stdc++.h>
using namespace std;
 

 class Stack
 {
 private:
    
 public:

    int size;
    int *arr;
    int top;
    Stack(int size){
      this->size=size;
      arr=new int[size];
      top=-1;


    }

    void push(int d){

  if(size-top>1){
    top++;
    arr[top]=d;

  }

  else{cout<<"stack is full";}

    }





 void pop(){

if(top>=0){
    top--;
}

else{cout<<"stack is empty";}

}


bool isEmpty(){
 if(top<0){return 1;}
 else{return 0;}
}


int peek(){
    return arr[top];
}

 };
 

 int main(){

    Stack s(3);
    s.push(1);
    s.push(2);
    s.pop();
    cout<<s.peek()<<endl;
 }