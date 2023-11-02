// 4. Выражения и операторы. Управляющие конструкции. Ошибки компиляции
// ссылка на лекцию: https://www.youtube.com/watch?v=ZUq_ZAesOII&list=PLmSYEYYGhnBuZjDbpkv_AmYy-Vneg6m--&index=4




#include <iostream>


int main()
{
    // Тернарный оператор - пример с lvalue, rvalue
    // int x = 1;
    // int a = 2;
    // (a == 1 ? x++ : ++x) = 5;


    // sizeof
    int x = 1;
    bool b = true;
    std::cout << "sizeof(x) = " << sizeof(x) << '\n';
    std::cout << "sizeof(b) = " << sizeof(b) << '\n';
}
