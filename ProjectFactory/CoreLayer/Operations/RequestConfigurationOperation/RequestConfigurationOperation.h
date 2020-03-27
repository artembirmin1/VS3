#ifndef _R_H_
#define _R_H_

#include <iostream> 
#include <string>
#include "../Operation.h"

class RequestConfigurationOperation : public Operation
{
public:
    string requestConfigurationOperationData;
    void execute();
    RequestConfigurationOperation(string reqOpData);
};

#endif