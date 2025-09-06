
#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;

    cout << "یک عدد وارد کنید: ";
    cin >> a;

    cout << "عملگر (+ - * /): ";
    cin >> op;

    cout << "عدد دوم را وارد کنید: ";
    cin >> b;

    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        default:
            cout << "عملگر نامعتبر!" << endl;
            return 0;
    }

    cout << "نتیجه: " << result << endl;
    return 0;
}
