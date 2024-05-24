#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i =0; i < size; i++){
        if(arr[i] == key) return 1;
    }
    return 0;
}
 int main(){
    int n;
    cout << "enter the size of array\n";
    cin >> n;
     int arr[n];
     for(int i =0; i< n; i++){
        cin >> arr[i];
     }
     int key;
     cout << "enter the key which you want to find in arr \n";
     cin >> key;
     bool found = linearSearch(arr, n,key );
     if(found) cout <<  "key is present";
     else cout << "not found";
 }