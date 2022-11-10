class CfgPatches
{
    class tc78_equipment
    {
        author = "Zaigan";
        name = "78th Talon Corps Aux: Armor Retextures (Standard)";
        requiredAddons[] = {
            "tc78_core",
            "ls_armor_bluefor",
            "lsd_armor_bluefor",
            "SWLB_clones",
			"SWLB_equipment_backpacks",
        };
        weapons[] = {};
        // Allows for this trooper to be placed in Zeus
        units[] = {
            "MYTAG_MYUNIT_phase2_trooper"
        };
    };
};

class CfgWeapons
{
	class ls_blueforUniform_base;
	class lsd_gar_phase2_helmet;
	class SWLB_CEE_Engineer_Vest;
	class SWLB_CEE_Force_Recon;
	class SWLB_CEE_Force_Recon_NCO;
	class SWLB_CEE_Recon_Lieutenant;
	class SWLB_clone_recon_armor;
	class SWLB_clone_recon_nco_armor;
	class SWLB_clone_recon_officer_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_cfr_armor;
	class ls_gar_phase2_uniform: ls_blueforUniform_base
	{
		class ItemInfo;
	};
	/// Helmets
		class TC_CT_phase2_helmet: lsd_gar_phase2_helmet
		{
			displayName="[78th] CT P2 Helmet";
			hiddenSelectionsTextures[]=
			{
				"tc78_equipment\data\78th_CT_Helmet_P2_camo1_co.paa",
				"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
			};
		};
		class TC_CR_phase2_helmet: lsd_gar_phase2_helmet
		{
			displayName="[78th] CR P2 Helmet";
			hiddenSelectionsTextures[]=
			{
				"tc78_equipment\data\78th_CR_Helmet_camo1_co.paa",
				"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
			};
		};
		class TC_CR_C_phase2_helmet: lsd_gar_phase2_helmet
		{
			displayName="[78th] CR-C P2 Helmet";
			hiddenSelectionsTextures[]=
			{
				"tc78_equipment\data\78th_CR_C_Helmet_camo1_co.paa",
				"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
			};
		};
	/// Uniforms
		class TC_CT_phase2_uniform: ls_gar_phase2_uniform
		{
			displayName="[78th] CT P2 Armor";
			picture="tc78_equipment\data\ui\icon_78tc_uniform_ca.paa";
			author="Zaigan";
			class ItemInfo: ItemInfo
			{
				uniformClass="MYTAG_MYUNIT_phase2_base";
			};
		};
		class TC_CT_medic_uniform: ls_gar_phase2_uniform
		{
			displayName="[78th] CT P2 Medic Armor";
			author="Zaigan";
			picture="tc78_equipment\data\ui\icon_78tc_uniform_ca.paa";
			class ItemInfo: ItemInfo
			{
				uniformClass="78_CT_Medic_phase2";
			};
		};
		class TC_CT_eod_uniform: ls_gar_phase2_uniform
		{
			displayName="[78th] CT P2 EOD Armor";
			author="Zaigan";
			picture="tc78_equipment\data\ui\icon_78tc_uniform_ca.paa";
			class ItemInfo: ItemInfo
			{
				uniformClass="78_CT_EOD_phase2";
			};
		};
		class TC_CT_agent_uniform: ls_gar_phase2_uniform
		{
			displayName="[78th] CT P2 Agent Armor";
			author="Zaigan";
			picture="tc78_equipment\data\ui\icon_78tc_uniform_ca.paa";
			class ItemInfo: ItemInfo
			{
				uniformClass="78_CT_Agent_phase2";
			};
		};
		class TC_SCT_phase2_uniform: ls_gar_phase2_uniform
		{
			displayName="[78th] SCT P2 Armor";
			author="Zaigan";
			picture="tc78_equipment\data\ui\icon_78tc_uniform_ca.paa";
			class ItemInfo: ItemInfo
			{
				uniformClass="78_SCT_phase2";
			};
		};
		class TC_VCT_phase2_uniform: ls_gar_phase2_uniform
		{
			displayName="[78th] VCT P2 Armor";
			author="Zaigan";
			picture="tc78_equipment\data\ui\icon_78tc_uniform_ca.paa";
			class ItemInfo: ItemInfo
			{
				uniformClass="78_VCT_phase2";
			};
		};
		class TC_CSP_phase2_uniform: ls_gar_phase2_uniform
		{
			displayName="[78th] CSP P2 Armor";
			author="Zaigan";
			picture="tc78_equipment\data\ui\icon_78tc_uniform_ca.paa";
			class ItemInfo: ItemInfo
			{
				uniformClass="78_CSP_phase2";
			};
		};
		class TC_CR_phase2_uniform: ls_gar_phase2_uniform
		{
			displayName="[78th] CR P2 Armor";
			author="Zaigan";
			picture="tc78_equipment\data\ui\icon_78tc_uniform_ca.paa";
			class ItemInfo: ItemInfo
			{
				uniformClass="78_CR_phase2";
			};
		};
		class TC_CR_C_phase2_uniform: ls_gar_phase2_uniform
		{
			displayName="[78th] CR-C P2 Armor";
			author="Zaigan";
			picture="tc78_equipment\data\ui\icon_78tc_uniform_ca.paa";
			class ItemInfo: ItemInfo
			{
				uniformClass="78_CR_C_phase2";
			};
		};
	/// Vests
		/// Engineer Vests
			class TC_Engineer_Vest: SWLB_CEE_Engineer_Vest
			{
				displayName="[78th] Engineer Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_light_accessories_co.paa",
					"tc78_equipment\data\vests\78_Engineer_Base.paa"
				};
			}
		/// Medic Vests
			class TC_Medic_Vest: SWLB_clone_medic_armor
			{
				displayName="[78th] Medic Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_heavy_accessories_medic_co.paa"
				};
			}
			class TC_CFR_Vest: SWLB_clone_cfr_armor
			{
				displayName="[78th] First Responder Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_heavy_accessories_medic_co.paa"
				};
			}
		/// Vest Standard Ranks
			class TC_LCPL_Vest: SWLB_clone_recon_armor
			{
				displayName="[78th] LCPL Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_heavy_accessories_co.paa",
					"",
					"tc78_equipment\data\vests\78_heavy_accessories_co.paa"
				};
			}
			class TC_Recon_NCO_Vest: SWLB_clone_recon_nco_armor
			{
				displayName="[78th] CPL Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_heavy_accessories_co.paa",
					"",
					"tc78_equipment\data\vests\78_heavy_accessories_co.paa",
					"tc78_equipment\data\vests\78_heavy_accessories_co.paa"
				};
			}
			class TC_CPS_Vest: SWLB_clone_recon_nco_armor
			{
				displayName="[78th] CPS Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_v2_heavy_accessories_co.paa",
					"",
					"tc78_equipment\data\vests\78_v2_heavy_accessories_co.paa",
					"tc78_equipment\data\vests\78_v2_heavy_accessories_co.paa"
				};
			}
			class TC_CS_Vest: SWLB_clone_recon_officer_armor
			{
				displayName="[78th] CS Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_heavy_accessories_co.paa",
					"tc78_equipment\data\vests\officer_v2_accessories_co.paa"
				};
			}
			class TC_SCS_Vest: SWLB_clone_recon_officer_armor
			{
				displayName="[78th] SCS Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_v2_heavy_accessories_co.paa",
					"tc78_equipment\data\vests\officer_v2_accessories_co.paa"
				};
			}
			class TC_CSS_Vest: SWLB_clone_recon_officer_armor
			{
				displayName="[78th] CSS Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_v2_heavy_accessories_co.paa",
					"tc78_equipment\data\vests\78_officer_accessories_co.paa"
				};
			}
			class TC_CGS_Vest: SWLB_clone_recon_officer_armor
			{
				displayName="[78th] CGS Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_v3_heavy_accessories_co.paa",
					"tc78_equipment\data\vests\78_officer_v3_accessories_co.paa"
				};
			}
			class TC_MCS_Vest: SWLB_clone_recon_officer_armor
			{
				displayName="[78th] MCS Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_v3_heavy_accessories_co.paa",
					"tc78_equipment\data\vests\78_officer_v4_accessories_co.paa"
				};
			}
			class TC_CSM_Vest: SWLB_CEE_Recon_Lieutenant
			{
				displayName="[78th] CSM Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_officer_v5_accessories_co.paa",
					"tc78_equipment\data\vests\78_heavy_accessories_co.paa"
				};
			}
			class TC_C2L_Vest: SWLB_CEE_Recon_Lieutenant
			{
				displayName="[78th] C2L Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_officer_v6_accessories_co.paa",
					"tc78_equipment\data\vests\78_heavy_accessories_co.paa"
				};
			}
		/// Vest Misc
			class TC_Agent_Vest: SWLB_CEE_Force_Recon_NCO
			{
				displayName="[78th] Agent Vest";
				author="Zaigan";
				hiddenSelectionsTextures[]=
				{
					"tc78_equipment\data\vests\78_light_accessories_co.paa",
					"tc78_equipment\data\vests\78_officer_accessories_co.paa",
					"tc78_equipment\data\vests\78_heavy_accessories_co.paa"
				};
			}
};
class CfgVehicles
{
	class lsd_gar_phase2_base;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	class SWLB_clone_backpack_eod;
	class SWLB_CEE_Recon_RTO_Backpack;
	class SWLB_clone_backpack;

