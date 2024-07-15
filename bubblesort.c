#include<stdio.h>
#include<conio.h>
#include<time.h>
void bubblesort(int a[10000],int n)
{
	int i,j,temp;
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}

void main()
{
	int n, a[10000],k;
	clock_t st,et;
	float ts;
	clrscr();
	printf("\n Enter Numbers of elements:");
	scanf("%d", &n);
	printf("\nThe Random Numbers are:\n");
	for(k=1; k<=n; k++)
	{
		a[k]=rand();
		printf("%d\t", a[k]);
	}
	st=clock();
	bubblesort(a, n);
	et=clock();
	ts=et-st/CLOCKS_PER_SEC;
	printf("\n Sorted Numbers are : \n ");
	for(k=1; k<=n; k++)
		printf("%d\t", a[k]);
	printf("\nThe time taken is %f",ts);
	getch();
}
