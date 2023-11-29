#include <stdio.h>

char maiusculo(char x){
   
   if (x > 96 && x < 123){
   char maiusculo = x - 32;
   printf ("%c\n", maiusculo);
   } else if (x > 64 && x < 91){
    printf ("%c\n", x);
   } else{     
    printf ("Nao eh uma letra!\n");
    }
}


int main (){ 
    
    char x;
    scanf("%c", &x);
    maiusculo(x);
    
    return 0;
}