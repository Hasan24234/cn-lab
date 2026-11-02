/* Experiment 3: Checksum */
#include<stdio.h>
int main(){
int n,i;
unsigned int data[20],sum=0,checksum,receiver;
printf("Enter number of data words: ");
scanf("%d",&n);
if(n<1||n>20){printf("Invalid number of words.\n");return 1;}
printf("Enter data words in hexadecimal:\n");
for(i=0;i<n;i++){
scanf("%x",&data[i]);
sum+=data[i];
while(sum>>16)sum=(sum&0xFFFF)+(sum>>16);
}
checksum=~sum&0xFFFF;
printf("Checksum: %04X\n",checksum);
receiver=sum+checksum;
while(receiver>>16)receiver=(receiver&0xFFFF)+(receiver>>16);
if(receiver==0xFFFF)printf("No error detected.\n");
else printf("Error detected.\n");
return 0;
}
