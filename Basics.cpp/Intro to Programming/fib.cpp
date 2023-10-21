#include <iostream>
using namespace std;

int find(int dec_n) {
    if (dec_n == 0) {
        return 0;
    } else {
        return (dec_n % 2 + 10 * find(dec_n / 2));
    }
}

int main() {
    int n;

    cin >> n;
    int binary = find(n);
    cout << "The binary representation is: " << binary << endl;
    return 0;
}
