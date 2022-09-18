#include <stdio.h>
#define max 100
void merging_arrays(int *a,int *b,int *c);
void sorting(int *c);


int main()
{
  int n ,a[]={1,4,6,7,8} ,b[]={2,3,9,10,11} ,c[max];
  merging_arrays(a,b,c);
  sorting(c);
  return 0;
}

void merging_arrays(int *a,int *b,int *c)
{
    int j=0 ,k=0;
  for(int i=0;i<10;i++)
  {
      if(i<5)
      {
          c[i]=a[j];
          j++;
      }
      else if(i>=5)
      {
          c[i]=b[k];
          k++;
      }
  }
}

void sorting(int *c)
{

     int i ,temp ,p ,temp2  ,q;
  for(i=1;i<10;i++)
    {
      q=i;
       for(int j=i-1;j>=0;j--)
    {
         temp2=c[i];
         if(c[i]>c[j])
         {
           continue;
         }
         else if(c[i]<c[j])
         {
         	if((c[i]>c[j-1])||j==0)
         {
           temp=j;

           p=i-1;
           while(p>=temp)
           {
             c[i]=c[p];
             p--;
             i--;
           }
           c[temp]=temp2;
         }
         continue;
        }
    }
       i=q;
    }

    printf("the sorted array is:\n");
    for(int i=0;i<10;i++)
    {
      printf("%d ", c[i]);
    }
}
