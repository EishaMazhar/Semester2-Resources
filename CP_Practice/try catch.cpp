#include <iostream>
using namespace std;
 
class Test {
public:
   Test() { cout << "Constructing an object of Test " << endl; }
  ~Test() { cout << "Destructing an object of Test "  << endl; }
};
 
int main() {
  try {
    Test t1;
    throw 10;
  } 
 
  catch(int i) {
    cout << "Caught " << i << endl;
  }
}
