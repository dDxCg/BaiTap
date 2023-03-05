#include <iostream>
using namespace std;

bool check(int arr[], int n){
    int left = 0, right = 0;
    for (int i = 0; i < n; ++i){
        right += arr[i];
    }
    if (left == right) return true;
    for (int i = 0; i < n; ++i){
        left += arr[i];
        if (left == right) return true;
        else right -= arr[i];
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    if (check(arr, n)) cout << "YES";
    else cout << "NO";
}