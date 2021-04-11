#include "\dega_vehicles_v22\BasicDefines.hpp"
#include "\dega_vehicles_v22\config_crewanimation.hpp"
class Mode_FullAuto;
class NewTurret;
class CopilotTurret;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class CfgPatches 
{
	class DEGA_Vehicles_V22 
	{
		units[] = 
		{
		    "DEGA_MV22_IDWS_NATO",
			"DEGA_MV22_Vehicle_NATO",
			"DEGA_MV22_Infantry_NATO",
			
		    "DEGA_V22_IDWS_O_NATO",
			"DEGA_V22_Vehicle_O_NATO",
			"DEGA_V22_Infantry_O_NATO",

		    "DEGA_V22_IDWS_B_NATO",
			"DEGA_V22_Vehicle_B_NATO",
			"DEGA_V22_Infantry_B_NATO",	

		    "DEGA_V22_IDWS_O_AAF",
			"DEGA_V22_Vehicle_O_AAF",
			"DEGA_V22_Infantry_O_AAF"			
		};
		weapons[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Soft_F", "A3_anims_f","A3_Sounds_F_Exp"};
	};
};
class Mod_Base;
class CfgMods 
{
	class DEGA_V22 : Mod_Base 
	{
        #include "\dega_vehicles_suv\data\release\mod.cpp"
	};
};	
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Turrets;
		class Eventhandlers;
		class Reflectors;
	};
	class VTOL_Base_F: Plane_Base_F
	{
		class Hitpoints: HitPoints
		{
			class HitHull;
		};
		class camShakeGForce;			
		class MarkerLights;
		class Turrets: Turrets
		{
			class CopilotTurret;
			//class GunnerTurret_01;
		};
	};	
	class DEGA_V22_Base: VTOL_Base_F
	{
		destrType=DestructWreck;
		scope = 0;
		side = 1;
		faction="BLU_F";
		displayName = "MV-22 Osprey";
		vehicleClass = "Air";
		model = "\dega_vehicles_v22\mv22.p3d";
		picture = "\dega_vehicles_v22\data\UI\picture_MV22_CA.paa";
		icon="\dega_vehicles_v22\data\UI\icon_MV22_CA.paa";
		mapSize = 28;
		crew = "B_Helipilot_F";
		accuracy=0.50;
		ejectSpeed[]={0,-2,0};
		cabinOpening = false;
		gearRetracting=true;
		driverAction = "MV22_Pilot";
		cargoIsCoDriver[] = {false};
		cargoAction[] = {"passenger_apc_generic03"};
		driverCompartments = Compartment1;
		cargoCompartments[] = {Compartment1};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
		maxSpeed = 556; //Or 444 when cruising and 185 in helicopter mode.
		transportSoldier = 22;
		supplyRadius = 8;
		armor = 100;
		damageResistance = 0.00172;
		selectionRotorStill = "engine_static";
		selectionRotorMove = "engine_blur";
		landingSpeed = 0;
		stallSpeed = 60;
		stallWarningTreshold = 0.2;
		wheelSteeringSensitivity = 0.8;
		airBrake = 1;
		airBrakeFrictionCoef = 6; 
		flaps = 1;
		flapsFrictionCoef = 0.5;
		angleOfIndicence = "3*3.1415/180";
		envelope[] = {0, 0.05, 0.3, 1.2, 3.4, 3.8, 4, 4.1, 4.2, 4.3, 4.3, 4.1, 3.8, 1};
		altNoForce = 11000;
		altFullForce = 4000;
		throttleToThrustLogFactor = 3;
		thrustCoef[] = {1.1, 1.09, 1.07, 1.05, 1.02, 0.99, 0.94, 0.85, 0.5, 0.05, 0, 0, 0};
		aileronSensitivity = 0.5;
		aileronCoef[] = {0, 0.5, 0.9, 1, 1.05, 1.1, 1.12};
		elevatorSensitivity = 1.1;
		elevatorCoef[] = {0, 0.4, 0.9, 1, 1.05, 1.1, 1.15};
		rudderInfluence = 0.848;
		rudderCoef[] = {0, 0.8, 1.5, 1.9, 2.2, 2.4, 2.5, 2.5, 2.6, 2.6, 2.6};
		aileronControlsSensitivityCoef = 1;
		elevatorControlsSensitivityCoef = 2;
		rudderControlsSensitivityCoef = 1;
		draconicForceXCoef = 10;
		draconicForceYCoef = 0.2;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = {16, 15.5, 15, 14.5, 14, 14, 14.5, 15, 16, 17, 18};
		draconicTorqueYCoef[] = {1, 1.2, 1.4, 2, 4, 7, 6.8, 6.6, 6.4, 6.2, 5.5, 5, 4.5, 3.9, 3, 1};
		vtol = 3;
		VTOLYawInfluence = 12;
		VTOLPitchInfluence = 5;
		VTOLRollInfluence = 8;
		maxOmega = 2000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\mv22_01_co.paa", "\dega_vehicles_v22\data\mv22_02_co.paa"};
		scopeCurator = 0;
		scopeArsenal = 0;
		forceInGarage = 0;		
		class textureSources
		{
			class MV22_USMC_Gray
			{
				displayName="USMC Light Gray";
				author="Deltagamer";
				textures[] = {"\dega_vehicles_v22\data\mv22_01_co.paa", "\dega_vehicles_v22\data\mv22_02_co.paa"};
				factions[]= {};
			};
			class CV22_NATO_Olive
			{
				displayName="NATO Olive";
				author="Deltagamer";
				textures[] = {"\dega_vehicles_v22\data\textures\v22x_01_olive_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_olive_co.paa"};
				factions[]= {};
			};
			class CV22_NATO_Blue
			{
				displayName="NATO Blue";
				author="Deltagamer";
				textures[] = {"\dega_vehicles_v22\data\textures\v22x_01_blue_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_blue_co.paa"};
				factions[]= {};
			};
			class CV22_AAF_Green
			{
				displayName="Digital Green [Camo]";
				author="Deltagamer";
				textures[] = {"\dega_vehicles_v22\data\textures\v22x_01_aafo_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_aafo_co.paa"};
				factions[]= {};
			};
			class CV22_AAF_Gray
			{
				displayName="Digital Gray [Camo]";
				author="Deltagamer";
				textures[] = {"\dega_vehicles_v22\data\textures\v22x_01_aafg_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_aafg_co.paa"};
				factions[]= {};
			};				
		};
		textureList[]= {};		
		class Damage
		{
			tex[]={};
			mat[]={
				"a3\data_f\glass_veh.rvmat",
				"A3\Data_f\Glass_veh_damage.rvmat",
				"A3\Data_f\Glass_veh_damage.rvmat",

				"dega_vehicles_v22\data\mv22_sklo_in.rvmat",
				"dega_vehicles_v22\data\mv22_sklo_in_damage.rvmat",
				"dega_vehicles_v22\data\mv22_sklo_in_damage.rvmat",

				"dega_vehicles_v22\data\mv22_01.rvmat",
				"dega_vehicles_v22\data\mv22_01_damage.rvmat",
				"dega_vehicles_v22\data\mv22_01_destruct.rvmat",

				"dega_vehicles_v22\data\mv22_02.rvmat",
				"dega_vehicles_v22\data\mv22_02_damage.rvmat",
				"dega_vehicles_v22\data\mv22_02_destruct.rvmat"
			};
		};
		class SimpleObject
		{
			//animate[] = {{"Hatch_move_top", 1},{"Hatch_move_left", 1},{"Hatch_move_right", 1}};
			hide[] = {"clan", "zasleh"};
			verticalOffset = -0.00731516;
		};	
		class Eventhandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};		
		class Reflectors: Reflectors			/// landing lights of the heli, turned on by AI while in night and "careless" or "safe"
		{
			class Right
			{
				color[] = {7000,7500,10000};	/// defines red, green, blue and alpha components of the light
				ambient[] = {70,75,100};		/// the same definition format for colouring the environment around
				intensity = 500;					/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				size = 1;						/// defines the visible size of light, has not much of an effect now
				innerAngle = 15;				/// angle from light direction vector where the light is at full strength
				outerAngle = 65;				/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;				/// coefficient of fading the light between inner and outer cone angles
				position = "Light_R_pos";		/// name of memory point in model to take the origin of the light
				direction = "Light_R_dir";		/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_R_hitpoint";	/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_R";			/// name of selection in visual lods of the model that are going to be hidden while the light is off
				useFlare = true;				/// boolean switch if the light produces flare or not
				flareSize = 10;					/// how big is the flare, using the same metrics as intensity
				flareMaxDistance = 250;			/// maximum distance where the flare is drawn
				dayLight = false;				/// boolean switch if the light is used during day or not
				class Attenuation
				{
					start = 0;					/// offset of start of the attenuation
					constant = 0;				/// constant attenuation of the light in any distance from source
					linear = 1;					/// coefficient for linear attenuation
					quadratic = 1;				/// coefficient for attenuation with square of distance from source
					hardLimitStart = 400;		/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 500;			/// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Left: Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};			
		};	
		class MarkerLights : MarkerLights
		{
			class GreenStill 
			{
				name = "light_nav_right";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 7500;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};	
			class RedBlinking 
			{
				name = "light_nav_top";
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				intensity = 500;
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.1;
				drawLightCenterSize = 0.04;
			};
			class RedStill 
			{
				name = "light_nav_left";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 7500;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};	
			class WhiteBlinking
			{
				name = "light_nav_back";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 1;
				intensity = 500;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.1;
				drawLightCenterSize = 0.04;
			};	
		};
		//aggregateReflectors[] = {{"Left", "Right"}};	/// aggregates both sources into one to increase performance		
		// TODO damage glass texture
		dammageHalf[]={};
		dammageFull[]={};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull				{armor = 4;		explosionShielding = 3;		name = "zbytek";			passThrough = 1;	visual = "zbytek";		radius = 0.3;	minimalHit = 0.05;	depends = "0";	material = -1;};
			class HitEngine: HitHull			{armor = 4;		explosionShielding = 3.5;	name = "engine";			passThrough = 1;	visual = "engine";		radius = 0.3;	minimalHit = 0.05;	depends = "0";};
			class HitAvionics: HitHull			{armor = 3;		explosionShielding = 3.5;	name = "HitAvionics";		passThrough = 0.5;	visual = "";				radius = 0.2;	minimalHit = 0.05;	depends = "0";};
			// Main fueslage fuel tank
			class HitFuel: HitHull				{armor = 4.5;	explosionShielding = 4;		name = "HitFuel";			passThrough = 0.8;	visual = "";				radius = 0.3;	minimalHit = 0.1;	depends = "0";};
			// Wingtips fuel tanks
			class HitFuel_Lead_Left: HitFuel	{armor = 1.8;	explosionShielding = 3;		name = "HitFuel1_Leads";	passThrough = 0;	visual = "Hit_AileronL";	radius = 0.13;	minimalHit = 0.1;	};
			class HitFuel_Lead_Right: HitFuel	{armor = 1.8;	explosionShielding = 3;		name = "HitFuel2_leads";	passThrough = 0;	visual = "Hit_AileronR";	radius = 0.13;	minimalHit = 0.1;	};
			class HitFuel_Left: HitFuel			{armor = 2.5;	explosionShielding = 5;		name = "HitFuel1";			passThrough = 0.2;	visual = "Hit_Fuel2a";		radius = 0.2;	minimalHit = 0.1;	depends = "HitFuel_Lead_Left";};
			class HitFuel_Right: HitFuel		{armor = 2.5;	explosionShielding = 5;		name = "HitFuel2";			passThrough = 0.2;	visual = "Hit_Fuel2b";		radius = 0.2;	minimalHit = 0.1;	depends = "HitFuel_Lead_Right";};
			//class HitFuel2: HitFuel				{armor = 999;	explosionShielding = 0;		name = "HitFuel2";			passThrough = 0.2;	visual = "";				radius = 0.2;	minimalHit = 0.1;	depends = "(HitFuel_Left + HitFuel_Right)*0.5";};
			// Cockpit glass
			class HitGlass1: HitHull			{armor = 1.2;	explosionShielding = 3;		name = "glass1";			passThrough = 0;	visual = "glass1"; 			radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitGlass2: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "glass2";			passThrough = 0;	visual = "glass2"; 			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass3: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "glass3";			passThrough = 0;	visual = "glass3";			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass4: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "glass4";			passThrough = 0;	visual = "glass4";			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass5: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "glass5";			passThrough = 0;	visual = "glass5";			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass6: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "glass6";			passThrough = 0;	visual = "glass6";			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass7: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "glass7";			passThrough = 0;	visual = "glass7";			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass8: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "glass8";			passThrough = 0;	visual = "glass8";			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass9: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "glass9";			passThrough = 0;	visual = "glass9";			radius = 0.2;	minimalHit = 0.1;	};			
			// Steering hitpoints	- LC means left or center
			//class HitLAileron_Link: HitHull		{armor = 1.8;	explosionShielding = 3.5;	name = "HitLAileron_Link";	passThrough = 0;	visual = "Hit_AileronL"; 	radius = 0.09;	minimalHit = 0.1;	depends = "0";};
			//class HitRAileron_Link: HitHull		{armor = 1.8;	explosionShielding = 3.5;	name = "HitRAileron_Link";	passThrough = 0;	visual = "Hit_AileronR"; 	radius = 0.09;	minimalHit = 0.1;	depends = "0";};
			//class HitLAileron: HitHull			{armor = 1.5;	explosionShielding = 3;		name = "HitLAileron";		passThrough = 0.3;	visual = "Hit_AileronL"; 	radius = 0.2;	minimalHit = 0.1;	depends = "HitLAileron_Link";};
			//class HitRAileron: HitLAileron		{armor = 1.5;	explosionShielding = 3;		name = "HitRAileron";		passThrough = 0.3;	visual = "Hit_AileronR"; 	radius = 0.2;	minimalHit = 0.1;	depends = "HitRAileron_Link";};
			//class HitLCRudder: HitHull			{armor = 2;		explosionShielding = 3;		name = "HitLCRudder";		passThrough = 0.3;	visual = "Hit_RudderC"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			//class HitLCElevator: HitHull		{armor = 1.5;	explosionShielding = 3;		name = "HitLCElevator";		passThrough = 0.3;	visual = "Hit_ElevatorL"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			//class HitRElevator: HitHull			{armor = 1.5;	explosionShielding = 3;		name = "HitRElevator";		passThrough = 0.3;	visual = "Hit_ElevatorR"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
		};		
		class AnimationSources : AnimationSources
		{
			class Door_1_1 {source = "user"; sound = "ServoRampSound"; animPeriod = 2;};
			class Ramp {source = "user"; sound = "ServoRampSound"; animPeriod = 2;};
			class fuel_probe {initPhase = 0; sound = "ServoRampSound"; source = "user"; animPeriod = 3;};
			class engine_prop_turn {source = "user"; sound = "ServoRampSound"; animPeriod = 10;};
			class pack_engine_1 : engine_prop_turn { forceAnimatePhase = 0; forceAnimate[] = {};};
			class Revolving {source="revolving"; weapon="DEGA_LMG_Minigun_V22";};
			class seats_hide_source 
			{
				source="user"; 
				animPeriod=0; 
				initPhase=0; 
				displayName = "Fold Seats (Locks Passengers)"; 
				author = "Deltagamer"; 
				useSource = 1;
                lockCargo[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}; 
				lockCargoAnimationPhase = 1;				
			};							 		
			// antimation sources for suspension animations and wheel rotation
			//class Wheel_1_source			{source = wheel; wheel = Wheel_1_1;};
			//class Wheel_2_source			{source = wheel; wheel = Wheel_2_1;};
			//class Wheel_3_source			{source = wheel; wheel = Wheel_2_2;};
			class Damper_1_source			{source = "damper"; wheel = "Wheel_1_1";};
			class Damper_2_source			{source = "damper"; wheel = "Wheel_2_1";};
			class Damper_3_source			{source = "damper"; wheel = "Wheel_2_2";};
			#define ENGINE_PROP_TURN(x,y) class engine_prop_##x##_##y##_turn:pack_engine_1{}
			ENGINE_PROP_TURN(1,1);
			ENGINE_PROP_TURN(1,2);
			ENGINE_PROP_TURN(1,3);
			ENGINE_PROP_TURN(2,1);
			ENGINE_PROP_TURN(2,2);
			ENGINE_PROP_TURN(2,3);
			#define ENGINE_PROP_CLOSE(x,y) class engine_prop_##x##_##y##_close: pack_engine_1{}
			ENGINE_PROP_CLOSE(1,1);
			ENGINE_PROP_CLOSE(1,3);
			ENGINE_PROP_CLOSE(2,1);
			ENGINE_PROP_CLOSE(2,2);
			class pack_engine_2: pack_engine_1 {};
			class turn_wing: pack_engine_1 
			{
				displayname = "Fold Rotors";
				sound = "ServoRampSound";
				//onPhaseChanged = "_this call DEGAV22_fnc_ch53_fold";
				forceAnimatePhase = 1;
				forceAnimate[] = 
				{
					"pack_engine_1", 1,
					"pack_engine_2", 1,
					"Rotor_hide_source_1_1a",1,
					"Rotor_hide_source_1_1b",1,
					"Rotor_hide_source_1_2a",1,
					"Rotor_hide_source_1_2b",1,
					"Rotor_hide_source_1_3a",1,
					"Rotor_hide_source_1_3b",1,
					"Rotor_hide_source_2_1a",1,
					"Rotor_hide_source_2_1b",1,
					"Rotor_hide_source_2_2a",1,
					"Rotor_hide_source_2_2b",1,
					"Rotor_hide_source_2_3a",1,
					"Rotor_hide_source_2_3b",1,
					"engine_prop_1_1_close",1,
					"engine_prop_1_1_turn",1,
					"engine_prop_1_2_turn",1,
					"engine_prop_1_3_close",1,
					"engine_prop_1_3_turn",1,
					"engine_prop_2_1_close",1,
					"engine_prop_2_1_turn",1,
					"engine_prop_2_2_close",1,
					"engine_prop_2_2_turn",1,
					"engine_prop_2_3_turn",1,
                    "Rotor_hide_source_engine_1",1,
                    "Rotor_hide_source_engine_2",1				
				};
			};
			class Rotor_hide_source_1_1a : pack_engine_1 {};	
            class Rotor_hide_source_1_1b : Rotor_hide_source_1_1a {};
            class Rotor_hide_source_1_2a : Rotor_hide_source_1_1a {};	
            class Rotor_hide_source_1_2b : Rotor_hide_source_1_1a {};	
            class Rotor_hide_source_1_3a : Rotor_hide_source_1_1a {};	
            class Rotor_hide_source_1_3b : Rotor_hide_source_1_1a {};	
            class Rotor_hide_source_2_1a : Rotor_hide_source_1_1a {};			
            class Rotor_hide_source_2_1b : Rotor_hide_source_1_1a {};
            class Rotor_hide_source_2_2a : Rotor_hide_source_1_1a {};	
            class Rotor_hide_source_2_2b : Rotor_hide_source_1_1a {};	
            class Rotor_hide_source_2_3a : Rotor_hide_source_1_1a {};	
            class Rotor_hide_source_2_3b : Rotor_hide_source_1_1a {};	
            class Rotor_hide_source_engine_1 : Rotor_hide_source_1_1a {};
            class Rotor_hide_source_engine_2 : Rotor_hide_source_engine_1 {};	
			class HitGlass1 				{source="Hit"; hitpoint="HitGlass1"; 			raw=1;};
			class HitGlass2: HitGlass1 		{hitpoint = "HitGlass2";};
			class HitGlass3: HitGlass1 		{hitpoint = "HitGlass3";};
            class HitGlass4: HitGlass1 		{hitpoint = "HitGlass4";};	
			class HitGlass5: HitGlass1 		{hitpoint = "HitGlass5";};
			class HitGlass6: HitGlass1 		{hitpoint = "HitGlass6";};
            class HitGlass7: HitGlass1 		{hitpoint = "HitGlass7";};	
			class HitGlass8: HitGlass1 		{hitpoint = "HitGlass8";};
			class HitGlass9: HitGlass1 		{hitpoint = "HitGlass9";};			
		};
		class UserActions
		{
			class Pack_Rotor
			{
				displayName="Pack Rotors";
				displayNameDefault="Pack Rotors";
				position=PackAction;
				radius=10;
				priority = 3;
				onlyForPlayer=true;
				condition="(driver this == player) AND (!isEngineOn this) AND (speed this == 0) AND {{this animationSourcePhase _x isEqualTo 0} count ['engine_prop_turn'] > 0.5}";
				statement="this animateSource [""engine_prop_turn"", 1];";
			};
			class UnPack_Rotor
			{
				displayName="Unpack Rotors";
				displayNameDefault="Unpack Rotors";
				position=PackAction;
				radius=10;
				priority = 3;
				onlyForPlayer=true;
				condition="(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['engine_prop_turn'] < 0.5}";
				statement="this animateSource [""engine_prop_turn"", 0];";
			};
			class Open_Ramp
			{
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				position=PackAction;
				radius=10;
				priority = 4;
				onlyForPlayer=true;
				condition="(driver this == player) AND this animationphase ""ramp_top"" !=1";
				statement="this animateSource [""ramp"", 1];";
			};
			class Close_Ramp
			{
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				position=PackAction;
				radius=10;
				priority = 4;
				onlyForPlayer=true;
				condition="(driver this == player) AND this animationphase ""ramp_top"" !=0";
				statement="this animateSource [""ramp"", 0];";
			};
			class Open_Sidedoor
			{
				displayName="Open Side Door";
				displayNameDefault="Open Side Door";
				position=PackAction;
				radius=10;
				priority = 2;
				onlyForPlayer=true;
				condition="(driver this == player) AND (!isEngineOn this) AND (speed this == 0) AND this animationphase ""door1_top"" !=1";
				statement="this animateSource [""door_1_1"", 1];";
			};
			class Close_Sidedoor
			{
				displayName="Close Side Door";
				displayNameDefault="Close Side Door";
				position=PackAction;
				radius=10;
				priority = 2;
				onlyForPlayer=true;
				condition="(driver this == player) AND this animationphase ""door1_top"" !=0";
				statement="this animateSource [""door_1_1"", 0];";
			};			
			class Extend_Fuel
			{
				displayName="Extend Fuel Probe";
				displayNameDefault="Extend Fuel Probe";
				position=PackAction;
				radius=10;
				priority = 5;
				onlyForPlayer=true;
				condition="(driver this == player) AND this animationphase ""fuel_probe"" !=1";
				statement="this animateSource [""fuel_probe"", 1];";
			};
			class Retract_Fuel
			{
				displayName="Retract Fuel Probe";
				displayNameDefault="Retract Fuel Probe";
				position=PackAction;
				radius=10;
				priority = 5;
				onlyForPlayer=true;
				condition="(driver this == player) AND this animationphase ""fuel_probe"" !=0";
				statement="this animateSource [""fuel_probe"", 0];";
			};				
		};
		class Library
		{
		  libTextDesc = $STR_LIB_MV22;
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "light_nav_left";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "light_nav_right";
			};
		};			
		class Wheels
		{
			class Wheel_1_1
			{
				boneName = "Wheel_1_1";
				steering = 0;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "Wheel_1_1_bound";
				width = 0.16;
				mass = 150;
				MOI = 1;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 5000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				maxDroop = 0.1;
				sprungMass = 1182;
				springStrength = 18918;
				springDamperRate = 9459;
				longitudinalStiffnessPerUnitGravity = 4000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
			};
			class Wheel_2_1: Wheel_1_1
			{
				boneName = "Wheel_2_1";
				steering = 0;
				center = "wheel_2_1_axis";
				boundary = "Wheel_2_1_bound";
				width = 0.28;
				sprungMass = 2000;
				springStrength = 25569;
				springDamperRate = 578500;
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
			};
			class Wheel_2_2: Wheel_2_1
			{
				boneName = "Wheel_2_2";
				center = "wheel_2_2_axis";
				boundary = "Wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
		};	
		class RenderTargets /// class for all Picture-in-Picture
		{
			class camera1
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition		= "gun_begin"; 	/// memory point of PiP origin
					pointDirection		= "gun_end"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 0;			/// zero means standard vision
					fov 				= 0.093;			/// what is the angle of the PiP field of view
				}; 			
			};
			class camera2
			{
				renderTarget = "rendertarget3";
				class CameraView2
				{
					pointPosition		= "gun_begin"; 	/// memory point of PiP origin
					pointDirection		= "gun_end"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 2;			/// zero means standard vision
					fov 				= 0.093;			/// what is the angle of the PiP field of view
				}; 	
			};
			class camera3
			{
				renderTarget = "rendertarget2";
				class CameraView3
				{
					pointPosition		= "gun_begin1"; 	/// memory point of PiP origin
					pointDirection		= "gun_end1"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 0;			/// zero means standard vision
					fov                 = 0.093;			/// what is the angle of the PiP field of view
				}; 	
			};
			class camera4
			{
				renderTarget = "rendertarget1";
				class CameraView3
				{
					pointPosition		= "pip1_pos"; 	/// memory point of PiP origin
					pointDirection		= "pip1_end"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 4;			/// zero means standard vision
					fov                 = 0.7;			/// what is the angle of the PiP field of view
				}; 	
			};
			class camera5
			{
				renderTarget = "rendertarget0";
				class CameraView3
				{
					pointPosition		= "pip0_pos"; 	/// memory point of PiP origin
					pointDirection		= "pip0_end"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 4;			/// zero means standard vision
					fov                 = 0.7;			/// what is the angle of the PiP field of view
				}; 	
			};			
		};		
		class Turrets: Turrets
		{			
			class CopilotTurret: CopilotTurret
			{
				animationSourceBody = "ObsTurret";
				animationSourceGun = "ObsGun";
				body = "ObsTurret";
				castGunnerShadow = 1;
				gun = "ObsGun";
				gunBeg = "gun_end";
				gunEnd = "gun_begin";
				gunnerCompartments = "Compartment1";
				gunnerAction = "MV22_Cargo";
				gunnerInAction = "MV22_Cargo";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "Stick_control_2";
				gunnerLeftLegAnimName = "Pedals_left_2";
				gunnerRightLegAnimName = "Pedals_right_2";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";				
				isCopilot = 1;
				memoryPointGun = "";
				memoryPointGunnerOptics = "gun_begin";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				LODTurnedIn = 1100;
				LODOpticsIn = -1;
				LODTurnedOut = 1100;	
				LODOpticsOut = -1;				
				minElev = -50;
				maxElev = 30;
				initElev = 0;
				minTurn = -170;
				maxTurn = 170;
				initTurn = 0;
				missileBeg = "";
				missileEnd = "";
				particlesDir = "";
				particlesPos = "";
				proxyIndex = 1;
				selectionFireAnim = "";
				turretInfoType = "RscOptics_VTOL_01_copilot";
				magazines[] = {"Laserbatteries"};
				weapons[] = {"Laserdesignator_mounted"};
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				showAllTargets = 4;
				usePiP = 1;
				showHMD = 0;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						visionMode[] = {"Normal", "NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};			
				class MFD
				{
					class AirplaneHUD
					{
						topLeft = "HUD_top_left";
						topRight = "HUD_top_right";
						bottomLeft = "HUD_bottom_left";
						borderLeft = 0;
						borderRight = 0;
						borderTop = 0;
						borderBottom = 0;
						color[] = {0.15, 1, 0.15, 1};
						helmetMountedDisplay = 1;
						helmetPosition[] = {-0.0375, 0.0375, 0.1};
						helmetRight[] = {0.075, 0, 0};
						helmetDown[] = {0, -0.075, 0};
						turret[] = {-1};
						class Bones
						{
							class HUDCenter
							{
								type = "fixed";
								pos[] = {0.5, 0.5};
							};
							class HorizonBankSource
							{
								type = "rotational";
								source = "HorizonBank";
								center[] = {0.5, 0.5};
								min = -6.2831;
								max = 6.2831;
								minAngle = -360;
								maxAngle = 360;
							};
							class HorizonDiveSource
							{
								source = "horizonDive";
								type = "linear";
								min = -1;
								max = 1;
								minPos[] = {0.5, 2.5};
								maxPos[] = {0.5, -1.5};
							};
							class VelocityVector
							{
								type = "vector";
								source = "velocityToView";
								pos0[] = {0.5, 0.5};
								pos10[] = {0.734, 0.73};
							};
							class ForwardVector
							{
								type = "vector";
								source = "forward";
								pos0[] = {0, 0};
								pos10[] = {0.234, 0.23};
							};
							class ASL_Instrument
							{
								type = "rotational";
								source = "altitudeASL";
								center[] = {0.9, 0.294872};
								min = 0;
								max = 20000;
								minAngle = 0;
								maxAngle = 72000;
								aspectRatio = 0.982906;
							};
							class Speed_Instrument: ASL_Instrument
							{
								source = "speed";
								center[] = {0.1, 0.294872};
								max = 555.556;
								maxAngle = 7200;
							};
							class WPPoint
							{
								type = "vector";
								source = "WPPointToView";
								pos0[] = {0.5, 0.5};
								pos10[] = {0.734, 0.73};
							};
							class Limit0109
							{
								type = "limit";
								limits[] = {0.1, 0.1, 0.9, 0.9};
							};
							class Target
							{
								source = "targettoview";
								type = "vector";
								pos0[] = {0.5, 0.5};
								pos10[] = {0.734, 0.73};
							};
							class HorizonBankRot
							{
								type = "rotational";
								source = "horizonBank";
								center[] = {0.5, 0.5};
								min = -1.5708;
								max = 1.5708;
								minAngle = 90;
								maxAngle = 270;
								aspectRatio = 1;
							};
							class HorizonBankRotFull
							{
								type = "rotational";
								source = "horizonBank";
								center[] = {0, 0};
								min = -3.1416;
								max = 3.1416;
								minAngle = -180;
								maxAngle = 180;	
								aspectRatio = 1;
							};
							class ThrustVectoringRotation
							{
								type = "rotational";
								source = "vtolvectoring";
								sourceScale = 100;
								center[] = {0.07, 0.785};
								min = 0;
								max = 100;
								minAngle = -180;
								maxAngle = "-180+90";
								aspectRatio = 0.982906;
							};
							class Level0
							{
								pos0[] = {0.5, 0.5};
								pos10[] = {0.834, 0.83};
								type = "horizontoview";
								angle = 0;
							};
							class LevelP5: Level0
							{
								angle = 5;
    						};
							class LevelM5: Level0
							{
								angle = -5;
							};
							class LevelP10: Level0
							{
								angle = 10;
							};
							class LevelM10: Level0
							{
								angle = -10;
							};
							class LevelP15: Level0
							{
								angle = 15;
							};
							class LevelM15: Level0
							{
								angle = -15;
							};
							class LevelP20: Level0
							{
								angle = 20;
							};
							class LevelM20: Level0
							{
								angle = -20;
							};
							class LevelP25: Level0
							{
								angle = 25;
							};
							class LevelM25: Level0
							{
								angle = -25;
							};
							class LevelP30: Level0
							{
								angle = 30;
							};
							class LevelM30: Level0
							{
								angle = -30;
							};
							class LevelP35: Level0
							{
								angle = 35;
							};
							class LevelM35: Level0
							{
								angle = -35;
							};
							class LevelP40: Level0
							{
								angle = 40;
							};
							class LevelM40: Level0
							{
								angle = -40;
							};
							class LevelP45: Level0
							{
								angle = 45;
							};
							class LevelM45: Level0
							{
								angle = -45;
							};
							class LevelP50: Level0
							{
								angle = 50;
							};
							class LevelM50: Level0
							{
								angle = -50;
							};
							class LevelP55: Level0
							{
								angle = 55;
							};
							class LevelM55: Level0
							{
								angle = -55;
							};
							class LevelP60: Level0
							{
								angle = 60;
							};
							class LevelM60: Level0
							{
								angle = -60;
							};
							class LevelP65: Level0
							{
								angle = 65;
							};
							class LevelM65: Level0
							{
								angle = -65;
							};
							class LevelP70: Level0
							{
								angle = 70;
							};
							class LevelM70: Level0
							{
								angle = -70;
							};
							class LevelP75: Level0
							{
								angle = 75;
							};
							class LevelM75: Level0
							{
								angle = -75;
							};
							class LevelP80: Level0
							{
								angle = 80;
							};
							class LevelM80: Level0
							{
								angle = -80;
							};
							class LevelP85: Level0
							{
								angle = 85;
							};
							class LevelM85: Level0
							{
								angle = -85;
							};
							class LevelP90: Level0
							{
								angle = 90;
							};
							class LevelM90: Level0
							{
								angle = -90;
							};
							class Airport1
							{
								type = "vector";
								source = "airportCorner1toView";
								pos0[] = {0.5, 0.5};
								pos10[] = {0.734, 0.73};
							};
							class Airport2: Airport1
							{
								source = "airportCorner2toView";
							};
							class Airport3: Airport1
							{
								source = "airportCorner3toView";
							};
							class Airport4: Airport1
							{
								source = "airportCorner4toView";
							};
							class ILS_H
							{
								type = "ils";
								pos0[] = {0.5, 0.5};
								pos3[] = {0.5702, 0.5};
							};
							class ILS_W: ILS_H
							{
								pos3[] = {0.5, 0.569};
							};
						};
						class Draw
						{
							alpha = "user3";
							color[] = {"user0", "user1", "user2"};
							condition = "(1 - (cameraHeadingDiffY<=-29) + (abs(cameraHeadingDiffX)>=29))*on";
							class VelocityLine
							{
								type = "line";
								width = 2;
								points[] = {{"VelocityVector", {0, -0.0196581}, 1}, {"VelocityVector", {0.01, -0.0170239}, 1}, {"VelocityVector", {0.01732, -0.00982906}, 1}, {"VelocityVector", {0.02, 0}, 1}, {"VelocityVector", {0.01732, 0.00982906}, 1}, {"VelocityVector", {0.01, 0.0170239}, 1}, {"VelocityVector", {0, 0.0196581}, 1}, {"VelocityVector", {-0.01, 0.0170239}, 1}, {"VelocityVector", {-0.01732, 0.00982906}, 1}, {"VelocityVector", {-0.02, 0}, 1}, {"VelocityVector", {-0.01732, -0.00982906}, 1}, {"VelocityVector", {-0.01, -0.0170239}, 1}, {"VelocityVector", {0, -0.0196581}, 1}, {}, {"VelocityVector", {0.04, 0}, 1}, {"VelocityVector", {0.02, 0}, 1}, {}, {"VelocityVector", {-0.04, 0}, 1}, {"VelocityVector", {-0.02, 0}, 1}, {}, {"VelocityVector", {0, -0.0393162}, 1}, {"VelocityVector", {0, -0.0196581}, 1}, {}};
							};
							class Static
							{
								type = "line";
								width = 3;
								points[] = {{"HUDCenter", {0.045, -0.011}, 1}, {"HUDCenter", {0.02, -0.011}, 1}, {"HUDCenter", {0.01, -0.001}, 1}, {"HUDCenter", {0, -0.011}, 1}, {"HUDCenter", {-0.01, -0.001}, 1}, {"HUDCenter", {-0.02, -0.011}, 1}, {"HUDCenter", {-0.045, -0.011}, 1}, {}, {{0.0925, 0.385791}, 1}, {{0.1075, 0.385791}, 1}, {}, {{0.1, 0.378419}, 1}, {{0.1, 0.393162}, 1}, {}, {{0.14687, 0.368427}, 1}, {{0.16187, 0.368427}, 1}, {}, {{0.15437, 0.361055}, 1}, {{0.15437, 0.375798}, 1}, {}, {{0.180473, 0.322967}, 1}, {{0.195473, 0.322967}, 1}, {}, {{0.187973, 0.315595}, 1}, {{0.187973, 0.330339}, 1}, {}, {{0.180473, 0.266776}, 1}, {{0.195473, 0.266776}, 1}, {}, {{0.187973, 0.259405}, 1}, {{0.187973, 0.274148}, 1}, {}, {{0.14687, 0.221317}, 1}, {{0.16187, 0.221317}, 1}, {}, {{0.15437, 0.213945}, 1}, {{0.15437, 0.228689}, 1}, {}, {{0.0925, 0.203953}, 1}, {{0.1075, 0.203953}, 1}, {}, {{0.1, 0.196581}, 1}, {{0.1, 0.211325}, 1}, {}, {{0.0381299, 0.221317}, 1}, {{0.0531299, 0.221317}, 1}, {}, {{0.0456299, 0.213945}, 1}, {{0.0456299, 0.228689}, 1}, {}, {{0.00452726, 0.266776}, 1}, {{0.0195273, 0.266776}, 1}, {}, {{0.0120273, 0.259405}, 1}, {{0.0120273, 0.274148}, 1}, {}, {{0.00452728, 0.322967}, 1}, {{0.0195273, 0.322967}, 1}, {}, {{0.0120273, 0.315595}, 1}, {{0.0120273, 0.330339}, 1}, {}, {{0.0381299, 0.368427}, 1}, {{0.0531299, 0.368427}, 1}, {}, {{0.0456299, 0.361055}, 1}, {{0.0456299, 0.375798}, 1}, {}, {"Speed_Instrument", {0, 0.065}, 1}, {"Speed_Instrument", {0, 0.085}, 1}, {}, {{0.86, 0.309615}, 1}, {{0.94, 0.309615}, 1}, {{0.94, 0.280128}, 1}, {{0.86, 0.280128}, 1}, {{0.86, 0.309615}, 1}, {}, {{0.8925, 0.385791}, 1}, {{0.9075, 0.385791}, 1}, {}, {{0.9, 0.378419}, 1}, {{0.9, 0.393162}, 1}, {}, {{0.94687, 0.368427}, 1}, {{0.96187, 0.368427}, 1}, {}, {{0.95437, 0.361055}, 1}, {{0.95437, 0.375798}, 1}, {}, {{0.980473, 0.322967}, 1}, {{0.995473, 0.322967}, 1}, {}, {{0.987973, 0.315595}, 1}, {{0.987973, 0.330339}, 1}, {}, {{0.980473, 0.266776}, 1}, {{0.995473, 0.266776}, 1}, {}, {{0.987973, 0.259405}, 1}, {{0.987973, 0.274148}, 1}, {}, {{0.94687, 0.221317}, 1}, {{0.96187, 0.221317}, 1}, {}, {{0.95437, 0.213945}, 1}, {{0.95437, 0.228689}, 1}, {}, {{0.8925, 0.203953}, 1}, {{0.9075, 0.203953}, 1}, {}, {{0.9, 0.196581}, 1}, {{0.9, 0.211325}, 1}, {}, {{0.83813, 0.221317}, 1}, {{0.85313, 0.221317}, 1}, {}, {{0.84563, 0.213945}, 1}, {{0.84563, 0.228689}, 1}, {}, {{0.804527, 0.266776}, 1}, {{0.819527, 0.266776}, 1}, {}, {{0.812027, 0.259405}, 1}, {{0.812027, 0.274148}, 1}, {}, {{0.804527, 0.322967}, 1}, {{0.819527, 0.322967}, 1}, {}, {{0.812027, 0.315595}, 1}, {{0.812027, 0.330339}, 1}, {}, {{0.83813, 0.368427}, 1}, {{0.85313, 0.368427}, 1}, {}, {{0.84563, 0.361055}, 1}, {{0.84563, 0.375798}, 1}, {}, {"ASL_Instrument", {0, 0.065}, 1}, {"ASL_Instrument", {0, 0.085}, 1}, {}, {{0.06, 0.309615}, 1}, {{0.14, 0.309615}, 1}, {{0.14, 0.280128}, 1}, {{0.06, 0.280128}, 1}, {{0.06, 0.309615}, 1}, {}, {{0.809096, 0.581406}, 1}, {{0.838074, 0.589038}, 1}, {}, {{0.777128, 0.657265}, 1}, {{0.803109, 0.672009}, 1}, {}, {{0.726274, 0.722406}, 1}, {{0.747487, 0.743257}, 1}, {}, {{0.66, 0.772391}, 1}, {{0.675, 0.797928}, 1}, {}, {{0.582822, 0.803813}, 1}, {{0.590587, 0.832295}, 1}, {}, {{0.5, 0.81453}, 1}, {{0.5, 0.844017}, 1}, {}, {{0.417178, 0.803813}, 1}, {{0.409413, 0.832295}, 1}, {}, {{0.34, 0.772391}, 1}, {{0.325, 0.797927}, 1}, {}, {{0.273726, 0.722406}, 1}, {{0.252513, 0.743257}, 1}, {}, {{0.222872, 0.657265}, 1}, {{0.196891, 0.672009}, 1}, {}, {{0.190904, 0.581406}, 1}, {{0.161926, 0.589038}, 1}, {}, {{0.0783333, 0.768667}, 1}, {{0.0866667, 0.768667}, 1}, {{0.0953333, 0.775333}, 1}, {{0.139, 0.775333}, 1}, {{0.147333, 0.756}, 1}, {{0.161333, 0.756}, 1}, {{0.161333, 0.789}, 1}, {{0.142667, 0.789}, 1}, {{0.104, 0.803667}, 1}, {{0.0286667, 0.803667}, 1}, {{0.0196667, 0.794667}, 1}, {{0.0333333, 0.777}, 1}, {{0.0606667, 0.768667}, 1}, {}};
							};
							class Horizont
							{
								clipTL[] = {0, 0.2};
								clipBR[] = {1, 0.75};
								class Dimmed
								{
									class Level0
									{
										type = "line";
										width = 3;
										points[] = {{"Level0", {0.75, 0}, 1}, {"Level0", {0.1, 0}, 1}, {}, {"Level0", {-0.1, 0}, 1}, {"Level0", {-0.75, 0}, 1}};
									};
								};
								class HideOnTurn
								{
									condition = "abs(cameraHeadingDiffX)<=5";
									class Limiter
									{
										class Level0
										{
											type = "line";
											width = 2;
											points[] = {};
										};
										class LevelM5: Level0
										{
											type = "line";
											points[] = {{"LevelM5", {-0.25, 0.03}, 1}, {"LevelM5", {-0.25, 0}, 1}, {"LevelM5", {-0.08, 0}, 1}, {}, {"LevelM5", {0.08, 0}, 1}, {"LevelM5", {0.25, 0}, 1}, {"LevelM5", {0.25, 0.03}, 1}};
										};
										class VALM_1_5
										{
											type = "text";
											source = "static";
											text = -5;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM5", {-0.27, -0.012}, 1};
											right[] = {"LevelM5", {-0.21, -0.012}, 1};
											down[] = {"LevelM5", {-0.27, 0.038}, 1};
										};
										class LevelP5: Level0
										{
											type = "line";
											points[] = {{"LevelP5", {-0.25, -0.03}, 1}, {"LevelP5", {-0.25, 0}, 1}, {"LevelP5", {-0.08, 0}, 1}, {}, {"LevelP5", {0.08, 0}, 1}, {"LevelP5", {0.25, 0}, 1}, {"LevelP5", {0.25, -0.03}, 1}};
										};
										class VALP_1_5
										{
											type = "text";
											source = "static";
											text = "5";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP5", {-0.27, -0.037}, 1};
											right[] = {"LevelP5", {-0.21, -0.037}, 1};
											down[] = {"LevelP5", {-0.27, 0.013}, 1};
										};
										class LevelM10: Level0
										{
											type = "line";
											points[] = {{"LevelM10", {-0.25, 0.03}, 1}, {"LevelM10", {-0.25, 0}, 1}, {"LevelM10", {-0.08, 0}, 1}, {}, {"LevelM10", {0.08, 0}, 1}, {"LevelM10", {0.25, 0}, 1}, {"LevelM10", {0.25, 0.03}, 1}};
										};
										class VALM_1_10
										{
											type = "text";
											source = "static";
											text = -10;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM10", {-0.27, -0.012}, 1};
											right[] = {"LevelM10", {-0.21, -0.012}, 1};
											down[] = {"LevelM10", {-0.27, 0.038}, 1};
										};
										class LevelP10: Level0
										{
											type = "line";
											points[] = {{"LevelP10", {-0.25, -0.03}, 1}, {"LevelP10", {-0.25, 0}, 1}, {"LevelP10", {-0.08, 0}, 1}, {}, {"LevelP10", {0.08, 0}, 1}, {"LevelP10", {0.25, 0}, 1}, {"LevelP10", {0.25, -0.03}, 1}};
										};
										class VALP_1_10
										{
											type = "text";
											source = "static";
											text = "10";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP10", {-0.27, -0.037}, 1};
											right[] = {"LevelP10", {-0.21, -0.037}, 1};
											down[] = {"LevelP10", {-0.27, 0.013}, 1};
										};
										class LevelM15: Level0
										{
											type = "line";
											points[] = {{"LevelM15", {-0.25, 0.03}, 1}, {"LevelM15", {-0.25, 0}, 1}, {"LevelM15", {-0.08, 0}, 1}, {}, {"LevelM15", {0.08, 0}, 1}, {"LevelM15", {0.25, 0}, 1}, {"LevelM15", {0.25, 0.03}, 1}};
										};
										class VALM_1_15
										{
											type = "text";
											source = "static";
											text = -15;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM15", {-0.27, -0.012}, 1};
											right[] = {"LevelM15", {-0.21, -0.012}, 1};
											down[] = {"LevelM15", {-0.27, 0.038}, 1};
										};
										class LevelP15: Level0
										{
											type = "line";
											points[] = {{"LevelP15", {-0.25, -0.03}, 1}, {"LevelP15", {-0.25, 0}, 1}, {"LevelP15", {-0.08, 0}, 1}, {}, {"LevelP15", {0.08, 0}, 1}, {"LevelP15", {0.25, 0}, 1}, {"LevelP15", {0.25, -0.03}, 1}};
										};
										class VALP_1_15
										{
											type = "text";
											source = "static";
											text = "15";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP15", {-0.27, -0.037}, 1};
											right[] = {"LevelP15", {-0.21, -0.037}, 1};												
											down[] = {"LevelP15", {-0.27, 0.013}, 1};
										};
										class LevelM20: Level0
										{
											type = "line";
											points[] = {{"LevelM20", {-0.25, 0.03}, 1}, {"LevelM20", {-0.25, 0}, 1}, {"LevelM20", {-0.08, 0}, 1}, {}, {"LevelM20", {0.08, 0}, 1}, {"LevelM20", {0.25, 0}, 1}, {"LevelM20", {0.25, 0.03}, 1}};
										};
										class VALM_1_20
										{
											type = "text";
											source = "static";
											text = -20;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM20", {-0.27, -0.012}, 1};
											right[] = {"LevelM20", {-0.21, -0.012}, 1};
											down[] = {"LevelM20", {-0.27, 0.038}, 1};
										};
										class LevelP20: Level0
										{
											type = "line";
											points[] = {{"LevelP20", {-0.25, -0.03}, 1}, {"LevelP20", {-0.25, 0}, 1}, {"LevelP20", {-0.08, 0}, 1}, {}, {"LevelP20", {0.08, 0}, 1}, {"LevelP20", {0.25, 0}, 1}, {"LevelP20", {0.25, -0.03}, 1}};
										};
										class VALP_1_20
										{
											type = "text";
											source = "static";
											text = "20";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP20", {-0.27, -0.037}, 1};
											right[] = {"LevelP20", {-0.21, -0.037}, 1};
											down[] = {"LevelP20", {-0.27, 0.013}, 1};
										};
										class LevelM25: Level0
										{
											type = "line";
											points[] = {{"LevelM25", {-0.25, 0.03}, 1}, {"LevelM25", {-0.25, 0}, 1}, {"LevelM25", {-0.08, 0}, 1}, {}, {"LevelM25", {0.08, 0}, 1}, {"LevelM25", {0.25, 0}, 1}, {"LevelM25", {0.25, 0.03}, 1}};
										};
										class VALM_1_25
										{
											type = "text";
											source = "static";
											text = -25;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM25", {-0.27, -0.012}, 1};
											right[] = {"LevelM25", {-0.21, -0.012}, 1};
											down[] = {"LevelM25", {-0.27, 0.038}, 1};
										};
										class LevelP25: Level0
										{
											type = "line";
											points[] = {{"LevelP25", {-0.25, -0.03}, 1}, {"LevelP25", {-0.25, 0}, 1}, {"LevelP25", {-0.08, 0}, 1}, {}, {"LevelP25", {0.08, 0}, 1}, {"LevelP25", {0.25, 0}, 1}, {"LevelP25", {0.25, -0.03}, 1}};
										};
										class VALP_1_25
										{
											type = "text";
											source = "static";
											text = "25";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP25", {-0.27, -0.037}, 1};
											right[] = {"LevelP25", {-0.21, -0.037}, 1};
											down[] = {"LevelP25", {-0.27, 0.013}, 1};
										};
										class LevelM30: Level0
										{
											type = "line";
											points[] = {{"LevelM30", {-0.25, 0.03}, 1}, {"LevelM30", {-0.25, 0}, 1}, {"LevelM30", {-0.08, 0}, 1}, {}, {"LevelM30", {0.08, 0}, 1}, {"LevelM30", {0.25, 0}, 1}, {"LevelM30", {0.25, 0.03}, 1}};
										};
										class VALM_1_30
										{
											type = "text";
											source = "static";
											text = -30;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM30", {-0.27, -0.012}, 1};
											right[] = {"LevelM30", {-0.21, -0.012}, 1};
											down[] = {"LevelM30", {-0.27, 0.038}, 1};
										};
										class LevelP30: Level0
										{
											type = "line";
											points[] = {{"LevelP30", {-0.25, -0.03}, 1}, {"LevelP30", {-0.25, 0}, 1}, {"LevelP30", {-0.08, 0}, 1}, {}, {"LevelP30", {0.08, 0}, 1}, {"LevelP30", {0.25, 0}, 1}, {"LevelP30", {0.25, -0.03}, 1}};
										};
										class VALP_1_30
										{
											type = "text";
											source = "static";
											text = "30";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP30", {-0.27, -0.037}, 1};
											right[] = {"LevelP30", {-0.21, -0.037}, 1};
											down[] = {"LevelP30", {-0.27, 0.013}, 1};
										};
										class LevelM35: Level0
										{
											type = "line";
											points[] = {{"LevelM35", {-0.25, 0.03}, 1}, {"LevelM35", {-0.25, 0}, 1}, {"LevelM35", {-0.08, 0}, 1}, {}, {"LevelM35", {0.08, 0}, 1}, {"LevelM35", {0.25, 0}, 1}, {"LevelM35", {0.25, 0.03}, 1}};
										};
										class VALM_1_35
										{
											type = "text";
											source = "static";
											text = -35;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM35", {-0.27, -0.012}, 1};
											right[] = {"LevelM35", {-0.21, -0.012}, 1};
											down[] = {"LevelM35", {-0.27, 0.038}, 1};
										};
										class LevelP35: Level0
										{
											type = "line";
											points[] = {{"LevelP35", {-0.25, -0.03}, 1}, {"LevelP35", {-0.25, 0}, 1}, {"LevelP35", {-0.08, 0}, 1}, {}, {"LevelP35", {0.08, 0}, 1}, {"LevelP35", {0.25, 0}, 1}, {"LevelP35", {0.25, -0.03}, 1}};
										};
										class VALP_1_35
										{
											type = "text";
											source = "static";
											text = "35";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP35", {-0.27, -0.037}, 1};
											right[] = {"LevelP35", {-0.21, -0.037}, 1};
											down[] = {"LevelP35", {-0.27, 0.013}, 1};
										};
										class LevelM40: Level0
										{
											type = "line";
											points[] = {{"LevelM40", {-0.25, 0.03}, 1}, {"LevelM40", {-0.25, 0}, 1}, {"LevelM40", {-0.08, 0}, 1}, {}, {"LevelM40", {0.08, 0}, 1}, {"LevelM40", {0.25, 0}, 1}, {"LevelM40", {0.25, 0.03}, 1}};
										};
										class VALM_1_40
										{
											type = "text";
											source = "static";
											text = -40;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM40", {-0.27, -0.012}, 1};
											right[] = {"LevelM40", {-0.21, -0.012}, 1};
											down[] = {"LevelM40", {-0.27, 0.038}, 1};
										};
										class LevelP40: Level0
										{
											type = "line";
											points[] = {{"LevelP40", {-0.25, -0.03}, 1}, {"LevelP40", {-0.25, 0}, 1}, {"LevelP40", {-0.08, 0}, 1}, {}, {"LevelP40", {0.08, 0}, 1}, {"LevelP40", {0.25, 0}, 1}, {"LevelP40", {0.25, -0.03}, 1}};
										};
										class VALP_1_40
										{
											type = "text";
											source = "static";
											text = "40";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP40", {-0.27, -0.037}, 1};
											right[] = {"LevelP40", {-0.21, -0.037}, 1};
											down[] = {"LevelP40", {-0.27, 0.013}, 1};
										};
										class LevelM45: Level0
										{
											type = "line";
											points[] = {{"LevelM45", {-0.25, 0.03}, 1}, {"LevelM45", {-0.25, 0}, 1}, {"LevelM45", {-0.08, 0}, 1}, {}, {"LevelM45", {0.08, 0}, 1}, {"LevelM45", {0.25, 0}, 1}, {"LevelM45", {0.25, 0.03}, 1}};
										};
										class VALM_1_45
										{
											type = "text";
											source = "static";
											text = -45;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM45", {-0.27, -0.012}, 1};
											right[] = {"LevelM45", {-0.21, -0.012}, 1};
											down[] = {"LevelM45", {-0.27, 0.038}, 1};
										};
										class LevelP45: Level0
										{
											type = "line";
											points[] = {{"LevelP45", {-0.25, -0.03}, 1}, {"LevelP45", {-0.25, 0}, 1}, {"LevelP45", {-0.08, 0}, 1}, {}, {"LevelP45", {0.08, 0}, 1}, {"LevelP45", {0.25, 0}, 1}, {"LevelP45", {0.25, -0.03}, 1}};
										};
										class VALP_1_45
										{
											type = "text";
											source = "static";
										    text = "45";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP45", {-0.27, -0.037}, 1};
											right[] = {"LevelP45", {-0.21, -0.037}, 1};
											down[] = {"LevelP45", {-0.27, 0.013}, 1};
										};
										class LevelM50: Level0
										{
											type = "line";
											points[] = {{"LevelM50", {-0.25, 0.03}, 1}, {"LevelM50", {-0.25, 0}, 1}, {"LevelM50", {-0.08, 0}, 1}, {}, {"LevelM50", {0.08, 0}, 1}, {"LevelM50", {0.25, 0}, 1}, {"LevelM50", {0.25, 0.03}, 1}};
										};
										class VALM_1_50
										{
											type = "text";
											source = "static";
											text = -50;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM50", {-0.27, -0.012}, 1};
											right[] = {"LevelM50", {-0.21, -0.012}, 1};
											down[] = {"LevelM50", {-0.27, 0.038}, 1};
										};
										class LevelP50: Level0
										{
											type = "line";
											points[] = {{"LevelP50", {-0.25, -0.03}, 1}, {"LevelP50", {-0.25, 0}, 1}, {"LevelP50", {-0.08, 0}, 1}, {}, {"LevelP50", {0.08, 0}, 1}, {"LevelP50", {0.25, 0}, 1}, {"LevelP50", {0.25, -0.03}, 1}};
										};
										class VALP_1_50
										{
											type = "text";
											source = "static";
											text = "50";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP50", {-0.27, -0.037}, 1};
											right[] = {"LevelP50", {-0.21, -0.037}, 1};
											down[] = {"LevelP50", {-0.27, 0.013}, 1};
										};
										class LevelM55: Level0
										{
											type = "line";
											points[] = {{"LevelM55", {-0.25, 0.03}, 1}, {"LevelM55", {-0.25, 0}, 1}, {"LevelM55", {-0.08, 0}, 1}, {}, {"LevelM55", {0.08, 0}, 1}, {"LevelM55", {0.25, 0}, 1}, {"LevelM55", {0.25, 0.03}, 1}};
										};
										class VALM_1_55
										{
											type = "text";
											source = "static";
											text = -55;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM55", {-0.27, -0.012}, 1};
											right[] = {"LevelM55", {-0.21, -0.012}, 1};
											down[] = {"LevelM55", {-0.27, 0.038}, 1};
										};
										class LevelP55: Level0
										{
											type = "line";
											points[] = {{"LevelP55", {-0.25, -0.03}, 1}, {"LevelP55", {-0.25, 0}, 1}, {"LevelP55", {-0.08, 0}, 1}, {}, {"LevelP55", {0.08, 0}, 1}, {"LevelP55", {0.25, 0}, 1}, {"LevelP55", {0.25, -0.03}, 1}};
										};
										class VALP_1_55
										{
											type = "text";
											source = "static";
											text = "55";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP55", {-0.27, -0.037}, 1};
											right[] = {"LevelP55", {-0.21, -0.037}, 1};
											down[] = {"LevelP55", {-0.27, 0.013}, 1};
										};
										class LevelM60: Level0
										{
											type = "line";
											points[] = {{"LevelM60", {-0.25, 0.03}, 1}, {"LevelM60", {-0.25, 0}, 1}, {"LevelM60", {-0.08, 0}, 1}, {}, {"LevelM60", {0.08, 0}, 1}, {"LevelM60", {0.25, 0}, 1}, {"LevelM60", {0.25, 0.03}, 1}};
										};
										class VALM_1_60
										{
											type = "text";
											source = "static";
											text = -60;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM60", {-0.27, -0.012}, 1};
											right[] = {"LevelM60", {-0.21, -0.012}, 1};
											down[] = {"LevelM60", {-0.27, 0.038}, 1};
										};
										class LevelP60: Level0
										{
											type = "line";
											points[] = {{"LevelP60", {-0.25, -0.03}, 1}, {"LevelP60", {-0.25, 0}, 1}, {"LevelP60", {-0.08, 0}, 1}, {}, {"LevelP60", {0.08, 0}, 1}, {"LevelP60", {0.25, 0}, 1}, {"LevelP60", {0.25, -0.03}, 1}};
										};
										class VALP_1_60
										{
											type = "text";
											source = "static";
											text = "60";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP60", {-0.27, -0.037}, 1};
											right[] = {"LevelP60", {-0.21, -0.037}, 1};
											down[] = {"LevelP60", {-0.27, 0.013}, 1};
										};
										class LevelM65: Level0
										{
											type = "line";
											points[] = {{"LevelM65", {-0.25, 0.03}, 1}, {"LevelM65", {-0.25, 0}, 1}, {"LevelM65", {-0.08, 0}, 1}, {}, {"LevelM65", {0.08, 0}, 1}, {"LevelM65", {0.25, 0}, 1}, {"LevelM65", {0.25, 0.03}, 1}};
										};
										class VALM_1_65
										{
											type = "text";
											source = "static";
											text = -65;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM65", {-0.27, -0.012}, 1};
											right[] = {"LevelM65", {-0.21, -0.012}, 1};
											down[] = {"LevelM65", {-0.27, 0.038}, 1};
										};
										class LevelP65: Level0
										{
											type = "line";
											points[] = {{"LevelP65", {-0.25, -0.03}, 1}, {"LevelP65", {-0.25, 0}, 1}, {"LevelP65", {-0.08, 0}, 1}, {}, {"LevelP65", {0.08, 0}, 1}, {"LevelP65", {0.25, 0}, 1}, {"LevelP65", {0.25, -0.03}, 1}};
										};
										class VALP_1_65
										{
											type = "text";
											source = "static";
											text = "65";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP65", {-0.27, -0.037}, 1};
											right[] = {"LevelP65", {-0.21, -0.037}, 1};
											down[] = {"LevelP65", {-0.27, 0.013}, 1};
										};
										class LevelM70: Level0
										{
											type = "line";
											points[] = {{"LevelM70", {-0.25, 0.03}, 1}, {"LevelM70", {-0.25, 0}, 1}, {"LevelM70", {-0.08, 0}, 1}, {}, {"LevelM70", {0.08, 0}, 1}, {"LevelM70", {0.25, 0}, 1}, {"LevelM70", {0.25, 0.03}, 1}};
										};
										class VALM_1_70
										{
											type = "text";
											source = "static";
											text = -70;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM70", {-0.27, -0.012}, 1};
											right[] = {"LevelM70", {-0.21, -0.012}, 1};
											down[] = {"LevelM70", {-0.27, 0.038}, 1};
										};
										class LevelP70: Level0
										{
											type = "line";
											points[] = {{"LevelP70", {-0.25, -0.03}, 1}, {"LevelP70", {-0.25, 0}, 1}, {"LevelP70", {-0.08, 0}, 1}, {}, {"LevelP70", {0.08, 0}, 1}, {"LevelP70", {0.25, 0}, 1}, {"LevelP70", {0.25, -0.03}, 1}};
										};
										class VALP_1_70
										{
											type = "text";
											source = "static";
											text = "70";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP70", {-0.27, -0.037}, 1};
											right[] = {"LevelP70", {-0.21, -0.037}, 1};
											down[] = {"LevelP70", {-0.27, 0.013}, 1};
										};
										class LevelM75: Level0
										{
											type = "line";
											points[] = {{"LevelM75", {-0.25, 0.03}, 1}, {"LevelM75", {-0.25, 0}, 1}, {"LevelM75", {-0.08, 0}, 1}, {}, {"LevelM75", {0.08, 0}, 1}, {"LevelM75", {0.25, 0}, 1}, {"LevelM75", {0.25, 0.03}, 1}};
										};
										class VALM_1_75
										{
											type = "text";
											source = "static";
											text = -75;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM75", {-0.27, -0.012}, 1};
											right[] = {"LevelM75", {-0.21, -0.012}, 1};
											down[] = {"LevelM75", {-0.27, 0.038}, 1};
										};
										class LevelP75: Level0
										{
											type = "line";
											points[] = {{"LevelP75", {-0.25, -0.03}, 1}, {"LevelP75", {-0.25, 0}, 1}, {"LevelP75", {-0.08, 0}, 1}, {}, {"LevelP75", {0.08, 0}, 1}, {"LevelP75", {0.25, 0}, 1}, {"LevelP75", {0.25, -0.03}, 1}};
										};
										class VALP_1_75
										{
											type = "text";
											source = "static";
											text = "75";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP75", {-0.27, -0.037}, 1};
											right[] = {"LevelP75", {-0.21, -0.037}, 1};
											down[] = {"LevelP75", {-0.27, 0.013}, 1};
										};
										class LevelM80: Level0
										{
											type = "line";
											points[] = {{"LevelM80", {-0.25, 0.03}, 1}, {"LevelM80", {-0.25, 0}, 1}, {"LevelM80", {-0.08, 0}, 1}, {}, {"LevelM80", {0.08, 0}, 1}, {"LevelM80", {0.25, 0}, 1}, {"LevelM80", {0.25, 0.03}, 1}};
										};
										class VALM_1_80
										{
											type = "text";
											source = "static";
											text = -80;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM80", {-0.27, -0.012}, 1};
											right[] = {"LevelM80", {-0.21, -0.012}, 1};
											down[] = {"LevelM80", {-0.27, 0.038}, 1};
										};
										class LevelP80: Level0
										{
											type = "line";
											points[] = {{"LevelP80", {-0.25, -0.03}, 1}, {"LevelP80", {-0.25, 0}, 1}, {"LevelP80", {-0.08, 0}, 1}, {}, {"LevelP80", {0.08, 0}, 1}, {"LevelP80", {0.25, 0}, 1}, {"LevelP80", {0.25, -0.03}, 1}};
										};
										class VALP_1_80
										{
											type = "text";
											source = "static";
											text = "80";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP80", {-0.27, -0.037}, 1};
											right[] = {"LevelP80", {-0.21, -0.037}, 1};
											down[] = {"LevelP80", {-0.27, 0.013}, 1};
										};
										class LevelM85: Level0
										{
											type = "line";
											points[] = {{"LevelM85", {-0.25, 0.03}, 1}, {"LevelM85", {-0.25, 0}, 1}, {"LevelM85", {-0.08, 0}, 1}, {}, {"LevelM85", {0.08, 0}, 1}, {"LevelM85", {0.25, 0}, 1}, {"LevelM85", {0.25, 0.03}, 1}};
										};
										class VALM_1_85
										{
											type = "text";
											source = "static";
											text = -85;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM85", {-0.27, -0.012}, 1};
											right[] = {"LevelM85", {-0.21, -0.012}, 1};
											down[] = {"LevelM85", {-0.27, 0.038}, 1};
										};
										class LevelP85: Level0
										{
											type = "line";
											points[] = {{"LevelP85", {-0.25, -0.03}, 1}, {"LevelP85", {-0.25, 0}, 1}, {"LevelP85", {-0.08, 0}, 1}, {}, {"LevelP85", {0.08, 0}, 1}, {"LevelP85", {0.25, 0}, 1}, {"LevelP85", {0.25, -0.03}, 1}};
										};
										class VALP_1_85
										{
											type = "text";
											source = "static";
											text = "85";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP85", {-0.27, -0.037}, 1};
											right[] = {"LevelP85", {-0.21, -0.037}, 1};
											down[] = {"LevelP85", {-0.27, 0.013}, 1};
										};
										class LevelM90: Level0
										{
											type = "line";
											points[] = {{"LevelM90", {-0.25, 0.03}, 1}, {"LevelM90", {-0.25, 0}, 1}, {"LevelM90", {-0.08, 0}, 1}, {}, {"LevelM90", {0.08, 0}, 1}, {"LevelM90", {0.25, 0}, 1}, {"LevelM90", {0.25, 0.03}, 1}};
										};
									    class VALM_1_90
										{
											type = "text";
											source = "static";
											text = -90;
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelM90", {-0.27, -0.012}, 1};
											right[] = {"LevelM90", {-0.21, -0.012}, 1};
											down[] = {"LevelM90", {-0.27, 0.038}, 1};
										};
										class LevelP90: Level0
										{
											type = "line";
											points[] = {{"LevelP90", {-0.25, -0.03}, 1}, {"LevelP90", {-0.25, 0}, 1}, {"LevelP90", {-0.08, 0}, 1}, {}, {"LevelP90", {0.08, 0}, 1}, {"LevelP90", {0.25, 0}, 1}, {"LevelP90", {0.25, -0.03}, 1}};
										};
										class VALP_1_90
										{
											type = "text";
											source = "static";
											text = "90";
											align = "left";
											scale = 1;
											sourceScale = 1;
											pos[] = {"LevelP90", {-0.27, -0.037}, 1};
											right[] = {"LevelP90", {-0.21, -0.037}, 1};
											down[] = {"LevelP90", {-0.27, 0.013}, 1};
										};
									};
								};
							};
							class SpeedNumber
							{
								type = "text";
								source = "speed";
								sourceScale = 3.6;
								align = "center";
								scale = 1;
								pos[] = {{0.1, 0.280128}, 1};
								right[] = {{0.14, 0.280128}, 1};
								down[] = {{0.1, 0.309615}, 1};
							};
							class AltNumber: SpeedNumber
							{
								source = "altitudeASL";
								sourceScale = 1;
								pos[] = {{0.9, 0.280128}, 1};
								right[] = {{0.94, 0.280128}, 1};
								down[] = {{0.9, 0.309615}, 1};
							};
							class AltNumberAGLStatic
							{
								type = "text";
								source = "static";
								text = "H";
								align = "left";
								scale = 1;
								pos[] = {{0.87, 0.496368}, 1};
								right[] = {{0.91, 0.496368}, 1};
								down[] = {{0.87, 0.525855}, 1};
							};
							class AltNumberAGL
							{
								type = "text";
								source = "altitudeAGL";
								sourceScale = 1;
								align = "left";
								scale = 1;
								pos[] = {{0.94, 0.496368}, 1};
								right[] = {{0.98, 0.496368}, 1};
								down[] = {{0.94, 0.525855}, 1};
							};
							class CollectiveNumber
							{
								type = "text";
								source = "throttle";
								sourceScale = 100;
								align = "left";
								scale = 1;
								pos[] = {{0.091, 0.7}, 1};
								right[] = {{0.141, 0.7}, 1};
								down[] = {{0.091, 0.735}, 1};
							};
							class CollectiveText
							{
								type = "text";
								source = "static";
								text = "%";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{"0.11-0.009", 0.7}, 1};
								right[] = {{0.146, 0.7}, 1};
								down[] = {{"0.11-0.009", 0.735}, 1};
							};
							class ThrustVectoring
							{
								condition = "1+vtolvectoring";
								class VectorigNumber
								{
									type = "text";
									source = "vtolvectoring";
									sourceScale = 90;
									align = "left";
									scale = 1;
									pos[] = {{0.116, 0.744}, 1};
									right[] = {{0.151, 0.744}, 1};
									down[] = {{0.116, 0.769}, 1};
								};
								class ThrustVectoringText
								{
									type = "text";
									source = "static";
									text = "°";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.132, 0.745}, 1};
									right[] = {{0.167, 0.745}, 1};
									down[] = {{0.132, 0.77}, 1};
								};
								class VectoringArrow
								{
									type = "line";
									width = 3;
									points[] = {{"ThrustVectoringRotation", {0.01, 0}, 1}, {"ThrustVectoringRotation", {0.04, 0}, 1}, {}, {"ThrustVectoringRotation", {0.04, 0.02}, 1}, {"ThrustVectoringRotation", {0.04, -0.02}, 1}, {}};
								};
							};
							class ActiveSensorsOn
							{
								condition = "activeSensorsOn";
								class ThrustVectoringText
								{
									type = "text";
									source = "static";
									text = "RDR ON";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{0.972, 0.745}, 1};
									right[] = {{1.017, 0.745}, 1};
									down[] = {{0.972, 0.78}, 1};
								};
							};
							class ThrustVectoringAuto
							{
								condition = "-vtolvectoring";
								class VectorigNumber
								{
									type = "text";
									source = "static";
									sourceScale = 1;
									text = "AUTO";
									align = "left";
									scale = 1;
									pos[] = {{0.132, 0.74}, 1};
									right[] = {{0.167, 0.74}, 1};
									down[] = {{0.132, 0.765}, 1};
								};
							};
							class HeadingNumber
							{
								type = "text";
								source = "heading";
								sourceScale = 1;
								align = "center";
								scale = 1;
								pos[] = {{"0.80-0.302", "0.082-0.043"}, 1};
								right[] = {{"0.84-0.302", "0.082-0.043"}, 1};
								down[] = {{"0.80-0.302", "0.117-0.043"}, 1};
							};
							class HeadingRotationArrow
							{
								condition = "5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
								class HeadingArrow
								{
									type = "line";
									width = 3;
									points[] = {{{0.52, 0.08}, 1}, {{0.5, 0.11}, 1}, {{0.48, 0.08}, 1}, {{0.52, 0.08}, 1}, {}};
								};
							};
							class HeadingRotation
							{
								condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
								class HeadingHeadNumber
								{
									type = "text";
									source = "cameraDir";
									sourceScale = 1;
									align = "center";
									scale = 1;
									pos[] = {{"0.80-0.302", "0.082-0.002"}, 1};
									right[] = {{"0.83-0.302", "0.082-0.002"}, 1};
									down[] = {{"0.80-0.302", "0.113-0.002"}, 1};
								};
								class HeadingArrow
								{
									type = "line";
									width = 3;
									points[] = {{{0.478, 0.075}, 1}, {{0.522, 0.075}, 1}, {{0.537, 0.095}, 1}, {{0.522, 0.115}, 1}, {{0.478, 0.115}, 1}, {{0.463, 0.095}, 1}, {{0.478, 0.075}, 1}, {}, {{0.52, 0.175}, 1}, {{0.5, 0.145}, 1}, {{0.48, 0.175}, 1}, {{0.52, 0.175}, 1}, {}};
								};
							};
							class HeadingLeft
							{
								clipTL[] = {0, 0};
								clipBR[] = {0.47, 1};
								class HeadingScale
								{
									type = "scale";
									horizontal = 1;
									source = "heading";
									sourceScale = 0.1;
									sourceoffset = 0;
									width = 3;
									NeverEatSeaWeed = 1;
									top = 0.15;
									center = 0.5;
									bottom = 0.85;
									lineXleft = 0.139145;
									lineYright = 0.129145;
									lineXleftMajor = 0.139145;
									lineYrightMajor = 0.119145;
									majorLineEach = 2;
									numberEach = 6;
									step = 0.5;
									stepSize = 0.0344828;
									align = "center";
									scale = 1;
									pos[] = {0.2, 0.0663462};
									right[] = {0.26, 0.0663462};
									down[] = {0.2, 0.115491};
								};
							};
							class HeadingCentral: HeadingLeft
							{
								clipTL[] = {0.47, 0};
								clipBR[] = {0.53, 1};
								class HeadingScale: HeadingScale
								{
									NeverEatSeaWeed = 0;
									numberEach = 0;
								};
							};
							class HeadingRight: HeadingLeft
							{
								clipTL[] = {0.53, 0};
								clipBR[] = {1, 1};
								class HeadingScale: HeadingScale
								{
								};
							};
							class HorizonBanking
							{
								type = "line";
								width = 3;
								clipTL[] = {0, 0.1};
								clipBR[] = {1, 0.9};
								points[] = {{"HorizonBankRot", {0, 0.31453}, 1}, {"HorizonBankRot", {0.01, 0.294872}, 1}, {"HorizonBankRot", {-0.01, 0.294872}, 1}, {"HorizonBankRot", {0, 0.31453}, 1}};
							};
							class CoordXNumber
							{
								type = "text";
								source = "coordinateX";
								sourceScale = 0.01;
								sourceLength = 3;
								sourceOffset = -0.5;
								align = "right";
								scale = 1;
								pos[] = {{0.871, 0.876}, 1};
								right[] = {{0.921, 0.876}, 1};
								down[] = {{0.871, 0.911}, 1};
							};
							class CoordYNumber: CoordXNumber
							{
								source = "coordinateY";
								pos[] = {{0.929, 0.876}, 1};
								right[] = {{0.979, 0.876}, 1};
								down[] = {{0.929, 0.911}, 1};
							};
							class Time: CoordXNumber
							{
								source = "time";
								text = "%X";
								align = "left";
								pos[] = {{0.97, 0.849}, 1};
								right[] = {{1.02, 0.849}, 1};
								down[] = {{0.97, 0.884}, 1};
							};
							class LightsGroup
							{
								condition = "lights";
								class LightsText
								{
									type = "text";
									source = "static";
									text = "LIGHT";
									align = "left";
									scale = 1;
									pos[] = {{0.149, 0.961}, 1};
									right[] = {{0.199, 0.961}, 1};
									down[] = {{0.149, 0.996}, 1};
								};
							};
							class CollisionLights
							{
								condition = "collisionlights";
								class CollisionLightsText
								{
									type = "text";
									source = "static";
									text = "COLL";
									align = "left";
									scale = 1;
									pos[] = {{0.309, 0.961}, 1};
									right[] = {{0.359, 0.961}, 1};
									down[] = {{0.309, 0.996}, 1};
								};
							};
							class IncomingMissile
							{
								condition = "incomingmissile";
								blinkingPattern[] = {0.3, 0.3};
								blinkingStartsOn = 1;
								class Text
								{
									type = "text";
									source = "static";
									text = "!INCOMING MISSILE!";
									align = "center";
									scale = 1;
									pos[] = {{0.475, 0.157265}, 1};
									right[] = {{0.535, 0.157265}, 1};
									down[] = {{0.475, 0.20641}, 1};
								};
							};
							class GearGroup
							{
								type = "group";
								condition = "ils";
								class GearText
								{
									type = "text";
									source = "static";
									text = "GEAR";
									align = "center";
									scale = 1;
									pos[] = {{0.5, 0.894444}, 1};
									right[] = {{0.54, 0.894444}, 1};
									down[] = {{0.5, 0.923932}, 1};
								};
							};
							class StallGroup
							{
								type = "group";
								condition = "stall";
								color[] = {1, 0, 0};
								blinkingPattern[] = {0.2, 0.2};
								blinkingStartsOn = 1;
								class StallText
								{
									type = "text";
									source = "static";
									text = "STALL";
									align = "center";
									scale = 1;
									pos[] = {{0.5, 0.25}, 1};
									right[] = {{0.54, 0.25}, 1};
									down[] = {{0.5, 0.29}, 1};
					            };
				            };
				            class ILS
				            {
					            condition = "ils";
					            class Glideslope
					            {
					            	clipTL[] = {0, 0};
						            clipBR[] = {1, 1};
						            class ILS
						            {
							            type = "line";
							            points[] = {{"ILS_W", {-0.24, 0}, 1}, {"ILS_W", {0.24, 0}, 1}, {}, {"ILS_W", {-0.24, -0.0235897}, 1}, {"ILS_W", {-0.24, 0.0235897}, 1}, {}, {"ILS_W", {-0.12, -0.0176923}, 1}, {"ILS_W", {-0.12, 0.0176923}, 1}, {}, {"ILS_W", {0, -0.0235897}, 1}, {"ILS_W", {0, 0.0235897}, 1}, {}, {"ILS_W", {0.12, -0.0176923}, 1}, {"ILS_W", {0.12, 0.0176923}, 1}, {}, {"ILS_W", {0.24, -0.0235897}, 1}, {"ILS_W", {0.24, 0.0235897}, 1}, {}, {"ILS_H", {0, -0.235897}, 1}, {"ILS_H", {0, 0.235897}, 1}, {}, {"ILS_H", {-0.024, -0.235897}, 1}, {"ILS_H", {0.024, -0.235897}, 1}, {}, {"ILS_H", {-0.018, -0.117949}, 1}, {"ILS_H", {0.018, -0.117949}, 1}, {}, {"ILS_H", {-0.024, 0}, 1}, {"ILS_H", {0.024, 0}, 1}, {}, {"ILS_H", {-0.018, 0.117949}, 1}, {"ILS_H", {0.018, 0.117949}, 1}, {}, {"ILS_H", {-0.024, 0.235897}, 1}, {"ILS_H", {0.024, 0.235897}, 1}};
						            };
						            class airport
						            {
						            	type = "line";
						            	points[] = {{"airport1", 1}, {"airport2", 1}, {"airport4", 1}, {"airport3", 1}, {"airport1", 1}};
						            };
					            };
				            };
				            class WP
				            {
				            	condition = "wpvalid";
				            	class WPdist
			            		{
			            			type = "text";
					            	source = "wpdist";
					            	sourceScale = 0.001;
					            	sourcePrecision = 1;
					            	align = "left";
					            	scale = 1;
					            	pos[] = {{0.935, 0.810897}, 1};
					            	right[] = {{0.995, 0.810897}, 1};
					            	down[] = {{0.935, 0.860043}, 1};
					            };
					            class WPstatic
					            {
					            	type = "text";
					            	source = "static";
					            	text = ">";
					            	align = "center";
					            	scale = 2;
					            	pos[] = {{0.95, 0.810897}, 1};
					            	right[] = {{0.97, 0.810897}, 1};
					            	down[] = {{0.95, 0.860043}, 1};
					            };
					            class WPIndex
					            {
					            	type = "text";
					            	source = "wpIndex";
					            	sourceScale = 1;
					            	align = "right";
					            	scale = 1;
					            	pos[] = {{0.96, 0.810897}, 1};
					            	right[] = {{1.02, 0.810897}, 1};
					            	down[] = {{0.96, 0.860043}, 1};
					            };
					            class WP
					            {
						            width = 1;
						            type = "line";
						            points[] = {{"wppoint", 1, {"HorizonBankRotFull", 0.015, -0.035}, 1}, {"wppoint", 1, {"HorizonBankRotFull", 0, 0}, 1}, {"wppoint", 1, {"HorizonBankRotFull", -0.015, -0.035}, 1}};
					            };
				            };
				            class cmWeapons
				            {
					            type = "text";
					            source = "cmweapon";
					            sourceScale = 1;
				            	align = "right";
				            	scale = 0.5;
				            	pos[] = {{0.02, 0.87}, 1};
				            	right[] = {{0.06, 0.87}, 1};
				            	down[] = {{0.02, 0.91}, 1};
					        };
					        class cmAmmo
					        {
					        	type = "text";
					        	source = "cmammo";
					        	sourceScale = 1;
					        	align = "right";
					        	scale = 0.5;
					        	pos[] = {{0.02, 0.83}, 1};
					        	right[] = {{0.06, 0.83}, 1};
					        	down[] = {{0.02, 0.87}, 1};
					        };
					        class RadarBoxes
					        {
					        	type = "radartoview";
					        	pos0[] = {0.5, 0.5};
					        	pos10[] = {0.734, 0.73};
					        	width = 2;
					        	points[] = {{{-0.002, -0.00196581}, 1}, {{0.002, -0.00196581}, 1}, {{0.002, 0.00196581}, 1}, {{-0.002, 0.00196581}, 1}, {{-0.002, -0.00196581}, 1}};
					        };
					        class TargetDiamond
					        {
						        class shape
						        {
							        type = "line";
							        width = 4;
							        points[] = {{"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, 0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, -0.0196581}, 1}, {"Target", 1, "Limit0109", 1, {0.02, 0.0196581}, 1}};
						        };
					        };
					        class TargetLocked
					        {
						        condition = "missilelocked";
						        class shape
						        {
							        type = "line";
						        	width = 4;
						        	points[] = {{"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, 0.0294872}, 1}, {"Target", 1, "Limit0109", 1, {-0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, -0.0294872}, 1}};
						        };
					        };
				        };
			        };
		        };		
			};
		};
		#include "\dega_vehicles_v22\config_mfd.hpp"
		#include "\dega_vehicles_v22\config_sound.hpp"
	};
	class DEGA_MV22_IDWS_NATO: DEGA_V22_Base
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		forceInGarage=0;
		side = 1;
		faction = "BLU_F";
		displayName = "MV-22 Osprey (Armed)";
        editorPreview = "\dega_vehicles_v22\data\ui\DEGA_MV22_Infantry_USMC.jpg";			
        class AnimationSources : AnimationSources {};
		class turrets : turrets
		{	
		    class CopilotTurret: CopilotTurret {};
			class MainTurret: NewTurret
			{
				animationSourceBody = "ObsTurret1";
				animationSourceGun = "ObsGun1";
				body = "ObsTurret1";
				castGunnerShadow = 1;
				gunnerName = "Gunner";
				animationSourceElevation = ""; //Hatch_move_source
				primaryGunner = 1;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
				discreteDistanceInitIndex = 5;
				stabilizedInAxes = 3;
				proxyIndex = 2;				
				commanding = -1;
				proxyType = "CPGunner";
				gun = "ObsGun1";
				gunBeg = "machinegun_end";
				gunEnd = "machinegun_beg";
				gunnerCompartments = "Compartment1";
				gunnerAction = "passenger_apc_generic03";
				gunnerInAction = "passenger_apc_generic03";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				turretInfoType = "RscOptics_VTOL_01_gunner";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerForceOptics = 0;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";				
				isCopilot = 0;
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gun_begin1";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				LODTurnedIn = 1200;
				LODOpticsIn = -1;
				LODTurnedOut = 1200;	
				LODOpticsOut = -1;
                startEngine = 0;				
				minElev = -50;
				maxElev = 30;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				missileBeg = "";
				missileEnd = "";
				particlesDir = "machinegun_eject_dir";
				particlesPos = "machinegun_eject_pos";
				selectionFireAnim = "zasleh";
				magazines[] = {"5000Rnd_65x39_Belt_Tracer_Red","5000Rnd_65x39_Belt_Tracer_Red","5000Rnd_65x39_Belt_Tracer_Red","Laserbatteries"};
				weapons[] = {"DEGA_LMG_Minigun_V22","Laserdesignator_mounted"};
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				showAllTargets = 4;
				usePiP = 1;
				showHMD = 0;
				class OpticsIn
				{
					class Wide
					{
						directionStabilized = 1;
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "(25 / 120)";
						minFov = "(25 / 120)";
						maxFov = "(25 / 120)";
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunship_wide_F.p3d";
						opticsDisplayName = "WFOV";
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
					};
					class Medium: Wide
					{
						initFov = "(10.5 / 120)";
						minFov = "(10.5 / 120)";
						maxFov = "(10.5 / 120)";
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunship_medium_F.p3d";
						opticsDisplayName = "MFOV";
					};
					class Narrow: Wide
					{
						initFov = "(2.5 / 120)";
						minFov = "(2.5 / 120)";
						maxFov = "(2.5 / 120)";
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunship_narrow_F.p3d";
						opticsDisplayName = "NFOV";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = -30;
						minAngleX = -40;
						maxAngleX = 40;
						initAngleY = 90;
						minAngleY = -10;
						maxAngleY = 180;
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						visionMode[] = {"Normal", "NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000, 2000, 16000, 8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000, 2000, 16000, 8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};					
            };
        };			
	};
	class DEGA_MV22_Vehicle_NATO: DEGA_V22_Base
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		forceInGarage=0;
		side = 1;
		faction = "BLU_F";
		displayName = "MV-22 Osprey (Vehicle Transport)";
		transportSoldier = 0;
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_MV22_Infantry_USMC.jpg";	
		class VehicleTransport
        {
        	class Carrier
        	{
        		cargoBayDimensions[]		= {"VTV_limit_1", "VTV_limit_2"};	// Memory points in model defining cargo space
        		disableHeightLimit			= 0;								// If set to 1 disable height limit of transported vehicles
	        	maxLoadMass					= 200000;							// Maximum cargo weight (in Kg) which the vehicle can transport
	        	cargoAlignment[]			= {"center", "front"};				// Array of 2 elements defining alignment of vehicles in cargo space. Possible values are left, right, center, front, back. Order is important.
            	cargoSpacing[]				= {0, 0.15, 0};						// Offset from X,Y,Z axes (in metres)
	        	exits[]						= {"VTV_exit_1"};		// Memory points in model defining loading ramps, could have multiple
        		unloadingInterval			= 2;								// Time between unloading vehicles (in seconds)
	        	loadingDistance				= 10;								// Maximal distance for loading in exit point (in meters).
	        	loadingAngle				= 60;								// Maximal sector where cargo vehicle must be to for loading (in degrees).
	        	parachuteClassDefault       = B_Parachute_02_F;					// Type of parachute used when dropped in air. Can be overridden by parachuteClass in Cargo.
	        	parachuteHeightLimitDefault = 50;								// Minimal height above terrain when parachute is used. Can be overriden by parachuteHeightLimit in Cargo.
        	};
        };		
		class turrets : turrets
		{
			class CopilotTurret: CopilotTurret {};
		};
        class AnimationSources : AnimationSources
		{			
            class Hatch_move_source
			{
			    forceAnimatePhase = 1;
				forceAnimate[] = 
				{
				    "Hatch_move_right", 1,
				    "Hatch_move_left", 1,
                    "Hatch_move_top", 1				
				};					
				source = "user";
				animPeriod = 1; 
				initPhase = 1; 
				sound = "PlasticDoorsSound"; 
				//displayName = "Hell Hole"; 
				author = "Deltagamer";
				//onPhaseChanged = "if ((_this select 1) == 0) then { (_this select 0) elevatePeriscope [[0], 0, 0.1]; } else { (_this select 0) elevatePeriscope [[0], 1, 0.1]; };";
			};			
			class seats_hide_source : seats_hide_source {initPhase=1;};
            class idws1_hide_source {}; 			
            class idws2_hide_source : idws1_hide_source {}; 			
            class idws3_hide_source : idws2_hide_source {}; 
            class idws4_hide_source : idws3_hide_source {}; 			
			class idws_hide_source
			{
				source="user"; 
			    forceAnimatePhase = 1;
				forceAnimate[] = 
				{
				    "idws_hide_source", 1,
				    "idws1_hide_source", 1,
				    "idws2_hide_source", 1,
                    "idws3_hide_source", 1,
                    "idws4_hide_source", 1					
				};					
				animPeriod=0; 
				initPhase=1; 
				//displayName = "Hide Turret (Locks Gunner)"; 
				author = "Deltagamer"; 
                //onPhaseChanged = "if ((_this select 1) == 0) then { (_this select 0) lockTurret [[0],false]; } else { (_this select 0) lockTurret [[0],true]; };";
			};			
        };
	};	
	class DEGA_MV22_Infantry_NATO: DEGA_V22_Base
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		forceInGarage=0;
		side = 1;
		faction = "BLU_F";
		displayName = "MV-22 Osprey (Infantry Transport)";
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_MV22_Infantry_USMC.jpg";	
		class turrets : turrets
		{
			class CopilotTurret: CopilotTurret {};
		};
        class AnimationSources : AnimationSources
		{					
            class idws1_hide_source {initPhase=1; }; 			
            class idws2_hide_source : idws1_hide_source {initPhase=1; }; 			
            class idws3_hide_source : idws2_hide_source {initPhase=1; }; 
            class idws4_hide_source : idws3_hide_source {initPhase=1; }; 			
			class idws_hide_source
			{
				source="user"; 
			    forceAnimatePhase = 1;
				forceAnimate[] = 
				{
				    "idws_hide_source", 1,
				    "idws1_hide_source", 1,
				    "idws2_hide_source", 1,
                    "idws3_hide_source", 1,
                    "idws4_hide_source", 1					
				};					
				animPeriod=0; 
				initPhase=1; 
				//displayName = "Hide Turret (Locks Gunner)"; 
				author = "Deltagamer"; 
                //onPhaseChanged = "if ((_this select 1) == 0) then { (_this select 0) lockTurret [[0],false]; } else { (_this select 0) lockTurret [[0],true]; };";
			};			
        };
	};
	class DEGA_V22_IDWS_O_NATO : DEGA_MV22_IDWS_NATO 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		forceInGarage= 1;
		side = 1;
		faction = "BLU_T_F";
		crew = "B_Helipilot_F";
		displayName = "V-22 Osprey (Armed)";
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_V22_Infantry_O_NATO.jpg";	
        hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\textures\v22x_01_olive_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_olive_co.paa"};			
	};
    class DEGA_V22_Vehicle_O_NATO : DEGA_MV22_Vehicle_NATO 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		forceInGarage= 1;
		side = 1;
		faction = "BLU_T_F";
		crew = "B_Helipilot_F";
		displayName = "V-22 Osprey (Vehicle Transport)";
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_V22_Infantry_O_NATO.jpg";	
        hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\textures\v22x_01_olive_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_olive_co.paa"};			
	};
    class DEGA_V22_Infantry_O_NATO : DEGA_MV22_Infantry_NATO 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		forceInGarage= 1;
		side = 1;
		faction = "BLU_T_F";
		crew = "B_Helipilot_F";
		displayName = "V-22 Osprey (Infantry Transport)";
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_V22_Infantry_O_NATO.jpg";	
        hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\textures\v22x_01_olive_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_olive_co.paa"};				
	};	
	class DEGA_V22_IDWS_B_NATO : DEGA_MV22_IDWS_NATO 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 0;
		forceInGarage= 0;
		side = 1;
		faction = "BLU_F";
		crew = "B_Helipilot_F";
		displayName = "V-22 Osprey (Armed)";
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_V22_Infantry_B_NATO.jpg";	
        hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\textures\v22x_01_blue_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_blue_co.paa"};			
	};
    class DEGA_V22_Vehicle_B_NATO : DEGA_MV22_Vehicle_NATO 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 0;
		forceInGarage=0;
		side = 1;
		faction = "BLU_F";
		crew = "B_Helipilot_F";
		displayName = "V-22 Osprey (Vehicle Transport)";
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_V22_Infantry_B_NATO.jpg";	
        hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\textures\v22x_01_blue_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_blue_co.paa"};		
	};
    class DEGA_V22_Infantry_B_NATO : DEGA_MV22_Infantry_NATO 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 0;
		forceInGarage=0;
		side = 1;
		faction = "BLU_F";
		crew = "B_Helipilot_F";
		displayName = "V-22 Osprey (Infantry Transport)";
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_V22_Infantry_B_NATO.jpg";	
        hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\textures\v22x_01_blue_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_blue_co.paa"};				
	};		
	class DEGA_V22_IDWS_O_AAF : DEGA_MV22_IDWS_NATO 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 0;
		forceInGarage=0;
		side = 2;
		faction = "IND_F";
		crew = "I_helipilot_F";
		displayName = "V-22 Osprey (Armed)";
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_CV22_Infantry_O_AAF.jpg";	
        hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\textures\v22x_01_aafo_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_aafo_co.paa"};			
	};
    class DEGA_V22_Vehicle_O_AAF : DEGA_MV22_Vehicle_NATO 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 0;
		forceInGarage=0;
		side = 2;
		faction = "IND_F";
		crew = "I_helipilot_F";
		displayName = "V-22 Osprey (Vehicle Transport)";
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_CV22_Infantry_O_AAF.jpg";	
        hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\textures\v22x_01_aafo_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_aafo_co.paa"};			
	};
    class DEGA_V22_Infantry_O_AAF : DEGA_MV22_Infantry_NATO 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 0;
		forceInGarage=0;
		side = 2;
		faction = "IND_F";
		crew = "I_helipilot_F";
		displayName = "V-22 Osprey (Infantry Transport)";	
		editorPreview = "\dega_vehicles_v22\data\ui\DEGA_CV22_Infantry_O_AAF.jpg";	
        hiddenSelectionsTextures[] = {"\dega_vehicles_v22\data\textures\v22x_01_aafo_co.paa", "\dega_vehicles_v22\data\textures\v22x_02_aafo_co.paa"};			
	};	
};
class CfgWeapons
{
	class LMG_Minigun_Transport;
    class DEGA_LMG_Minigun_V22: LMG_Minigun_Transport
	{
		displayName = "Gatling 7.62 mm";
		modes[] = {"HighROF", "LowROF", "close", "short", "medium", "far"};	
        magazines[] = {"5000Rnd_65x39_Belt_Tracer_Red"};
        ballisticsComputer = "2 + 16";		
		class LowROF: Mode_FullAuto
		{
			displayName = "M134 Minigun 7.62 mm";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst", 3.98107, 1, 1300, {2, 36879}};
				soundBegin[] = {"begin1", 1};
			};
			soundContinuous = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			reloadTime = 0.0333333;
			dispersion = 0.0092;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
			multiplier = 1;
		};
		class HighROF: LowROF
		{
			displayName = "M134 Minigun 7.62 mm";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst", 2.51189, 1, 1500, {2, 36879}};
				soundBegin[] = {"begin1", 1};
			};
			showToPlayer = 1;
			multiplier = 3;
		};
		class close: HighROF
		{
			soundBurst = 0;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 42;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 36;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.75;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 30;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.65;
			midRange = 1000;
			midRangeProbab = 0.3;
			maxRange = 1500;
			maxRangeProbab = 0.05;
		};
		weight = 40;	
	};
};
class CfgMagazines 
{
	class 2000Rnd_65x39_Belt_Tracer_Red;
	class 5000Rnd_65x39_Belt_Tracer_Red: 2000Rnd_65x39_Belt_Tracer_Red
	{
		author = "Deltagamer";
		count = 5000;
		displayName = "6.5 mm 5000Rnd LMG Tracer (Red) Belt";
	};
};
class CfgFunctions
{
	class DEGAV22
	{
		tag = "DEGAV22";
		class functions
		{
			class V22_Fold
			{
				file = "\dega_vehicles_v22\scripts\v22_fold.sqf";
				description = "V-22 rotors fold script";
			};
		};
	};
};

