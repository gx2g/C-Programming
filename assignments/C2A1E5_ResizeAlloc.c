/*
Name: Robert Resendez
Student ID: U10878472
Email: grafx2g@gmail.com
Course Name: C/C++ Programming II : Dynamic Memory and File I/O Concepts
Section ID: 196131
Instructor Name: Mitchell, Raymond L.
Date: 03-29-26
File Name: C2A1E5_ResizeAlloc.c
Operating System: Win11
Compiler: gcc.exe (Rev2, Built by MSYS2 project) 13.2.0
Content Description: Assignment 1 C2A1E5
*/
#include <stdlib.h>
#include <string.h>

void *ResizeAlloc(void *pOld, size_t newSize, size_t oldSize)
{
   // pointer to newly allocated block
   void *pNew;
   // if no size requested
   if (newSize == 0)
      // return null
      return NULL;
   // allocate new block          
   pNew = malloc(newSize);
   // if allocation failed
   if (pNew == NULL)
      // return null
      return NULL;  
   // if no existing block                                      
   if (pOld == NULL)
      // return new block as-is
      return pNew;
   // copy as many bytes as fit
   memcpy(pNew, pOld, newSize > oldSize ? oldSize : newSize);
   // release old block
   free(pOld);
   // return pointer to new block
   return pNew;
}
