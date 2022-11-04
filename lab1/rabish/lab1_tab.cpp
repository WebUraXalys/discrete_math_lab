#include <iostream>
#include <iomanip>

int main()
{
   std::cout << "ID# " << std::setw(22) << std::left << "ATTRIBUTE_NAME"
             << std::setw(8) << "FLAG"
             << std::setw(6) << "VALUE"
             << std::setw(6) << "WORST"
             << std::setw(7) << "THRESH"
             << std::setw(9) << "TYPE"
             << std::setw(8) << "UPDATE"
             << std::setw(12) << "WHEN_FAILED"
             << "RAW_VALUE"
             << std::endl;
}