#include <iostream>
#include <cmath>

using namespace std;

#define f(x) 3*(x)-cos(x)-1

int main() {
    float a, b, c, funa, funb, func;

    while (true) {
        cout << "Enter 2 numbers (a and b) such that f(a) and f(b) have opposite signs:" << endl;
        cin >> a >> b;

        funa = f(a);
        funb = f(b);

        if (funa * funb > 0) {
            cout << "Incorrect input. f(a) and f(b) must have opposite signs. Please try again." << endl;
        } else {
            break; // Exit the loop if the input is valid
        }
    }

    do {
        c = (a + b) / 2;
        func = f(c);

        if (funa * func > 0) {
            a = c;
            funa = func;
        } else {
            b = c;
            funb = func; // Corrected this line
        }
    } while (fabs(func) > 0.001); // Use fabs for floating-point comparison

    cout << "The root is " << c << endl;

    return 0;
}
