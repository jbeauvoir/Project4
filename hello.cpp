#include <iostream>
using namespace std;

int main(){
  # Default is "World"
  name = ARGV.first || "World"
  
  
  cout << "Hello, #{name}!" << endl;
}
