#include "Reverse.h"
#include <string>
#include <math.h>
using namespace std;

Reverse::Reverse(){
    reversed = 0;
}


int Reverse::reverseDigit(int value){
    int memory;
    
    if (value < 0){
        return -1;
    } else if (value > 0) {
        memory = value % 10;
        reversed = reversed * 10 + memory;
        reverseDigit(value/10);
    } else { 
        return reversed;
    }
}

string Reverse::reverseString(string letters){
    if (letters.length() == 0){
        return "ERROR";
    } else if (letters.length() == 1){
        return letters;
    } else {
        return reverseString(letters.substr(1, letters.length())) + letters[0];
    }
}