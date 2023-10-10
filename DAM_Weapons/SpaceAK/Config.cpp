#include "CfgPatches.hpp"


class CfgWeapons
{
    class arifle_AKM_base_F;
    class DAM_AKM: arifle_AKM_base_F
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
    };
};