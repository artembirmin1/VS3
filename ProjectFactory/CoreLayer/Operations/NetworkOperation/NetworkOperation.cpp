
#include <iostream> 
#include "NetworkOperation.h"

void NetworkOperation::execute()
{
    cout << networkOperationData;
}

NetworkOperation::NetworkOperation(int netOpData)
{
    networkOperationData = netOpData;
}
