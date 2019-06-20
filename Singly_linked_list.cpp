
#include
#include
void main()               
{               
	struct node               
	{               
		int num ;               
		struct node *next ;               
	} *start = NULL ;               
	typedef struct node NODE;                              
	NODE *p, *first = NULL, *temp ;                              
	int count = 0;               
	char choice ;               
	clrscr();               
	do               
	{               
		p= (NODE *) malloc (sizeof (NODE)) ;               
		printf ("Enter the data item \n") ;                              
		scanf ("%d", &p -> num) ;               
		if (p == NULL)	               
		{               
			p -> next = start ;               
			start = p ;              
		}               
		else               
		{               
			q = start;               
			while(q  -> next != NULL)               
			{               
				q = q -> next ;               
			}	               
			p -> next = q -> next ;               
			q -> next = p;               
		}               
		printf ("Do you want to continue (type y or n) ? \n") ;               
		scanf ("%c", &choice) ;               
	}               
	while ((choice == 'y') || (choice == 'y')) ;               
		printf ("Status of the linked list is \n") ;               
	while (temp != NULL)               
	{               
		printf ("%d \n", temp -> num) ;               
		count ++ ;               
		temp = temp -> next ;               
	}               
	printf ("No of nodes in the list = %d \n", count) ;               
	getch();               
}
