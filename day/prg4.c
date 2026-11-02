#include<stdio.h>
int main(){
int data[4],h[8],r[8];
int p1,p2,p4,error;
printf("Enter 4 data bits: ");
scanf("%d%d%d%d",&data[0],&data[1],&data[2],&data[3]);
h[3]=data[0];
h[5]=data[1];
h[6]=data[2];
h[7]=data[3];
h[1]=h[3]^h[5]^h[7];
h[2]=h[3]^h[6]^h[7];
h[4]=h[5]^h[6]^h[7];
printf("\nGenerated Hamming Code: ");
for(int i=1;i<=7;i++)
printf("%d",h[i]);
printf("\nEnter received 7-bit code: ");
for(int i=1;i<=7;i++)
scanf("%d",&r[i]);
p1=r[1]^r[3]^r[5]^r[7];
p2=r[2]^r[3]^r[6]^r[7];
p4=r[4]^r[5]^r[6]^r[7];
error=p4*4+p2*2+p1;
if(error==0)
printf("\nNo Error Detected.\n");
else{
printf("\nError detected at position: %d",error);
r[error]=!r[error];
printf("\nCorrected Hamming Code: ");
for(int i=1;i<=7;i++)
printf("%d",r[i]);
printf("\n");
}
return 0;
}