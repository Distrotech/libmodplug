/* Modplug XMMS Plugin
 * Authors: Kenton Varda <temporal@gauge3d.org>
 *
 * This source code is public domain.
 */

#ifndef __MODPLUG_ARCHIVE_H__INCLUDED__
#define __MODPLUG_ARCHIVE_H__INCLUDED__

#include "modplugxmms/stddefs.h"
#include <string>
#include <cctype>

using namespace std;

class Archive
{
protected:
	uint32 mSize;
	void* mMap;

	// find which program to use to open the archive
	static string externalProgramName;
	static bool HasExternalProgram();
	
	//This version of IsOurFile is slightly different...
	static bool IsOurFile(const string& aFileName);

public:
	virtual ~Archive();
	
	inline uint32 Size() {return mSize;}
	inline void* Map() {return mMap;}
};

#endif
