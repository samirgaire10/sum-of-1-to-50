#include <stdio.h>
int main(void)
{
  int sum , num;
    sum = 0;
    printf("sum from 1 to 50::\n");
     for( num=1 ; num<=50; num++)
     {
           sum = sum + num ;
           printf("Remaining sum of %d to 50 ::  %d \n ",num,sum);
     }
     printf("The sum of 1 to 50 is %d",sum);
          return 0;
}



















































