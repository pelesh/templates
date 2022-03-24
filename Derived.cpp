#include <iostream>
#include "Derived.hpp"
#include "SeqPolicy.hpp"


#define ID_STRING "Template using sequential policy ..."



template<class T>
Derived<T>::Derived(double a) : a_(a)
{
  std::cout << "Creating Derived class with the double policy ... \n";
}


#include "DerivedImpl.hpp"

template Derived<SeqPolicy>::Derived(double a);


