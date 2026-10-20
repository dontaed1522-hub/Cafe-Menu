#include <iostream>
using namespace std;

//add class definitions below this line
class Fruit {
  private:
  string name;
  string color;

public:
  Fruit(string n, string c) {
      name = n;
      color = c;
    }
  string GetColor() {
    return color;
  }
  string GetName() {
    return name;
  }
  void SetColor(string c) {
    color = c;
  }
  void SetName(string n) {
    name = n;
  }
};
