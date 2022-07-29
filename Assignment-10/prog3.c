#include<stdio.h>
#include<conio.h>
 int function(int x);
 int main()
 {
   function(3);
 }
 int function(int x)
 {
    if (x%2==0)
    {
        printf("The given number is even");
        return 1;
    }
    else 
    {
        printf("The given number is odd");
         return 0;
    }
    
    
 }