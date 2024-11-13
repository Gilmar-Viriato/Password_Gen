#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PW_LEN (10)


int main(){
     
    srand(time(NULL));
    int len;


    do
    {
        printf("Qual tamanho da senha que o senhor quer gerar:\n");
        scanf("%d", &len);
    } while (len <= 0);
    
    char senha[len]; 

    for(int i = 0; i < len; i++)
    {
        senha[i] = rand()%('z' - 'a' + 1) + 'a';
        if(rand()%2 != 0){
            senha[i] += 'A' - 'a'; 
        }
    }
    
    printf("\n");

    for(int i = 0; i < len; i++){
        printf("%c", senha[i]);
    }

    return 0;
}