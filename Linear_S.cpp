
# include
# include
void main()
	{
		int a[100],n,i,item,loc=-1;
		clrscr();
		printf("\n enter number of element");
		scanf("%d",&n);
		printf("enter the numbers");
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("eneter number to be searched");
		scanf("%d",&item);
		for(i=0;i<=n-1;i++)
		{
			if(item==a[i])
			{
				loc=f;
				break;
			}
		}
		if(loc>=0)
			printf("%d  is found in position %d" ,item,loc+1);
		else
			printf("item not exit");
		getch();
}
	
