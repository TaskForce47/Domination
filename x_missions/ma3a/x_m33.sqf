// by Xeno
#define THIS_FILE "x_m33.sqf"
#include "..\..\x_setup.sqf"

d_x_sm_pos = "d_sm_33" call d_fnc_smmapos; // index: 33,   Transformer station in Maruko
d_x_sm_type = "normal"; // "convoy"

if (!isDedicated && {!d_IS_HC_CLIENT}) then {
	d_cur_sm_txt = localize "STR_DOM_MISSIONSTRING_778";
	d_current_mission_resolved_text = localize "STR_DOM_MISSIONSTRING_871";
};

if (call d_fnc_checkSHC) then {
	private _poss = d_x_sm_pos select 0;
	private _vec = createVehicle [d_sm_land_transformer, _poss, [], 0, "NONE"];
	_vec setDir (markerDir "d_sm_33");
	_vec setPos _poss;
	_vec call d_fnc_addKilledEHSM;
	d_x_sm_vec_rem_ar pushBack _vec;
	sleep 2.123;
	["specops", 2, "allmen", 2, _poss, 300, true] spawn d_fnc_CreateInf;
	sleep 2.321;
	["aa", 1, "tracked_apc", 1, "tank", 1, _poss, 1, 400, true] spawn d_fnc_CreateArmor;

};
