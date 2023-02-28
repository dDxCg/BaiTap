#include <iostream>
using namespace std;

bool checker(int arr[], int n){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++i){
            if (i != j && arr[i] == arr[j])
            return true;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    if (checker(arr, n))
        cout << "yes";
    else cout << "no";
}