	class MYTAG_MYUNIT_phase2_base: lsd_gar_phase2_base
	{
		editorSubcategory="TC_GRA_Clones";
		uniformClass="MYTAG_MYUNIT_phase2_uniform";
		hiddenSelectionsTextures[]=
		{
			"\tc78_equipment\data\78th_CT_camo1_co.paa",
			"\tc78_equipment\data\78th_CT_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
	class 78_CT_Medic_phase2: lsd_gar_phase2_base
	{
		editorSubcategory="TC_GRA_Clones";
		uniformClass="MYTAG_MYUNIT_phase2_uniform";
		hiddenSelectionsTextures[]=
		{
			"\tc78_equipment\data\78th_CT_Medic_camo1_co.paa",
			"\tc78_equipment\data\78th_CT_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
	class 78_CT_EOD_phase2: lsd_gar_phase2_base
	{
		editorSubcategory="TC_GRA_Clones";
		uniformClass="MYTAG_MYUNIT_phase2_uniform";
		hiddenSelectionsTextures[]=
		{
			"\tc78_equipment\data\78th_CT_EOD_camo1_co.paa",
			"\tc78_equipment\data\78th_CT_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
	class 78_CT_Agent_phase2: lsd_gar_phase2_base
	{
		editorSubcategory="TC_GRA_Clones";
		uniformClass="MYTAG_MYUNIT_phase2_uniform";
		hiddenSelectionsTextures[]=
		{
			"\tc78_equipment\data\78th_CT_Agent_camo1_co.paa",
			"\tc78_equipment\data\78th_CT_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
	class 78_CR_phase2: lsd_gar_phase2_base
	{
		editorSubcategory="TC_GRA_Clones";
		uniformClass="MYTAG_MYUNIT_phase2_uniform";
		hiddenSelectionsTextures[]=
		{
			"\tc78_equipment\data\78th_CR_camo1_co.paa",
			"\tc78_equipment\data\78th_CT_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
	class 78_CR_C_phase2: lsd_gar_phase2_base
	{
		editorSubcategory="TC_GRA_Clones";
		uniformClass="MYTAG_MYUNIT_phase2_uniform";
		hiddenSelectionsTextures[]=
		{
			"\tc78_equipment\data\78th_CR_C_camo1_co.paa",
			"\tc78_equipment\data\78th_CT_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
	class 78_SCT_phase2: lsd_gar_phase2_base
	{
		editorSubcategory="TC_GRA_Clones";
		uniformClass="MYTAG_MYUNIT_phase2_uniform";
		hiddenSelectionsTextures[]=
		{
			"\tc78_equipment\data\78th_SCT_camo1_co.paa",
			"\tc78_equipment\data\78th_CT_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
	class 78_VCT_phase2: lsd_gar_phase2_base
	{
		editorSubcategory="TC_GRA_Clones";
		uniformClass="MYTAG_MYUNIT_phase2_uniform";
		hiddenSelectionsTextures[]=
		{
			"\tc78_equipment\data\78th_VCT_camo1_co.paa",
			"\tc78_equipment\data\78th_CT_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
	class 78_CSP_phase2: lsd_gar_phase2_base
	{
		editorSubcategory="TC_GRA_Clones";
		uniformClass="MYTAG_MYUNIT_phase2_uniform";
		hiddenSelectionsTextures[]=
		{
			"\tc78_equipment\data\78th_CSP_camo1_co.paa",
			"\tc78_equipment\data\78th_CT_camo2_co.paa",
			"\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
	};
	class MYTAG_MYUNIT_phase2_trooper: MYTAG_MYUNIT_phase2_base
	{
		scope=2;
		displayName="Trooper";
	};

	/// Backpacks
		class TC_RTO_mini_backpack: SWLB_clone_RTO_mini_backpack
		{
			displayName="[78th] RTO mini Backpack";
			author="Zaigan";
			scope=2;
			hiddenSelectionsTextures[]=
			{
				"tc78_equipment\data\backpacks\78_clone_rto_mini_backpack_co.paa",
				"tc78_equipment\data\backpacks\78_clone_rto_mini_backpack_accumulator_co.paa"
			};
		}
		class TC_RTO_backpack: SWLB_clone_backpack_RTO
		{
			displayName="[78th] RTO Backpack";
			author="Zaigan";
			scope=2;
			hiddenSelectionsTextures[]=
			{
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa",
				"",
				"",
				"",
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa"
			};
		}
		class TC_heavy_backpack: SWLB_clone_backpack_heavy
		{
			displayName="[78th] Heavy Backpack";
			author="Zaigan";
			scope=2;
			hiddenSelectionsTextures[]=
			{
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa",
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa",
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa",
				"",
				""
			};
		}
		class TC_medic_backpack: SWLB_clone_backpack_medic
		{
			displayName="[78th] Medic Backpack";
			author="Zaigan";
			scope=2;
			hiddenSelectionsTextures[]=
			{
				"tc78_equipment\data\backpacks\78_clone_medic_backpack_co.paa",
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa",
				"",
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa"
			};
		}
		class TC_eod_backpack: SWLB_clone_backpack_eod
		{
			displayName="[78th] Engineer Backpack";
			author="Zaigan";
			scope=2;
			hiddenSelectionsTextures[]=
			{
				"tc78_equipment\data\backpacks\78_clone_backpack_eod_co.paa",
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa",
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa"
			};
		}
		class TC_backpack: SWLB_clone_backpack
		{
			displayName="[78th] Backpack";
			author="Zaigan";
			scope=2;
			hiddenSelectionsTextures[]=
			{
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa",
				"tc78_equipment\data\backpacks\78_clone_backpack_co.paa"
				"",
				""
			};
		}
};