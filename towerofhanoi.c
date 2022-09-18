#include<stdio.h>

void tower_of_hanoi(int n,char source,char helper,char destination)
{
    if(n==1)
    {
        printf("move the disk %d from %c to %c",n,source,destination);
        return;
    }
    tower_of_hanoi(n-1,source,destination,helper);
    printf("\nmove the disk %d from %c to %c\n",n,source,destination);
    tower_of_hanoi(n-1,helper,source,destination);
}

int main()
{
    int n;
    printf("enter the number of disks: ");
    scanf("%d",&n);
    tower_of_hanoi(n,'S','H','D');
    return 0;
}