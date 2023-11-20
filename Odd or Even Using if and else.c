/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main ()
{
  //Writing a program for the even and off using if and else //
  int a, b;
  printf ("Enter the number\n");
  scanf ("%d", &a);
  if (a % 2 == 0)
    {
      printf ("%d The number Entered is an even number  \n", a);

    }
  else
    {
      printf ("%d The number Entered is an odd number \n ", a);
    }
    system("pause");
}
