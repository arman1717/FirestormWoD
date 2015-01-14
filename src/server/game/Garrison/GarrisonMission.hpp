////////////////////////////////////////////////////////////////////////////////
//
//  MILLENIUM-STUDIO
//  Copyright 2014-2015 Millenium-studio SARL
//  All Rights Reserved.
//
////////////////////////////////////////////////////////////////////////////////
#ifndef GARRISON_MGR_MISSION_HPP_GARRISON
#define GARRISON_MGR_MISSION_HPP_GARRISON

#include "GarrisonMgrConstants.hpp"

namespace MS { namespace Garrison 
{
    /// Garrison mission
    struct GarrisonMission
    {
        uint32 DB_ID;               ///< Mission DB ID
        uint32 MissionID;           ///< Mission ID (GarrMission.db2)
        uint32 OfferTime;           ///< Offer time
        uint32 OfferMaxDuration;    ///< Offer max duration
        uint32 StartTime;           ///< Start time
        GarrisonMissionState State; ///< Mission state
    };

}   ///< namespace Garrison
}   ///< namespace MS

#endif  ///< GARRISON_MGR_MISSION_HPP_GARRISON