#include <iostream>
#include "Derived.hpp"
#include "CudaPolicy.hpp"
#include "SeqPolicy.hpp"


int main()
{
  Derived<SeqPolicy> d(2.0);
  d.tstMethod(3);

  Derived<CudaPolicy> d2(4);
  d2.tstMethod(3);
  
  return 0;
}

