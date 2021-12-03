#include<stdio.h>
float area(float);
float area(float r) 
{
  float are;
  are =(3.14*r*r);
  return(are); 
}

 float circum(float);
 float circum(float y)
   {
      float circ;
      circ =2*(3.14)*y;
      return(circ);
   }  
   
   int main()
     {
        float radius,x,y;
        printf("Enter the radius\n");
        scanf("%f",&radius);
        
        x=area(radius);
        printf("Area of circle is:%.2f\n",x);
        
        y=circum(radius);
        printf("circumference of circle is:%.2f\n",y);
        
         return 0;
     }
