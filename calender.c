#include<stdio.h>
void month(int ch)
{
	int i;
	switch(ch)
	{
		case 1:
			for(i=1;i<=31;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 2:
			for(i=1;i<=28;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 3:
			for(i=1;i<=30;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 4:
			for(i=1;i<=30;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 5:
			for(i=1;i<=31;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 6:
			for(i=1;i<=30;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 7:
			for(i=1;i<=31;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 8:
			for(i=1;i<=31;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 9:
			for(i=1;i<=30;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 10:
			for(i=1;i<=31;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 11:
			for(i=1;i<=31;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		case 12:
			for(i=1;i<=31;i++)
			{
				printf("%d    ",i);
				if(i==7||i==14||i==21||i==28)
					printf("\n\n");
			}
			break;
		default :
			printf("invalid month\n");
	}
}

int main()
{
	int ch;
	printf("Enter a month\n");
	scanf("%d",&ch);
	
	month(ch);
	return 0;
}
