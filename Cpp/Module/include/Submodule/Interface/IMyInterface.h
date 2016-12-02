//==========================================================
// IMyInterface.h
//
// File description
//
//   An interface starts with 'I'
//
//==========================================================

#ifndef IMYINTERFACE_H
#define IMYINTERFACE_H


namespace Submodule
{
	//==========================================================
	// Class description
	//==========================================================
	class IMyInterface
	{
	public:
		virtual ~IMyInterface() {} // Add an empty virtual destructor

		virtual void MyMethod() = 0;
	};
} // namespace Submodule


#endif // IMYINTERFACE_H
