#include <iostream>


void exampleOne()
{
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
}

void exerciseOne()
{
  std::cout << "Hello world!" << std::endl;
}

void exerciseTwo()
{
  std::cout << "Enter two numbers: " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The prduct of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
}

void exerciseThree()
{
  std::cout << "Enter two numbers: " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of ";
  std::cout << v1;
  std::cout << " and ";
  std::cout << v2;
  std::cout << " is ";
  std::cout << v1 + v2 << std::endl;
}

void exerciseFour()
{
  int v1 = 0, v2 = 0;
  //std::cout << "The sum of " << v1;
  //<< " and " << v2;
  //<< " is " << v1 + v2 << std::endl;
  //This isn't legal, because the second and third line has no ostream specified,
  //since << takes two operands, one left-hand operand and one right-hand operand
  //and the left-hand one is missing, it throws an error.
  //This could be simply fixed by just removing the two semicolongs at the end of the first and second line
  //This way, we are telling that the line isn't over after line one, and it should continue reading
  //until it hits the semicolong at the end of std::endl'

  std::cout << "The sum of " << v1
  << " and " << v2
  << " is " << v1 + v2 << std::endl;
}

int main()
{
  exampleOne();
  exerciseOne();
  exerciseTwo();
  exerciseThree();
  exerciseFour();
  return 0;
}
