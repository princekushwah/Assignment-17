#include<stdio.h>
int main()
{
    char a[]="Ashish";
    int i,count=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            count++;
        }
    }
    printf("%d ",count);
    return 0;
}
