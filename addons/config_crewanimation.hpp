class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		MV22_Pilot = "MV22_Pilot";
		MV22_Cargo = "MV22_Cargo";		
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_MV22_Pilot: DefaultDie
		{
			actions = DeadActions;
			file = "\dega_vehicles_v22\data\Anim\KIA_MV22_Pilot.rtm";
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {"Unconscious",0.1};
		};
		class MV22_Pilot: Crew
		{
			file = "\dega_vehicles_v22\data\Anim\MV22_Pilot.rtm";
			interpolateTo[]={KIA_MV22_Pilot,1};
		};
		class KIA_MV22_Cargo: KIA_MV22_Pilot {};
		class MV22_Cargo: Crew
		{
			file = "\dega_vehicles_v22\data\Anim\MV22_Pilot.rtm";
			interpolateTo[]={KIA_MV22_Cargo,1};
		};		
	};
};