#include<stdio.h>
#include<string.h>
#define max 10
int main()
{
    int transition_table[4][2]={{1,3},{1,2},{1,2},{3,3}};
    int initial_state=0,i=0,j,k;
    int final_state=2;
    int current_state=0;
    int next_state=0;
    int invalid=0;
    char string[max];
    printf("Transition table:\n");
    printf("1\t2\n");
    for(j=0;j<4;j++)
    {
        for(k=0;k<2;k++)
        {
            printf("%d\t",transition_table[j][k]);
        }
        printf("\n");
        i++;
    }
    printf("Enter any string here:\n");
    scanf("%ch\n",&string);
    int len=strlen(string);
    for(j=0;j<len;j++)
    {
        if(string[j]=='0')
        {
           next_state=transition_table[current_state][0];
        }
        else if(string[j]=='1')
        {
            next_state=transition_table[current_state][1];
        }
        else
        {
            invalid=1;
            current_state=next_state;
        }
    }
    if(invalid==1)
    {
        printf("Invalid Input !!");
    }
    else if(current_state=final_state)
    printf("Accept\n");
    else
    printf("Don't Accept\n");
}