#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define fli(a, b) for (int i = a; i < b; i++)
#define flj(a, b) for (int j = a; j < b; j++)
#define flk(a, b) for (int k = a; k < b; k++)
#define ma(a, b) ((a) > (b) ? (a) : (b));
#define mi(a, b) ((a) < (b) ? (a) : (b));
#define pb push_back
#define pob pop_back
#define sz size()
#define p2s(a, b) std::cout << a << ' ' << b << std::endl;
#define pn(a) std::cout << a << std::endl;
#define nl std::cout << std::endl;
#define p(a) std::cout << a;
#define ps(a) std::cout << a << ' ';
#define cig(arr, n) cin.getline(arr, n)
#define sza(a) sizeof(a) / sizeof(int)
#define vec vector<char>
#define v2e vector<vector<int>>
#define v2ec vector<vector<char>>
#define vei vector<int>
#define pu(n) push_back(n);

class Animal
{

public:
    Animal()
    {
        cout << "i am in animal constructor" << endl;
    }
    void speak()
    // virtual void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "i am in dog constructor" << endl;
    }
    void speak()
    // virtual void speak()
    {
        cout << "barking" << endl;
    }
};
int main()
{

    // Animal *a = new Animal;
    // Dog *d = new Dog;

    // a->speak();
    // d->speak();

    ///       *                            important/

    // *          upCasting
    // //?       pointer to object =new object  =>   always call pointer function ifwe can't use virtual
    // //?       keyword in pointer object function   if we use virtual keyword then object function call

    // Animal *a1 = new Dog();

    // a1->speak();

    // //*             downCasting

    // Dog *d1 = (Dog *)new Animal();
    // d1->speak();

    // Animal *a =new Animal();    //?   i am in animal constructor

    // Dog *d = new Dog();         //?  i am in animal constructor
                                //?  i am in dog constructor



    // Animal *a=new Dog();     //?  i am in animal constructor
                               //?  i am in dog constructor




    // Dog *d =(Dog*)new Animal();         //? i am in animal constructor                 
    return 0;
}