#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include<Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str;
    ifstream in1("input.txt");

    map<string, int> D;

    while (in1 >> str)
        D[str]++;
    in1.close();

    map <string, int>::iterator it;
    ofstream res("result.txt");
    for (it = D.begin(); it != D.end(); ++it) {
        res << it->first << ": " << it->second << endl;
       
    }


    /*string s;
    ifstream in2("result.txt");
    
    if (in2.is_open())
    {
        while (getline(in2, s))
        {
            cout << s << endl;
        }
    }
    in2.close();    */

    return 0;
}

/*Задание 1.
Написать программу формирования частотного словаря
появления отдельных слов в некотором тексте. Обеспечить:
1. Чтение исходного текста из файла;
2. Вывод информации обо всех словах;
3. Вывод информации о наиболее часто встречающемся
слове;
4. Запись результата в файл.
При разработке программы использовать словарь типа
map.*/