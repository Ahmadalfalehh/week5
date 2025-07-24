#include <iostream>
#include <string>
using namespace std;

// Template Function
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Integers
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Max(int): " << findMax(int1, int2) << endl;

    // Floats
    float float1, float2;
    cout << "\nEnter two floats: ";
    cin >> float1 >> float2;
    cout << "Max(float): " << findMax(float1, float2) << endl;

    // Strings
    string str1, str2;
    cout << "\nEnter two strings: ";
    cin >> str1 >> str2;
    cout << "Max(string): " << findMax(str1, str2) << endl;

    return 0;
}
