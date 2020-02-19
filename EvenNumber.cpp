#include "EvenNumber.h"


  EvenNumber::EvenNumber()
  {
    value = 0;
  }
  EvenNumber::EvenNumber(int newValue)
  {
    value = newValue;
  }
  int EvenNumber::getValue()
  {
    return value;
  }
  int EvenNumber::getNext()
  {
    if(((value + 1) % 2) == 0)
    {
      return value + 1;
    }
    else
    {
      return value + 2;
    }
  }
  int EvenNumber::getPrevious()
  {
    if(((value - 1) % 2) == 0)
    {
      return value - 1;
    }
    else
    {
      return value - 2;
    }
  }