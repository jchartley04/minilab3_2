#include "myclass.h"

MyClass::MyClass() {
}

MyClass::MyClass(int x_) { 
  x = x_; 
    std::cout << "Changing my class" << std::endl;
}

int MyClass::getX() { 
  return x; 
}
