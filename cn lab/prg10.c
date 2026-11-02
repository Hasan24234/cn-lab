/* Experiment 10: Dijkstra Shortest Path */
#include<stdio.h>
#define INF 9999
#define MAX 10
int main(){
int cost[MAX][MAX],distance[MAX],visited[MAX];
int n,source,i,j,count,min,next;
printf("Enter number of vertices (max 10): ");
scanf("%d",&n);
if(n<1||n>MAX){printf("Invalid number of vertices.\n");return 1;}
printf("Enter cost matrix, use 9999 for no edge:\n");
for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&cost[i][j]);
printf("Enter source vertex (0 to %d): ",n-1);
scanf("%d",&source);
if(source<0||source>=n){printf("Invalid source.\n");return 1;}
for(i=0;i<n;i++){distance[i]=cost[source][i];visited[i]=0;}
distance[source]=0;
for(count=0;count<n;count++){
min=INF;next=-1;
for(i=0;i<n;i++)if(!visited[i]&&distance[i]<min){min=distance[i];next=i;}
if(next==-1)break;
visited[next]=1;
for(i=0;i<n;i++)if(!visited[i]&&cost[next][i]<INF&&min+cost[next][i]<distance[i])distance[i]=min+cost[next][i];
}
printf("\nShortest distances from source vertex %d:\n",source);
for(i=0;i<n;i++)if(i!=source){
if(distance[i]>=INF)printf("To vertex %d = Unreachable\n",i);
else printf("To vertex %d = %d\n",i,distance[i]);
}
return 0;
}
