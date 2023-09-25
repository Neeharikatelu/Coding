#include <bits/stdc++.h>
using namespace std;


bool isSorted(int a[], int n) {
  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1])
      return false;
  }
 return true;
}


int findlargestElement(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}

int findsmallestElement(int a[],int n){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}

int removeDuplicates(int a[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (a[i] != a[j]) {
      i++;
      a[i] = a[j];
    }
  }
  return i + 1;
}

int search(int a[],int n,int num)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        return i;
    }
    return -1;
}


int main(){

int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int a[n];

    cout << "Enter the " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int num;
    cin>>num;
    
    int largest = findlargestElement(a, n);
    int smallest= findsmallestElement(a,n);
    int uniqueCount = removeDuplicates(a, n);
    int val = search(a, n, num);
    bool sorted = isSorted(a, n);
   

    cout << "The largest element in the array is: " << largest << endl;
    
    cout << "The smallest element in the array is: " << smallest << endl;

    cout << "Is the array sorted? " << (isSorted ? "True" : "False") << endl;

    cout << "The array after removing duplicate elements is: " << endl;
    for (int i = 0; i < uniqueCount; i++) {
        cout << a[i] << " ";
    }

    cout << "Index of " <<num<< " in the array: " << val << endl;
}