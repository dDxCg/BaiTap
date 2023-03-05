#include <iostream>
using namespace std;

bool check(int x1, int y1, int x2, int y2){
    if(x1 == x2) return false;
    if(y1 == y2) return false;
    if (x1 - y1 == x2 - y2) return false;

    return true;
}


int main(){
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; ++i){
        cin >> arr[i][0] >> arr[i][1];
    }
    bool yn = true;
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n;++j){
            if(!check(arr[i][0], arr[i][1], arr[j][0], arr[j][1])){
                yn = false;
                break;
            }
        }
        if (!yn)
            break;
    }
    if (!yn)
    cout << "Yes";
    else cout << "No";
}