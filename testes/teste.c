#include <stdio.h>

int main (){

    int f, c;
    scanf("%d", &f);
    c = f;
    for (int i = c; i >= 0; i++)
    {
          f = f * (f - 1);
          c--;
         
    }
     printf("%d\n", f);
    
    return 0;
}