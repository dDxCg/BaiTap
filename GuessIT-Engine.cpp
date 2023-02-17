#include <iostream>
using namespace std;


void displayShow(int numPicked, int guessNum){
    if (guessNum > numPicked){
        cout << "Too big" << endl;
    }else if(guessNum < numPicked){
        cout << "Too small" << endl;
    }else{
        cout << "Congratulation!!! You guessed it." << endl;
    }
}
int process(int numPicked, int guessNum){
    if (guessNum > numPicked){
        return 2;
    }else if(guessNum < numPicked){
        return 1;
    }
    return 0;
}
void guessEngine(int numPicked){
    int guessNum = 1;
    int low = 1, high = 100;
    do{
        guessNum = (low+high)/2;
        cout << "Engine guess: " << guessNum << endl;
        if (process(numPicked, guessNum) == 2){
            high = guessNum;
        }else if(process(numPicked, guessNum) == 1){
            low = guessNum;
        }
        displayShow(numPicked, guessNum);
    }while (process(numPicked, guessNum) != 0);
}
int main(){
    int numPicked, guessNum;
    cout << "Pick a number: ";
    cin >> numPicked;
    guessEngine(numPicked);
}