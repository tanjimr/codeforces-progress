gi#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string input ;
    string vow = "aAeEiIoOuUYy" ;
    string output = "" ;

    cin>> input ;

   for(int i = 0; i < input.length() ; i++)
   {
           bool vowel = false;

       char x = tolower(input[i]);


       for(int j=0; j<12; j++)
       {
           if(x==vow[j])
           {
              vowel= true ;
           }
       }
       if(!vowel)
       {
           output += x;
           output += '.';
       }
   }

    output= '.'+output;
    output.pop_back();
   cout << output ;

    return 0;
}
