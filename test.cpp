#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<"Enter the length of an array: ";
    cin>>n;
    cout<<"Enter elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Showing the elements";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int a;
    int b;
    cout<<"Enter the a and b for addition!";
    cin>>a>>b;
    int sum;
    sum = a+b;
    cout<<sum;


}