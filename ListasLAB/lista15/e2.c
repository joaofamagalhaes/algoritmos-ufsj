#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x = (int *)malloc(sizeof(int));
    *x = 5;
    free(x);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x = (int *)malloc(sizeof(int));
    *x = 5;
    free(x);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x = (int *)malloc(sizeof(int));
    *x = (int *)malloc(sizeof(int));
    free(x);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x = (int *)malloc(sizeof(int));
    int *y = x;
    free(x);
    return 0;
}
