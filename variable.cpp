#include <iostream>
#include <string>
using namespace std;
class samsclass{
public:
  void setName(string x){
    name=x;
  }
  string getName(){
    return name;
  }
private:
  string name;
};
int main ()
{
  samsClass bo;
  bo.setName("sir sam is preparing biryani and biryani is eaten by roopesh and naresh");
  cout<<bo.getName();
  return 0;
}
