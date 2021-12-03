#include<stdio.h>
 float celsius_to_fahrenheit(float);
 float celsius_to_fahrenheit(float cl)
{ 
  float fh;
  fh=(cl*1.8)+32;
  return(fh);
}
 
 int main()
 {
    float n,result;
    printf("Enter temperature in celsius:");
    scanf("%f",&n);
    result=celsius_to_fahrenheit(n);
    printf("Temperature in fahrenheit:%.2f",result);
    return 0;
 
 }
