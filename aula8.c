#include <stdio.h>

int main ()
{
    int v[10];
    int i;
    for(i=0; i<10; i++)
    {
        v[i]= i;
    }
    for(int i=0; i<=10; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}