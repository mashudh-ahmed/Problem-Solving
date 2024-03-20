#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int untreated = 0;
    int availableOfficers = 0;

    while (n--) 
    {
        int x;
        cin >> x;

        if (x == -1) 
        {
            if (availableOfficers == 0)
            {
               untreated++;  
            }
               
            else
            {
                availableOfficers--;
            }
        }
        
         else 
        {
            availableOfficers += x;
        }
    }

    cout << untreated << endl;

    return 0;
}
