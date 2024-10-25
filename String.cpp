//
// Created by User on 1/27/2022.
//
#include<bits/stdc++.h>
#include <iostream>
#include "algorithm"
using namespace std;
int main(){

    string str="ABCDEFGHJ";

    for(int i=0;i<str.size();i++){

        if(str[i]>='a' && str[i]<='z'){

            str[i]-=32;
        }



    }

    for(int i=0;i<str.size();i++){

        if(str[i]>='A' && str[i]<='Z'){

            str[i]+=32;
        }



    }


    cout<<str;



}