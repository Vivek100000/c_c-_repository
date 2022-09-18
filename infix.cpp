#include <stdio.h>

int prec(char s)
{
  int a;
  ((s=='+')||(s=='-'))? a=1:a=2;
   return a;
}

int main()
{
    char str[100];
    printf("enter the string mathematical expression\n");
    scanf("%s",str);
    char stack[100];
    int top=-1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            printf("%c",str[i]);
        }
        else if(top==-1||(prec(str[i])>prec(stack[top])))
        {
            top++;
            stack[top]=str[i];
        }
        else if(prec(stack[top])>=prec(str[i]))
        {
            while(1)
            {
                 if(prec(stack[top])<prec(str[i]))
                {
                    top++;
                    stack[top]=str[i];
                    break;
                }
                printf("%c",stack[top]);
                top--;
                if(top==-1)
                {
                    top++;
                    stack[top]=str[i];
                    break;
                }
            }
        }
    }
    while(top!=-1)
    {
        printf("%c",stack[top]);
        top--;
    }
    return 0;
}