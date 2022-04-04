#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <map>

class EfficientTruckloads
{
private:
    std::map<int,int> lookUpTable;
public:
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);
};
#endif