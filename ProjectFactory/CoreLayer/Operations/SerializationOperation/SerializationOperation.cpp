#ifndef _S_CPP_
#define _S_CPP_

#include <iostream> 
#include "SerializationOperation.h"
#include "../Operation.h"

template<typename T>
void SerializationOperation<T>::execute()
{
    cout << *serializationOperationData;
}

template<typename T>
SerializationOperation<T>::SerializationOperation(T* serOpData)
{
    serializationOperationData = serOpData;
}

#endif 