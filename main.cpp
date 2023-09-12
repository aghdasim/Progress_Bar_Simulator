#include <iostream>
#include "windows.h"

using namespace std;

void PrintProgress(int progress , int timeEstimate) {
    cout << "[";

    for (int i = 0; i < 30; i++) {
        if (i < progress) {
            cout << "=";
        } else {
            cout << " ";
        }
    }

    int roundedPercentage = progress * 3.36 ;
    cout << "] " << roundedPercentage << "%";
    cout << endl;

    Sleep(timeEstimate / 30);
    system ("cls");

}

int main() {
    int timeEstimate = 0;
    cout << "How long does it take (in milliseconds)? " << endl;
    cin >> timeEstimate;
    cout << endl;

    for (int i = 0; i <= 30; i++) {

        PrintProgress(i,timeEstimate);

    }

    cout << endl;

    return 0;
}
