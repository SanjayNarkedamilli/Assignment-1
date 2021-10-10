#include<stdio.h>

int main()
{
    char input[1000];
    printf("Enter the value\n");
    scanf("%s",input);
    int i=0;
    int check1=0,check2=0;
    for(int i= 0;input[i]!='\0';i++)
    {
        if(input[i]=='.')
        {
            check1++;
            if(input[i+1]!='\0')
            check2=1;
        }
        
    }
    if(check1==1 && check2==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
}
