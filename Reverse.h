#ifndef REVERSE_H
#define REVERSE_H
#include <string>

class Reverse{

public:
    Reverse();
    int reverseDigit(int value);
    std::string reverseString(std::string letters);

private:
    int reversed;

};

#endif // REVERSE_H