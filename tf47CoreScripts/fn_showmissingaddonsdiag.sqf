/* ----------------------------------------------------------------------------
		file: fn_ShowrequiredAddonsDialog.sqf
		=====================================

		Description:
		Displays Info that Addons are Missing

		Parameters:
		#0 Player
		#1 Missing Addons

		Optional:

		Example:

		Returns:
		nothing

		Author: meat <p.humberdroz@gmail.com, @meat147>  (ofpectag:TF47_)
		Author: funkrusha (ofpectag:TF47_)

---------------------------------------------------------------------------- */

private ["_display", "_map", "_mission", "_player", "_newsOnline", "_newsOffline", "_ctrlHTML", "_htmlLoaded"];
disableSerialization;
createDialog "tf47_requiredAddonsDialog";
_unit = _this select 0;
_missing = _this select 1;
_map = worldname;
_mission  = missionName;
_player = name _unit;
titleText ["Join our Teamspeak: ts.armasim.de", "BLACK", 1];

_clickableLink = parseText "<a href='https://phumberdroz.github.io/psychic-octo-rotary-everything/'>ts.armasim.de</a>";
"Instructions" hintC [
  "You did not load all the mods",
  "Please join our Teamspeak to get help with setting them up",
  _clickableLink
];
