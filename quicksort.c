# include <stdio.h>
# include <conio.h>
# include <time.h>
int partition(int a[], int low, int high)
{
 int i, j, key, temp;
 key=a[low];
 i=low;
 j=high;
 while(i<=j)
 {
while ( a[i] <= key )
i=i+1;
while ( a[j] > key )
j=j-1;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
 }
 temp=a[low];
 a[low]=a[j];
 a[j]=temp;
 return j;
}
void QuickSort(int a[],int low,int high)
{
 int k;
 if(low>=high)
return;
 k=partition(a,low,high);
 QuickSort(a, low, k-1);
 QuickSort(a, k+1, high);
 delay(1);
}
void main()
{
 int n, a[10000],k;
 clock_t st,et;
 float ts;
 clrscr();
 printf("\n Enter How many Numbers:");
 scanf("%d", &n);
 printf("\nThe Random Numbers are:\n");
 for(k=1; k<=n; k++)
 {
 a[k]=rand();
 printf("%d\t", a[k]);
 }
 st=clock();
 QuickSort(a, 1, n);
 et=clock();
 ts=et-st/CLOCKS_PER_SEC;
 printf("\n Sorted Numbers are : \n ");
 for(k=1; k<=n; k++)
 printf("%d\t", a[k]);
 printf("\nThe time taken is %f",ts);
 getch();
}
