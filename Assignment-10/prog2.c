#include<stdio.h>
#include<conio.h>

int myfunc(int principle, int rate,int time );

int main()
{
    myfunc(815,3,4);
}
int myfunc(int principle,int rate,int time)
{
    float intrest;
    // printf("Enter P , R & T:-\n");
    // scanf("")
    intrest = principle*rate*time/100;
    printf("%f",intrest);
      return 1;
}