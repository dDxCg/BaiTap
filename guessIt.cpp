#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void gameHeader(){
    cout << "1. New game." << endl << "2. Exit." << endl;
}

void displayShow(int pickN, int secretNum){
    if (pickN > secretNum){
        cout << "Too big" << endl;
    }else if(pickN < secretNum){
        cout << "Too small" << endl;
    }else{
        cout << "Congratulation!!! You guessed it." << endl;
    }
}

int pickNum(){
    cout << "Enter your Number: " << endl;
    int pickN;
    cin >> pickN;
    return pickN;
}

void playGuessit(){
    int pickN;
    int secretNum = rand() % 100 + 1;
    do{
        pickN = pickNum();
        displayShow(pickN, secretNum);
    }while (secretNum != pickN);
}


int main(){
    srand(time(0));
    int option;
    do{
        gameHeader();
        cin >> option;
        if(option == 1) playGuessit();
        else if(option == 2) cout << "End game.";
    }while(option == 1);
}