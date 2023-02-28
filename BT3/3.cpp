#include <iostream>
using namespace std;

bool palindromic(int num){
    string output = "";
    string str = to_string(num);
    for (int i = str.length() - 1; i >= 0; --i){
        output += str[i];
    }
    if(output == str) return true;
    return false;
}

int main(){
    int test;
    cin >> test;
    int input[test][2];
    for (int i = 0; i < test; ++i){
        cin >> input[test][0] >> input[test][1];
    }
    for(int i = 0; i < test; ++i){
        int count = 0;
        for (int j = input[test][0]; j <= input[test][1];++j){
            if (palindromic(j)) ++count;
        }
        cout << count << "\n";
    }
}