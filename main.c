#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PW_LEN (10)


main(){
    int i; 
    srand(time(NULL));
    printf("\n");
    char senha[PW_LEN]; 

    for(i = 0; i < PW_LEN; i++)
    {
        char letra = rand()%('Z' - 'A' + 1) + 'A';
        printf("%c", letra);
        senha[i] = letra;
    }

    printf("\n");

    for(i = 0; i < PW_LEN; i++){
    printf("%c", senha[i]);
    }

    return 0;
}