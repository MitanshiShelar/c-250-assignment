#include<stdio.h>
 float fahrenheit_to_celsius(float);
 float fahrenheit_to_celsius(float feh)
{ 
  float cel;
  cel=(feh-32)*5/9.0f;
  return(cel);
}
 
 int main()
 {
    float n,result;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&n);
    result=fahrenheit_to_celsius(n);
    printf("Temperature in celsius:%.2f",result);
    return 0;
 
 }
