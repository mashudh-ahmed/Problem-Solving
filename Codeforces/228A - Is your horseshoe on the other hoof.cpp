#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    int s[n];

    int count = 0;

    for (int i=0; i<n; i++)
    {
            cin>>s[i];

    }

    sort(s, s+n);


    for (int i=0; i<n; i++)
    {
        if (s[i] == s[i+1])
        {
            count++;
        }

    }


    cout<< count << endl;

    return 0;
}
