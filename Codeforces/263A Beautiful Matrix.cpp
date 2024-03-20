#include <iostream>
using namespace std;

int main() {

    int array [5][5];

    int n,swapNeeded;

    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            cin>> n;
            if (n == 1)
            {
                swapNeeded= abs(i-3)+abs(j-3);
            }

        }
    }


    cout<< swapNeeded <<endl;

    return 0;
}
