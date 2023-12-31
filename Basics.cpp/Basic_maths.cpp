
#include <iostream>
#include<cmath>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

bool isArmstrong(int n) {
    int Number = n;
    int count = 0;
    int temp = n;

    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    int sum = 0;
    temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    return (sum == Number);
}

int printdivisors(int n){
    cout<<"The divisors of "<<n<<" are:"<<endl;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
        }
            cout<<"\n";
   }
}

bool Prime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << "It is an Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }

    
    printdivisors(n);

    bool prime=Prime(n);

    if(n!=1 && prime==true){
       cout<<"Pime Number";
    }
    else{
       cout<<"Not a Prime number";
    }
    return 0;
}
   


