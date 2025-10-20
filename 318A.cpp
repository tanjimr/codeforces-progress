#include<bits/stdc++.h>
using namespace std ;

   void push(int arr[],int i,int &count)
    {
        arr[count]= i ;
        count++ ;
    }
int main()
{
    int n,k;
    cin>> n>> k ;
    int arr[100] ;
    int count = 0;

    for(int i=1; i<=n; i++)
    {
        if(i%2 != 0)
        {
            push(arr,i,count);

        }
    }
    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            push(arr,i,count);
        }
    }
    cout << arr[k-1];
    return 0;
    }




