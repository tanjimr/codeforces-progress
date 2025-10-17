#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  int n;
   int p;
    char o;
    int m;
  scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
      scanf("%d%c%d",&p,&o,&m);

        if(m==p && (p==11 || p==22 || p==00))
        {
            printf("%d%c%d",p,o,m);
        }
        else
        {
            if(p>0 && p<11)
                printf("11:11");
            if(p>11 && p<22)
                printf("22:22");
            if(p>22 && p==0)
                printf("00:00");
        }

    }



    return 0;
}
