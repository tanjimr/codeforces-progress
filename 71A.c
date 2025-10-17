#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[999];

    for(int i=0; i<n; i++)
    {
        scanf("%s",str);

        int m = strlen(str);
        int o = m -2;

        if(m>10)
        printf("%c%d%c\n",str[0],o,str[m-1]);
        else
        printf("%s\n",str);
    }

    return 0;
}