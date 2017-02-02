// by Xeno
//#define __DEBUG__
#define THIS_FILE "initPlayerLocal.sqf"
#include "x_setup.sqf"
diag_log [diag_frameno, diag_ticktime, time, "Executing MPF initPlayerLocal.sqf"];
__TRACE_1("","_this")
if (hasInterface) then {
	["InitializePlayer", [player]] call BIS_fnc_dynamicGroups;
};

if (!isnil "_neededaddons") then {
	_missingaddons = [];
	{
			if (activatedAddons find _x == -1) then {
				_missingaddons pushBack _x;
			};
	} forEach _neededaddons;

	if ((count _missingaddons) > 0) then {
		player setPos [10,10,100000];
		player enableSimulation false;

		_null = [player,_missingaddons] call tf47_fnc_showmissingaddonsdiag;

		diag_log "TF47 ---- LOG ---- MISSING ADDONS ---- START";
		diag_log _missingaddons;
		diag_log "TF47 ---- LOG ---- MISSING ADDONS ---- END";
		sleep 10;
		_null = [player,_missingaddons] call tf47_fnc_showmissingaddonsdiag;

		sleep 30;
		endmission "End6";
	} else {
		_null = _this execVM "tf47CoreScripts\infantryInit.sqf";
		_null = [] execVM "tf47\VA.sqf";
	};
};

execVM "tasks.sqf";
[] call tf47_battlemanager_fnc_initBattleManager;
0 enableChannel [false, false]; //0 = Global
1 enableChannel [false, false]; //1 = Side
2 enableChannel [false, false]; //2 = Command
3 enableChannel [false, false]; //3 = Group
4 enableChannel [false, false]; //4 = Vehicle
diag_log [diag_frameno, diag_ticktime, time, "MPF initPlayerLocal.sqf processed"];
