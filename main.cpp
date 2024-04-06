//#include "Binary.h"
#include <iostream>
#include <cstdint>
void testMaxInts();
int main() {
    /*//Default constructor will create 8-bit 0
    Binary b1{};
    std::cout << "Variable\t\tLength\t\tDec Value\t\tBin Value\n";
    std::cout << "b1\t\t\t" << b1.getLength() << "\t\t" << b1.getDec() << "\t\t\t";
    b1.printBin();
    std::cout << '\n';

    //16-bit 45
    Binary b2{16, 45};
    std::cout << "b2\t\t\t" << b2.getLength() << "\t\t" << b2.getDec() << "\t\t\t";
    b2.printBin();
    std::cout << '\n';

    //8-bit 1000, after adjusting for overflow
    Binary b3{31, 1000};
    std::cout << "b3\t\t\t" << b3.getLength() << "\t\t" << b3.getDec() << "\t\t\t";
    b3.printBin();
    std::cout << '\n';

    std::cout << '\n';
    //32-bit addition, adjused for overflow
    std::uint32_t test4_1{4294967294}, test4_2{3};
    Binary b4_1{32, test4_1}, b4_2{32, test4_2};
    std::cout << "b4_1\t\t\t" << b4_1.getLength() << "\t\t" << b4_1.getDec() << "\t\t";
    b4_1.printBin();
    std::cout << '\n';
    std::cout << "b4_2\t\t\t" << b4_2.getLength() << "\t\t" << b4_2.getDec() << "\t\t\t";
    b4_2.printBin();
    std::cout << '\n';
    //b4_1 += b4_2
    b4_1.bAdd(b4_2);
    std::cout << "b4_1\t\t\t" << b4_1.getLength() << "\t\t" << b4_1.getDec() << "\t\t\t";
    b4_1.printBin();
    std::cout << '\n';

    std::cout << '\n';
    //Can't operate on mismatched lengths
    Binary b5_1{}, b5_2{16, 0};
    b5_1.bOr(b5_2);
    std::cout << "b5_1\t\t\t" << b5_1.getLength() << "\t\t" << b5_1.getDec() << "\t\t\t";
    b5_1.printBin();
    std::cout << '\n';
    std::cout << "b5_2\t\t\t" << b5_2.getLength() << "\t\t" << b5_2.getDec() << "\t\t\t";
    b5_2.printBin();
    std::cout << '\n';
    
    std::cout << '\n';
    //Max ints for each length*/
    testMaxInts();

    return 0;
}

void testMaxInts(){
    /*std::cout << "Testing all maximum integers:\n";
    Binary b1{8, 255};
    std::cout << "Variable\t\tLength\t\tDec Value\t\tBin Value\n";
    std::cout << "MAXINT_8\t\t" << b1.getLength() << "\t\t" << b1.getDec() << "\t\t\t";
    b1.printBin();
    std::cout << '\n';

    std::uint16_t test2{65535};
    Binary b2{16, test2};
    std::cout << "MAXINT_16\t\t" << b2.getLength() << "\t\t" << b2.getDec() << "\t\t\t";
    b2.printBin();
    std::cout << '\n';

    std::uint32_t test3{4294967295};
    Binary b3{32, test3};
    std::cout << "MAXINT_32\t\t" << b3.getLength() << "\t\t" << b3.getDec() << "\t\t";
    b3.printBin();
    std::cout << '\n';

    std::cout << '\n';*/
}