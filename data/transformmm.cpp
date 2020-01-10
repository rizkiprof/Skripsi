#include <bits/stdc++.h.>
using namespace std;

int main() {
    string s, a, c;
    ios_base::sync_with_stdio(0);
    while (cin>>a){
        cin >> c >> s;
        for(int i = 0; i < s.length();i++){
            if(s[i] == 'C') cout << "0,0,0,1,";
            else if (s[i] == 'G') cout << "0,0,1,0,";
            else if (s[i] == 'A') cout << "0,1,0,0,";
            else if (s[i] == 'T') cout << "1,0,0,0,";
        }
        if(a == "EI") cout << "0,0,1";
        else if(a == "IE") cout << "0,1,0";
        else if(a == "N") cout << "1,0,0";
        cout << endl;

    }

}