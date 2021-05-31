

template<class T>
void Derived<T>::tstMethod(int i)
{
  std::cout << ID_STRING << "\n";
  std::cout << "Value of a is: " << a_ << "\n";
  std::cout << "Input is     : " << i  << "\n";
}
