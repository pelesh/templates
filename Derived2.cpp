#include <iostream>
#include "Derived.hpp"

#define ID_STRING "Template using int policy ..."



template<class T>
Derived<T>::Derived(T a) : a_(a)
{
  std::cout << "Creating Derived class with the int policy ... \n";
}

// template<class T>
// void Derived<T>::tstMethod(int i)
// {
//   std::cout << "The other template realization ...\n";
//   std::cout << "Value of a is: " << a_ << "\n";
//   std::cout << "Input is     : " << i  << "\n";
// }

#include "DerivedImpl.hpp"
template Derived<int>::Derived(int a);

