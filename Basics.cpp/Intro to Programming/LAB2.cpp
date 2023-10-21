#include <iostream>
using namespace std;

int main() {
    int n;
    start:
    while(1<=n<=10){
    cin >> n;

    if (n < 1 || n > 10) {
        goto start;
    }

    for (int i = 1; i <= n; i++) {
        int asterisks = (i % 2 == 0) ? n : n + 1;

        for (int j = 0; j < asterisks; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
}

/* OUTPUT

5
******
*****
******
*****
******

*/