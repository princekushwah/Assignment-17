#include<stdio.h>
int main()
{
    char a[]="ashishkushwah1234@gmail.com";
    int i,alpha=0,digit=0,special=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
           alpha++;
        else if(a[i]>='0'&&a[i]<'9')
            digit++;
        else
            special++;
    }
     printf("alpha = %d\nDigit = %d\nSpecial = %d",alpha,digit,special);
    return 0;
}
