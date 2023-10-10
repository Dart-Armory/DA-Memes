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
            "A3_Weapons_F_Exp_Rifles_AKM"
                // AKM
        };
        units[] = {};
        weapons[] =
        {
            "DAM_AKM"
        };
    };
};