#include<stdio.h>
#include<string.h>
int main(){
char data[100],stuffed[200];
char flag='F',esc='E';
int i,j=0;
printf("Enter the data string: ");
scanf("%s",data);
stuffed[j++]=flag;
for(i=0;i<strlen(data);i++){
if(data[i]==flag||data[i]==esc){
stuffed[j++]=esc;
}
stuffed[j++]=data[i];
}
stuffed[j++]=flag;
stuffed[j]='\0';
printf("\nOriginal Data: %s",data);
printf("\nStuffed Frame: %s\n",stuffed);
return 0;
}