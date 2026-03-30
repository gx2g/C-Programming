/*
Name: Robert Resendez
Student ID: U10878472
Email: grafx2g@gmail.com
Course Name: C/C++ Programming II : Dynamic Memory and File I/O Concepts
Section ID: 196131
Instructor Name: Mitchell, Raymond L.
Date: 03-29-26
File Name: C2A1E6_AppendFile.cpp
Operating System: Win11
Compiler: gcc.exe (Rev2, Built by MSYS2 project) 13.2.0
Content Description: Assignment 1 C2A1E6
*/
#include <fstream>
#include <iostream>

using namespace std;

int AppendFile(const char *inFile, const char *outFile)
{
   // number of bytes to read/write at a time
   constexpr int CHUNK_SIZE = 4096;  
   // open input file for reading in binary mode
   ifstream input(inFile, ios::binary);
   if (!input)
   {
      cerr << "Error: could not open input file: " << inFile << "\n";
      // input failed to open, nothing else is open
      return -1;
   }
   // open output file for appending in binary mode
   ofstream output(outFile, ios::binary | ios::app);
   if (!output)
   {
      cerr << "Error: could not open output file: " << outFile << "\n";
      // input is open, must close it before returning
      input.close();
      return -1;
   }
   // chunk buffer, avoids reading entire file at once
   char buffer[CHUNK_SIZE];
   // read a full chunk
   while (input.read(buffer, sizeof buffer))
      // write however many bytes were read
      output.write(buffer, input.gcount());
   // write any remaining bytes after last read
   output.write(buffer, input.gcount());

   input.close();
   output.close();
   return 0;
}
