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

#endif 