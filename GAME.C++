#include <iostream>
using namespace std;

int main() {
    int low = 1, high = 100;
    char response;
    int guess;

    cout << "Think of a number between 1 and 100.\n";
    cout << "I will try to guess it!\n";

    while (low <= high) {
        guess = (low + high) / 2;
        cout << "Is your number " << guess << "? (h = too high, l = too low, c = correct): ";
        cin >> response;

        if (response == 'c') {
            cout << "Yay! I guessed your number: " << guess << endl;
            break;
        }
        else if (response == 'h') {
            high = guess - 1;
        }
        else if (response == 'l') {
            low = guess + 1;
        }
        else {
            cout << "Please enter h, l, or c.\n";
        }
    }

    cout << "Game Over.\n";
    return 0;
}
