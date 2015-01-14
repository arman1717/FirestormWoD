////////////////////////////////////////////////////////////////////////////////
//
//  MILLENIUM-STUDIO
//  Copyright 2014-2015 Millenium-studio SARL
//  All Rights Reserved.
//
////////////////////////////////////////////////////////////////////////////////
#ifndef GARRISON_HORDE_LEVEL_3_HPP_GARRISON
#define GARRISON_HORDE_LEVEL_3_HPP_GARRISON

#include "../GarrisonScriptData.hpp"
#include "GarrisonMgr.hpp"
#include "ScriptMgr.h"

namespace MS { namespace Garrison { namespace Sites
{
    /// Garrison site base script
    class GarrisonSiteBase : public InstanceScript, public Interfaces::GarrisonSite
    {
        public:
            /// Constructor
            /// @p_Map : Target map
            GarrisonSiteBase(Map* p_Map);
            /// Destructor
            virtual ~GarrisonSiteBase();

            /// Get UInt32 value by ID
            /// @p_ID : Value ID
            uint32 GetData(uint32 p_ID) override;
            /// Set UInt32 value
            /// @p_ID    : Value ID
            /// @p_Value : Value
            void SetData(uint32 p_ID, uint32 p_Value) override;

            /// Called when a player successfully enters the instance.
            /// @p_Player : Entered player instance
            void OnPlayerEnter(Player* p_Player) override;

        public:
            /// When the owner enter in the garrison
            /// @p_Owner : Owner instance
            virtual void OnOwnerEnter(Player * p_Owner) = 0;

        protected:
            uint64                      m_OwnerGUID;    ///< Garrison owner GUID
            std::set<uint64>            m_Players;      ///< Players in garrison
            std::map<uint32, uint32>    m_Data32;       ///< Instance Data

    };

}   ///< namespace Sites
}   ///< namespace Garrison
}   ///< namespace MS

#endif  ///< GARRISON_HORDE_LEVEL_3_HPP_GARRISON