//==============================================
// Name           : AKSHAY MUKESHBHAI KATRODIYA
// Email          : amkatrodiya@myseneca.ca
// Student ID     : 125298208
// Section        : NAA
// Date           : 06/02/2021
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


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
   bool read(char *empName)
   {
      return fscanf(fptr, "%[^\n]\n", empName) == 1;
   }

   bool read(int &empNum)
   {
      return fscanf(fptr, "%d,", &empNum) == 1;
   }

   bool read(double &empSal)
   {
      return fscanf(fptr, "%lf,", &empSal) == 1;
   }
}