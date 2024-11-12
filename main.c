#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PW_LEN (10)


main(){
     
    srand(time(NULL));
    char senha[PW_LEN]; 

    for(int i = 0; i < PW_LEN; i++)
    {
        senha[i] = rand()%('z' - 'a' + 1) + 'a';
        if(rand()%2 != 0){
            senha[i] += 'A' - 'a'; 
        }
    }
    
    printf("\n");

    for(int i = 0; i < PW_LEN; i++){
        printf("%c", senha[i]);
    }

    return 0;
}