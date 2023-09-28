#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
        }
       
    for(int j=0;j<n-i-1;j++){ 
        cout<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 ||i==n-1 || j==n-1)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

void pattern6(int n)
{
    for (int i=1; i<=n; i++){
      for (int j=1; j<=i; j++){
            cout <<j<<" ";
        }
        cout << endl;
    }
}
void pattern7(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=1;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern12(int n){
    int iniS=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<"*";
        }
    for(int j=0;j<iniS;j++){
        cout<<" ";
    }
    for(int j=1;j<=n-i;j++){
        cout<<"*";
    }
    iniS+=2;
    cout<<endl;
    }
    iniS=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;
    }
}
int main(){
    int n,ch;
    while(true){
        cout<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch){
        case 1:
            cout<<"Pattern 1: "<<endl;
            cin>>n;
            pattern1(n);
            break;
        case 2:
            cout<<"Pattern 2: "<<endl;
            cin>>n;
            pattern2(n);
            break;
        case 3:
            cout<<"Pattern 3: "<<endl;
            cin>>n;
            pattern3(n);
            break;
        case 4:
            cout<<"Pattern 4: "<<endl;
            cin>>n;
            pattern4(n);
            break;
        case 5:
            cout<<"Pattern 5"<<endl;
            cin>>n;
            pattern5(n);
            break;
        case 6:
            cout<<"Pattern 6"<<endl;
            cin>>n;
            pattern6(n);
            break;
        case 7:
            cout<<"Pattern 7"<<endl;
            cin>>n;
            pattern7(n);
            break;
        case 8:
            cout<<"Pattern 8"<<endl;
            cin>>n;
            pattern8(n);
            break;
        case 9:
            cout<<"Pattern 9"<<endl;
            cin>>n;
            pattern9(n);
            break;
        case 10:
            cout<<"Pattern 10"<<endl;
            cin>>n;
            pattern10(n);
            break;
        case 11:
            cout<<"Pattern 11"<<endl;
            cin>>n;
            pattern11(n);
            break;
        case 12:
            cout<<"Pattern 12"<<endl;
            cin>>n;
            pattern12(n);
            break;
        }
   }
  return 0;
}


/*
OUTPUT:

Enter your choice:1

Pattern 1: 
5
*****
*****
*****
*****
*****
Enter your choice:2

Pattern 2: 
5
*
**
***
****
*****
Enter your choice:3

Pattern 3: 
5
*****
****
***
**
*
Enter your choice:4

Pattern 4: 
5
    *    
   ***   
  *****  
 ******* 
*********
Enter your choice:5

Pattern 5
5
*****
*   *
*   *
*   *
*****
Enter your choice:6

Pattern 6
5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
Enter your choice:7

Pattern 7
5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
Enter your choice:8

Pattern 8
5
1 2 3 4 
1 2 3 
1 2 
1 
Enter your choice:9

Pattern 9
5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
Enter your choice:10

Pattern 10
5
A 
A B 
A B C 
A B C D 
A B C D E 
Enter your choice:11

Pattern 11
5
        
   AB   
  ABCB  
 ABCDCB 
ABCDEDCB
Enter your choice:12

Pattern 12

*********
***  ****
**    ***
*      **
        *
*        *
**      **
***    ***
****  ****
**********

*/
