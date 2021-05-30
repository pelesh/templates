#include <iostream>
#include "Derived.hpp"



//template<class T>
//Derived<T>::Derived(T a) : a_(a)
//{}

template<class T>
void Derived<T>::tstMethod(int i)
{
  std::cout << "The other template realization ...\n";
  std::cout << "Value of a is: " << a_ << "\n";
  std::cout << "Input is     : " << i  << "\n";
}

template Derived<int>::Derived(int a);
