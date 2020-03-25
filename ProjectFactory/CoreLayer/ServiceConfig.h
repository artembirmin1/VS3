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
template <typename T>
struct ServiceConfig
{
	T* serializationOperationData;
	string requestConfigurationOperationData;
	int networkOperationData;
	LogOperationEnumData* logOperationData = NULL;
	bool* validationOperationData = NULL;
	vector <string> deserializationOperationData;
	ServiceConfig(T* serializationDate, string requestConfigurationData, int networkData, LogOperationEnumData* logData,
		bool* validationData, vector <string> deserializationData)
	{
		requestConfigurationOperationData = requestConfigurationData;
		networkOperationData = networkData;
		logOperationData = logData;
		validationOperationData = validationData;
		deserializationOperationData = deserializationData;
	}
};

#endif