#include<stdio.h>
#include<conio.h>
#include<time.h>
void selectionsort(int a[10000],int n)
{
int i,j,min,temp,pos;
for(j=0;j<n-1;j++)
{
pos=j;
for(i=j+1;i<n;i++)
{
if(a[i]<a[pos])
{
pos=i;
}
}
temp=a[j];
a[j]=a[pos];
a[pos]=temp;
}
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
selectionsort(a, n);
et=clock();
ts=et-st/CLOCKS_PER_SEC;
printf("\n Sorted Numbers are : \n ");
for(k=1; k<=n; k++)
printf("%d\t", a[k]);
printf("\nThe time taken is %f",ts);
getch();
}
