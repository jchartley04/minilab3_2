#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;
  cout << "Changes for git diff" << endl;
    cout << "Changes for description commit" << endl;
  MyClass a(5);
  cout << a.getX() << endl;
}
