/*
 * mock_spells_Spell.h, part of VCMI engine
 *
 * Authors: listed in file AUTHORS in main folder
 *
 * License: GNU General Public License v2.0 or later
 * Full text of license available in license.txt file, in main folder
 *
 */

#pragma once

#include <vcmi/spells/Spell.h>

namespace spells
{

class SpellMock : public Spell
{
public:
	MOCK_CONST_METHOD0(getIndex, int32_t());
	MOCK_CONST_METHOD0(getJsonKey, const std::string &());
	MOCK_CONST_METHOD0(getName, const std::string &());
	MOCK_CONST_METHOD0(getId, SpellID());
	MOCK_CONST_METHOD0(getLevel, int32_t());
	MOCK_CONST_METHOD1(getCost, int32_t(const int32_t));
	MOCK_CONST_METHOD0(getBasePower, int32_t());
	MOCK_CONST_METHOD1(getLevelPower, int32_t(const int32_t));
	MOCK_CONST_METHOD0(getPositiveness, boost::logic::tribool());
	MOCK_CONST_METHOD0(isAdventureSpell, bool());
	MOCK_CONST_METHOD1(forEachSchool, void(const std::function<void (const SchoolInfo &, bool &)> &));
};

}

