//string containing equal number of 1s and 0s starting with zero
#include<stdio.h>
#include<string.h>
#define max 20
int main()
{
    char input_string[20];
    int len,i,flag;
    int counter1=0;
    int counter2=0;
    flag=1;
    printf("Enter the input string:\n");
    scanf("%s",&input_string);
    len=strlen(input_string);
    for(i=0;i<len;i++){
        if(input_string[i]!='1'&&input_string[i]!='0'){
           flag=0;
        }
    }
    if(flag==0){
        printf("Invalid Input String");
    }
    if(flag!=0 && len%2==0 && input_string[0]=='0'&& input_string[len-1]=='1'){
        for(i=0;i<len/2;i++){
            if(input_string[i]=='0'){
                counter1++;
            }
        }
        for(i=len/2;i<len;i++){
            if(input_string[i]=='1'){
                counter2++;
            }
        }
    if(counter1==counter2)
       printf("The string is accepted");
    else
       printf("The string is not accepted");
    }
    else{
        printf("The string is not accepted");
    }
    
    return 0;
}