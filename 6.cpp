#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = n - 1; i >= 0; --i){
        for (int j = n - i; j <= n; ++j){
            cout << j << " ";
        }
        for (int j = 1; j < n - i; ++j){
            cout << j << " ";
        }
        cout << endl;
    }
}