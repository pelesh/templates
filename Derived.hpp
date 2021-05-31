#include <iostream>
#include "Base.hpp"

//#define ID_STRING "empty template"

template <class T>
class Derived : public Base
{
public:
  Derived(T a);
  virtual ~Derived(){}

  virtual void tstMethod(int i);
  // {
  //   std::cout << ID_STRING << "\n";
  //   std::cout << "Value of a is: " << a_ << "\n";
  //   std::cout << "Input is     : " << i  << "\n";
  // }

private:
  T a_;
};
