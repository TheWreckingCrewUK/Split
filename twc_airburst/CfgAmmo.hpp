class CfgAmmo {
	
	class F_40mm_White;
	class Grenade;
	class CUP_R_MEEWS_HEAT;
	class TWC_Ammo_L14A1_HEAT: CUP_R_MEEWS_HEAT {
		
	};
	class TWC_Ammo_L14A1_HE: CUP_R_MEEWS_HEAT {
		aiAmmoUsageFlags = "64 + 128";
		allowAgainstInfantry = 1;
		hit = 100;
		indirectHit = 60;
		indirectHitRange = 12;
		initSpeed = 255;
		explosive = 1;
		submunitionAmmo = "TWC_Ammo_L14A1_HE_Submunition";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 1;
		
		model = "\A3\Weapons_f\empty";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01","db20",1,1200};
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
		explosionEffects = "GrenadeExplosion";
		
		warheadName = "HE";
	};
	class TWC_Ammo_L14A1_HE_Submunition: Grenade {
		hit = 100;
		indirectHit = 60;
		indirectHitRange = 12;
		explosive = 1;
		timeToLive = 0.1;
		explosionTime = 0.001;
		model = "\A3\Weapons_f\empty";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01","db20",1,1200};
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
		explosionEffects = "GrenadeExplosion";
	};
	class TWC_Ammo_L14A1_Smoke: CUP_R_MEEWS_HEAT {
		aiAmmoUsageFlags = "4";
		allowAgainstInfantry = 1;
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 255;
		submunitionAmmo = "SmokeShellArty";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,0};
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 1;
		warheadName = "Smoke";
	};
	class TWC_Ammo_L14A1_Illum: CUP_R_MEEWS_HEAT {
		aiAmmoUsageFlags = "1";
		hit = 5;
		indirectHit = 14;
		indirectHitRange = 2;
		initSpeed = 255;
		submunitionAmmo = "TWC_Ammo_L14A1_Illum_Submunition";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionConeAngle = 90;
		submunitionInitialOffset[] = {0,0,0};
		submunitionInitSpeed = 2;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 1;
		warheadName = "Illum";
	};
	class TWC_Ammo_L14A1_Illum_Submunition: F_40mm_White {
		intensity = 1000000; // 10x stronger than default
		timeToLive = 90;
		coefGravity = 0.25;
		
	};
	
	#define L14A1_AMMO_HE(RANGE) \
	class TWC_Ammo_L14A1_HE_##RANGE: TWC_Ammo_L14A1_HE { \
		triggerTime = __EVAL(RANGE / 255); \
	};
	L14A1_AMMO_HE(200)
	L14A1_AMMO_HE(300)
	L14A1_AMMO_HE(400)
	L14A1_AMMO_HE(500)
	L14A1_AMMO_HE(600)
	L14A1_AMMO_HE(700)
	L14A1_AMMO_HE(800)
	L14A1_AMMO_HE(900)
	L14A1_AMMO_HE(1000)
	L14A1_AMMO_HE(1100)
	L14A1_AMMO_HE(1200)
	L14A1_AMMO_HE(1300)
	L14A1_AMMO_HE(1400)
	L14A1_AMMO_HE(1500)
	L14A1_AMMO_HE(1600)
	L14A1_AMMO_HE(1700)
	L14A1_AMMO_HE(1800)
	L14A1_AMMO_HE(1900)
	L14A1_AMMO_HE(2000)
	L14A1_AMMO_HE(2100)
	L14A1_AMMO_HE(2200)
	L14A1_AMMO_HE(2300)
	
	#define L14A1_AMMO_ILLUM(RANGE) \
	class TWC_Ammo_L14A1_ILLUM_##RANGE: TWC_Ammo_L14A1_Illum { \
		triggerTime = __EVAL(RANGE / 255); \
	};
	L14A1_AMMO_ILLUM(200)
	L14A1_AMMO_ILLUM(300)
	L14A1_AMMO_ILLUM(400)
	L14A1_AMMO_ILLUM(500)
	L14A1_AMMO_ILLUM(600)
	L14A1_AMMO_ILLUM(700)
	L14A1_AMMO_ILLUM(800)
	L14A1_AMMO_ILLUM(900)
	L14A1_AMMO_ILLUM(1000)
	L14A1_AMMO_ILLUM(1100)
	L14A1_AMMO_ILLUM(1200)
	L14A1_AMMO_ILLUM(1300)
	L14A1_AMMO_ILLUM(1400)
	L14A1_AMMO_ILLUM(1500)
	L14A1_AMMO_ILLUM(1600)
	L14A1_AMMO_ILLUM(1700)
	L14A1_AMMO_ILLUM(1800)
	L14A1_AMMO_ILLUM(1900)
	L14A1_AMMO_ILLUM(2000)
	L14A1_AMMO_ILLUM(2100)
	L14A1_AMMO_ILLUM(2200)
	L14A1_AMMO_ILLUM(2300)
};