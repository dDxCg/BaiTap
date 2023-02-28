#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr_time[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr_time[i];
    }
    int output[n];
    for (int i = 0; i < n; ++i)
    {
        output[i] = 0;
    }
    int output_index = 0;
    for (int i = 0; i < n; ++i){
        int min_index = 0;
        while (arr_time[min_index] == 0){
            ++min_index;
        } 
        int min = arr_time[min_index];
        for (int j = 0; j < n; ++j){
            if(arr_time[j] < arr_time[min_index] && arr_time[j] != 0){
                min_index = j;
            }
        }
        arr_time[min_index] = 0;
        output[output_index] = min_index + 1;
        ++output_index;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << output[i] << " ";
    }
}