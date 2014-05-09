class CfgPatches
{
	class CLF_Targets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F_Training"};
	};
};

class CfgVehicles
{
	class TargetBase;
	class panzerziel2: TargetBase
	{
		scope = 2;
		displayName = "Klappscheibe Panzer quer";
		model = "\clf_targets\panzerziel2.p3d";
		accuracy=1000;
		destrType="DestructEngine";
		class DestructionEffects
		{
		};
		class AnimationSources
		{
			class Terc
			{
			animPeriod=1.0;
			};
		};
		class EventHandlers
		{
			//hitPart="[(_this select 0)] execVM '\clf_panzerziel\scripts\TargetP_Inf_F_hitPart.sqf';";
			hit="[(_this select 0)] exec ""\clf_targets\scripts\PopUpTarget.sqf""";
		};
	};
	class clf_target_trans: TargetBase
	{
		scope = 2;
		displayName = "Klappscheibe Panzer Front";
		model = "\clf_targets\clf_target_trans.p3d";
		accuracy=1000;
		destrType="DestructEngine";
		class DestructionEffects
		{
		};
		class AnimationSources
		{
			class Terc
			{
			animPeriod=1.0;
			};
		};
		class EventHandlers
		{
			//hitPart="[(_this select 0)] execVM '\clf_panzerziel\scripts\TargetP_Inf_F_hitPart.sqf';";
			hit="[(_this select 0)] exec ""\clf_targets\scripts\PopUpTarget.sqf""";
		};
	};
};