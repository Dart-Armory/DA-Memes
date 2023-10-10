class CfgPatches
{
    class DAM_Weapons_SpaceAK
    {
        addonRootClass= "DAM_Weapons";
        author = "DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DAM_Weapons",
                // Core Config
            "A3_Weapons_F_Exp_Rifles_AKM",
                // AKM
            "Aux501_Patch_DC15A",
                // Magazine, ammo
            "Aux501_Patch_Accessories"
                // Scopes
        };
        units[] = {};
        weapons[] =
        {
            "DAM_AKM"
        };
    };
};