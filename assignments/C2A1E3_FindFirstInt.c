/*
Name: Robert Resendez
Student ID: U10878472
Email: grafx2g@gmail.com
Course Name: C/C++ Programming II : Dynamic Memory and File I/O Concepts
Section ID: 196131
Instructor Name: Mitchell, Raymond L.
Date: 03-29-26
File Name: C2A1E3_FindFirstInt.c
Operating System: Win11
Compiler: gcc.exe (Rev2, Built by MSYS2 project) 13.2.0
Content Description: Assignment 1 C2A1E3
*/
#include <stddef.h>
int *FindFirstInt(const int *ptr, size_t count, int value)
{
   // step through each element
   for (size_t elementIndex = 0; elementIndex < count; elementIndex++)
      // check if current element matches
      if (ptr[elementIndex] == value)
         // return pointer to matched element
         return (int *)ptr + elementIndex;
   // value not found, return null
   return NULL;
}
