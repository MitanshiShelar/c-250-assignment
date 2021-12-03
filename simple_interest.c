#include<stdio.h>
float SI(float,float,float);
float SI(float P,float R,float T) 
{
  float result;
  result =(P*R*T)/100;
  return(result);
}
   int main()
     {
        float a,b,c,interest;
        printf("Enter the Principle\n");
        scanf("%f",&a);
        printf("Enter the Rate\n");
        scanf("%f",&b);
        printf("Enter the Time\n");
        scanf("%f",&c);
        interest=SI(a,b,c);
        printf("\n Simple interest is :%.2f\n",interest);
        printf("\n");
         return 0;
     }
