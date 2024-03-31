#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    cin>>n;

    int winMishka= 0, winChris= 0, draw=0 ;

    for(int i=0; i<n; i++)
    {
        cin>>m>>c;

        if(m>c)
        {
             winMishka++;
        }

        else if(m<c)
        {
             winChris++;
        }

        else if(m==c)
            draw++;
    }


    if(draw == n || winMishka == winChris)
    {
        cout<<"Friendship is magic!^^";
    }

    else if(winMishka > winChris)
    {
        cout<<"Mishka";
    }

    else
    {
        cout<<"Chris";
    }

    cout<<endl;

    return 0;
}
