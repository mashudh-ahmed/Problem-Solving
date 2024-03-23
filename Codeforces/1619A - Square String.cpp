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
        string first_half = s[i].substr(0, s[i].size() / 2);
        string second_half = s[i].substr(s[i].size() / 2);

        if (s[i].length() % 2 == 0 && first_half == second_half )
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO" <<endl;
        }
    }

    return 0;
}
