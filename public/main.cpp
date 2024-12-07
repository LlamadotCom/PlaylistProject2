#include "SystemDriver.h"

int main()
{
    SystemDriver system;
    system.run();
    return 0;
}

/*
Run this, make sure we are in the right directory:

clang++ -std=c++14 -o Program SystemDriver.cpp main.cpp

then run,

./Program
*/