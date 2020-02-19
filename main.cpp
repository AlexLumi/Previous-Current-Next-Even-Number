#include <iostream>
#include "EvenNumber.h"
using namespace std;



int main()
{
  int x;
  cout << "What is the number you want to input?" << endl;
  cin >> x;
  EvenNumber num1(x);
  cout << "Current Number is: " << num1.getValue() << endl;
  cout << "The next even number is: " << num1.getNext() << endl;
  cout << "The previous even number is: " << num1.getPrevious() << endl;

}