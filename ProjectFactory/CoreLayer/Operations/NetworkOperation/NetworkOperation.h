#ifndef _N_H_
#define _N_H_

#include <iostream> 
#include "../Operation.h"

class NetworkOperation : public Operation
{
public:
    int networkOperationData;
    void execute();
    NetworkOperation(int netOpData);
};

#endif