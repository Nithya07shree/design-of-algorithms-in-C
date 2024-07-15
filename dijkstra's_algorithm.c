#include<stdio.h>
#include<conio.h>
void dijkstra(int cost[10][10],int n,int src,int dist[10])
{
int vis[10],u,min,i,j,p[10];
for(i=0;i<n;i++)
{
dist[i]=cost[src][i];
vis[i]=0;
p[i]=src;
}
vis[src]=1;
for(i=0;i<n;i++)
{
min=999;
for(j=0;j<n;j++)
{
if(vis[j]==0 && dist[j]<min)
{
min=dist[j];
u=j;
}
}
vis[u]=1;
for(j=0;j<n;j++)
{
if(vis[j]==0 && (dist[u]+cost[u][j]<dist[j]))
{
dist[j]=dist[u]+cost[u][j];
p[j]=u;
}
}
}
for(i=0;i<n;i++)
{
printf("\n\nShortest path from %d to %d\n",src,i);
j=i;
while(j!=src)
{
printf("%d <- ",j);
j=p[j];
}
printf("%d",j);
printf("::Cost=%d\n",dist[i]);
}
}
void main()
{
int cost[10][10],n,src,dist[10],i,j;
clrscr();
printf("\n\n\n\n\n\n\n Enter the number of vertices:\n");
scanf("%d",&n);
printf("\n Enter the cost matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&cost[i][j]);
}
}
printf("\n Enter the source vertex:");
scanf("%d",&src);
dijkstra(cost,n,src,dist);
getch();
}
