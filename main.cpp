#include <iostream>
using namespace std;
int main() {
char *p=new char;
  cout<<*p<<endl;
  cout<<sizeof(*p)<<endl;
  *p='9';
  cout<<*p;
}