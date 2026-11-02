/* Experiment 9: Leaky Bucket */
#include<stdio.h>
int main(){
int bucketSize,outputRate,n,incoming,stored=0,dropped,i,sent;
printf("Enter bucket size: ");
scanf("%d",&bucketSize);
printf("Enter output rate: ");
scanf("%d",&outputRate);
printf("Enter number of cycles: ");
scanf("%d",&n);
if(bucketSize<1||outputRate<1||n<1){printf("Invalid input.\n");return 1;}
for(i=1;i<=n;i++){
printf("\nEnter incoming packets at cycle %d: ",i);
scanf("%d",&incoming);
if(incoming+stored>bucketSize){
dropped=incoming+stored-bucketSize;
stored=bucketSize;
}else{
stored+=incoming;
dropped=0;
}
printf("Incoming packets: %d\nDropped packets: %d\n",incoming,dropped);
sent=stored<outputRate?stored:outputRate;
stored-=sent;
printf("Packets sent: %d\nPackets remaining in bucket: %d\n",sent,stored);
}
return 0;
}
