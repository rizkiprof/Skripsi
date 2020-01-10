#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,a,b,c;
    while(cin >> s){
        cin >> a >> b >> c;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                cout << "1, 0, 0, 0, ";
            }
            else if(s[i] == 'G'){
                cout << "0, 1, 0, 0, ";
            }
            else if(s[i] == 'T'){
                cout << "0, 0, 1, 0, ";
            }
            else if(s[i] == 'C'){
                cout << "0, 0, 0, 1, ";
            }
            else if(s[i] == 'D'){
                cout << "1, 0, 0, 0, ";
            }
            else if(s[i] == 'R'){
                cout << "0, 1, 0, 0, ";
            }
            else if(s[i] == 'S'){
                cout << "0, 0, 0, 1, ";
            }
            else if(s[i] == 'N'){
                cout << "0, 0, 1, 0, ";
            }
        }
        cout << a << b << c << endl;
    }
}