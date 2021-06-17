//==============================================
// Name           : AKSHAY MUKESHBHAI KATRODIYA
// Email          : amkatrodiya@myseneca.ca
// Student ID     : 125298208
// Section        : NAA
// Date           : 06/05/2021
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds
{
   FILE *fptr;
   bool openFile(const char filename[])
   {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords()
   {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1)
      {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile()
   {
      if (fptr)
         fclose(fptr);
   }
   bool read(char *postal_code)
   {
      return fscanf(fptr, "%[^,],", postal_code) == 1;
   }
   bool read(int &population)
   {
      return fscanf(fptr, "%d\n", &population) == 1;
   }
}