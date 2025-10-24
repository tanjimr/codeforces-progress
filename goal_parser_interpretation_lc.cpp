#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string a ;
    cin >> a ;
    int n= a.size();
    string out ;

    for(int i=0;i<n;i++)
    {
        if(a[i]=='G'){
        out.push_back('G');}
        else if(a[i]=='(' && a[i+1]==')'){
        out.push_back('o');
        i++;}
        else if(a[i]=='(' && a[i+1]=='a'){
        out +="al";
        i +=3;}
    }
    cout << out ;

    return 0;

}
