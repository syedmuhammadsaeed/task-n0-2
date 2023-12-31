#include<iostream>
using namespace std;


double power(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}


double calculate(double x, int term) {
    double sum = 0.0;

    for (int i = 0; i < term; ++i) {
        double term = power(-1, i) * power(x, 2 * i + 1);
        sum += term;
        cout << term << endl;
    }

    return sum;
}

int main() {
    double X;
    int term;

    cout << "Input the value of X: ";
    cin >> X;

    cout << "Input number of terms: ";
    cin >> term;

    double Sum = calculate(X, term);

    cout << "The sum of the series up to " << term << " terms is: " << Sum << endl;

    return 0;
}