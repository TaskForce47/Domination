//#define __DEBUG__
#define THIS_FILE "initServer.sqf"
#include "x_setup.sqf"
diag_log [diag_frameno, diag_ticktime, time, "Executing MPF initServer.sqf"];
["Initialize", [true]] call BIS_fnc_dynamicGroups;
([0,0,0] nearestObject 174650) hideObjectGlobal true;
diag_log [diag_frameno, diag_ticktime, time, "MPF initServer.sqf processed"];
