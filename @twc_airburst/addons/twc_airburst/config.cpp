class CfgPatches {
	class twc_airburst {
		units[]= { };
		weapons[]= { };
		requiredVersion=0.1;
		
		requiredAddons[]= {
			"A3_Weapons_F",
			"cup_weapons_maaws",
			"cba_xeh"
		};

		version="1";
		projectName="TWC";
		author="jayman";
	};
};

class CfgFunctions {
	class twc_airburst {
		class Functions {
			file="twc_airburst\functions";
			// L14A1 Fuzing
			class addChangeFuzeMenu {};
			class changeFuze {};
			class loadFuzeMenu {};
			class unloadFuzeMenu {};
		};
	};
};

class Mode_SemiAuto;

class CfgWeapons {
	class Launcher;
	class Launcher_Base_F: Launcher {
		class WeaponsSlotsInfo;
	};
	
	class CUP_launch_MAAWS: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	
	class TWC_Weapon_L14A1: CUP_launch_MAAWS
	{
		displayname = "L14A1";
		magazines[] = {
			"TWC_Magazine_L14A1_HEAT","TWC_Magazine_L14A1_HE","TWC_Magazine_L14A1_Smoke","TWC_Magazine_L14A1_Illum",
			"TWC_Magazine_L14A1_HE_200", "TWC_Magazine_L14A1_Illum_200",
			"TWC_Magazine_L14A1_HE_300", "TWC_Magazine_L14A1_Illum_300",
			"TWC_Magazine_L14A1_HE_400", "TWC_Magazine_L14A1_Illum_400",
			"TWC_Magazine_L14A1_HE_500", "TWC_Magazine_L14A1_Illum_500",
			"TWC_Magazine_L14A1_HE_600", "TWC_Magazine_L14A1_Illum_600",
			"TWC_Magazine_L14A1_HE_700", "TWC_Magazine_L14A1_Illum_700",
			"TWC_Magazine_L14A1_HE_800", "TWC_Magazine_L14A1_Illum_800",
			"TWC_Magazine_L14A1_HE_900", "TWC_Magazine_L14A1_Illum_900",
			"TWC_Magazine_L14A1_HE_1000", "TWC_Magazine_L14A1_Illum_1000",
			"TWC_Magazine_L14A1_HE_1100", "TWC_Magazine_L14A1_Illum_1100",
			"TWC_Magazine_L14A1_HE_1200", "TWC_Magazine_L14A1_Illum_1200",
			"TWC_Magazine_L14A1_HE_1300", "TWC_Magazine_L14A1_Illum_1300",
			"TWC_Magazine_L14A1_HE_1400", "TWC_Magazine_L14A1_Illum_1400",
			"TWC_Magazine_L14A1_HE_1500", "TWC_Magazine_L14A1_Illum_1500",
			"TWC_Magazine_L14A1_HE_1600", "TWC_Magazine_L14A1_Illum_1600",
			"TWC_Magazine_L14A1_HE_1700", "TWC_Magazine_L14A1_Illum_1700",
			"TWC_Magazine_L14A1_HE_1800", "TWC_Magazine_L14A1_Illum_1800",
			"TWC_Magazine_L14A1_HE_1900", "TWC_Magazine_L14A1_Illum_1900",
			"TWC_Magazine_L14A1_HE_2000", "TWC_Magazine_L14A1_Illum_2000",
			"TWC_Magazine_L14A1_HE_2100", "TWC_Magazine_L14A1_Illum_2100",
			"TWC_Magazine_L14A1_HE_2200", "TWC_Magazine_L14A1_Illum_2200",
			"TWC_Magazine_L14A1_HE_2300", "TWC_Magazine_L14A1_Illum_2300"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 255;
		};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "L14A1Dialog.hpp"