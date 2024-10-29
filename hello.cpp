#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;
  cout << "Changes for git diff" << endl;
    cout << "Changes for description commit" << endl;
    cout << "Making changes in my branch" << endl;
    cout << "Making changes in my branch to see how merging works" << endl;
  MyClass a(5);
  cout << a.getX() << endl;
}
