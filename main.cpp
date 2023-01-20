#include <iostream>
using namespace std;
int main() {
int *p=new int;
  cout<<*p<<endl;
  cout<<sizeof(*p)<<endl;
  *p=6;
  cout<<*p;
}