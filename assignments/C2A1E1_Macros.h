/*
Name: Robert Resendez
Student ID: U10878472
Email: grafx2g@gmail.com
Course Name: C/C++ Programming II : Dynamic Memory and File I/O Concepts
Section ID: 196131
Instructor Name: Mitchell, Raymond L.
Date: 03-29-26
File Name: C2A1E1_Macros.h
Operating System: Win11
Compiler: gcc.exe (Rev2, Built by MSYS2 project) 13.2.0
Content Description: Assignment 1 C2A1E1
*/

// if this file hasn't been included yet
#ifndef C2A1E1_MACROS_H

// mark it as included (prevents double-inclusion)
#define C2A1E1_MACROS_H 

// multiplies two values of any arithmetic type
#define Product(a, b) ((a) * (b))

// flips the sign of a value using unary minus
#define Negate(a) (-(a))

// total array bytes / one element's bytes = element count
#define Elements(arr) (sizeof(arr) / sizeof((arr)[0]))

// end of include guard
#endif
