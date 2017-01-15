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
		_unit setPos [10,10,100000];
		_unit enableSimulation false;

		_null = [_unit,_missingaddons] call tf47_fnc_showmissingaddonsdiag;

		diag_log "TF47 ---- LOG ---- MISSING ADDONS ---- START";
		diag_log _missingaddons;
		diag_log "TF47 ---- LOG ---- MISSING ADDONS ---- END";
		sleep 10;
		_null = [_unit,_missingaddons] call tf47_fnc_showmissingaddonsdiag;

		sleep 30;
		endmission "End6";
	} else {
		_null = _this execVM "tf47CoreScripts\infantryInit.sqf";
		_null = [] execVM "tf47\VA.sqf";
	};
};

execVM "tasks.sqf";
diag_log [diag_frameno, diag_ticktime, time, "MPF initPlayerLocal.sqf processed"];
