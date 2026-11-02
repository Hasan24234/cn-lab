#include<stdio.h>

int main(){
int totalFrames,windowSize,i=1,j,ack;

printf("Enter total number of frames: ");
scanf("%d",&totalFrames);

printf("Enter window size: ");
scanf("%d",&windowSize);

while(i<=totalFrames){
printf("\nSending frames: ");

for(j=i;j<i+windowSize&&j<=totalFrames;j++)
printf("%d ",j);

printf("\nEnter last acknowledged frame: ");
scanf("%d",&ack);

if(ack<i)
printf("Invalid acknowledgement. Resending from frame %d\n",i);
else
i=ack+1;
}

printf("\nAll frames sent successfully.\n");
return 0;
}