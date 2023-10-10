#include "CfgPatches.hpp"


class CfgWeapons
{
    class RifleCore;
    class Rifle: RifleCore
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Base_F: Rifle {};
    class arifle_AKM_base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };
    class arifle_AKM_F: arifle_AKM_base_F {};
    class DAM_AKM: arifle_AKM_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[DA] AKM";
        baseWeapon = "DAM_AKM";

        magazines[] = {};
        magazineWell[] = {};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] =
                {
                    "Aux501_cows_dms",
                    "Aux501_cows_dms_2",
                    "Aux501_cows_dms_3",
                    "Aux501_cows_dms_4",
                    "Aux501_cows_holoscope",
                    "Aux501_cows_holoscope_2",
                    "Aux501_cows_holoscope_3",
                    "Aux501_cows_holosight",
                    "Aux501_cows_holosight_2",
                    "Aux501_cows_holosight_3",
                    "Aux501_cows_mrco",
                    "Aux501_cows_mrco_2",
                    "Aux501_cows_mrco_3",
                    "Aux501_cows_rco",
                    "Aux501_cows_rco_2",
                    "Aux501_cows_rco_3",
                    "Aux501_cows_reflex_optic"
                };
            };
        };
    };
};


class CfgMagazines
{
    class Aux501_Weapons_Mags_20mwdp30;
    class DAM_Mag_AKM_30Rnd: Aux501_Weapons_Mags_20mwdp30
    {
        author = "DartRuffian";
        displayName = "[DA] AKM Magazine";
        displayNameShort = "Medium Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 30<br/>Used In: AKM";
        count = 30;

        JLTS_hasEMPProtection = 1;

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
        modelSpecialIsProxy = 1;
        picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_F_ca.paa";
    };
};