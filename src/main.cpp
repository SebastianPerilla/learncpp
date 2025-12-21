#include "io.h"

int main()
{
  Card::Sebas sebas;
  sebas.print();
  
  return 0;
}


/*

lets think of the compilation process, we share the header files so know what is where,
then we link up the things at the top of the files
so normally we have functions defined as a "forward delcaration"
then we replace that part of the function with its implementation,

So if we have a header file with a full class and its variables that is what is necessary to know if a function has any member functions???

so given that assumption, we should define everything inside the header file for the classes

*/
