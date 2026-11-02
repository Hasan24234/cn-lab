/* Experiment 7: Selective Repeat */
#include<stdio.h>
int main(){
int n,ack[50],i,flag=0;
printf("Enter number of frames (max 49): ");
scanf("%d",&n);
if(n<1||n>49){printf("Invalid number of frames.\n");return 1;}
printf("\nSending frames:\n");
for(i=1;i<=n;i++)printf("Frame %d sent\n",i);
printf("\nEnter 1 for received, 0 for lost:\n");
for(i=1;i<=n;i++){
printf("Frame %d: ",i);
scanf("%d",&ack[i]);
}
printf("\nRetransmission Process:\n");
for(i=1;i<=n;i++){
if(ack[i]==0){
printf("Frame %d lost. Retransmitting Frame %d\n",i,i);
ack[i]=1;
flag=1;
}
}
if(flag==0)printf("All frames received successfully. No retransmission needed.\n");
printf("\nFinal Status:\n");
for(i=1;i<=n;i++)printf("Frame %d received successfully\n",i);
return 0;
}
