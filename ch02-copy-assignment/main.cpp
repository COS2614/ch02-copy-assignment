#include <iostream>


class MyClass
{
private:
    int* data;

public:
    MyClass()
    {
        std::cout << "Default constructor called" << std::endl;
    }

    MyClass(const MyClass& other)
    {
        std::cout << "Copy constructor called" << std::endl;
        data = new int[1];
        *data = *(other.data);
    }

    MyClass& operator=(const MyClass& other)
    {
        std::cout << "Assignment operator called" << std::endl;
        if (this != &other)
        {
            delete[] data;
            data = new int[1];
            *data = *(other.data);
        }
        return *this;
    }

    ~MyClass()
    {
        std::cout << "Destructor called" << std::endl;
        delete[] data;
    }
};


int main()
{
    MyClass obj1;           // calls default constructor
    MyClass obj2 = obj1;    // calls copy constructor
    MyClass obj3;           // calls default constructor
    obj3 = obj2;            // calls assignment operator

    return 0;
}
