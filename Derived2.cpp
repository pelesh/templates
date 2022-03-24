#include <iostream>
#include "Derived.hpp"
#include "CudaPolicy.hpp"

#define ID_STRING "Template using CUDA policy ..."



template<class T>
Derived<T>::Derived(double a) : a_(a)
{
  std::cout << "Creating Derived class with the int policy ... \n";
}


#include "DerivedImpl.hpp"
template Derived<CudaPolicy>::Derived(double a);

