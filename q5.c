// WAP to print first 10 odd natural numbers in reverse order

#include <stdio.h>
int main()
{
    int n ,i;
    for ( i = 9; i>= 0; i--)
    {
        printf("%d\n", 2*i+1);
    }
    
    return 0;
}