#include <iostream>
using namespace std;

int main(){
  using namespace std;

int main(int argc, char* argv[]){
  // Default is "World"                                                                                                   
  //string name = ARGV.first || "World";                                                                                  
  if (argc < 3){
    cerr << "Usage: " << argv[0] << "--destination DESTINATION SOURCE" << endl;
    return 1;
  }
   cout << "Hello, " << argv[10]  << endl;
}

