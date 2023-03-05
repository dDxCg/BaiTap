#include <iostream>
#include <cmath>
using namespace std;

bool check(int n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    for (int i = 2; i < sqrt(n); ++i)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    int count = 2;
    arr[0] = 0; arr[1]= 0;
    for(int i = 2; i <= n; ++i){
        arr[i] = count;
        ++count;
    }

    for(int i = 2; i <= n; ++i){
        if(check(i))
        {
            for(int j = i + 1; j <= n; ++j){
                if (j % i == 0) arr[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; ++i){
        if (arr[i] != 0) cout << arr[i] << " ";
    }
}