#include <stdio.h>
#define row 10
#define col 15
void read_array(int a[row][col],int m,int n);
void check_array(int a[row][col],int m,int n);


int main()
{
   int m ,n;
   printf("enter the no. of rows:\n");
   scanf("%d", &m);
   printf("enter the no. of columns:\n");
   scanf("%d", &n);
   int a[row][col];
   if(m==n)
   {
     read_array(a,m,n);
     check_array(a,m,n);
   }
   else if(m!=n)
   {
       printf("\n");
       printf("the non square matrix cannot be symmetric\n");
   }
   return 0;
}

void read_array(int a[row][col],int m,int n)
{
    printf("enter the elements of the array:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void check_array(int a[row][col],int m,int n)
{
    int k=0;
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
          if(a[i][j]!=a[j][i])
            {
              k=2;
            }
            else
            {
                continue;
            }
       }
    }
    if(k==2)
    {
        printf("\n");
        printf("array is not symmetric\n");
    }
    else if(k==0)
    {
        printf("\n");
        printf("array is symmetric\n");
    }
}
