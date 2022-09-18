#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("enter the number of strings you want to enter:\n");
    scanf("%d",&n);
    char *arr[n];
    char *str;
    printf("enter  the strings:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",str);
        arr[i]=str;
    }
    printf("the resultant strings are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",arr[i]);
    }
    return 0;
}
