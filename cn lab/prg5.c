/* Experiment 5: CRC-12, CRC-16 and CRC-CCITT */
#include<stdio.h>
#include<string.h>
void xorOperation(char dividend[],char divisor[],int pos){
for(int i=0;i<strlen(divisor);i++)
dividend[pos+i]=(dividend[pos+i]==divisor[i])?'0':'1';
}
void crc(char data[],char divisor[]){
char temp[250],remainder[50];
int dataLen=strlen(data),divLen=strlen(divisor);
strcpy(temp,data);
for(int i=0;i<divLen-1;i++)temp[dataLen+i]='0';
temp[dataLen+divLen-1]='\0';
for(int i=0;i<=strlen(temp)-divLen;i++)
if(temp[i]=='1')xorOperation(temp,divisor,i);
strncpy(remainder,temp+dataLen,divLen-1);
remainder[divLen-1]='\0';
printf("\nCRC Remainder: %s",remainder);
printf("\nTransmitted Codeword: %s%s\n",data,remainder);
}
int main(){
char data[100];
int choice;
printf("Enter binary data: ");
scanf("%99s",data);
printf("\n1. CRC-12\n2. CRC-16\n3. CRC-CCITT\nEnter your choice: ");
scanf("%d",&choice);
if(choice==1)crc(data,"1100000001111");
else if(choice==2)crc(data,"11000000000000101");
else if(choice==3)crc(data,"10001000000100001");
else printf("Invalid choice.\n");
return 0;
}
