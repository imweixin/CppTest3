#include <iostream>
#include <stdio.h>
#include <typeinfo>
#include <string>

using std::cin;
using std::cout;

int main(int argc, char const *argv[])
{
    cout << "Hello Word" << std::endl;
    unsigned char i = 0;
    cout << typeid(i).name() << std::endl;
    std::string mystr = "string";
    cout << mystr << '\n';
    cin.get();
    return 0;
}
