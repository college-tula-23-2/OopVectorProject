#include <iostream>
#include "Vector.h"

void func()
{
    
        
}

int main()
{
    Vector v;
    for (int i{}; i < 100; i++)
    {
        v.PushBack(100 * (i + 1));
        std::cout << "item = " << 100 * (i + 1)
            << " size = " << v.Size()
            << " capacity = " << v.Capacity() << "\n";
    }
    std::cout << "\n";
        
    for (int i{}; i < 100; i++)
        std::cout << "pop item = " << v.PopBack()
        << " size = " << v.Size()
        << " capacity = " << v.Capacity() << "\n";
    

}
