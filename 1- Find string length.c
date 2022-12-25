#include<stdio.h>
int main()
{
    char a[]="Ashish";

    int i,length=0;
    for(i=0;a[i]!='\0';i++)
    {
        length++;
    }
    printf("%d ",length);
    return 0;
}
