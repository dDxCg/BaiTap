#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randNum(int n)
{
    return rand() % (n + 1); // min + rand()%(max - min + 1)
}

int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    cout << randNum(n);
}