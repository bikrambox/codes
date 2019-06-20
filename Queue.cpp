
#include
#include
int queue[5]; 
long front,rear;
void main() 
{ 
       int choice,info; 
        clrscr();
         initqueue();
        do
       {
       	clrscr();
        	printf("menu\n");
         	printf("1.insert an element in queue\n");
         	printf("2.delete an element in queue\n");
        	printf("1.insert an element in queue\n");
                 printf("3.Display the Queue\n");
         	printf("4.Exit\n");
        	printf("Your choice");
                 scanf("%i,&choice");
         	switch(choice)
	{
		case 1:if(rear<4)
		{
			printf("enter number");
			scanf("%d",&info);
			if(front==-1)
			{
				front=0;
				rear=0
			}
			else
			{
				rear=rear+1;
				queue[rear]=info
			}
			else
			{
				printf("queue is full");
				getch();
				break;
			}
		case 2:int info;
			if(front!=-1)
			{
				info=queue[front];
				if(front==rear)
				{
					front=-1;
					rear=-1;
				}
				else
				{
					front=front+1;
					printf("no deleted is=%d",info);
			                  }
				else
				{
                                                                                      printf("Queue is empty");
					getch();
					break;
				}
                                   case 3:display();
                                                 getch();
                                                 break;
		case 4:exit(0);
			default:printf("you are entered wrong choice");
			while(choice!=4);
		}
		
	}
	}
	void initqueue()	{
		front=rear=-1;
	}
		/*display the current position of the array*/
 	void display()
	{
		int i;//display element in Queue
		for(i=front;i<=rear;i++)
			printf("%i\n",queue[i]);
	}
	
