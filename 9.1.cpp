#include<stdio.h>
#include<stdlib.h>
#define n 5
void enqueue(int);
void dequeue();
void display();
int queue[n],front=-1,rear=-1;
int main()
{
	int value,ch;
	printf("\n*****QUEUE OPERATIONS USING ARRAY*****\n");
	printf("1.enqueue\t 2.deletion\t 3.display\t 4.exit");
	while(1)
	{
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
	    	case 1:enqueue(value);
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default: printf("\n Wrong choice! Please check options");
	    }
	}
	
}
void enqueue(int value)

{
	if(rear==n-1)
	{
		printf("\n queue over flow");
	}
	else
	{
		printf("enter the value to insert:");
		scanf("%d", &value);
		if(front==-1)
			front=0;
			rear++;
			queue[rear]=value;
	}
}
void dequeue()
{
	if(front==-1|| front>rear)
	{
		printf("\n queue under flow");
	}
	else
	{
		printf("\n deleted elements is %d",queue[front]);
		front++;
        if(front>rear)
		{
        	front=rear=-1;	
		}
	} 
}
void display()
{
	if(front==-1||front>rear)
	{
		printf("\n queue is empty!!!");
	}
	else
	{
		int i;
		printf("\n queue elements are :\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d \t",queue[i]);
		}
	}
}
