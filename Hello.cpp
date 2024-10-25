#include<iostream>
using namespace std;

bool valid(char ch){


    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
        return 1;
    }
    return 0;
}

char toLowerCase(char c){


    if(c>='a'&& c<='z'){
        return c;
    }
    else{
        char temp=c-'A'+'a';
        return temp;
    }
}

bool palindrome(string s){

int st=0;
int e=s.length()-1;


while (st<e){

    if(s[st]!=s[e]){return false;}

    else{
        st++;e--;
    }


    
}
return true;


}

int main(){



string s;
string temp="";

cin>>s;

for(int i=0;i<s.length();i++){

if(valid(s[i])){
temp.push_back(s[i]);

}
}





for(int i=0; i<temp.length();i++)
{
    temp[i]=toLowerCase(temp[i]);
}

cout<<palindrome(temp);


}






