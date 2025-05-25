#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of string: ";
    cin >> size;
    char* str = new char[size];
    str[size] = '\0';

    cout << "Enter string: ";
    int i = 0;
    while (i < size) {
        cin >> str[i];
        i++;
    }

    string operation;
    cout << "Encryption or decryption? (E / D): ";
    cin >> operation;

    if (operation == "E" || operation == "e") {
        int shift;
        cout << "Enter shift number: ";
        cin >> shift;

        for (int i = 0; i < size; ++i) {
            str[i] += shift;

            if (str[i] > 'z' || str[i] > 'Z' && str[i] < 'a') {
                str[i] -= 26;
            }
        }
    }

    else if (operation == "D" || "d") {
        int shift;
        cout << "Enter shift number: ";
        cin >> shift;

        for (int i = 0; i < size; ++i) {
            str[i] += shift;

            if (str[i] < 'A' || str[i] < 'a' && str[i] > 'Z') {
                str[i] += 26;
            }
        }
    }

    else {
        cout << "Wrong operation!" << endl;
        delete[] str;
        return 1;
    }

    cout << "Result: " << str << endl;
    delete[] str;
    return 0;
}