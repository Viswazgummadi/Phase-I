#include <bits/stdc++.h>

template <typename T>
class MyTemplateClass
{
private:
    T data;

public:
    MyTemplateClass(T d) : data(d) {}
    void display()
    {
        std::cout << "Data: " << data << std::endl;
    }
};

int main()
{
    MyTemplateClass<int> obj1(10);              // T is int
    MyTemplateClass<double> obj2(3.14);         // T is double
    MyTemplateClass<std::string> obj3("Hello"); // T is string

    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
