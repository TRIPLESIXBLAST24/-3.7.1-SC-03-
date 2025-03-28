#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    cout << "Введите длину строки: ";
    cin >> size;
    char* stroka = new char[size];
    stroka[size] = '\0';

    cout << "Введите строку: ";
    int i = 0;
    while (i < size)
    {
        cin >> stroka[i];
        i++;
    }

    char operation;
    cout << "Введите операцию('+' это шифрование, '-' это дешифрование): ";
    cin >> operation;

    if (operation == '+')
    {
        int sdvig;
        cout << "Число сдвига: ";
        cin >> sdvig;

        for (int i = 0; i < size; ++i)
        {
            stroka[i] = stroka[i] + sdvig;

            if (stroka[i] > 'z')
            {
                stroka[i] = stroka[i] - 26;
            }

            else if (stroka[i] > 'Z' && stroka[i] < 'a')
            {
                stroka[i] = stroka[i] - 26;
            }
        }
    }

    else if (operation == '-')
    {
        int sdvig;
        cout << "Число сдвига: ";
        cin >> sdvig;

        for (int i = 0; i < size; ++i)
        {
            stroka[i] = stroka[i] - sdvig;

            if (stroka[i] < 'A')
            {
                stroka[i] = stroka[i] + 26;
            }

            else if (stroka[i] < 'a' && stroka[i] > 'Z')
            {
                stroka[i] = stroka[i] + 26;
            }
        }
    }

    else
    {
        cout << "Введена неверная операция!" << endl;
        delete[] stroka;
        return 1;
    }

    cout << "Результат: " << stroka << endl;
    delete[] stroka;
    return 0;
}
