# include
void main()
{
	int a[100],n,k,i,j,temp;
	clrscr();
	printf("enter ele in array");
	scanf("%d",&n);
	printf("enter ele in array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=1;k<=n-1;k++)
	{
		temp=a[k];
		j=k-1;
		while((temp=0))
		{
			a[j+1]=a[j];j=j-1;
		}
		a[j+1]=temp;
	}
	printf("ele of array after sorting");
	for(i=0;i< n ;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}

