
#include <iostream>
#include "../OperationFactory.h"
#include "../../../Operations/SerializationOperation/SerializationOperation.h"
#include "../../../ServiceConfig.h"
template <typename T>
class SerializationOperationFactory : public OperationFactory
{
public:
	bool canCreate(ServiceConfig<T>* config);
	Operation* create(ServiceConfig<T>* config);
};

