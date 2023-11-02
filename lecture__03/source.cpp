// 3. Объявления, определения и области видимости. Выражения и операторы.
// ссылка на лекцию: https://www.youtube.com/watch?v=-INhteoU4kc&list=PLmSYEYYGhnBuZjDbpkv_AmYy-Vneg6m--&index=3




#include <iostream>
#include <vector>


// global variable y
int y = 100;


void g(int x); // обьявление функции g
void g(int x); // обьявление функции g - ещё раз, ведь обьявлять ф-ю можно сколько угодно раз

// one definition rule
// Каждая переменная, функция, используемая в программе
// должна быть определена только 1 раз


// создание пространства имён - namespace - можно создавать вне функций и классов
namespace N{

int y = 1;

void f(int); // обьявление функции


int x_in_N = 10;


}

void N::f(int) // можно определять функцию, которая обьявлена выше в namespace
{
    std::cout << "inside function N::f\n";
}


// using
using v_i = std::vector<int>;
v_i vector_int = {1, 2, 3};


int main()
{
    // Обьявления
    int x;

    // Определение
    int y = 10;
    std::cout << y << '\n';
    // Обьявление != Определение


    g(1);   


    // можно создавать scope
    {
        int y = 11;
        std::cout << y << '\n';

        // получение доступа к глобальной переменной y
        std::cout << ::y << '\n';
    }


    // обращение к переменной из namespace N
    std::cout << "N::y" << N::y << '\n';
    N::f(0);


    // Можно 'переносить' между областями
    std::cout << "N::x_in_N = " << N::x_in_N << '\n';
    using N::x_in_N;
    std::cout << "N::x_in_N = " << x_in_N;


    // Можно 'перенести' всё содержимое namespace
    using namespace N;

}


// а вот это уже определение функции g
void g(int x)
{
    std::cout << "inside func: g\n";
}
