#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string name;
    string num= "";
    cin >> name;


    int n = name.length();

    for(int i= 0; i<n; i++)
    {
        
        for(int j=0; j<i; j++)
        {
        if(name[i]==name[j])
        {

        
            break;

        }
        }
        num +=name[i];
    }
    int r= num.length();

    if(r%2==0)
    cout<< "CHAT WITH HER!";
    else
    cout<< "IGNORE HIM!";

return 0;
}
