#include<stdio.h>
#include<stdlib.h>

int main(){
    int imenilac=2, brojilac=2;
    int pokusaj=0;
    while(imenilac %2==0 && pokusaj==0){
        if(brojilac%2==0){
            brojilac=brojilac/2;
            imenilac=imenilac/2;
        }else{
            pokusaj=1;
        }
    }

    printf("%d %d",brojilac, imenilac);
}
