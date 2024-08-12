#include<stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    char x;

    printf("Entrer un caractère : ");
    scanf("%c",&x);
    printf("\n");
    
    if((int)x>=65 && (int)x<=122){
        
        if((int)x>=65 && (int)x<=90){
            
            printf("majuscule");
        
        }else if((int)x>=97 && (int)x<=122){
            
            printf("minuscule");
            
        }else {
            
            printf("non alphabets ");
            
        }
    }else{
        
        printf("non alphabets ");
        
    }
    
}
