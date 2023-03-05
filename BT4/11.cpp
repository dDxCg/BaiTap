#include <iostream>
using namespace std;

string rev(string str){
    string rev_str = "";
    for (int i = (int)str.size() - 1; i >= 0; --i){
        rev_str += str[i];
    }
    return rev_str;
}

void findkey(string arr[], int n){
    int keysize = 0;
    bool find = false;
    char mid;
    for (int i = 0; i < n; ++i){
        if (arr[i].size() % 2 != 0){
            for (int j = i + 1; j < n; ++j){
                if(arr[j] == rev(arr[i])){
                    keysize = arr[i].size();
                    mid = (arr[i]).at((arr[i].size()-1)/2);
                    find = true;
                    break;
                }
            }
        }
        if (find) break;
    }
    cout << keysize << " " << mid;
}
int main(){
    int n;
    cin >> n;
    string s_arr[n];
    for (int i = 0; i < n; ++i){
        cin >> s_arr[i];
    }
    findkey(s_arr, n);
}