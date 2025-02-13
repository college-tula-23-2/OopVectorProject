#include <iostream>
#include "Vector.h"

void func()
{
    
        
}

int main()
{
    Vector<int> v;
    for (int i{}; i < 10; i++)
    {
        v.PushBack(100 * (i + 1));
        std::cout << "item = " << 100 * (i + 1)
            << " size = " << v.Size()
            << " capacity = " << v.Capacity() << "\n";
    }

    auto it = v.Iterator();

    for (it.Reset(); !it.IsEnd(); it.Next())
        std::cout << it.Current() << " ";

    std::cout << "\n";

    for (it.Reset(); !it.IsEnd(); it++)
        std::cout << it.Current() << " ";

    /*std::cout << "\n";
        
    for (int i{}; i < 100; i++)
        std::cout << "pop item = " << v.PopBack()
        << " size = " << v.Size()
        << " capacity = " << v.Capacity() << "\n";*/
    

}
