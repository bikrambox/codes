#include
 	void main()
	{
		int a[100],n,i;
		printf("how many ele");
		scanf("%d",&a[i]);
		for(i=0;i< n ;i++)
		{
			scanf("%d",&a[i]);
		}
		selection_sort(a,n);
		for(i=0;i< n ;i++)
		{
			printf("sorted array");
			for(i=0;i<=n;i++)
			{
				printf("%d",a[i]);
			}
		}
	}
	void selection_sort(int a[],int n)
	{
		int min,loc,temp,i,j;
		min=a[0];
		for(i=0;i<=n-1;i++)
		{
			min=a[i];
			oc=i;
			for(j=i+1;j<=n-1;j++)
			{
				if(a[j]< min)
				{
					if(a[j]< min)
					{
						min=a[j];
						loc=j;
					}
				}
				if(loc 1=i)
				{
					temp=a[i];
					a[i]=a[loc];
					a[loc]=temp;
				}
			}
		}
	}

        
