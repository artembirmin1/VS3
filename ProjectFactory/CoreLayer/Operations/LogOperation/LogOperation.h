#ifndef _L_H_
#define _L_H_

#include <iostream> 
#include "../Operation.h"
#include "../../ServiceConfig.h"

class LogOperation : public Operation
{
public:
    LogOperationEnumData* logOperationData;
    void execute();
    LogOperation(LogOperationEnumData* logOpData);
};

#endif