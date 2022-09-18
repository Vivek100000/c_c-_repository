#include <stdio.h>
void read_array(int a[],int n);
void sort_array(int *a,int n);

int main()
{
  printf("Viveknegi_20011845_F\n");
  int n;
  printf("enter the size of array:\n");
  scanf("%d", &n);
  int a[n];
  read_array(a,n);
  sort_array(a,n);
  return 0;
}

void read_array(int a[],int n)
{
  printf("enter the elements of array\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d", a+i);
  }
}

void sort_array(int *a,int n)
{
  int i ,temp ,p ,temp2  ,q;
  for(i=1;i<n;i++)
  {
      q=i;
       for(int j=i-1;j>=0;j--)
    {
         temp2=a[i];
         if(a[i]>a[j])
         {
           continue;
         }
         else if(a[i]<a[j])
         {
         	if((a[i]>a[j-1])||j==0)
         {
           temp=j;

           p=i-1;
           while(p>=temp)
           {
             a[i]=a[p];
             p--;
             i--;
           }
           a[temp]=temp2;
         }
         continue;
        }
    }
       i=q;
  }

    printf("the sorted array is:\n");
    for(int i=0;i<n;i++)
    {
      printf("%d ", a[i]);
    }

}
