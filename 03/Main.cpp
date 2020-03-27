#include <iostream>
#include "CopyConstructorExample.h"
#include "OperatorOverloadExample.h"

using namespace samples;

int main()
{
    // 1. Copy Constructor with char Array
    CopyConstructorExample();

    // 3. Multiplying with a Vector or Scalar in Vector Class
    OperatorOverloadExample();

    return 0;
}
