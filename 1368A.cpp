#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int a,b,c;

    for(int i=0; i<T; i++)
    {
      cin >> a >> b >> c ;

  int count = 0;
      while(a <= c && b<=c )
      {
          if(b>a)
            {
           a += b ;
          count++ ;
          }
          else if(a>b){
            b += a ;
            count++;  }
          }


      cout<< count <<"\n" ;

    }
    return 0;
}
