/* Experiment 8: Stop-and-Wait */
#include<stdio.h>
int main(){
int n,i,ack;
printf("Enter number of frames: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("\nFrame %d sent.",i);
printf("\nEnter acknowledgement for Frame %d, 1 for ACK, 0 for NACK: ",i);
scanf("%d",&ack);
if(ack==1)printf("ACK received for Frame %d\n",i);
else{
printf("ACK not received. Retransmitting Frame %d\n",i);
i--;
}
}
printf("\nAll frames transmitted successfully.\n");
return 0;
}
