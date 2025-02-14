#include <iostream>

class Temp
{
    int value;
public:
    Temp() : value{} 
    {
        std::cout << "default ctor\n";
    }
    Temp(int value) : value{ value } 
    {
        std::cout << "params ctor\n";
    }
    ~Temp()
    {
        std::cout << "dtor\n";
    }
};

void Func(Temp t)
{
    std::cout << "func work\n";
}

Temp TempFactory()
{
    
}

int main()
{
    Temp t1;
    Func(t1);

    //t1 = TempFactory();
}
