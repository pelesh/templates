#include <iostream>
#include "Derived.hpp"


#define ID_STRING "Template using double policy ..."



template<class T>
Derived<T>::Derived(T a) : a_(a)
{
  std::cout << "Creating Derived class with the double policy ... \n";
}


#include "DerivedImpl.hpp"

template Derived<double>::Derived(double a);


