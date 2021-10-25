#include <stdio.h>
#include <stdlib.h>

int main()
{
    int imenilac=8522, brojilac=520;
    //int pokusaj=0;
    int veci;
    int i=1;
    if(brojilac>=imenilac){
            veci=brojilac;
    }else{
        veci=imenilac;
    }


    while(i<=veci){
        if(imenilac%i==0 && brojilac%i==0){
          brojilac=brojilac/i;
          imenilac=imenilac/i;
          printf("%d \n",i);
        }i++;


        }

    if(imenilac%2==0 && brojilac%2==0){
        brojilac=brojilac/2;
        imenilac=imenilac/2;
    }



 /*   while(imenilac %2==0 && pokusaj==0){
        if(brojilac%2==0){
            brojilac=brojilac/2;
            imenilac=imenilac/2;
        }else{
            pokusaj=1;
        }
    }
    pokusaj=0;
    while(imenilac % 3==0 && pokusaj==0){
        if(brojilac%3==0){
            brojilac=brojilac/3;
            imenilac=imenilac/3;
        }else{
            pokusaj=1;
        }
    }

    pokusaj=0;
    while(imenilac % 5==0 && pokusaj==0){
        if(brojilac%5==0){
            brojilac=brojilac/5;
            imenilac=imenilac/5;
        }else{
            pokusaj=1;
        }
    }

    pokusaj=0;
    while(imenilac % 7==0 && pokusaj==0){
        if(brojilac%7==0){
            brojilac=brojilac/7;
            imenilac=imenilac/7;
        }else{
            pokusaj=1;
        }
    }*/

    printf("%d %d",brojilac, imenilac);
}
