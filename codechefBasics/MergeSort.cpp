#include <bits/stdc++.h>

using namespace std;

  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int index=0;
        int index1 =0;
        int resultI=0;
    while(m<nums1.size()&&n<nums2.size()){
        
        
        if(nums1[index]<nums2[index1]){
            
            nums1[resultI++]=nums1[index++];
            
        }
        else{
             nums1[resultI++]=nums2[index1++];
        }
        
         }
        
        
        
        while (index<nums1.size()){
                nums1[resultI++]=nums1[index++];
        }
        
        
         while (index1<nums2.size()){
                nums1[resultI++]=nums2[index1++];
        }
        
    }

void Merge(int *arr ,int s,int e){

  int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

 int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }











}



void MergeSort(int *arr ,int start,int End){




if(start>=End){return; }

int mid =(start+End)/2;


MergeSort(arr, start,mid);
MergeSort(arr,mid+1,End);

Merge(arr,start,End);

}


int main (){


 vector <int> arr={2,7,4,3,1};
 vector<int> arr1={8,9,10,11,12};

    int n=5;
     

//     MergeSort(arr,0,n-1);
//    for(int i=0;i<n;i++){

//         cout<<arr[i];
//     }

    merge(arr,5,arr1,5);

}