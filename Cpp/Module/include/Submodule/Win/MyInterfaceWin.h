//==========================================================
// MyInterfaceWin.h
//
// File description
//
//==========================================================

#ifndef IMYINTERFACEWIN_H
#define IMYINTERFACEWIN_H

//==========================================================
// Headers
//==========================================================
#include "Submodule/Interface/IMyInterface.h"


namespace Submodule
{
	//==========================================================
	// Class description
	//==========================================================
	class MyInterfaceWin : public IMyInterface
	{
	public:
		virtual void MyMethod();
	};
} // namespace Submodule


#endif // IMYINTERFACEWIN_H
