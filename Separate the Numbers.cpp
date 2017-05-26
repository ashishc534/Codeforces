#include <bits/stdc++.h>
using namespace std;

int main()
{    
	long long aX;
    string s, t, a1;
    cin.ignore(256, '\n');
    while(cin >> s){
        for(int l = 1; l <= s.size()/2; l++){
            a1 = t = s.substr(0, l);
            aX = stoll(a1);
            while(t.size() < s.size())
                t += to_string(++aX);                
            if(s == t) break;
        }
        cout << (s == t ? "YES " + a1 : "NO") << endl;
    }
    return 0;
}
