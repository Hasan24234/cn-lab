/* Experiment 12: Broadcast Tree using Prim's Algorithm */
#include<stdio.h>
#define MAX 10
#define INF 999999
int main(){
int graph[MAX][MAX],key[MAX],parent[MAX],used[MAX]={0};
int n,source,i,j,u,min,total=0;
printf("Enter number of hosts (max 10): ");
scanf("%d",&n);
if(n<1||n>MAX){printf("Invalid number of hosts.\n");return 1;}
printf("Enter cost adjacency matrix (0 means no direct link):\n");
for(i=0;i<n;i++)for(j=0;j<n;j++){
scanf("%d",&graph[i][j]);
if(i!=j&&graph[i][j]==0)graph[i][j]=INF;
}
printf("Enter source host index (0 to %d): ",n-1);
scanf("%d",&source);
if(source<0||source>=n){printf("Invalid source.\n");return 1;}
for(i=0;i<n;i++){key[i]=INF;parent[i]=-1;}
key[source]=0;
for(i=0;i<n;i++){
min=INF;u=-1;
for(j=0;j<n;j++)if(!used[j]&&key[j]<min){min=key[j];u=j;}
if(u==-1)break;
used[u]=1;
for(j=0;j<n;j++)if(!used[j]&&graph[u][j]<key[j]){
key[j]=graph[u][j];parent[j]=u;
}
}
printf("\nOptimal Broadcast Tree Edges (Parent --> Child [Cost]):\n");
for(i=0;i<n;i++)if(i!=source&&parent[i]!=-1){
printf("Host %d --> Host %d (Cost: %d)\n",parent[i],i,graph[i][parent[i]]);
total+=graph[i][parent[i]];
}
printf("\nTotal Broadcast Transmission Cost: %d\n",total);
return 0;
}
