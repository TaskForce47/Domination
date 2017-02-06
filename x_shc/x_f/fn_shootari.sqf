// by Xeno
#define THIS_FILE "fn_shootari.sqf"
#include "..\..\x_setup.sqf"

if !(call d_fnc_checkSHC) exitWith {};

params ["_pos_enemy", "_kind"];

private _which = [d_ArtyShellsBlufor, d_ArtyShellsOpfor] select (d_enemy_side == "EAST");
private _height = 600;

private _type = call {
	if (_kind == 0) exitWith {_which select 2};
	if (_kind == 1) exitWith {_which select 0};
	_height = 1; _which select 1
};

private _num_shells = (ceil random 5);

sleep 30.25 + (random 8);
for "_i" from 0 to (_num_shells - 1) do {
	private _npos = _pos_enemy getPos [ floor random [20,30,50], floor random 360];
	_class = selectRandom ["Sh_82mm_AMOS","Smoke_82mm_AMOS_White","Smoke_82mm_AMOS_White","Smoke_82mm_AMOS_White","Smoke_82mm_AMOS_White"];
	_dummy = "LaserTargetCBase" createVehicle _npos;
	_dummy enableSimulation false; _dummy hideObject true;
	_dummy setVariable ["type",_class];
	[_dummy,nil,true] spawn BIS_fnc_moduleProjectile;
	[_dummy] spawn {
	 sleep 20;
	 deleteVehicle (_this select 0);
	};
	sleep 3.923 + ((ceil random 10) / 10);
};
