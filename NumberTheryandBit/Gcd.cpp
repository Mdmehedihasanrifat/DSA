#include <stdio.h>


int main() {
	static int num=5;

    cout<<num;
    if(num){
        main();
    }
	return 0;
}