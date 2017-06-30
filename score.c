#include <stdio.h>
int main()
{
    char s[90];
    int sum=0,num=0;
    scanf("%s",s);
    for(int i=0;s[i];i++)
        {
            if(s[i]=='O')
                {
                    num++;
                    sum+=num;
                }
                else num=0;
        }
    printf("%d\n",sum);
    return 0;
}