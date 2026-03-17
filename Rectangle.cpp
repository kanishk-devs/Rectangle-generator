#include <iostream>
using namespace std;

int main() {
    cout << "This is a program for building a rectangle of desired dimensioins.\n";
    int h;
    int w;

    cout << "Please enter the required height for the rectangle:\n";
    cin >> h;

    cout << "Please enter the required width of the rectangle:\n";
    cin >> w;

    for (int j = 1; j <= w; j++) {
        cout << "-";
    }
    cout << "\n";
    for (int k = 1; k <= h - 2; k++) {
        cout << "|";
        for (int l=1; l <= w - 2; l++) {
            cout << " ";
        }
        cout << "|\n";
    }
    for (int j = 1; j <= w; j++) {
        cout << "-";
    }
    return 0;
}