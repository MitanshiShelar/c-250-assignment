online
TODAY
#include<stdio.h>
void function(int);
void function(int x)
{
	
  int a,b,centigrade, fahrenheit;
  switch(x)
 {
 case 1:
       printf("\nEnter The Value of Fahrenheit Temperature: ");
       scanf("%d",&a);
       centigrade=5*(a-32)/9;
       printf("\n\nCelsius Temperature: %d ",centigrade);
 break;
 case 2:
       printf("\nEnter The Value of Celsius Temperature: ");
       scanf("%d",&b);
       fahrenheit=((9*b)/5)+32;
       printf("\n\nFahrenheit Temperature: %d ",fahrenheit);
  break;
 default:
       printf("\n\nWrong Choice.....Try Again!!!\n");
 }	
}
main()
{

 
 int x;
 printf("1. For Fahrenheit To Celsius\n");
 printf("2. For Celsius To Fahrenheit\n");
 printf("\n\nEnter Your Choice\n");
 
 scanf("%d",&x);
 function(x);

 return 0;
}
4:15 PM
#include<stdio.h>
void func(int);
void func(int week)
{
	 switch(week)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.");
    }
}

int main()
{
    int week;
    
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
    
    func(week);

    return 0;
}
4:16 PM
#include <stdio.h>
void func();
void func()
{
	char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }
}
int main() {
  
  func();
  return 0;
}
4:17 PM
#include<stdio.h>
void function(int);
void function(int score)
{
	switch( score / 10 )
   {

   case 10:
   case 9:
     printf("Grade: A");
     break;

   case 8:
     printf("Grade: B");
     break;

   case 7:
     printf("Grade: C");
     break;

   case 6:
     printf("Grade: D");
     break;

   case 5:
     printf("Grade: E");
     break;

   default:
     printf("Grade: F");
     break;

   }

}
int main()
{
   int score;

   printf("Enter score( 0-100 ): ");
   scanf("%d", &score);
   function(score);
   
   return 0;
}
4:18 PM
#include<stdio.h>
//void function(int);
void function(int choice,float radius)
{   

	float area,circum,volume,h;
	switch(choice)
	{
	case 1 :

	area = 3.14 * radius * radius;
	printf("Area of circle is %.2f",area);
	break;
	case 2 :
	
	circum = 2 * 3.14 * radius ;
	printf("Circumfrence is %.2f",circum);
	break;
	case 3 :


	volume = 3.14 * radius * radius * h;
	printf("Volume of Cylinder is %.2f",volume);
	break;
	default:
    printf("Sorry, Invalid Choice\n");	
	}
}
int main()
{
	int choice;
	float radius;
	printf("Select your Choice\n");
    
	printf("1. Area of Circle\n");
	printf("2. Area of Circumfence\n");
	printf("3. Volume of Cylinder\n");
	scanf("%d",&choice);
	printf("Enter Radius :\n");
	scanf("%f",&radius);
	function(choice,radius);
	return 0;
}
