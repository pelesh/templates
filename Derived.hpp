#include <iostream>
#include "Base.hpp"


template <class T>
class Derived : public Base
{
public:
  Derived(T a) : a_(a)
  {}
  virtual ~Derived(){}

  virtual void tstMethod(int i);

private:
  T a_;
};
