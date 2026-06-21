#include<stdio.h>
int main()
{
    int i,vowel=0;
    int consonant=0;
    char ch[100];
    printf("enter a string ");
    fgets(ch,sizeof(ch),stdin);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            vowel++;
        }
        else if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z'))
        {
            consonant++;
        }
    }
    printf("the total number of vowles present are :%d",vowel);
    printf("the total number of consonants present are :%d",consonant);

    return 0;

}