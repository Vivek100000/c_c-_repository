#include <stdio.h>
#define row 10
#define col 15
void read_array(int a[row][col],int,int);
int frequency_check(int a[row][col],int,int,int);

int main()
{
    int m ,n ,f;
    int num;
    printf("enter the no. of rows:\n");
    scanf("%d", &m);
    printf("enter the no. of column:\n");
    scanf("%d", &n);
    int a[row][col];
    printf("enter the number whose frequency is to be determined:\n");
    scanf("%d", &num);
    read_array(a,m,n);
    f=frequency_check(a,m,n,num);
    printf("frequency of %d is: %d",num,f);
    return 0;
}

void read_array(int a[row][col],int m,int n)
{
  printf("enter the elements of arrays\n");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
        scanf("%d", &a[i][j]);
    }
  }
}

int frequency_check (int a[row][col],int m,int n,int num)
{
    int fcount=0;
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
         if(num==a[i][j])
         {
           fcount++;
           continue;
         }
      }
    }
    return fcount;
}
