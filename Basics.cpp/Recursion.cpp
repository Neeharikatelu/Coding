#include <bits/stdc++.h>
using namespace std;

void fun(int i,int n,string s){
    if(i>n)
    return;
    cout<<s<<endl;
    i++;
    fun(i,n,s);
}

void fun1(int i,int n){
    if(i>n)
    return;
    cout<<i<<endl;
    i++;
    fun1(i,n);
}

void fun2(int i,int n){
    if(i<1)
    return;
    cout<<i<<endl;
    i--;
    fun2(i,n);
}

void fun3(int n){
    int s=0;
    for(int i=1;i<=n;i++){
    s+=i;
    }
}

int main(){
int n;
cin>>n;

string s;
cout<<"Enter the name of string:";
cin>>s;
cout<<endl;

fun(1,n,s);
cout<<endl;
fun1(1,n);
cout<<endl;
fun2(n,n);
cout<<endl;
fun3(n);

return 0;
}