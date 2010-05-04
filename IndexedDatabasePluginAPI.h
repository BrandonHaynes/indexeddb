/**********************************************************\ 
Original Author: Richard Bateman and Georg Fritzsche 

Created:    December 3, 2009
License:    Dual license model; choose one of two:
            Eclipse Public License - Version 1.0
            http://www.eclipse.org/legal/epl-v10.html
            - or -
            GNU Lesser General Public License, version 2.1
            http://www.gnu.org/licenses/lgpl-2.1.html

Copyright 2009 PacketPass Inc, Georg Fritzsche,
               Firebreath development team
\**********************************************************/

#include <string>
#include <sstream>
#include "BrowserHostWrapper.h"

#include "Source/API/Synchronized/EnvironmentSync.h"

class IndexedDatabasePluginAPI : public BrandonHaynes::IndexedDB::API::EnvironmentSync
{
public:
    IndexedDatabasePluginAPI(FB::BrowserHost host);

	FB::JSOutObject getKeyRange();
	FB::JSOutObject getCursor();

private:
	FB::BrowserHost host;
};
