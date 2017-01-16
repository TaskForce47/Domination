/*

*/
private ["_veh","_reloadTime","_crewveh"];

_veh = _this select 0;
_reloadTime = _this select 1;

_crewveh = crew _veh;
_veh allowCrewInImmobile true;
_veh allowDamage false;

{
	_x allowDamage false;
	_x setBehaviour "Danger";
	_x setCombatMode "RED";
	_x allowFleeing 0;
	_x disableAI "MOVE";
	_x allowDamage false;
} forEach _crewveh;

while {alive _veh} do {
	_veh setVehicleAmmo 1;
	_veh setFuel 0;
	_veh forceSpeed 0;
	_veh engineOn false;
	sleep _reloadTime;
};
