#include<stdio.h>
void count_notes(int);
void count_notes(int amount)
{
  int n2000,n500,n200,n100,n50,n20,n10,n5;
 int temp;
  temp=amount;
 if(amount>=5)
 {
  n2000=amount/2000;
  amount=amount-(n2000*2000);
  
  n500=amount/500;
  amount=amount-(n500*500);
  
  n200=amount/200;
  amount=amount-(n200*200);
  
  n100=amount/100;
  amount=amount-(n100*100);    
  
  n50=amount/50;
  amount=amount-(n50*50);
  
  n20=amount/20;
  amount=amount-(n20*20);
  
  n10=amount/10;
  amount=amount-(n10*10);   
  
  n5=amount/5;
  amount=amount-(n5*5);
  
  printf("%d amount contains\n",temp);
  
  if(n2000)
  printf("%d notes of 2000\n",n2000);
  
  if(n500)
  printf("%d notes of 500\n",n500);
  
  if(n200)
  printf("%d notes of 200\n",n200);
  
  if(n100)
  printf("%d notes of 100\n",n100);  
  
  if(n50)
  printf("%d notes of 50\n",n50);
  
  if(n20)
  printf("%d notes of 20\n",n20);
  
  if(n10)
  printf("%d notes of 10\n",n10);
  
  if(n5)
  printf("%d notes of 5\n",n5);    
 
 }
 }
int main()
{
 int amount;
 printf("Enter the amount:\n");
 scanf("%d",&amount);
  count_notes(amount);
}
