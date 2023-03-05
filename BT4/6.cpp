#include <iostream>
using namespace std;

bool sumcheck(int arr[], int n){
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            for (int k = j + 1; k < n; ++k){
                if (arr[i] + arr[j] +arr[k] == 0)
                    return true;
            }
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){cin >> arr[i];}
    cout << boolalpha << sumcheck(arr, n);
}