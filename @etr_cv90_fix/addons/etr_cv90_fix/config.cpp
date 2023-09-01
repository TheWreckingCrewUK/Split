class CfgPatches {
	class etr_cv90_fix {
		units[]= { };
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
		displayName = "ETR CV90";
		transportSoldier = 3;
	};
	//Desert
	class sfp_strf90c_desert;
	class etr_cv90_desert_fixed: sfp_strf90c_desert
	{
		displayName = "ETR CV90 Desert";
		transportSoldier = 3;
	};
	//Snow
	class sfp_strf90c_snow;
	class etr_cv90_snow_fixed: sfp_strf90c_snow
	{
		displayName = "ETR CV90 Snow";
		transportSoldier = 3;
	};
	//UN
	class sfp_strf90c_un;
	class etr_cv90_un_fixed: sfp_strf90c_un
	{
		displayName = "ETR CV90 UN";
		transportSoldier = 3;
	};
};