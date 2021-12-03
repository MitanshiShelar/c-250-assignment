#include<stdio.h>
  int profit_loss(int,int);
  int profit_loss(int cp,int sp)
    {
      if(sp>cp)
        printf("your profit is %d\n",sp-cp);
      else if (cp>sp)
        printf("your loss is %d\n",cp-sp);
      else
        printf("you have neither profit nor loss");
        
    }
    int main()
    {
      int CP,SP;
       printf("Enter your cost price:\n");
       scanf("%d",&CP);
       printf("Enter your selling price:\n");
       scanf("%d",&SP);
       profit_loss(CP,SP);
    }
