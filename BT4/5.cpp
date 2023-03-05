#include <iostream>
using namespace std;

bool sumcheck(int arr[], int n){
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i] + arr[j] == 0){
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