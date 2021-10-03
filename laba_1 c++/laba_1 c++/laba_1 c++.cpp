#include <iostream>
#include <fstream>
#include "Maltsev_Container.h"
using namespace std;

void menu()
{
    cout << endl;
    cout << "1. добавить элемент" << endl;
    cout << "2. вывести список" << endl;
    cout << "3. вывести список из файла" << endl;
    cout << "4. вывести список в файл" << endl;
    cout << "5. очистка" << endl;
    cout << "0. выход" << endl;

}

int main()
{
    setlocale(LC_ALL, "Russian");
    Container students;
    while (true)
    {
        menu();
        cout << "Введите число: ";
        int number;
        cin >> number;
        switch (number)
        {
        case 1:
        {
            students.input();
            break;
        }
        case 2:
        {
            students.output();
            system("pause");
            break;
        }
        case 3:
        {
            ifstream fromfile("fromfile.txt", ios::binary);
            if (fromfile.is_open())
            {
                students.input_file(fromfile);
                fromfile.close();
            }
            else cout << "Файл не удалось открыть" << endl;
            system("pause");
            break;
        }
        case 4:
        {
            ofstream tofile("tofile.txt", ios::binary);
            if (tofile.is_open())
            {
                students.output_file(tofile);
                tofile.close();
            }
            else cout << "Файл не удалось открыть" << endl;
            system("pause");
            break;
        }
        case 5:
        {
            students.delete_smth();
            system("pause");
            break;
        }
        case 0:
            return 0;
        }
    }
}