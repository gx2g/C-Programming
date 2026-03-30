/*
Name: Robert Resendez
Student ID: U10878472
Email: grafx2g@gmail.com
Course Name: C/C++ Programming II : Dynamic Memory and File I/O Concepts
Section ID: 196131
Instructor Name: Mitchell, Raymond L.
Date: 03-29-26
File Name: C2A1E2_main.c
Operating System: Win11
Compiler: gcc.exe (Rev2, Built by MSYS2 project) 13.2.0
Content Description: Assignment 1 C2A1E2, passed arguments for testing 

.\C2A1E2_test.exe hello world
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
   // print count of arguments
   printf("%d\n", argc);
   
   // loop through each argument
   for (int argIndex = 0; argIndex < argc; argIndex++)

      // print each argument on its own line
      printf("%s\n", argv[argIndex]);
   
   return 0;
}
