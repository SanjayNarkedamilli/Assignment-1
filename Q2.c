#include<stdio.h>

int main()
{
    char given[1000];
    printf("Enter the input\n");
    scanf("%s",given);
    int i=0;
    int check=0;
    int count=0;
    int idx1=-1,idx2=-1;
    while(given[i]!='\0')
    {
        if((given[i]>='A' && given[i]<='Z') || (given[i]>='a' && given[i]<='z') || (given[i]>='0' && given[i]<='9'))
            check=1;
        else if((given[i]=='.' || given[i]=='-'  || given[i]=='_' || given[i]=='@') && (i!=0 && given[i+1]!='\0'))
            check=1;
        else
        {
            check=-1;
            break;
        }
        if(given[i]=='@')
        {
            count++;
            idx1=i;
        }
        if(count>1)
        {
            check=-1;
            break;
        }
        if(given[i]=='.')
        {
            idx2=i;
        }
        i++;
    }
    if(idx2-idx1<2)
        check=-1;
    if(check==1)
        printf("Valid Email address\n");
    else
        printf("Invalid Email address\n");
}