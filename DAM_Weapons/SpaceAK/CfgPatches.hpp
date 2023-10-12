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
            "A3_Weapons_F_Exp_Rifles_AK12",
                // AK-15
            "Aux501_Patch_DC15A",
                // Magazine, ammo
            "A3_Weapons_F_Exp",
                // Magazine model/picture
            "A3_Weapons_F_Enoch",
                // Drum mag model/picture
            "Aux501_Patch_Accessories"
                // Scopes
        };
        units[] = {};
        weapons[] =
        {
            "DAM_DC15KM",
            "DAM_DC15K"
        };

        skipWhenMissingDependencies = 1;
    };
};