#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

bool check(int arr1[], int arr2[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr1[i] < arr2[i])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int man_h[n], woman_h[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> man_h[n];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> woman_h[n];
    }
    sort(man_h, n);
    sort(woman_h, n);
    if (check(man_h, woman_h, n) == true)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}