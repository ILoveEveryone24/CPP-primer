#include <iostream>

void exampleOne()
{
  int x = 10; //Int with value 10
  int i = 42; //Int with value 42
  int &r = i; //Reference, returns address of where variable i is stored
  std::cout << r << " and " << &r << std::endl;
  int *p; //Declared pointer p
  std::cout << p << " and " << &p << std::endl;
  p = &i; //Pointer p points to reference of i, returns an address of where i is stored
  std::cout << p << " and " << *p << " and " << &p << std::endl;
  *p = x; //Dereferanced pointer p, a.k.a. the value of p is equal to x, it would return 10
  std::cout << p << " and " << *p << " and " << &p << std::endl;
  int &r2 = *p;//Reference to dereferanced pointer which equals to 10, returns the same address as &r
  std::cout << &r2 << " and " << r2 <<  " and " << &r << std::endl;
}

void exerciseOne()
{
  int *p1 = nullptr;
  std::cout << p1 << " and " << &p1 << std::endl;
  int i = 50;
  p1 = &i;
  std::cout << p1 << " and " << &p1 << " and " << *p1 << std::endl;
  *p1 = 30;
  std::cout << p1 << " and " << &p1 << " and " << *p1 << std::endl;
}

void exerciseTwo()
{
  int n = 10;
  int &m = n;
  //References have to be initialized right away
  //References are bound only to one value and cannot be reinitialized

  int i = 20;
  int *p1 = nullptr;
  p1 = &i;
  //Pointers don't have to be initialized right away
  //Pointers can be reinitialized
}

void exerciseThree()
{
  int i = 42; //Defines and initializes i to 42
  int *p1 = &i; //Defines and initializes pointer p1 to reference of i
  *p1 = *p1 * *p1; // Dereferences p1 and set it's value equal to dereferenced p1 multiplied with dereferenced p1
  // It's the same as i = i * i or i *= i
  std::cout << *p1 << " and " << i << std::endl;
}

void exerciseFour()
{
  int i = 0;

  //double *dp = &i; // Invalid, pointer has to point to the same datatype; double != int
  //int *ip = i; // Invalid, pointer has to point to a reference
  int *p = &i; // Valid, Initializes pointer p to reference of i
}

void exerciseFive()
{
  int g = 10;
  int *p = &g;

  if (p)
    {
      std::cout << "p if" << std::endl;
    } // Will run if the pointer is not nullptr
  if (*p)
    {
      std::cout << "*p if" << std::endl;
    } // Will run if the value is != 0
}

void exerciseSix()
{
  // You cannot, since when defining a pointer it is pointing to a random address
}

void exerciseSeven()
{
  int i = 42;
  void *p = &i; // Legal, because void* can point to any type of object
  //long &lp = &i; // Illegal since a pointer has to point to the same datatype; long != int
}

int main()
{
  exampleOne();
  exerciseOne();
  exerciseTwo();
  exerciseThree();
  exerciseFour();
  exerciseFive();
  exerciseSix();
  exerciseSeven();
}
