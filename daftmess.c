#include <stdio.h>
#define ROW 100
#define COL 100
void volume(int b[ROW][COL],int n);

int main()
{
    int n;
    scanf("%d", &n);
    int box[ROW][COL];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d", &box[i][j]);
        }
        printf("\n");
    }
    volume(box,n);
    return 0;
}

void volume(int b[ROW][COL],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
                if(j==2&&b[i][j]<41)
                printf("%d\n", b[i][0]*b[i][1]*b[i][2]);

        }
    }
}
