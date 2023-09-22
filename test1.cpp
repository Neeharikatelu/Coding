#include <iostream>

using namespace std;
int reverse(int a) {
   int b = 0;
   while (a > 0) {
      
      int digit = a % 10;
      b = b * 10 + digit;
      a = a / 10;
   }
   return b;
}
int main() {
   int a;
   cin>>a;
   int dummy = a;
   int b = reverse(a);
   if (dummy == b) {
      cout << "Palindrome" << endl;
   } else {
      cout << "Not Palindrome" << endl;
   }
   return 0;
}