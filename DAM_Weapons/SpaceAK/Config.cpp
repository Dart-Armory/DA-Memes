#include "CfgPatches.hpp"


class CowsSlot_Rail;

class CfgWeapons
{
    class Rifle_Base_F;
    class arifle_AKM_base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
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

        magazines[] = {"DAM_Mag_AK_30Rnd", "DAM_Mag_AK_75Rnd"};
        magazineWell[] = {};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot_Rail
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

    class arifle_AK12_base_F;
    class arifle_AK12_F: arifle_AK12_base_F
    {
        class WeaponSlotsInfo;
    };
    class DAM_AK15: arifle_AK12_F
    {
        // Mod Info
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[DA] AK-15";
        baseWeapon = "DAM_AK15";

        magazines[] = {"DAM_Mag_AK_30Rnd", "DAM_Mag_AK_75Rnd"};
        magazineWell[] = {};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot_Rail
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
    class DAM_Mag_AK_30Rnd: Aux501_Weapons_Mags_20mwdp30
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
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_F_ca.paa";

        mass = 10;
    };

    class DAM_Mag_AK_75Rnd: DAM_Mag_AK_30Rnd
    {
        displayName = "[DA] AKM Drum Magazine";
        descriptionShort = "Energy Cell<br/>Rounds: 75<br/>Used In: AKM";
        count = 75;

        modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_akm_75rnd";
        picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_F_CA.paa";
        reloadAction = "GestureReloadAK12_Drum";

        mass = 26;
    };
};