#ifndef _S_H_
#define _S_H_

#include <iostream> 
#include "../Operation.h"

class SerializationOperation : public Operation
{
public:
     void execute() override;
};

#endif