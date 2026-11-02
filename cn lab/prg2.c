/* Experiment 2: Bit Stuffing */
#include<stdio.h>
#include<string.h>
int main(){
char data[100],stuffed[200];
int i,j=0,count=0;
printf("Enter the bit string: ");
scanf("%99s",data);
for(i=0;i<strlen(data);i++){
stuffed[j++]=data[i];
if(data[i]=='1'){
count++;
if(count==5){
stuffed[j++]='0';
count=0;
}
}else count=0;
}
stuffed[j]='\0';
printf("\nOriginal Data: %s",data);
printf("\nStuffed Data: %s\n",stuffed);
return 0;
}
