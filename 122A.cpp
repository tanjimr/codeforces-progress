#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n;
    cin >> n;

    if((n/100== 4) && ((n%10==7)||((n/100)%10==7)))
    cout << "YES";
    else if((n/100== 7) && ((n%10==4)||((n/100)%10==4)))
    cout << "YES";
    else if(n%100==47 || n%100==74)
    cout << "YES";
    else if(n%4==0 || n%7==0)
    cout << "YES";
    else
    cout << "NO";

    return 0;



}