
#include <iostream> 
#include "ValidationOperation.h"
#include "../../ServiceConfig.h"

using namespace std;

void ValidationOperation::execute()
{
    cout << *validationOperationData;
}

ValidationOperation::ValidationOperation(bool* valOpData)
{
    validationOperationData = valOpData;
}

