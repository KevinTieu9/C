/*Kevin Tieu
  Forking.C
  September 3, 2021
  A simple fork program to print a line of text.*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    /*the number of times this will fork is based on 2^N,
      the code below will input the text 16 times*/
    fork();
    fork();
    fork();
    fork();
    printf("Hello! I am forking!\n");
    return 0;
}