class CfgMagazines {
	class CA_Magazine;
	
	class MRAWS_HEAT_F;
	class TWC_Magazine_L14A1_HE: MRAWS_HEAT_F
	{
		ammo = "TWC_Ammo_L14A1_HE";
		descriptionShort = "Range: 1000 m<br/>Type: HE (High Explosive)<br/>Used in: L14A1";
		displayName = "L42A1 (HE Airburst) Round";
		displayNameShort = "HE";
		initSpeed = 255;
		mass = 66;
	};
	class TWC_Magazine_L14A1_Illum: MRAWS_HEAT_F
	{
		ammo = "TWC_Ammo_L14A1_Illum";
		descriptionShort = "Range: 2300 m<br/>Type: Illumination<br/>Used in: L14A1";
		displayName = "L44A1 (Illum Airburst) Round";
		displayNameShort = "Illum";
		initSpeed = 255;
		mass = 70;
	};
	
	#define L14A1_MAG_HE(RANGE) \
	class TWC_Magazine_L14A1_HE_##RANGE: TWC_Magazine_L14A1_HE { \
		displayName = __EVAL("L42A1 (HE) (" + #RANGE + ") Round"); \
		displayNameShort = __EVAL("HE (" + #RANGE + ")"); \
		ammo = TWC_Ammo_L14A1_HE_##RANGE; \
		scope = 1; \
	};
	L14A1_MAG_HE(200)
	L14A1_MAG_HE(300)
	L14A1_MAG_HE(400)
	L14A1_MAG_HE(500)
	L14A1_MAG_HE(600)
	L14A1_MAG_HE(700)
	L14A1_MAG_HE(800)
	L14A1_MAG_HE(900)
	L14A1_MAG_HE(1000)
	L14A1_MAG_HE(1100)
	L14A1_MAG_HE(1200)
	L14A1_MAG_HE(1300)
	L14A1_MAG_HE(1400)
	L14A1_MAG_HE(1500)
	L14A1_MAG_HE(1600)
	L14A1_MAG_HE(1700)
	L14A1_MAG_HE(1800)
	L14A1_MAG_HE(1900)
	L14A1_MAG_HE(2000)
	L14A1_MAG_HE(2100)
	L14A1_MAG_HE(2200)
	L14A1_MAG_HE(2300)
	
	#define L14A1_MAG_ILLUM(RANGE) \
	class TWC_Magazine_L14A1_ILLUM_##RANGE: TWC_Magazine_L14A1_ILLUM { \
		displayName = __EVAL("L44A1 (Illum) (" + #RANGE + ") Round"); \
		displayNameShort = __EVAL("Illum (" + #RANGE + ")"); \
		ammo = TWC_Ammo_L14A1_ILLUM_##RANGE; \
		scope = 1; \
	};
	L14A1_MAG_ILLUM(200)
	L14A1_MAG_ILLUM(300)
	L14A1_MAG_ILLUM(400)
	L14A1_MAG_ILLUM(500)
	L14A1_MAG_ILLUM(600)
	L14A1_MAG_ILLUM(700)
	L14A1_MAG_ILLUM(800)
	L14A1_MAG_ILLUM(900)
	L14A1_MAG_ILLUM(1000)
	L14A1_MAG_ILLUM(1100)
	L14A1_MAG_ILLUM(1200)
	L14A1_MAG_ILLUM(1300)
	L14A1_MAG_ILLUM(1400)
	L14A1_MAG_ILLUM(1500)
	L14A1_MAG_ILLUM(1600)
	L14A1_MAG_ILLUM(1700)
	L14A1_MAG_ILLUM(1800)
	L14A1_MAG_ILLUM(1900)
	L14A1_MAG_ILLUM(2000)
	L14A1_MAG_ILLUM(2100)
	L14A1_MAG_ILLUM(2200)
	L14A1_MAG_ILLUM(2300)
};
