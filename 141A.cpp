#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a , b , c ;
    cin>> a ;
    cin>> b ;
    cin>> c ;

    string d = a + b ;

    if(d.size() != c.size())
    { cout << "NO" ; 
        return 0 ;
        
    }

    int freq [26] = {0};

    for(char n : c)
    {
        freq[n- 'A']++ ;
    }
    for(char n : d)
    {
        freq[n-'A']--;
    }
    bool eq = true ;
    for(int i=0; i <26; i++)
    {
        if(freq[i]!=0){
             eq= false; 
             
             }
    }
    if(eq)
    { cout << "YES" ;}
    else
    {cout << "NO";}

    return 0 ;

}