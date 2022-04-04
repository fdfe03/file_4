#include"EfficientTruckloads.h"
#include <map>

EfficientTruckloads::EfficientTruckloads(){

}


int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    int pileOne;
    int pileTwo;
    if(numCrates<= 0 || loadSize <= 0){
        return 0;
    } else if(numCrates <= loadSize) {
        return 1;
    } else if(lookUpTable.find(numCrates) != lookUpTable.end()) {
        return lookUpTable.find(numCrates)->second;
    } else if(numCrates%2 == 1) { 
        pileOne = numCrates/2;
        pileTwo = (numCrates/2)+1;
    } else {
        pileOne = numCrates/2;
        pileTwo = numCrates/2;
    }
    int count = numTrucks(pileOne,loadSize)+numTrucks(pileTwo,loadSize);
    lookUpTable.insert(std::make_pair(numCrates,count));
    return count;
} 