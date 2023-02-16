#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < i; ++j){
            cout << " ";
        }
        for (int k = 0; k < n - i; ++k){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; --i){
        for (int j = 0; j < i; ++j){
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; ++j){
            cout << "*";
        }
        cout << "*";
        for (int j = 0; j < n - i - 1; ++j)
            cout << "*";
        cout << endl;
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < i; ++j){
            cout << " ";
        }
        for (int j = 0; j < n - i; ++j){
            cout << "*";
        }
        for (int j = n - 1 - i; j > 0; --j){
            cout << "*";
        }
        cout << endl;
    }
}