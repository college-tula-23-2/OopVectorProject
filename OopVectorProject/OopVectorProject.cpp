#include <iostream>
#include "Vector.h"

void func()
{
    
        
}

int main()
{
    Vector<int> v;
    for (int i{}; i < 10; i++)
        v.PushBack(100 * (i + 1));

    

    for (auto it = v.Iterator(); !it.IsEnd(); it.Next())
        std::cout << it.Current() << " ";
    std::cout << "\n";

    Vector<int> vcopy;
    vcopy = v;

    vcopy.At(3) = 5000;

    for (auto it = v.Iterator(); !it.IsEnd(); it++)
        std::cout << it.Current() << " ";
    std::cout << "\n";

    for (auto it = vcopy.Iterator(); !it.IsEnd(); it++)
        std::cout << it.Current() << " ";
    std::cout << "\n";
    

}
