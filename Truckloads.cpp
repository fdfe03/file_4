#include"Truckloads.h"
using namespace std;

Truckloads::Truckloads(){

}

int Truckloads::numTrucks(int numCrates, int loadSize){
    int pileOne;
    int pileTwo;
    if(numCrates<= 0 || loadSize <= 0){
        return 0;
    } else if(numCrates <= loadSize) {
        return 1;
    } else if(numCrates%2 == 1) {
        pileOne = numCrates/2;
        pileTwo = (numCrates/2)+1;
    } else {
        pileOne = numCrates/2;
        pileTwo = numCrates/2;
    }
    return numTrucks(pileOne,loadSize)+numTrucks(pileTwo,loadSize);
}