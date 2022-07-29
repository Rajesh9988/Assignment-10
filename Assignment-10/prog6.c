#include <stdio.h>
#include <conio.h>
#include <math.h>

int fact(int n);
int main()
{
    fact(5);
}
int fact(int n)
{
    int i,fact=1;
    for ( i = 1; i <= n; i++)
    {
        fact = fact*i;
        // return fact;
    }
    printf("Factorial:- %d",fact);    
}