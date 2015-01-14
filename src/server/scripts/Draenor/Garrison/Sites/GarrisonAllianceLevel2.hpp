////////////////////////////////////////////////////////////////////////////////
//
//  MILLENIUM-STUDIO
//  Copyright 2014-2015 Millenium-studio SARL
//  All Rights Reserved.
//
////////////////////////////////////////////////////////////////////////////////
#ifndef GARRISON_ALLIANCE_LEVEL_2_HPP_GARRISON
#define GARRISON_ALLIANCE_LEVEL_2_HPP_GARRISON

#include "../GarrisonScriptData.hpp"
#include "GarrisonMgr.hpp"

namespace MS { namespace Garrison { namespace Sites
{
    /// Garrison alliance site level 2 instance map script
    class InstanceMapScript_GarrisonAllianceLevel2 : public InstanceMapScript
    {
        public:
            /// Constructor
            InstanceMapScript_GarrisonAllianceLevel2();

            /// Get an instance script instance
            /// @p_Map : Target map
            InstanceScript * GetInstanceScript(InstanceMap * p_Map) const;

    };

}   ///< namespace Sites
}   ///< namespace Garrison
}   ///< namespace MS

#endif  ///< GARRISON_ALLIANCE_LEVEL_2_HPP_GARRISON