#include<stdio.h>
#include<string.h>
int main(){
    char input_string[10];
    int i;
    int flag;
    printf("Enter the string here:\n");
    scanf("%s",&input_string);
    int len=strlen(input_string);
    flag=1;
    for(i=0;i<len;i++)
    {
        if(input_string[i]!='0' && input_string[i]!='1'){
        flag=0;
        }
    }
    if(flag==0)
    {
        printf("The string is not valid");
    }
    if(flag!=0)
    {       
            
            if(input_string[0]=='0' && input_string[len-1]=='1'){
                printf("The string is accepted by the grammar.");
            }
            else
            printf("The string in not accepted by the grammar.");
        }
    
    return 0;
}
