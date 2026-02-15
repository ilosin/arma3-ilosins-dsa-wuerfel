class CfgPatches {
    class DiceRollByDive {
        name = "Ilosin's DSA Dice Roll";
        author = "Ilosin";
        requiredVersion = 1.0;
        requiredAddons[]=
		{
			"A3_Modules_F",
			"zen_context_menu",
			"zen_attributes",
			"zen_custom_modules",
			"cba_main"
		};
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions {
    class DSDR {
        class Functions {
            file = "DSAWuerfelByIlosin\functions";
            class rollDice {};
			class rollDiceZeus {};
			class generateDiceFrames {};
			class generateDiceRange {};
			class getAffectedPlayers {};
			class parseModuleArguments {};
			class executeDiceModule {};
        };
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;

    class DSDR_Modules : NO_CATEGORY {
        displayName = "Dice Roll";
    };
};

class Extended_PostInit_EventHandlers
{
	class DSDR_PostInit
	{
		init="call compile preprocessFileLineNumbers 'DSAWuerfelByIlosin\XEH_postInit.sqf'";
	};
};

#include "CfgSounds.hpp"