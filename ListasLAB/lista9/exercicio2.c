#include <stdio.h>

int main () {

    int x, y, *p;
    y = 0; 
    p = &y; 
    x = *p; 
    x = 4; 
    (*p)++; 
    --x; 
    *p = *p + x;

    printf ("%d %d %d\n", x, y, *p);
    return 0;
 }