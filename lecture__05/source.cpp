// 5. Runtime errors, undefined behaviour. Указатели и операции над ними.
// ссылка на лекцию: https://www.youtube.com/watch?v=swyvjLAV9-k&list=PLmSYEYYGhnBuZjDbpkv_AmYy-Vneg6m--&index=5




#include <iostream>
#include <vector>


int main()
{
    // Деменстрация Runtime Error
    
    // 1. обращение к памяти, которая не пренадлежит нам
    // std::vector<int> v(10);
    // v[100000] = 1; // Segmentation fault (core dumped) - попытка обратиться к памяти, которая не пренадлежит нашей памяти

    // 2. деление на ноль
    // int x = 1;
    // std::cout << x / 0 << '\n';


    // Деменстрация Undefined Behaviour

    // 1. Переполнение int -  компилирование: g++ -O2 source.cpp -o source && ./source
    for (int i = 0; i < 300; ++i)
    {
        std::cout << i << ' ' << i * 12345678 << '\n';
    }



}