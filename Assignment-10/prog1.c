#include<stdio.h>
    float func(float r);
int main()
{
    func(10);
   
}
    float func(float r)
        {
            float sum;
            sum = 3.14*r*r;
            printf("%f",sum);
            return 1;
        }
       
