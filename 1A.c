#include<stdio.h>

int main()
{
    long long m,n,a;

    

    scanf("%lld %lld %lld",&m,&n,&a);


    //ceilling value 

    long long height = (m+a -1) / a ;
    long long width = (n+a -1) / a ;

    long long tiles = height * width;

    printf("%lld", tiles);


    return 0;

}