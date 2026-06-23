#include<stdio.h>
int main()
{
    int i,j,count;
    char str[50];
    printf("enter a string");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        {
            for(j=0;str[j]!='\0';j++)
            {
                if(str[i]==str[j])
                {
                    count++;
                }
            }

        }  
        if(count>1)
    {
        printf("the first repeating character is : %c",str[i]);
          return 0;
    }
    }
    printf("no repeating character found");

    return 0;
}