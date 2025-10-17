#include <bits/stdc++.h>

using namespace std;

int main()

{

    string form;

    cin >> form;

    int n = form.length();

    int z=0 ,o=0 ;

    bool danger = false;

    for(int i=0; i<n; i++)
    {
       if(form[i]='1');
       o++;
       z=0;
       if(form[i=1]='0')
       z++;
       o=0;

       if(o>=7 || z>=7)
       return danger= true ;


    }

    if(danger)
    cout << "YES";
    else 
    cout << "NO";


    

return 0;
}