#include<stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    char x;

    printf("Entrer une alphabet : ");
    scanf("%c",&x);
    printf("\n");
    if ((int)x>=65 && (int)x<=90){
        
        printf("alphabet majuscule ");
        
    }else if((int)x<65 || (int)x>90){
        
        printf("alphabet non majuscule ");
        
    }
    printf("%d",x);
}
