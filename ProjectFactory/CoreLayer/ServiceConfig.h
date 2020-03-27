#ifndef _SC_H_
#define _SC_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class LogOperationEnumData
{
	debug,
	info,
	warning,
	error,
	verbose
};

class ServiceConfig
{
public:
	string requestConfigurationOperationData;
	int networkOperationData;
	LogOperationEnumData* logOperationData = NULL;
	bool* validationOperationData = NULL;
	vector <string> deserializationOperationData;
	ServiceConfig( string requestConfigurationData, int networkData, LogOperationEnumData* logData,
		bool* validationData, vector <string> deserializationData)
	{
		requestConfigurationOperationData = requestConfigurationData;
		networkOperationData = networkData;
		logOperationData = logData;
		validationOperationData = validationData;
		deserializationOperationData = deserializationData;
	}
};

template<typename T>
class GenericServiceConfig : public ServiceConfig
{
public:
	T* serializationOperationData;
	string requestConfigurationOperationData;
	int networkOperationData;
	LogOperationEnumData* logOperationData = NULL;
	bool* validationOperationData = NULL;
	vector <string> deserializationOperationData;
	
	GenericServiceConfig(T* serializationData, string requestConfigurationData, int networkData, LogOperationEnumData* logData,
		bool* validationData, vector <string> deserializationData)
		: ServiceConfig(requestConfigurationData, networkData, logData, validationData, deserializationData)
	{
		serializationOperationData = serializationData;
	}
};

#endif