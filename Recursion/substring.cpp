// Generate all substring
// i/p: "ABC"
// C
// B
// BC
// A
// AC
// AB
// ABC


#include <bits/stdc++.h>
using namespace std;

void subseq(string,string);

void subseq(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
 
    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans + ch);

    return;
}

int main()
{

    string s;
    cout << "Enter the string: ";
    cin >> s;
    subseq(s, "");

    return 0;
}


