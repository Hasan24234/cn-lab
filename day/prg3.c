#include<stdio.h>
int main(){
int n,i;
unsigned int data[20],sum=0,checksum;
printf("Enter number of data words: ");
scanf("%d",&n);
printf("Enter data words in hexadecimal:\n");
for(i=0;i<n;i++){
scanf("%x",&data[i]);
sum+=data[i];
while(sum>>16)
sum=(sum&0xFFFF)+(sum>>16);
}
checksum=~sum&0xFFFF;
printf("\nSum = %04X",sum);
printf("\nChecksum = %04X",checksum);
sum+=checksum;
while(sum>>16)
sum=(sum&0xFFFF)+(sum>>16);
if((sum&0xFFFF)==0xFFFF)
printf("\nNo Error Detected.\n");
else
printf("\nError Detected.\n");
return 0;
}