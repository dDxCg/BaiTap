#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

const int MAX_ENTRY = 7;
const string figure[] = {"----------    \n"
                         "  |           \n"
                         "  |           \n"
                         "  |           \n"
                         "  |           \n"
                         "  |           \n"
                         "-----         \n",
                         //0
                         "----------    \n"
                         "  |      |    \n"
                         "  |           \n"
                         "  |           \n"
                         "  |           \n"
                         "  |           \n"
                         "-----         \n",
                         //1
                         "----------    \n"
                         "  |      |    \n"
                         "  |      o    \n"
                         "  |           \n"
                         "  |           \n"
                         "  |           \n"
                         "-----         \n",
                         //2
                         "----------    \n"
                         "  |      |    \n"
                         "  |      o    \n"
                         "  |      |    \n"
                         "  |           \n"
                         "  |           \n"
                         "-----         \n",
                         //3
                         "----------    \n"
                         "  |      |    \n"
                         "  |      o    \n"
                         "  |     /|    \n"
                         "  |           \n"
                         "  |           \n"
                         "-----         \n",
                         //4
                         "----------    \n"
                         "  |      |    \n"
                         "  |      o    \n"
                         "  |     /|\\  \n"
                         "  |           \n"
                         "  |           \n"
                         "-----         \n",
                         //5
                         "----------    \n"
                         "  |      |    \n"
                         "  |      o    \n"
                         "  |     /|\\  \n"
                         "  |     /     \n"
                         "  |           \n"
                         "-----         \n",
                         //6
                         "----------    \n"
                         "  |      |    \n"
                         "  |      o    \n"
                         "  |     /|\\  \n"
                         "  |     / \\  \n"
                         "  |           \n"
                         "-----         \n",
                         //7                                                                                                    
                                            };
const string WORD_LIST[] = {"dog","cat","pet","bird"};
const int wordcount = sizeof(WORD_LIST)/sizeof(string);
void chooseword(string &secretWord){
    int randindex = rand() % wordcount;
    secretWord = WORD_LIST[randindex];
}

string word_guess(string secret){
    string str = "";
    for (int i = 0; i < secret.length(); ++i){
        str += "-";
    }
    return str;
}

void update(char guessChar, string &guessword, string secret, int &badGuess){
    int count = 0;
    int wordsize = secret.size();
    for (int i = 0; i < secret.size(); ++i){
        if (guessChar == secret.at(i)){
            ++count;
            string startstr = guessword.substr(0,i);
            string endstr = guessword.substr(i+1);
            guessword = startstr + guessChar + endstr;
        }
    }
    if (count == 0) ++badGuess;
}
bool checker(string guessword, string secret, int badguess){
    if (guessword != secret || badguess < MAX_ENTRY) return false;
    return true;
}

void displayShow(string guessword, string secret, int badguess){

    if (badguess >= MAX_ENTRY){
        cout << figure[badguess] << "\n";
        cout << "You die." << "\n";
    }else if (guessword != secret){
        cout << figure[badguess] << "\n";
        cout << "word: " << guessword << "\n" << "Continue:" << "\n"; 
    }else{
        cout << "word: " << guessword << "\n" << "You win." << "\n";
    }
}


int main(){
    srand(time(0));
    int badGuess = 0;
    string secret;
    chooseword(secret);
    string guessword = word_guess(secret);
    char guessChar;
    cout << secret << "\n";
    cout << figure[0] << "\n";
    cout << "word: " << guessword << "\n" << "Guess: " << "\n";
    while (badGuess < MAX_ENTRY && checker(guessword, secret, badGuess) != true){
        cin >> guessChar;
        update(guessChar, guessword, secret, badGuess);
        displayShow(guessword, secret, badGuess);
    }
}