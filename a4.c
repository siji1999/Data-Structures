#include<stdio.h>
int main(){
int mark[10],i,n,sum = 0,average;
printf("enter the number of elements: ");
     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &mark[i]);
          
          
          sum += mark[i];
     }

     average = sum/n;
     printf("Average = %d", average);

     return 0;
}

