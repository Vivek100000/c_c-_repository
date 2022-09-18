#include <stdio.h>
#include <string.h>
int prec(char s)
{
  int a;
  ((s=='+')||(s=='-'))? a=1:a=2;
   return a;
}

int main()
{
    char str[100];
    char prefix[100];
    int q=0;
    printf("enter the string mathematical expression\n");
    scanf("%s",str);
    strrev(str);
    char stack[100];
    int top=-1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            prefix[q]=str[i];
            q++;
        }
        else if(top==-1||(prec(str[i])>=prec(stack[top])))
        {
            top++;
            stack[top]=str[i];
        }
        else if(prec(stack[top])>prec(str[i]))
        {
            while(1)
            {
                 if(prec(stack[top])<=prec(str[i]))
                {
                    top++;
                    stack[top]=str[i];
                    break;
                }
                prefix[q]=stack[top];
                q++;
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
        prefix[q]=stack[top];
        top--;
        q++;
    }
    prefix[q]='\0';
    strrev(prefix);
    printf("%s",prefix);
    return 0;
}