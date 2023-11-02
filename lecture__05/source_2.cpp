// 5. Runtime errors, undefined behaviour. Указатели и операции над ними.
// ссылка на лекцию: https://www.youtube.com/watch?v=swyvjLAV9-k&list=PLmSYEYYGhnBuZjDbpkv_AmYy-Vneg6m--&index=5




#include <iostream>
#include <vector>


int main()
{
    // Pointers
    int a = 0;
    std::cout << "a = " << a << '\n';

    int* p = &a;
    std::cout << "p = " << p << '\n';
    std::cout << "*p = " << *p << '\n';


    int** pp = &p;
    std::cout << "pp = " << pp << '\n';
    std::cout << "*pp = " << *pp << '\n';
    std::cout << "**pp = " << **pp << '\n';

    
}