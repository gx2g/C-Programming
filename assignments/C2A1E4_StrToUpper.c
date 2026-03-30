/*
Name: Robert Resendez
Student ID: U10878472
Email: grafx2g@gmail.com
Course Name: C/C++ Programming II : Dynamic Memory and File I/O Concepts
Section ID: 196131
Instructor Name: Mitchell, Raymond L.
Date: 03-29-26
File Name: C2A1E4_StrToUpper.c
Operating System: Win11
Compiler: gcc.exe (Rev2, Built by MSYS2 project) 13.2.0
Content Description: Assignment 1 C2A1E4
*/
#include <ctype.h>
#include <stddef.h>
 
size_t StrToUpper(char *dest, const char *src)
{
   // remember where src began
   const char *start = src;
   // copy each char uppercased until null
   while (*dest++ = (char)toupper(*src++))
      ;
   // pointer diff gives length, minus null terminator
   return src - start - 1;
}
