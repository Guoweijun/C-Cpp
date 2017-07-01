#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define maxn 1000
const char molecule[]="CHON";
double weight[]={12.01,1.008,16.00,14.01};
int main()
{
    char s[maxn];
    double w=0,sum=0;
    int num;
    scanf("%s",s);
    for(int i=0;s[i];i++)
    {
        if(isalpha(s[i])==1)
        {
            for(int j=0;j<4;j++)
            {
                if(s[i]==molecule[j])
                {
                    w=weight[j];
                }
            }
            if(isdigit(s[i+1])==1)
            {
                num=(s[i+1]-'0');
                sum+=w*num;
                i++;
            }
            else
            {
                sum+=w;
            }
            
        }
    }
    printf("%.3f\n",sum);
}