#include<bits/stdc++.h>
using namespace std;



class heaps
{
private:
    /* data */
public:


    int arr[100];
    int size;

    heaps(){
        arr[0]=-1;
        size=0;
    }


void insertHeap(int val){


        size=size+1;

        int index=size;
        arr[index]=val;

        while(index>1){

          int parent=index/2;
          if(arr[parent]<arr[index]){

            swap(arr[parent],arr[index]);
            index=parent;
          }
          else{return ;}


        }
    }
    void print(){

        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};


int main(){


    heaps h;
    h.insertHeap(50);
 
      h.insertHeap(55);
       h.insertHeap(53);
        h.insertHeap(52);
         h.insertHeap(54);
         h.print();

}

