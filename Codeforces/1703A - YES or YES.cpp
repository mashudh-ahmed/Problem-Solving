#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string s[1000];

    for (int i=0; i<t; i++)
    {
        cin>>s[i];

    }

    for (int i=0; i<t; i++)
    {
        if (s[i] == "YES" ||s[i] == "yes"|| s[i] == "Yes"|| s[i] == "YEs" ||  s[i] == "yEs" ||  s[i] == "yES" ||  s[i] == "yeS" || s[i] == "YeS" )
        {
            cout<< "YES" <<endl;

        }
        else
        {
            cout<< "NO" <<endl;
        }
    }


    return 0;
}
