#include<stdio.h>
int main ()
{
    int a[5]={10,20,30,40,50};
    int i,key;
     printf("enter the element to search");
     scanf("%d",& key);

     for(i=0;i<5;i++)
     {
        if(a[i]==key)
        {
            printf("element found is %d,i+1");
            break;
        
     }
    
   
    else 
      printf("element not found")
    
}
    
    return 0;
}

