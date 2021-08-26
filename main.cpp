//
//  main.cpp
//  Elman
//
//  Created by bill on 26/08/2021.
//

#include <iostream>

#ifndef __DATE_H__
#include "DATE.h"
#endif

int main(int argc, const char * argv[]) {

    std::cout << "Hello, World!\n";
    
    Date date1(23,8,2029), date2, date3(1,1,1900);
    date2.julian(date1.julian());
    date1.setDate(date2.serial());

    std::cout << date1 << std::endl;
    std::cout << date2 << std::endl;
 
    std::cout << 1 + date1.julian() - date3.julian()  << std::endl;
    std::cout << date2.serial() << std::endl;
    
    return 0;
}
