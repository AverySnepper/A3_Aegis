class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
	/* Inheritance Tree */
	class Default
	{
        fireLightDiffuse[] =
        {
            0.937,  // R
            0.322,  // G
            0.259   // B
        };
		fireLightDuration = 0.005;
	};
	class RifleCore;
    class MGunCore;
    class CannonCore;
	class ItemCore;

    /* Bases */
    class GrenadeLauncher;
	class UGL_F;
	class Rifle: RifleCore
	{
		zeroingSound[] = {"\A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",db0,1,5};
	};
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
    class Launcher_Base_F;
    class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;

    /* Arsenal */
    #include "cfgAcc.hpp"
    #include "cfgBinocular.hpp"
	class Throw: GrenadeLauncher
	{
        muzzles[] +=
        {
            HandGrenade_EastMuzzle,
            HandGrenade_GuerMuzzle
        };
        class ThrowMuzzle;
		class HandGrenade_EastMuzzle: ThrowMuzzle
		{
			magazines[] = {HandGrenade_East};
		};
		class HandGrenade_GuerMuzzle: ThrowMuzzle
		{
			magazines[] = {HandGrenade_Guer};
		};
    };
    #include "cfgLaunchers.hpp"
    #include "cfgLongRangeRifles.hpp"
    #include "cfgMachineguns.hpp"
    #include "cfgPistols.hpp"
    #include "cfgRifles.hpp"
    #include "cfgSMGs.hpp"

    /* Accessorized Weapons */
    #include "cfgWeaponsAcc.hpp"

    /* Vehicles' Weapons */
    #include "cfgVehicleWeapons.hpp"

    /* Deprecated */
    #include "deprecated.hpp"
};