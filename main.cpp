#include<iostream>
#include<string>
#include"Reverse.h"
#include"Truckloads.h"
#include"EfficientTruckloads.h"

int main(void){
    Reverse rev;

    std::cout<<rev.reverseDigit(3124)<<std::endl;
    std::cout<<rev.reverseString("hell")<<std::endl;

    Truckloads truck;

    std::cout<<truck.numTrucks(14,3)<<std::endl;
    std::cout<<truck.numTrucks(15,1)<<std::endl;
    std::cout<<truck.numTrucks(1024,5)<<std::endl;

    EfficientTruckloads truck2;
    std::cout<<truck2.numTrucks(14,3)<<std::endl;
}