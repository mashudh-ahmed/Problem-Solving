#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
   cin>>n;

   int array[n][2];

   int count = 0;

       for (int i=0; i<n; i++)
       {
           for(int j=0; j<2;j++)
           {
               cin>>array[i][j];
           }
       }


       for (int i=0; i<n; i++)
       {
           for (int j=0; j<n; j++)
           {
               if (array [i][0] == array [j][1])
               {
                   count++;
               }
           }
       }

       cout<< count<<endl;

    return 0;
}
