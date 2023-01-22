//palindrome string
#include<stdio.h>
#include<string.h>
int main()
{
    char input_string[100];
    int len,a,b,flag,flag1,i;
    printf("Enter the input string:\n");
    scanf("%s",&input_string);
    len=strlen(input_string);
    flag=1;
    for(i=0;i<len;i++){
        if(input_string[i]!='0'&&input_string[i]!='1'){
          flag=0;
        }
    }
    if(flag==0){
        printf("Invalid input string");
    }
    if(flag!=0){
        flag1=1;
        a=0,b=len-1;
        while(a!=(len/2)){
            if(input_string[a]!=input_string[b]){
               flag1=0;
            }
            a=a+1;
            b=b-1;
        }
        if(flag1==1){
        printf("The string is palindrome\n");
        printf("The string is accepted\n");
    }
    else{
        printf("The string is not palindrome\n");
        printf("The string is not accepted\n");
    }
    }
    return 0;

}