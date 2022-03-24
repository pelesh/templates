#include <iostream>
#include "Base.hpp"


template <class T>
class Derived : public Base, T
{
public:
  Derived(double a);
  virtual ~Derived(){}

  virtual void tstMethod(int i);

private:
  double a_;
  int nnz_;
};
