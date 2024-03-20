#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            count1 += x;
        } else if (count1 < 1) {
            count2++;
        } else {
            count1--;
        }
    }

    cout << count2;
    return 0;
}
