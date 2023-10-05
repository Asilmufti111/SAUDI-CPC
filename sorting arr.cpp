// Sort an array in increasing order

// import all cpp libraries
#include <bits/stdc++.h>
// to run the program faster
#define aa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
const int N=10e5+1;
int arr[N];
int main() {
    aa;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //printing the original array
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr,arr+n);
    //printing the sorted array
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
