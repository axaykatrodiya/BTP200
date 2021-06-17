//==============================================
// Name           : AKSHAY MUKESHBHAI KATRODIYA
// Email          : amkatrodiya@myseneca.ca
// Student ID     : 125298208
// Section        : NAA
// Date           : 06/05/2021
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds
{
  bool openFile(const char filename[]);
  void closeFile();
  int noOfRecords();
  bool read(char *postal_code);
  bool read(int &population);

}
#endif // !SDDS_FILE_H_
