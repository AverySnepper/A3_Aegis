class CfgMagazines
{
    /* Bases */
	class CA_Magazine;
	class CA_LauncherMagazine;

    /* Magazines */
	class 30Rnd_556x45_Stanag;
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"};
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_65x39_caseless_mag1;
	};
	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag
	{
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_65x39_caseless_green1;
        displayName = $STR_A3_A_CfgMagazines_30Rnd_65x39_caseless_green0;
		count = 20;
		mass = 8;
	};
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_65x39_caseless_mag_Tracer1;
	};
	class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green
	{
		lastRoundsTracer = 20;
        displayName = $STR_A3_A_CfgMagazines_30Rnd_65x39_caseless_green_mag_Tracer0;
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_65x39_caseless_green_mag_Tracer1;
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_02_black_CO.paa"};
	};
	class 7Rnd_408_Mag;
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		descriptionShort = $STR_A3_A_CfgMagazines_100Rnd_65x39_caseless_mag1;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_CO.paa"};
	};
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
		descriptionShort = $STR_A3_A_CfgMagazines_100Rnd_65x39_caseless_mag_Tracer1;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_CO.paa"};
	};
	class 30Rnd_9x21_Mag: CA_Magazine
	{
        scope = protected;
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_9x21_Mag1;
    };
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		displayName = $STR_A3_A_CfgMagazines_16Rnd_9x21_Mag0;
		descriptionShort = $STR_A3_A_CfgMagazines_16Rnd_9x21_Mag1;
		count = 15;
	};
	class 30Rnd_9x21_Mag_SMG_02: 30Rnd_9x21_Mag
	{
        scope = public;
    };
	class 16Rnd_9x21_red_Mag: 16Rnd_9x21_Mag
	{
		displayName = $STR_A3_A_CfgMagazines_16Rnd_9x21_red_Mag0;
	};
	class 16Rnd_9x21_green_Mag: 16Rnd_9x21_Mag
	{
		displayName = $STR_A3_A_CfgMagazines_16Rnd_9x21_green_Mag0;
	};
	class 16Rnd_9x21_yellow_Mag: 16Rnd_9x21_Mag
	{
		displayName = $STR_A3_A_CfgMagazines_16Rnd_9x21_yellow_Mag0;
	};
	class 1Rnd_HE_Grenade_shell;
	class 1Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class 1Rnd_SmokeGreen_Grenade_shell;
	class 1Rnd_SmokeYellow_Grenade_shell;
	class 1Rnd_SmokePurple_Grenade_shell;
	class 1Rnd_SmokeBlue_Grenade_shell;
	class 1Rnd_SmokeOrange_Grenade_shell;
	class HandGrenade: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_HandGrenade0;
		displayNameShort = $STR_A3_A_CfgMagazines_HandGrenade_dns;
	};
	class MiniGrenade: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_MiniGrenade0;
		displayNameShort = $STR_A3_A_CfgMagazines_MiniGrenade_dns;
	};
	class UGL_FlareWhite_F: CA_Magazine
    {
		modelSpecial = "\A3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
		modelSpecialIsProxy = true;
    };
	class UGL_FlareGreen_F;
	class UGL_FlareRed_F;
	class UGL_FlareYellow_F;
	class UGL_FlareCIR_F;
	class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag
    {
        scope = public;
    };
	class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
    {
		displayName = $STR_A3_A_CfgMagazines_9Rnd_45ACP_Mag0;
		descriptionShort = $STR_A3_A_CfgMagazines_9Rnd_45ACP_Mag1;
		count = 7;
		ammo = B_45ACP_Ball_Yellow;
    };
	class 150Rnd_762x51_Box: CA_Magazine
	{
		scope = protected;
	};
	class 150Rnd_762x54_Box: 150Rnd_762x51_Box
	{
		scope = public;
	};
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_11Rnd_45ACP_Mag0;
		count = 15;
		descriptionShort = $STR_A3_A_CfgMagazines_11Rnd_45ACP_Mag1;
	};
	class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		scope = protected;
	};
	class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag
	{
		scope = public;
	};
	class B_IR_Grenade: CA_Magazine
    {
        displayName = $STR_A3_A_CfgMagazines_B_IR_Grenade0;
		descriptionShort = $STR_A3_A_CfgMagazines_B_IR_Grenade1;
    };
	class O_IR_Grenade: B_IR_Grenade
    {
        displayName = $STR_A3_A_CfgMagazines_O_IR_Grenade0;
		descriptionShort = $STR_A3_A_CfgMagazines_O_IR_Grenade1;
    };
	class I_IR_Grenade: B_IR_Grenade
    {
        displayName = $STR_A3_A_CfgMagazines_I_IR_Grenade0;
		descriptionShort = $STR_A3_A_CfgMagazines_I_IR_Grenade1;
    };
	class 130Rnd_338_Mag: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_130Rnd_338_Mag0;
		count = 100;
		descriptionShort = $STR_A3_A_CfgMagazines_130Rnd_338_Mag1;
        tracersEvery = 3;
		lastRoundsTracer = 4;
		mass = 46;
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_150Rnd_93x64_Mag0;
		count = 120;
		descriptionShort = $STR_A3_A_CfgMagazines_150Rnd_93x64_Mag1;
        tracersEvery = 5;
		mass = 56;
	};
	class 10Rnd_9x21_Mag: 16Rnd_9x21_Mag
	{
		scope = public;
	};
	class 30Rnd_762x39_Mag_F: CA_Magazine
	{
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_762x39_Mag_F1;
	};
	class 30Rnd_762x39_AK12_Mag_F: 30Rnd_762x39_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_30Rnd_762x39_AK12_Mag_F0;
	};
	class 30Rnd_762x39_AK12_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_30Rnd_762x39_AK12_Mag_Tracer_F0;
	};
	class 30Rnd_545x39_Mag_F: CA_Magazine
	{
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_545x39_Mag_F1;
	};
	class 30Rnd_545x39_Mag_Green_F;
	class 30Rnd_545x39_Mag_Tracer_Green_F;
	class 30Rnd_580x42_Mag_F: CA_Magazine
    {
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_580x42_Mag_F1;
    };
	class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_580x42_Mag_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_100Rnd_580x42_Mag_F1;
		count = 75;
		mass = 16;
        tracersEvery = 4;
	};
	class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_580x42_Mag_Tracer_F0;
		lastRoundsTracer = 75;
	};
	class 100Rnd_580x42_hex_Mag_F: 100Rnd_580x42_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_580x42_hex_Mag_F0;
	};
	class 100Rnd_580x42_hex_Mag_Tracer_F: 100Rnd_580x42_Mag_Tracer_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_580x42_hex_Mag_Tracer_F0;
	};
	class 100Rnd_580x42_ghex_Mag_F: 100Rnd_580x42_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_580x42_ghex_Mag_F0;
	};
	class 100Rnd_580x42_ghex_Mag_Tracer_F: 100Rnd_580x42_Mag_Tracer_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_580x42_ghex_Mag_Tracer_F0;
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_20Rnd_650x39_Cased_Mag_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_20Rnd_650x39_Cased_Mag_F1;
		count = 10;
		mass = 6;
	};
	class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_150Rnd_556x45_Drum_Mag_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_150Rnd_556x45_Drum_Mag_F1;
		count = 100;
        tracersEvery = 4;
		mass = 20;
	};
	class 150Rnd_556x45_Drum_Sand_Mag_F: 150Rnd_556x45_Drum_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_150Rnd_556x45_Drum_Sand_Mag_F0;
	};
	class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F: 150Rnd_556x45_Drum_Sand_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_150Rnd_556x45_Drum_Sand_Mag_Tracer_F0;
	};
	class 150Rnd_556x45_Drum_Green_Mag_F: 150Rnd_556x45_Drum_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_150Rnd_556x45_Drum_Green_Mag_F0;
	};
	class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_150Rnd_556x45_Drum_Green_Mag_Tracer_F0;
	};
	class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_150Rnd_556x45_Drum_Mag_Tracer_F0;
		lastRoundsTracer = 100;
	};
    class Vorona_HEAT;
    class Vorona_HE;
	class 75Rnd_762x39_Mag_F: 30Rnd_762x39_Mag_F
	{
		descriptionShort = $STR_A3_A_CfgMagazines_75rnd_762x39_Mag_F1;
        tracersEvery = 4;
    };
    class 75Rnd_762x39_Mag_Tracer_F;
	class 30rnd_762x39_AK12_Lush_Mag_F: 30Rnd_762x39_AK12_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_30rnd_762x39_AK12_Lush_Mag_F0;
	};
	class 30rnd_762x39_AK12_Lush_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F
	{
		displayName = $STR_A3_A_CfgMagazines_30rnd_762x39_AK12_Lush_Mag_Tracer_F0;
	};
	class 30rnd_762x39_AK12_Arid_Mag_F: 30Rnd_762x39_AK12_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_30rnd_762x39_AK12_Arid_Mag_F0;
	};
	class 30rnd_762x39_AK12_Arid_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F
	{
		displayName = $STR_A3_A_CfgMagazines_30rnd_762x39_AK12_Arid_Mag_Tracer_F0;
	};
	class 75rnd_762x39_AK12_Mag_F: 30Rnd_762x39_AK12_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_75rnd_762x39_AK12_Mag_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_75rnd_762x39_AK12_Mag_F1;
        tracersEvery = 4;
    };
	class 75rnd_762x39_AK12_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_75rnd_762x39_AK12_Mag_Tracer_F0;
	};
	class 75rnd_762x39_AK12_Lush_Mag_F: 75rnd_762x39_AK12_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_75rnd_762x39_AK12_Lush_Mag_F0;
	};
	class 75rnd_762x39_AK12_Lush_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F
	{
		displayName = $STR_A3_A_CfgMagazines_75rnd_762x39_AK12_Lush_Mag_Tracer_F0;
	};
	class 75rnd_762x39_AK12_Arid_Mag_F: 75rnd_762x39_AK12_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_75rnd_762x39_AK12_Arid_Mag_F0;
	};
	class 75rnd_762x39_AK12_Arid_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F
	{
		displayName = $STR_A3_A_CfgMagazines_75rnd_762x39_AK12_Arid_Mag_Tracer_F0;
	};
	class 10Rnd_Mk14_762x51_Mag: 20Rnd_762x51_Mag
	{
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Enoch\LongRangeRifles\DMR_06\Data\DMR_06_02_CO.paa"};
	};
	class 30Rnd_65x39_caseless_msbs_mag: 30Rnd_65x39_caseless_mag
    {
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_65x39_caseless_msbs_mag0;
    };
	class 30Rnd_65x39_caseless_msbs_mag_Tracer: 30Rnd_65x39_caseless_msbs_mag
    {
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_65x39_caseless_msbs_mag_Tracer1;
    };
	class 2Rnd_12Gauge_Pellets;
	class 2Rnd_12Gauge_Slug;
	class O_R_IR_Grenade: O_IR_Grenade
	{
		scope = protected;
		displayName = $STR_A3_A_CfgMagazines_O_R_IR_Grenade0;
		descriptionShort = $STR_A3_A_CfgMagazines_O_R_IR_Grenade1;
	};
	class I_E_IR_Grenade: I_IR_Grenade
	{
		scope = protected;
	};
	class 20Rnd_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "5.56 mm 20rnd STANAG Reload Tracer (Yellow) Mag";
		picture = "\A3\Weapons_F\Data\UI\M_20stanag_CA.paa";
		count = 20;
		mass = 6;
		descriptionShort = "Caliber: 5.56x45 mm STANAG< br/>Rounds: 20<br />Used in: SDAR";
	};
	class 20Rnd_556x45_Stanag_green: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd STANAG Reload Tracer (Green) Mag";
		ammo = B_556x45_Ball_Tracer_Green;
	};
	class 20Rnd_556x45_Stanag_red: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd STANAG Reload Tracer (Red) Mag";
		ammo = B_556x45_Ball_Tracer_Red;
	};
	class 20Rnd_556x45_Stanag_Tracer_Red: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd Tracer (Red) Mag";
		picture = "\A3\Weapons_F\Data\UI\M_20stanag_red_CA.paa";
		ammo = B_556x45_Ball_Tracer_Red;
		tracersEvery = 1;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Red<br />Rounds: 20<br />Used in: SDAR";
		displayNameShort = $STR_A3_TRACER_DNS;
	};
	class 20Rnd_556x45_Stanag_Tracer_Green: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd Tracer (Green) Mag";
		picture = "\A3\Weapons_F\Data\UI\M_20stanag_green_CA.paa";
		ammo = B_556x45_Ball_Tracer_Green;
		tracersEvery = 1;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Green<br />Rounds: 20<br />Used in: SDAR";
		displayNameShort = $STR_A3_TRACER_DNS;
	};
	class 20Rnd_556x45_Stanag_Tracer_Yellow: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd Tracer (Yellow) Mag";
		picture = "\A3\Weapons_F\Data\UI\M_20stanag_yellow_CA.paa";
		ammo = B_556x45_Ball_Tracer_Yellow;
		tracersEvery = 1;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Yellow<br />Rounds: 20<br />Used in: SDAR";
		displayNameShort = $STR_A3_TRACER_DNS;
	};
	class 20Rnd_Mk14_762x51_Mag: 20Rnd_762x51_Mag
	{
		picture = "\A3\Weapons_F\MagazineProxies\Data\UI\icon_20Rnd_762x51_Mag_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_20Rnd_Mk14_762x51_Mag0;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02_CO.paa"};
	};
	class 5Rnd_127x99_Mag: CA_Magazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "12.7 mm 5Rnd Mag";
		descriptionShort = "Caliber: 12.7x99 mm NATO<br />Rounds: 5<br />Used in: Warfare-50";
		ammo = B_127x99_Ball;
		count = 5;
		initSpeed = 880;
		picture = "\A3\Weapons_F\Data\UI\M_5Rnd_127x108_CA.paa";
		mass = 15;
	};
	class 30Rnd_9x21_Mag_v2: 30Rnd_9x21_Mag
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
	};
	class 30Rnd_9x21_Red_Mag_v2: 30Rnd_9x21_Mag_v2
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_30Rnd_9x21_Red_Mag0;
		ammo = B_9x21_Ball_Tracer_Red;
		lastRoundsTracer = 4;
	};
	class 30Rnd_9x21_Yellow_Mag_v2: 30Rnd_9x21_Mag_v2
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_30Rnd_9x21_Yellow_Mag0;
		ammo = B_9x21_Ball_Tracer_Yellow;
		lastRoundsTracer = 4;
	};
	class 30Rnd_9x21_Green_Mag_v2: 30Rnd_9x21_Mag_v2
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_30Rnd_9x21_Green_Mag0;
		ammo = B_9x21_Ball_Tracer_Green;
		lastRoundsTracer = 4;
	};
	class 16Rnd_9x21_Mag_v2: 16Rnd_9x21_Mag
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
	};
	class 16Rnd_9x21_red_Mag_v2: 16Rnd_9x21_Mag_v2
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_16Rnd_9x21_red_Mag0;
		ammo = B_9x21_Ball_Tracer_Red;
		lastRoundsTracer = 4;
	};
	class 16Rnd_9x21_green_Mag_v2: 16Rnd_9x21_Mag_v2
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_16Rnd_9x21_green_Mag0;
		ammo = B_9x21_Ball_Tracer_Green;
		lastRoundsTracer = 4;
	};
	class 16Rnd_9x21_yellow_Mag_v2: 16Rnd_9x21_Mag_v2
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_16Rnd_9x21_yellow_Mag0;
		ammo = B_9x21_Ball_Tracer_Yellow;
		lastRoundsTracer = 4;
	};
	class 17Rnd_9x21_Mag: 16Rnd_9x21_Mag
	{
		author = $STR_A3_A_AveryTheKitty;
        scope = public;
		displayName = $STR_A3_A_CfgMagazines_17Rnd_9x21_Mag0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\icon_17Rnd_9x21_Mag_CA.paa";
		count = 17;
		descriptionShort = $STR_A3_A_CfgMagazines_17Rnd_9x21_Mag1;
		mass = 6;
		initSpeed = 375;
	};
	class 7Rnd_127x33_Mag: CA_Magazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgMagazines_7Rnd_127x33_Mag0;
		ammo = B_127x33_Ball;
		count = 7;
		initSpeed = 470;
		picture = "\A3\Weapons_F\Data\UI\M_7Rnd_127x33_CA.paa";
		tracersEvery = 0;
		descriptionShort = $STR_A3_A_CfgMagazines_7Rnd_127x33_Mag1;
		mass = 8;
	};
	class 8Rnd_12Gauge_Pellets: 2Rnd_12Gauge_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_8Rnd_12Gauge_Pellets0;
		descriptionShort = $STR_A3_A_CfgMagazines_8Rnd_12Gauge_Pellets1;
		count = 8;
		mass = 12;
		initSpeed = 380;
		ammo = B_12Gauge_Pellets_Submunition_Cartridge;
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_12Gauge_AA12_8Rnd.p3d";
		picture = "\A3\Weapons_F\Data\UI\M_12Gauge_slugs_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\AA40\Data\AA40_CO.paa"};
	};
	class 8Rnd_12Gauge_Slug: 8Rnd_12Gauge_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_8Rnd_12Gauge_Slug0;
		displayNameShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1;
		descriptionShort = $STR_A3_A_CfgMagazines_8Rnd_12Gauge_Slug1;
		picture = "\A3\Weapons_F\Data\UI\M_12Gauge_CA.paa";
		ammo = B_12Gauge_Slug;
		initSpeed = 450;
		count = 8;
	};
	class 20Rnd_AA40_Pellets: 2Rnd_12Gauge_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_20Rnd_AA40_Pellets0;
		count = 20;
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\icon_20Rnd_AA40_Pellets_CA.paa";
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_12Gauge_AA12_20Rnd.p3d";
		modelSpecialIsProxy = true;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\AA40\Data\AA40_CO.paa"};
		descriptionShort = $STR_A3_A_CfgMagazines_20Rnd_AA40_Pellets1;
		mass = 18;
	};
	class 20Rnd_AA40_Slug: 2Rnd_12Gauge_Slug
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_20Rnd_AA40_Slug0;
		count = 20;
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\icon_20Rnd_AA40_Slug_CA.paa";
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_12Gauge_AA12_20Rnd.p3d";
		modelSpecialIsProxy = true;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\AA40\Data\AA40_CO.paa"};
		descriptionShort = $STR_A3_A_CfgMagazines_20Rnd_AA40_Slug1;
		mass = 18;
	};
	class 20Rnd_AA40_HE: 20Rnd_AA40_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_20Rnd_AA40_HE0;
		displayNameShort = $STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns;
		descriptionShort = $STR_A3_A_CfgMagazines_20Rnd_AA40_HE2;
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\icon_20Rnd_AA40_HE_CA.paa";
		ammo = B_19mm_HE;
		initSpeed = 200;
	};
	class 40Rnd_460x30_Mag_F: CA_Magazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgMagazines_40Rnd_460x30_Mag_F0;
		ammo = B_460x30_Ball;
		count = 40;
		initSpeed = 725;
		picture = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\UI\icon_40Rnd_460x30_Mag_F_CA.paa";
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_460x30_MP7_40Rnd.p3d";
		modelSpecialIsProxy = true;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\SMG_04_blk_F_CO.paa"};
		tracersEvery = 0;
		descriptionShort = $STR_A3_A_CfgMagazines_40Rnd_460x30_Mag_F1;
		mass = 10;
	};
	class 20Rnd_460x30_Mag_F: 40Rnd_460x30_Mag_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_20Rnd_460x30_Mag_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\UI\icon_20Rnd_460x30_Mag_F_CA.paa";
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_460x30_MP7_20Rnd.p3d";
		modelSpecialIsProxy = true;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\SMG_04_blk_F_CO.paa"};
		count = 20;
		mass = 6;
		descriptionShort = $STR_A3_A_CfgMagazines_20Rnd_460x30_Mag_F1;
	};
	class 4Rnd_12Gauge_Pellets: 2Rnd_12Gauge_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_4Rnd_12Gauge_Pellets0;
		count = 4;
		descriptionShort = $STR_A3_A_CfgMagazines_4Rnd_12Gauge_Pellets1;
		mass = 6;
	};
	class 4Rnd_12Gauge_Slug: 2Rnd_12Gauge_Slug
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_4Rnd_12Gauge_Slug0;
		count = 4;
		descriptionShort = $STR_A3_A_CfgMagazines_4Rnd_12Gauge_Slug1;
		mass = 6;
	};
    /*
    - These don't work for some reason
	class 75Rnd_762x39_Mag_Green_F: 75Rnd_762x39_Mag_F
	{
		picture = "\A3\Weapons_F_Enoch\MagazineProxies\Data\UI\icon_75Rnd_762x39_Mag_Green_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_75Rnd_762x39_Mag_Green_F0;
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Enoch\MagazineProxies\Data\magazine_drum_green_CO.paa"};
	};
	class 75Rnd_762x39_Mag_Tracer_Green_F: 75Rnd_762x39_Mag_Tracer_F
	{
		picture = "\A3\Weapons_F_Enoch\MagazineProxies\Data\UI\icon_75Rnd_762x39_Mag_Tracer_Green_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_75Rnd_762x39_Mag_Tracer_Green_F0;
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Enoch\MagazineProxies\Data\magazine_drum_green_CO.paa"};
	};
    */
	class 30Rnd_545x39_Black_Mag_F: 30Rnd_545x39_Mag_Green_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd Black Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_black_CO.paa"};
	};
	class 30Rnd_545x39_Black_Mag_Tracer_F: 30Rnd_545x39_Mag_Tracer_Green_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd Black Tracer Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_black_CO.paa"};
	};
	class 30Rnd_545x39_AK12_Mag_F: 30Rnd_545x39_Mag_Green_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK-12 Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_black_CO.paa"};
	};
	class 30Rnd_545x39_AK12_Mag_Tracer_F: 30Rnd_545x39_Mag_Tracer_Green_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK-12 Tracer Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_black_CO.paa"};
	};
	class 30Rnd_545x39_AK12_Lush_Mag_F: 30Rnd_545x39_AK12_Mag_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK-12 Khaki Mag";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki.rvmat"};
	};
	class 30Rnd_545x39_AK12_Lush_Mag_Tracer_F: 30Rnd_545x39_AK12_Mag_Tracer_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK-12 Tracer Khaki Mag";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki.rvmat"};
	};
	class 30Rnd_545x39_AK12_Arid_Mag_F: 30Rnd_545x39_AK12_Mag_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK-12 Sand Mag";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo.rvmat"};
	};
	class 30Rnd_545x39_AK12_Arid_Mag_Tracer_F: 30Rnd_545x39_AK12_Mag_Tracer_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK-12 Tracer Sand Mag";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo.rvmat"};
	};
	class 1Rnd_Pellets_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "40 mm Pellets Round";
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\gear_UGL_Pellets_CA.paa";
		ammo = B_12Gauge_Pellets_Submunition;
		descriptionShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		displayNameShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
	};
	class 3Rnd_Pellets_Grenade_shell: 1Rnd_Pellets_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 3;
		displayName = "40 mm 3Rnd Pellets Rounds";
		descriptionShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		displayNameShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		mass = 12;
	};
	class 1Rnd_HEDP_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author = $STR_A3_A_Heliotrope;
		displayName = "40 mm HEDP Grenade Round";
		//picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\gear_UGL_HEDP_CA.paa";
		ammo = G_40mm_HEDP_Submunition;
		descriptionShort = "Type: High Explosive Anti Tank Grenade Rounds<br />Caliber: 40mm<br />Rounds: 1";
		displayNameShort = "HEDP Grenade";
	};
	class 3Rnd_HEDP_Grenade_shell: 1Rnd_HEDP_Grenade_shell
	{
		author = $STR_A3_A_Heliotrope;
		count = 3;
		displayName = "40 mm 3Rnd HEDP Grenade";
		descriptionShort = "Type: High Explosive Anti Tank Grenade Rounds<br />Caliber: 40mm<br />Rounds: 3";
		displayNameShort = "HEDP Grenade";
		mass = 12;
	};
	class 6Rnd_HE_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "40 mm 6Rnd HE Grenade";
		descriptionShort = "Type: High Explosive Grenade Rounds<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_Smoke_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (White)";
		descriptionShort = "Type: Smoke Rounds - White<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeRed_Grenade_shell: 1Rnd_SmokeRed_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Red)";
		descriptionShort = "Type: Smoke Rounds - Red<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeGreen_Grenade_shell: 1Rnd_SmokeGreen_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Green)";
		descriptionShort = "Type: Smoke Rounds - Green<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeYellow_Grenade_shell: 1Rnd_SmokeYellow_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Yellow)";
		descriptionShort = "Type: Smoke Rounds - Yellow<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokePurple_Grenade_shell: 1Rnd_SmokePurple_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Purple)";
		descriptionShort = "Type: Smoke Rounds - Purple<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeBlue_Grenade_shell: 1Rnd_SmokeBlue_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Blue)";
		descriptionShort = "Type: Smoke Rounds - Blue<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeOrange_Grenade_shell: 1Rnd_SmokeOrange_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Orange)";
		descriptionShort = "Type: Smoke Rounds - Orange<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_UGL_FlareWhite_F: UGL_FlareWhite_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (White)";
		descriptionShort = "Type: Flare Rounds - White<br />Rounds: 6<br />Used in: M32";
		displayNameShort = STR_A3_CfgMagazines_FlareWhite_F_dns;
		mass = 24;
	};
	class 6Rnd_UGL_FlareGreen_F: UGL_FlareGreen_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (Green)";
		descriptionShort = "Type: Flare Rounds - Green<br />Rounds: 6<br />Used in: M32";
		displayNameShort = STR_A3_CfgMagazines_FlareGreen_F_dns;
		mass = 24;
	};
	class 6Rnd_UGL_FlareRed_F: UGL_FlareRed_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (Red)";
		descriptionShort = "Type: Flare Rounds - Red<br />Rounds: 6<br />Used in: M32";
		displayNameShort = $STR_A3_CfgMagazines_FlareRed_F_dns;
		mass = 24;
	};
	class 6Rnd_UGL_FlareYellow_F: UGL_FlareYellow_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (Yellow)";
		descriptionShort = "Type: Flare Rounds - Yellow<br />Rounds: 6<br />Used in: M32";
		displayNameShort = $STR_A3_CfgMagazines_FlareYellow_F_dns;
		mass = 24;
	};
	class 6Rnd_UGL_FlareCIR_F: UGL_FlareCIR_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (IR)";
		descriptionShort = "Type: Flare Rounds - IR<br />Rounds: 6<br />Used in: M32";
		displayNameShort = $STR_A3_CfgMagazines_FlareCIR_F_dns;
		mass = 24;
	};
	class 6Rnd_Pellets_Grenade_shell: 1Rnd_Pellets_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "40 mm 6Rnd Pellets Rounds";
		descriptionShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		displayNameShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		mass = 24;
	};
	class 6Rnd_APERSMine_Grenade_shell: 6Rnd_HE_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "6Rnd M32 APERS Mines";
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\gear_UGL_APERS_CA.paa";
		ammo = G_40mm_APERSMine;
		descriptionShort = "Type: Anti-Personnel Mine Rounds<br />Rounds: 6<br />Used in: M32";
		displayNameShort = $STR_A3_CfgMagazines_ClassicMineRangeMagazine0;
	};
	class HandGrenade_East: HandGrenade
	{
		author = $STR_A3_A_AveryTheKitty;
		mass = 12;
		displayName = $STR_A3_CfgMagazines_HandGrenade0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\gear_RGO_CA.paa";
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east.p3d";
		ammo = GrenadeHandEast;
		displayNameShort = $STR_A3_CfgMagazines_HandGrenade_dns;
	};
	class HandGrenade_Guer: HandGrenade_East
	{
		author = $STR_A3_A_AveryTheKitty;
		mass = 8;
		displayName = "RGD Grenade";
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_guer.p3d";
		ammo = GrenadeHandGuer;
		displayNameShort = "RGD Grenade";
	};
	class 5Rnd_25x40mm_HE: CA_Magazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		type = 64+128;
		displayName = "25 mm 5Rnd HE Grenade";
		displayNameShort = $STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell_dns;
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_slug_CA.paa";
		ammo = B_25x40mm_HE;
		initSpeed = 210;
		count = 5;
		nameSound = "";
		descriptionShort = "Caliber: 25x40 mm HE<br />Rounds: 5 <br />Used in: Punisher";
		mass = 16;
	};
	class 5Rnd_25x40mm_airburst: 5Rnd_25x40mm_HE
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		type = 64+128;
		displayName = "25 mm 5Rnd Airburst";
		displayNameShort = "Airburst";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_slug_CA.paa";
		ammo = B_25x40mm_airburst;
		descriptionShort = "Caliber: 25x40 mm Airburst<br />Rounds: 5 <br />Used in: Punisher";
	};

    /* Vehicles' Magazines */
    #include "cfgVehicleMagazines.hpp"

    /* Dynamic Loadouts */
    #include "cfgDynamicLoadout.hpp"

    /* Deprecated */
	class 20Rnd_762x51_weathered_Mag: 10Rnd_Mk14_762x51_Mag
	{
		scope = protected;
	};
	class 7Rnd_45ACP_Mag: 9Rnd_45ACP_Mag
	{
        scope = protected;
	};
	class 30Rnd_545x39_Lush_Mag_F: 30Rnd_545x39_AK12_Lush_Mag_F
	{
		scope = protected;
	};
	class 30Rnd_545x39_Lush_Mag_Tracer_F: 30Rnd_545x39_AK12_Lush_Mag_Tracer_F
	{
		scope = protected;
	};
	class 30Rnd_545x39_Arid_Mag_F: 30Rnd_545x39_AK12_Arid_Mag_F
	{
		scope = protected;
	};
	class 30Rnd_545x39_Arid_Mag_Tracer_F: 30Rnd_545x39_AK12_Arid_Mag_Tracer_F
	{
		scope = protected;
	};
    class PylonWeapon_2000Rnd_65x39_belt: 2000Rnd_65x39_Belt_Tracer_Green_Splash
    {
        scope = protected;
    };
};