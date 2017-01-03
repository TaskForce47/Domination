// by Xeno
//#define __DEBUG__
#define THIS_FILE "fn_sidemissionresolved.sqf"
#include "..\..\x_setup.sqf"

__TRACE("In fn_sidemissionresolved")

if (isNil "d_HC_CLIENT_OBJ_OWNER") then {
	// WTF? In one RC patch this suddenly stopped working...
	// While I can call other fsms this way it does not work for XClearSidemission anymore, WTF!
	//call d_fnc_XClearSidemission;
	execFSM "fsms\fn_XClearSidemission.fsm";
} else {
	[0] remoteExecCall ["d_fnc_doexechcf", d_HC_CLIENT_OBJ_OWNER];
};
remoteExecCall ["d_fnc_rebbserv", 2];
(d_cur_sm_idx + 1) remoteExecCall ["d_fnc_d_sm_mar", 2];

d_cur_sm_idx = -1; publicVariable "d_cur_sm_idx";
__TRACE_2("","d_sm_winner")

if (d_sm_winner > 0) then {
	[d_sm_winner, ""] remoteExecCall ["d_fnc_sm_res_client", [0, 2] select isDedicated];
	/*****ADD*TICKETS*TO*ACTUAL*TICKET*AMOUNT*BY*TASKFORCE47*******/
	["tf47_changetickets", [WEST, 2, 20, "Side Mission"]] call CBA_fnc_globalEvent;
	/**************************************************************/
};

if (d_sm_winner in [-1,-2,-300,-400,-500,-600,-700,-878,-879,-880,-881,-900]) then {
	[d_sm_winner, ""] remoteExecCall ["d_fnc_sm_res_client", [0, -2] select isDedicated];
#ifndef __TT__
	[35] remoteExecCall ["d_fnc_DoKBMsg", 2];
#else
	[36] remoteExecCall ["d_fnc_DoKBMsg", 2];
#endif
	if !(isServer && {!isDedicated}) then {d_sm_winner = 0};
};
__TRACE("End fn_sidemissionresolved")
