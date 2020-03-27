
#include <iostream> 
#include "RequestConfigurationOperation.h"

void RequestConfigurationOperation::execute()
{
    cout << requestConfigurationOperationData;
}

RequestConfigurationOperation::RequestConfigurationOperation(string reqOpData)
{
    requestConfigurationOperationData = reqOpData;
}
