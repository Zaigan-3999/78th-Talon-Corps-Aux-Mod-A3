class CfgPatches
{
    class tc78_core
    {
        author = "Zaigan";                    // Your name, aux team, etc.
        name = "78th Talon Corps Aux: Core";
        requiredAddons[] = {
            "ls_core"
        };
        weapons[] = {};
        units[] = {};
    };
};

// This creates a custom "Faction", which you can use to make your own 'Folder' in the Eden and Zeus interfaces
class CfgFactionsClasses
{
    class TC_GRA
    {
        displayName = "[78th] Grand Army";
    };
};
// This creates a subcategory or subfolder for a faction
class CfgEditorSubcategories
{
    class TC_GRA_Clones
    {
        displayName = "[78th] Troopers";
    };
    class TC_GRA_Clones_Custom
    {
        displayName = "[78th] Troopers (Custom)";
    };
};