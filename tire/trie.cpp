class trieNode{

public:
char data;
trieNode * children[26];
bool isterminal;
 
 trie(char ch){
    this->data=ch;
    for(int i=0;i<26;i++){
        children[i]=NULL;

    }
    isterminal=false;
 }   
};

class trie{

    public:

    trieNode * root;

    void insertutil(){

    }

    void insertWord(string word){

        insertutil(word);
    }


}



int main(){



}