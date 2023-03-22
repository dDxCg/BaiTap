#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

void C1(int *sum1, int *sum2){
    int dice1, dice2;
    int status = 0;
    while (*sum1 <= 100 || *sum2 <= 100){
        dice1 = rand()%6 + 1;
        cout << "dice nguoi 1: " << dice1 << "      ";
        *sum1 += dice1;
        cout << "tong nguoi 1: " << *sum1 << "\n";
        if (*sum1 == 100){
            status = 1;
            break;
        }
        dice2 = rand()%6 + 1;
        cout << "dice nguoi 2: " << dice2 << "      ";
        *sum2 += dice2;
        cout << "tong nguoi 2: " << *sum2 << "\n";
        if (*sum2 == 100){
            status = 2;
            break;
        }
    }
    switch(status){
        case 1: cout << "1 win" << "\n"; break;
        case 2: cout << "2 win" << "\n"; break;
        default: cout << "draw";
    }
}

void C2(int *sum1, int *sum2){
    int dice1, dice2;
    int status = 0;

    dice1 = rand()%6 + 1;
    cout << "dice nguoi 1: " << dice1 << "      ";
    *sum1 += dice1;
    cout << "tong nguoi 1: " << *sum1 << "\n";   

    dice2 = rand()%6 + 1;
    cout << "dice nguoi 2: " << dice2 << "      ";
    *sum2 += dice2;
    cout << "tong nguoi 2: " << *sum2 << "\n";

    while (*sum1 <= 100 && *sum2 <= 100){
        if (*sum1 <= *sum2){
        dice1 = rand()%6 + 1;
        cout << "dice nguoi 1: " << dice1 << "      ";
        *sum1 += dice1;
        cout << "tong nguoi 1: " << *sum1 << "\n";   
            if (*sum1 == 100){
                status = 1;
                break;
            }
        dice2 = rand()%6 + 1;
        cout << "dice nguoi 2: " << dice2 << "      ";
        *sum2 += dice2;
        cout << "tong nguoi 2: " << *sum2 << "\n"; 
            if (*sum2 == 100){
            status = 2;
            break;
            }       
        }else{
        dice2 = rand()%6 + 1;
        cout << "dice nguoi 2: " << dice2 << "      ";
        *sum2 += dice2;
        cout << "tong nguoi 2: " << *sum2 << "\n"; 
            if (*sum2 == 100){
            status = 2;
            break;
            }
        dice1 = rand()%6 + 1;
        cout << "dice nguoi 1: " << dice1 << "      ";
        *sum1 += dice1;
        cout << "tong nguoi 1: " << *sum1 << "\n";   
            if (*sum1 == 100){
                status = 1;
                break;
            }   
        }
    }

    switch(status){
        case 1: cout << "1 win" << "\n"; break;
        case 2: cout << "2 win" << "\n"; break;
        default: cout << "draw";
    }
}
int main(){
    int *sum1 = new int(0);
    int *sum2 = new int(0);
    srand(time(NULL));
    C2(sum1, sum2);
}