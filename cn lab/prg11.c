/* Experiment 11: Distance Vector Routing */
#include<stdio.h>
#define MAX 10
#define INF 999
int main(){
int cost[MAX][MAX],dist[MAX][MAX],next[MAX][MAX];
int n,i,j,k,changed;
printf("Enter number of nodes (max 10): ");
scanf("%d",&n);
if(n<1||n>MAX){printf("Invalid number of nodes.\n");return 1;}
printf("Enter cost matrix, use 999 for no direct link:\n");
for(i=0;i<n;i++)for(j=0;j<n;j++){
scanf("%d",&cost[i][j]);
if(i==j)cost[i][j]=0;
dist[i][j]=cost[i][j];
next[i][j]=j;
}
do{
changed=0;
for(i=0;i<n;i++)for(j=0;j<n;j++)for(k=0;k<n;k++){
if(cost[i][k]!=INF&&dist[k][j]!=INF&&dist[i][j]>cost[i][k]+dist[k][j]){
dist[i][j]=cost[i][k]+dist[k][j];
next[i][j]=k;
changed=1;
}
}
}while(changed);
for(i=0;i<n;i++){
printf("\nRouting table for node %d:\n",i);
printf("Destination\tNext Hop\tDistance\n");
for(j=0;j<n;j++)printf("%d\t\t%d\t\t%d\n",j,next[i][j],dist[i][j]);
}
return 0;
}
