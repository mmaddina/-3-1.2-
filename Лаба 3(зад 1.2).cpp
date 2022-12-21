// Лаба 3(зад 1.2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/* Задание 1
#include <iostream>
using std::cout;
using std::endl;

int a = 36;
int* pa = &a;

int b[4] = { 25,27,39,54 };
int* pb = b;

int c = 6;
int* const pc = &c;

int main()
{
    cout << "pointer = " << pa << endl;
    cout << "*pointer = " << *pa << endl;

    *pa = 350;
    cout << "a = " << a << endl;
    cout << "pointer = " << pa << endl;
    cout << "*pointer = " << *pa << endl;


    for (int i = 0; i < 4; i++)
    {
        cout << "b[" << i << "] = " << *(b + i) << endl;
    }

    cout << "c = " << c << endl;
    //pc = &25;
    *pc = 25;
    cout << "c = " << c << endl;
    return 0;
}
*/

/* Задание 2
include <iostream>
using namespace std;
using std::cout;
using std::endl;

const int size = 20;
int mas[20];
int sum = 0;
void Summa();

void ch();
int a;
int b;
int c;
char oper;
void(*math(string))();
void PlusMassiv();
void MinusMassiv();

int main() {
    for (int i = 0; i < 20; i++) {
        mas[i] = rand() % 20;
        cout << mas[i] << " ";
    }
    cout << endl;
    Summa();

    ch();

    return 0;
}

void Summa() {
    int* str, * end;
    for (str = &mas[0], end = &mas[20 - 1];
        str < end; ++str, --end)
        sum += *str + *end;

    if (str == end) sum += *str;
    cout << sum << endl;
}

void ch() {
    cin >> oper;
    void(*op)();
    switch (oper) {
    case '+':
        op = math("pl");
        op();
        break;
    case '-':
        op = math("mn");
        op();
        break;
    }
}

void(*math(string eq))()
{
    if (eq == "pl")
        return PlusMassiv;
    else
        return MinusMassiv;
}

void PlusMassiv() {
    cin >> a;
    cin >> b;
    cout << a + b << endl;
}
void MinusMassiv() {
    cin >> a;
    cin >> b;
    cout << a - b << endl;
}
*/
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
