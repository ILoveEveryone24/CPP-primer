#include <iostream>

void exerciseOne()
{
  int ival = 1.01; // Valid, but it rounds it to 1
  //int &rval1 = 1.01; // Is not legal because a referance must be refering to an object
  int &rval2 = ival; // Valid
  //int &rval3; // Is not legal because a reference must be initialized
}

void exerciseTwo()
{
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;

  r2 = 3.13159; // Valid, uses a referance to d, to set d equal to 3.13159
  r2 = r1; // Valid, uses a referance to d, and sets it equal to another referance which referes to i, which is 0
  i = r2; // Valid, sets i equal to a referance which referes to d, which is 0
  r1 = d; // Valid, uses a referance to refere to i and sets it equal to d, which is 0
}

void exerciseThree()
{
  int i, &ri = i; // Declares i as an int and ri as a referance to i;
  i = 5; ri = 10; // Sets i eqaul to 5, then sets ri which is a referance to i equal to 10, so bascially i = 10
  std::cout << i << " " << ri << std::endl; // prints 10 10
}

int main()
{
  exerciseOne();
  exerciseTwo();
  exerciseThree();
  return 0;
}
