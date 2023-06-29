// #include <iostream>

// class DynamicArray
// {
// public:
//   int *data;
//   int size;

// public:
//   DynamicArray(int size)
//   {
//     this->size = size;
//     data = new int[size];
//     std::cout << "DynamicArray constructor called" << std::endl;
//   }
//   // DynamicArray(int size) : size(size) {
//   //     data = new int[size];
//   //     std::cout << "DynamicArray constructor called" << std::endl;
//   // }

//   ~DynamicArray()
//   {
//     delete[] data;
//     std::cout << "DynamicArray destructor called" << std::endl;
//   }

//   void setValue(int index, int value)
//   {
//     if (index >= 0 && index < size)
//     {
//       data[index] = value;
//     }
//   }

//   int getValue(int index)
//   {
//     if (index >= 0 && index < size)
//     {
//       return data[index];
//     }
//     return -1; // Invalid index
//   }
// };

// int main()
// {
//   DynamicArray arr(5);

//   for (int i = 0; i < 5; i++)
//   {
//     arr.setValue(i, i + 1);
//   }

//   for (int i = 0; i < 5; i++)
//   {
//     std::cout << "Value at index " << i << ": " << arr.getValue(i) << std::endl;
//   }
//   delete arr.data;

//   return 0;
// }

#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    MyClass obj; // Creating an object of MyClass

    // Rest of the program

    return 0;
}