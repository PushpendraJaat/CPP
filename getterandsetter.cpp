#include <iostream>
using namespace std;

class Student {
  private:
    string name;
    int std;

  public:
    void setName(string s) {
      name = s;
    }
    void setStandard(int n){
     std = n;
    }
    string getName() {
      return name;
    }
    int getStandard(){
     return std;
     }
    
};

int main() {
  Student myObj;
  myObj.setName("Pushpendra");
  myObj.setStandard(12);
  cout << myObj.getName()<<" "<<myObj.getStandard();
  return 0;
}
