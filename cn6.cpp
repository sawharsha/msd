#include<stdio.h>
int main()
{
	int windowsize,sent=0,ack,i,c;
	printf("enter window size\n");
	scanf("%d",&windowsize);
	while(1)
	{
		    for( i = 0; sent < windowsize; i++)
			{
				printf("Frame %d has been transmitted.\n",sent);
				sent++;
				if(sent == windowsize)
					break;
			}
			printf("\nPlease enter your choice : \n 1-for lost data or ack or delay ack \n 2-for exit\n chioce:");
			scanf("%d",&c);
			
			if(c == 1)
			{
				printf("\n enter the frame number:");
				scanf("%d",&ack);
				for( i = ack; i < windowsize; i++)
				{
				printf("Frame %d has been re transmitted.\n",i);
				if(i == windowsize)
					break;
				
				}
			}
				
			else
				return 0;
	}
return 0;
}

