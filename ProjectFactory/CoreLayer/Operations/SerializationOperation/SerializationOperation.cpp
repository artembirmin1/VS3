
#include <iostream> 
#include "SerializationOperation.h"
#include "../Operation.h"
template <typename T>
void SerializationOperation<T>::execute()
{
    cout << serializationOperationData;
}