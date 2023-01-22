//a C program to check whether a string belongs to the grammar satisfying 0n1m0n
#include<stdio.h>
#include<string.h>
int main(){
    char input_string[20];
    int i,flag,temp;
    printf("Enter the input string:\n");
    scanf("%s",&input_string);
    int len=strlen(input_string);
    flag=1;
    i=0;
    int counter1=0;
    int counter2=0;
    for(i=0;i<len;i++){
        if(input_string[i]!='1' && input_string[i]!='0'){
          flag=0;
        }
    }
    if(flag==0){
        printf("invalid input string");
    }
   if(input_string[0]=='0'&&input_string[len-1]=='0'){
   for(i=0;i<len;i++){
    if(input_string[i]=='0')
      counter1++;
    if(input_string[i]=='1')
       break;
   }
   for(i=len;i>0;i--){
    if(input_string[i]=='0')
      counter2++;
    if(input_string[i]=='1')
       break;
   }
   if(counter1==counter2){
    printf("The string is accepted");
   }
   else
   printf("The string is not accepted");
   }
   else
   printf("The string is not accepted");
   return 0;
   
}