//==========================================================
// MyClass.h
//
// File description
//
//   'Module' define a static or dynamic library (ie: Core)
//
//   'Submodule' define a set of functionallity around the same tpopic (ie: file, config, log, ...)
//
//   ClassName are 'CamelCase' with Cap in 1st (FileName as well)
//   Methods are 'CamelCase()' with Cap in 1st
//   Params are 'camelCase' too without Cap in 1st
//
//   Define in this order 'public', 'protected' and 'private'
//
//   Getter and Setter are at the end of the public section
//   Getter and Setter are inline when they are simple
//
//   Data members are at the beginning of the private section
//
//==========================================================

#ifndef MYCLASS_H
#define MYCLASS_H

//==========================================================
// Headers
//==========================================================
#include <string>


//==========================================================
// Using
//==========================================================
using namespace std;


namespace Submodule
{
	//==========================================================
	// Class description
	//==========================================================
	class MyClass
	{
	public:

		//----------------------------------------------------------
		// Constructor
		//----------------------------------------------------------
		MyClass(const string& name = "unknown");

		//----------------------------------------------------------
		// Getter
		//   Method is 'cont'
		//   Return a const ref on the data member
		//----------------------------------------------------------
		inline const string& GetName() const { return m_sName; }

		//----------------------------------------------------------
		// Setter
		//   param is a const ref
		//----------------------------------------------------------
		inline void SetName(const string& sName) { m_sName = sName; }

	private:

		//----------------------------------------------------------
		// Data members
		//   prefixed by 'm_' and an initial for primitive type
		//----------------------------------------------------------
		string m_sName;
		int m_iCounter;
		float m_fValue;
		double m_dValue;
		MyClass* m_pObjet; // no initial for objects but 'p' for pointers
		int* m_piCounter; // 2 initials for pointer on primitive type
	};
} // namespace Submodule


#endif // MYCLASS_H

// An empy line at the end to prevent compilation error
