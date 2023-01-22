//to check whether a string containing 101 as a substring is accepted by the grammar or not.
#include<stdio.h>
#include<string.h>
#define max 20
int main()
{
    char input_string[max];
    int len,i,flag,yes;
    printf("Enter the input string:\n");
    scanf("%s",&input_string);
    len=strlen(input_string);
    //checking string is containing 1 or 0
    flag=1;
    yes=0;
    for(i=0;i<len;i++){
        if(input_string[i]!='0'&&input_string[i]!='1'){
            flag=0;
        }
    }
    if(flag==0){
        printf("Invalid input string!\n");
    }
    if(flag!=0){
        for(i=0;i<len;i++){
            if(input_string[i]=='1'&&input_string[i+1]=='0'&&input_string[i+2]=='1'){
                yes=1;
                break;
            }
        }
    }
    if(yes==1)
        printf("The string is accepted by the grammar");
    else
        printf("The string is not accepted by the grammar");
    return 0;
    

}
