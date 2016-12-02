#include "Submodule/MyClass.h"

namespace Submodule
{
	MyClass::MyClass(const string & sName):
		m_sName(sName)
	{
		// local variables idem as data members without 'm_'
		int iCounter;
		float fValue;
		double dValue;
		MyClass* pObjet; // no initial for objects but 'p' for pointers
		int* piCounter; // 2 initials for pointer on primitive type
	}
}
