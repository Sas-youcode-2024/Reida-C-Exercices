#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    char lettre;
    
    printf("entrer une lettre : ");
    scanf("%c",&lettre);
    
    printf("\n");
   switch(lettre){
       case 'a':
       printf("voyelle");
       break;
       case 'i':
       printf("voyelle");
       break;
       case 'o':
       printf("voyelle");
       break;
       case 'u':
       printf("voyelle");
       break;
       case 'e':
       printf("voyelle");
       break;
       default:
       printf("non voyelle");
       break;
       
   }
    
    
    
}