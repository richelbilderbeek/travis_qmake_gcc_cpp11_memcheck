#include <cassert>
#include <iostream>

int main()
{
  static_assert(1 + 1 == 2, "C++11 must be enabled for this to compile");
  for (int i=0; i!=10; ++i)
  {
    //Allocate memory here
    int * const p = new int;

    assert(p);
    if (!p) return 1; //Just to use p, will never happen

    //delete p; //Oop, forgotten!
  }
}
