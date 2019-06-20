 # include
void main()
{
	int a[100],n,i;
	printf("how many element in array");
	scanf("%d",&i);
	for(i=0;i <=n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	printf("sorted lines follows");
	for(i=0;i < n;i++)
	{
		printf("%d",a[i]);
	}
	void bubble_sort(int a[],int n)
	{
		int temp,i,j;
		for(i=0;i < n ;i++)
		{
			for(j=0;j < n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}

}
			
