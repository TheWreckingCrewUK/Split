class CfgPatches {
	class etr_cv90_fix {
		units[]= {
			"etr_cv90_fixed",
			"etr_cv90_desert_fixed",
			"etr_cv90_snow_fixed",
			"etr_cv90_un_fixed"			
		};
		weapons[]= { };
		requiredVersion=0.1;
		
		requiredAddons[]= {
			"sfp_strf90"
		};

		version="1";
		projectName="cv90fix";
		author="SFP+jayman";
	};
};



class cfgVehicles
{
	//Green
	class sfp_strf90c;
	class etr_cv90_fixed: sfp_strf90c
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "CV90 7Man";
		transportSoldier = 3;
	};
	//Desert
	class sfp_strf90c_desert;
	class etr_cv90_desert_fixed: sfp_strf90c_desert
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "CV90 7Man Desert";
		transportSoldier = 3;
	};
	//Snow
	class sfp_strf90c_snow;
	class etr_cv90_snow_fixed: sfp_strf90c_snow
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "CV90 7Man Snow";
		transportSoldier = 3;
	};
	//UN
	class sfp_strf90c_un;
	class etr_cv90_un_fixed: sfp_strf90c_un
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "CV90 7Man UN";
		transportSoldier = 3;
	};
};