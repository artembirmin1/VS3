#ifndef _S_H_
#define _S_H_

#include <iostream> 
#include "../Operation.h"
template <typename T>
class SerializationOperation : public Operation
{
public:
    T* serializationOperationData;
    void execute() override;
};

#endif