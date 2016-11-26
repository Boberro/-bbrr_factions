class CfgPatches {
    class boberro_factions_takins {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F_OPFOR", "A3_Characters_F_Exp"};
    };
};

class CfgFactionClasses
{
    class boberro_takins
    {
        displayName = "Takistani Insurgents (Vanilla)";
        author = "Boberro";
        icon = "/boberro_factions_takins/icons/flag_tkm_co.paa";
        priority = 2;
        side = 2;
    };
};

class CfgVehicleClasses
{
    class boberro_takins_inf
    {
        displayName = "Infantry";
    };
};

class CfgVehicles {
    class B_FieldPack_oli;
    class B_Carryall_oli;

    class O_Soldier_base_F;
    class boberro_takins_soldier_base_F : O_Soldier_base_F {
        scope = 1;
        side = 2;
        faction = boberro_takins;
        vehicleClass = "boberro_takins_inf";
        nakedUniform = "U_BasicBody";
    };

    // Uniforms
    class B_G_Soldier_M_F;
    class boberro_B_G_Soldier_M_F : B_G_Soldier_M_F {
        scope = 1;
        modelSides[] = {2,3};
    };
    class Item_U_BG_Guerilla3_1;
    class boberro_Item_U_BG_Guerilla3_1 : Item_U_BG_Guerilla3_1 {
        side = 2;
        displayName = "Insurgents Smocks";
        class TransportItems
        {
            class boberro_U_BG_Guerilla3_1
            {
                name = "boberro_U_BG_Guerilla3_1";
                count = 1;
            };
        };
    };

    class C_man_hunter_1_F;
    class boberro_C_man_hunter_1_F : C_man_hunter_1_F {
        scope = 1;
        modelSides[] = {2,3};
    };
    class Item_U_C_HunterBody_grn;
    class boberro_Item_U_C_HunterBody_grn : Item_U_C_HunterBody_grn {
        side = 2;
        displayName = "Insurgents Sniper Clothes";
        class TransportItems
        {
            class boberro_U_C_HunterBody_grn
            {
                name = "boberro_U_C_HunterBody_grn";
                count = 1;
            };
        };
    };

    // Unit - Team Leader
    class boberro_takins_soldier_TL_Backpack: B_FieldPack_oli
    {
        scope = 1;
 
