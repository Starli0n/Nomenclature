//==========================================================
// MyInterfaceMac.h
//
// File description
//
//==========================================================

#ifndef IMYINTERFACEMAC_H
#define IMYINTERFACEMAC_H

//==========================================================
// Headers
//==========================================================
#include "Submodule/Interface/IMyInterface.h"


namespace Submodule
{
	//==========================================================
	// Class description
	//==========================================================
	class MyInterfaceMac : public IMyInterface
	{
	public:
		virtual void MyMethod();
	};
} // namespace Submodule


#endif // IMYINTERFACEMAC_H
