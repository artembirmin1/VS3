#ifndef _V_H_
#define _V_H_

#include <iostream> 
#include "../Operation.h"

class ValidationOperation : public Operation
{

public:
    bool* validationOperationData = NULL;
    void execute();
};

#endif
