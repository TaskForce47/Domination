//#define __DEBUG__
#define THIS_FILE "initServer.sqf"
#include "x_setup.sqf"
[
{
    {
        _x setVariable ["tf47_debug_getoutEH",true];
        _x addEventHandler ["GetOutMan",{
            params["_unit","_position","_vehicle","_turret"];
            diag_log format ["--- DEBUG --- Unit: %1 Vehicle: %2 Position: %3 Turret: %4 ", _unit,_vehicle,_position,_turret];
        }];
    } forEach (allUnits select { !(_x getVariable ["tf47_debug_getoutEH",false]) });
},
0.1
[]
] call CBA_fnc_addPerFrameHandler;
diag_log [diag_frameno, diag_ticktime, time, "Executing MPF initServer.sqf"];
["Initialize", [true]] call BIS_fnc_dynamicGroups;
diag_log [diag_frameno, diag_ticktime, time, "MPF initServer.sqf processed"];
