#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a, b, c,sumOfString;
    cin>> a >> b >> c;

    sumOfString = a + b;

    sort(c.begin(), c.end());
    sort(sumOfString.begin(), sumOfString.end());

    if(sumOfString == c)
    {
        cout<< "YES" <<endl;
    }
    else
    {
        cout<< "NO" <<endl;
    }

    return 0;
}
