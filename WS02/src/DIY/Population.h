//==============================================
// Name           : AKSHAY MUKESHBHAI KATRODIYA
// Email          : amkatrodiya@myseneca.ca
// Student ID     : 125298208
// Section        : NAA
// Date           : 06/05/2021
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_POPULATION_H_
#define SDDS_POPULATION_H_
namespace sdds {

  struct PostalCode
  {
    char *postal_code;
    int population;
  };


  void sort();
  bool load(PostalCode &post);
  bool load(const char filename[]);
  void display(const PostalCode &postal_code);
  void display();
  void deallocateMemory();

}
#endif // SDDS_POPULATION_H_