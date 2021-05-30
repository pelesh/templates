#include <iostream>
#include "Derived.hpp"


int main()
{
  Derived<double> d(2.0);
  d.tstMethod(3);

  Derived<int> d2(4);
  d2.tstMethod(3);
  
  return 0;
}

