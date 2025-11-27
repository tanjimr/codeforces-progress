#include<bits/stdc++.h>
using namespace std ;

int main()
{

    string a , b, c ;
    cin >>a;
    cin >>b;

    for(int i=0; i<a.size();i++)
    {
        int x=1;
        for(int j=0;j< b.size();j++)
        {
            if(a[i]==b[j])
            {
                x=0;
            }
        }
        if(x)
        {
            c.push_back(a[i]);
        }
    }
    cout << c ;




}