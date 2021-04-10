			attenuationEffectType = "PlaneAttenuation";
			soundDammage[] = {"", 0.562341, 1};
			soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.316228, 1};
			soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1", 0.316228, 1};
			soundGearUp[] = {"A3\Sounds_F_EPC\CAS_02\gear_up", 0.794328, 1, 150};
			soundGearDown[] = {"A3\Sounds_F_EPC\CAS_02\gear_down", 0.794328, 1, 150};
			soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up", 0.630957, 1, 100};
			soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down", 0.630957, 1, 100};
			soundEngineOnInt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_int_start", 1, 1};
			soundEngineOnExt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_ext_start", 1, 1, 600};
			soundEngineOffInt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_int_stop", 1, 1};
			soundEngineOffExt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_ext_stop", 1, 1, 600};
			buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 3.16228, 1, 900};
			buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 3.16228, 1, 900};
			buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 3.16228, 1, 900};
			buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 3.16228, 1, 900};
			soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
			WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 3.16228, 1, 900};
			WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2", 3.16228, 1, 900};
			WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6", 3.16228, 1, 900};
			WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8", 3.16228, 1, 900};
			soundWoodCrash[] = {"woodCrash0", 0.25, "woodCrash1", 0.25, "woodCrash2", 0.25, "woodCrash3", 0.25};
			armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_ext_1", 3.16228, 1, 900};
			armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_ext_2", 3.16228, 1, 900};
			armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_ext_3", 3.16228, 1, 900};
			soundArmorCrash[] = {"ArmorCrash0", 0.33, "ArmorCrash1", 0.33, "ArmorCrash2", 0.34};
			Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 3.16228, 1, 900};
			Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 3.16228, 1, 900};
			Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 3.16228, 1, 900};
			Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 3.16228, 1, 900};
			soundCrashes[] = {"Crash0", 0.25, "Crash1", 0.25, "Crash2", 0.25, "Crash3", 0.25};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_ext_engine", 0.891251, 1, 800};
					frequency = "1.4 * rpm";
					volume = "4*camPos*((rpm-0.55))";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_ext_rotor_normal", 1.25893, 1, 2000};
					frequency = "1.6 * rpm * (1-rotorThrust/5)";
					volume = "camPos*(0 max (rpm-0.1))*(1 + rotorThrust)";
					cone[] = {1.6, 3.14, 1.6, 0.95};
				};
				class RotorSwistExt
				{
					sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_04\rotor_swist", 0.707946, 1, 400};
					frequency = 1;
					volume = "(camPos*(rotorThrust factor [0.6, 1]))";
					cone[] = {1, 1.4, 1, 0};
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_int_engine", 1, 1};
					frequency = "1.4 * rpm";
					volume = "1.5 * (1-camPos) * (rpm-0.55)";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_int_rotor_normal", 1, 1};
					frequency = "1.6 * rpm * (1-rotorThrust/5)";
					volume = "1.5 * (1-camPos) * (0 max (rpm-0.1)) * (1 + rotorThrust)";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", 1, 1, 100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\dummysound", 1, 1, 100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", 1, 1, 100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\dummysound", 1, 1, 100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt", 1, 1, 100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", 1, 1, 100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
					frequency = 1;
					volume = "camPos * (rain - rpm/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rpm/2)*2";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed", 0.562341, 1, 50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2c", 1.99526, 1, 50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * (gmeterZ factor[1.0, 2.5])";
				};
				class SpeedStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3", 0.501187, 1, 50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[60,80])";
				};
			};