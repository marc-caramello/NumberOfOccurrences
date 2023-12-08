#include <ctype.h>
#include <iostream>

using namespace std;

class EntireProgram {
    public:
        EntireProgram() {
            inputLoop_1();
            inputLoop_2();
            printTotal_3();
        }
    private:
        string fullNum;
        string numToSearchFor;

        void inputLoop_1() {
            bool inputIsWrong;
            do {
                inputIsWrong = false;

                cout << "Enter the full integer: ";
                getline(cin, fullNum);

                for(char currentLetter : fullNum) {
                    if(!isdigit(currentLetter)) {
                        cout << "\"" << fullNum << "\" must be a integer >= 0\n";
                        cout << "_________________________\n";
                        cout << "\n";
                        inputIsWrong = true;
                        break;
                    }
                }
            } while(inputIsWrong);
        }
        void inputLoop_2() {
            bool inputIsWrong;
            do {
                inputIsWrong = false;

                cout << "Enter the number to find the frequency of: ";
                getline(cin, numToSearchFor);

                if(numToSearchFor.length() != 1) {
                    inputIsWrong = true;
                }
                if(!inputIsWrong) {
                    for(char currentLetter : numToSearchFor) {
                        if(!isdigit(currentLetter)) {
                            inputIsWrong = true;
                            break;
                        }
                    }
                }
                if(inputIsWrong) {
                    cout << "\"" << numToSearchFor << "\" must be a integer between 0-9\n";
                    cout << "_________________________\n";
                    cout << "\n";
                }
            } while(inputIsWrong);
        }
        void printTotal_3() {
            int total = 0;

            for(char currentNum : fullNum) {
                if(currentNum == numToSearchFor[0]) {
                    total++;
                }
            }
            cout << numToSearchFor[0] << " appears in " << fullNum << " ---> "<< total << " times";
        }
};

int main() {
    cout << "\n";
    EntireProgram startRunning;
    cout << "\n\n";
    return 0;
}