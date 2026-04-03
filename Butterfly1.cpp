#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the wing (n): ";
    cin >> n;

    // 1. Upper Half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) cout << "*";
        
        // Middle spaces (2 * (n - i))
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) cout << " ";
        
        // Right stars
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    // 2. Lower Half (Reverse of Upper)
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) cout << "*";
        
        // Middle spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) cout << " ";
        
        // Right stars
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    return 0;
}