        class TransportMagazines
         {
            class _xx_10Rnd_9x21_Mag
            {
                magazine = "10Rnd_9x21_Mag";
                count = 2;
            };
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 4;
            };
            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 1;
            };
            class _xx_SmokeShell
            {
                magazine = "SmokeShell";
                count = 1;
            };
         };
    };
    class boberro_takins_soldier_TL_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "Team Leader";
        icon = "iconManLeader";
        uniformClass = "boberro_U_BG_Guerilla3_1";
        backpack = "boberro_takins_soldier_TL_Backpack";
        linkedItems[] = {"G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"};
        respawnLinkedItems[] = {"G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"};
        weapons[] = {"Throw","Put", "arifle_AKM_F", "hgun_Pistol_01_F", "Binocular"};
        respawnWeapons[] = {"Throw","Put", "arifle_AKM_F", "hgun_Pistol_01_F", "Binocular"};
        magazines[] = {"30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F", "10Rnd_9x21_Mag", "HandGrenade", "SmokeShell"};
    };

    // Unit - Rifleman
    class boberro_takins_soldier_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "Rifleman";
        icon = "iconMan";
        uniformClass = "U_I_C_Soldier_Para_5_F";
        linkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"Throw","Put", "arifle_AKM_F"};
        respawnWeapons[] = {"Throw","Put", "arifle_AKM_F"};
        magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "HandGrenade", "HandGrenade"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "HandGrenade", "HandGrenade"};
    };

    // Unit - Rifleman (RPG-7)
    class boberro_takins_soldier_rpg7_Backpack: B_FieldPack_oli
    {
        scope = 1;
 
        class TransportMagazines
         {
            class _xx_RPG7_F
            {
                magazine = "RPG7_F";
                count = 3;
            };
         };
    };
    class boberro_takins_soldier_rpg7_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "Rifleman (RPG-7)";
        threat[] = {1,0.6,0.1};
        icon = "iconManAT";
        role = "MissileSpecialist";
        uniformClass = "U_I_C_Soldier_Bandit_3_F";
        linkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "boberro_takins_soldier_rpg7_Backpack";
        weapons[] = {"Throw","Put", "arifle_AKS_F", "launch_RPG7_F"};
        respawnWeapons[] = {"Throw","Put", "arifle_AKS_F", "launch_RPG7_F"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F"};
    };
    // Unit - RPG-7 operator (pistol)
    class boberro_takins_soldier_rpg7_light_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "RPG-7 operator (pistol)";
        threat[] = {1,0.6,0.1};
        icon = "iconManAT";
        role = "MissileSpecialist";
        uniformClass = "U_I_C_Soldier_Bandit_3_F";
        linkedItems[] = {"H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "boberro_takins_soldier_rpg7_Backpack";
        weapons[] = {"Throw","Put", "hgun_Pistol_01_F", "launch_RPG7_F"};
        respawnWeapons[] = {"Throw","Put", "hgun_Pistol_01_F", "launch_RPG7_F"};
        magazines[] = {"10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "RPG7_F"};
        respawnMagazines[] = {"10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "RPG7_F"};
    };

    // Unit - Machinegunner
    class boberro_takins_machinegunner_Backpack: B_FieldPack_oli
    {
        scope = 1;
 
        class TransportMagazines
         {
            class _xx_150Rnd_93x64_Mag
            {
                magazine = "150Rnd_93x64_Mag";
                count = 2;
            };
         };
    };
    class boberro_takins_machinegunner_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "Machinegunner";
        icon = "iconManMG";
        role = "MachineGunner";
        uniformClass = "U_I_C_Soldier_Bandit_5_F";
        backpack = "boberro_takins_machinegunner_Backpack";
        linkedItems[] = {"V_BandollierB_rgr", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"V_BandollierB_rgr", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"Throw","Put", "MMG_01_tan_F"};
        respawnWeapons[] = {"Throw","Put", "MMG_01_tan_F"};
        magazines[] = {"150Rnd_93x64_Mag", "150Rnd_93x64_Mag"};
        respawnMagazines[] = {"150Rnd_93x64_Mag", "150Rnd_93x64_Mag"};
    };

    // Unit - Ammo Bearer
    class boberro_takins_rifleman_ammo_Backpack: B_Carryall_oli
    {
        scope = 1;
 
        class TransportMagazines
         {
            class _xx_150Rnd_93x64_Mag
            {
                magazine = "150Rnd_93x64_Mag";
                count = 2;
            };
            class _xx_HandGrenade
            {
                magazine = "HandGrenade";
                count = 4;
            };
            class _xx_30Rnd_545x39_Mag_F
            {
                magazine = "30Rnd_545x39_Mag_F";
                count = 4;
            };
            class _xx_30Rnd_762x39_Mag_Green_F
            {
                magazine = "30Rnd_762x39_Mag_Green_F";
                count = 10;
            };
         };
    };
    class boberro_takins_rifleman_ammo_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "Ammo Bearer";
        icon = "iconMan";
        uniformClass = "U_I_C_Soldier_Bandit_5_F";
        backpack = "boberro_takins_rifleman_ammo_Backpack";
        linkedItems[] = {"V_TacChestrig_oli_F", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F", "H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"Throw","Put", "arifle_AKS_F"};
        respawnWeapons[] = {"Throw","Put", "arifle_AKS_F"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade", "HandGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade", "HandGrenade"};
    };

    // Unit - Sniper
    class boberro_takins_sniper_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "Sniper";
        icon = "iconMan";
        threat[] = {1,0.3,0.3};
        camouflage = 0.8;
        uniformClass = "boberro_U_C_HunterBody_grn";
        linkedItems[] = {"V_Rangemaster_belt", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"V_Rangemaster_belt", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"Throw","Put", "srifle_DMR_01_SOS_F", "hgun_Pistol_01_F"};
        respawnWeapons[] = {"Throw","Put", "srifle_DMR_01_SOS_F", "hgun_Pistol_01_F"};
        magazines[] = {"10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "SmokeShell", "SmokeShell"};
    };

    // Unit - Anti-Tank Specialist
    class boberro_takins_soldier_at_Backpack: B_FieldPack_oli
    {
        scope = 1;
 
        class TransportMagazines
         {
            class _xx_RPG32_F
            {
                magazine = "RPG32_F";
                count = 2;
            };
         };
    };
    class boberro_takins_soldier_at_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "Anti-Tank Specialist";
        threat[] = {1,0.6,0.1};
        icon = "iconManAT";
        role = "MissileSpecialist";
        uniformClass = "U_I_C_Soldier_Bandit_3_F";
        backpack = "boberro_takins_soldier_at_Backpack";
        linkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"Throw","Put", "arifle_AKS_F", "launch_RPG32_F"};
        respawnWeapons[] = {"Throw","Put", "arifle_AKS_F", "launch_RPG32_F"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG32_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG32_F"};
    };

    // Unit - Engineer
    class boberro_takins_engineer_Backpack: B_FieldPack_oli
    {
        scope = 1;

        class TransportItems
        {
            class _xx_ToolKit
            {
                name = "ToolKit";
                count = 1;
            };
        };
 
        class TransportMagazines
        {
            class _xx_IEDLandSmall_Remote_Mag
            {
                magazine = "IEDLandSmall_Remote_Mag";
                count = 1;
            };

            class _xx_IEDUrbanSmall_Remote_Mag
            {
                magazine = "IEDUrbanSmall_Remote_Mag";
                count = 1;
            };
        };
    };
    class boberro_takins_engineer_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "Engineer";
        icon = "iconManEngineer";
        role = "Sapper";
        engineer = 1;
        uniformClass = "U_I_C_Soldier_Bandit_3_F";
        backpack = "boberro_takins_engineer_Backpack";
        linkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"Throw","Put", "arifle_AKS_F"};
        respawnWeapons[] = {"Throw","Put", "arifle_AKS_F"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade", "HandGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade", "HandGrenade"};
    };

    // Unit - Medic
    class boberro_takins_medic_Backpack: B_FieldPack_oli
    {
        scope = 1;

        class TransportItems
        {
            class _xx_Medikit
            {
                name = "Medikit";
                count = 1;
            };
            class _xx_ToolKit
            {
                name = "FirstAidKit";
                count = 8;
            };
        };
    };
    class boberro_takins_medic_F : boberro_takins_soldier_base_F {
        scope = 2;
        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        role = "CombatLifeSaver";
        uniformClass = "U_I_C_Soldier_Bandit_4_F";
        backpack = "boberro_takins_medic_Backpack";
        linkedItems[] = {"H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        weapons[] = {"Throw","Put", "hgun_Pistol_01_F"};
        respawnWeapons[] = {"Throw","Put", "hgun_Pistol_01_F"};
        magazines[] = {"10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
        respawnMagazines[] = {"10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"};
    };

    // Vehicle - offroad
    class I_G_Offroad_01_F;
    class boberro_takins_Offroad_01_F: I_G_Offroad_01_F
    {
        side = 2;
        faction = "boberro_takins";
        crew = "boberro_takins_soldier_F";
    };

    // Vehicle - offroad (armed)
    class I_G_Offroad_01_armed_F;
    class boberro_takins_Offroad_01_armed_F: I_G_Offroad_01_armed_F
    {
        side = 2;
        faction = "boberro_takins";
        crew = "boberro_takins_soldier_F";
        typicalCargo[] = {"boberro_takins_soldier_F"};
    };

    // Vehicle - truck
    class I_G_Van_01_transport_F;
    class boberro_takins_Van_01_transport_F: I_G_Van_01_transport_F
    {
        side = 2;
        faction = "boberro_takins";
        crew = "boberro_takins_soldier_F";
    };
};

class CfgWeapons {
    class UniformItem;
    
    class U_BG_Guerilla3_1;
    class boberro_U_BG_Guerilla3_1 : U_BG_Guerilla3_1 {
        displayName = "Insurgents Smocks";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "boberro_B_G_Soldier_M_F";
            containerClass = "Supply50";
            mass = 50;
        };
    };

    class U_C_HunterBody_grn;
    class boberro_U_C_HunterBody_grn : U_C_HunterBody_grn {
        displayName = "Insurgents Sniper Clothes";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "boberro_C_man_hunter_1_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
};
