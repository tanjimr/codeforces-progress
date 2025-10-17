#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string name;
    for (int i = 0; i < n; i++) {
        getline(cin, name);

        
            cout << name[0]; 

        for (int j = 0; j < name.length(); j++) {
            if (name[j] == ' ' && j + 1 < name.length())
                cout << name[j + 1];
        }
        cout << "\n";
    }
    return 0;
}
