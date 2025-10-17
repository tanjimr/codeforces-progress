#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string in, out ;
    cin>> in ;
    cin>> out;
    

    reverse(in.begin(),in.end());

    if(in==out){
    cout<<"YES";}
    else{
    cout<<"NO";}

    return 0;
}