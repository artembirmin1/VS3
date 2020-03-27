
#include <iostream> 
#include"LogOperation.h"
#include "../../ServiceConfig.h"

void LogOperation::execute()
{
	switch (*logOperationData)
	{
    case LogOperationEnumData::debug: cout << "debug";
        break;
    case LogOperationEnumData::info: cout << "info";
        break;
    case LogOperationEnumData::warning: cout << "warning";
        break;
    case LogOperationEnumData::error: cout << "error";
        break;
    case LogOperationEnumData::verbose: cout << "verbose";
        break;
    default: cout << "unknown";
        break;
	}
}

LogOperation::LogOperation(LogOperationEnumData* logOpData)
{
    logOperationData = logOpData;
}
