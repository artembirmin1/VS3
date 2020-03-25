#ifndef _D_H_
#define _D_H_

#include <iostream> 
#include <vector>
#include <string>
#include "../Operation.h"

class DeserializationOperation : public Operation
{

public:
    vector <string> deserializationOperationData;
    void execute(); 
};

#endif