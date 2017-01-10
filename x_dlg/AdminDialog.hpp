class D_AdminDialog {
	idd = -1;
	movingEnable = 1;
	onLoad = "if (serverCommandExecutable '#shutdown' || {!isMultiplayer}) then {uiNamespace setVariable ['D_AdminDialog', param [0]];d_admin_dialog_open = true;[param [0]] call bis_fnc_guiEffectTiles} else {[player, d_name_pl, 3] remoteExecCall ['KickPlayerBS', 2];}";
	onUnLoad = "uiNamespace setVariable ['D_AdminDialog', nil];d_admin_dialog_open = false;";
	effectTilesAlpha = 0.15;
	class controlsBackground {
		class Vignette: RscVignette {
			idc = 114998;
		};
		class TileGroup: RscControlsGroupNoScrollbars {
	  idc = 115099;
	  x = safezoneX;
	  y = safezoneY;
	  w = safezoneW;
	  h = safezoneH;
	  disableCustomColors = 1;
	  class Controls {
		    class TileFrame: RscFrame
		    {
		      idc = 114999;
		      x = 0;
		      y = 0;
		      w = safezoneW;
		      h = safezoneH;
		      colortext[] = {0,0,0,1};
		    };
		    BCGTILE(0,0)
		    BCGTILE(0,1)
		    BCGTILE(0,2)
		    BCGTILE(0,3)
		    BCGTILE(0,4)
		    BCGTILE(0,5)
		    BCGTILE(1,0)
		    BCGTILE(1,1)
		    BCGTILE(1,2)
		    BCGTILE(1,3)
		    BCGTILE(1,4)
		    BCGTILE(1,5)
		    BCGTILE(2,0)
		    BCGTILE(2,1)
		    BCGTILE(2,2)
		    BCGTILE(2,3)
		    BCGTILE(2,4)
		    BCGTILE(2,5)
		    BCGTILE(3,0)
		    BCGTILE(3,1)
		    BCGTILE(3,2)
		    BCGTILE(3,3)
		    BCGTILE(3,4)
		    BCGTILE(3,5)
		    BCGTILE(4,0)
		    BCGTILE(4,1)
		    BCGTILE(4,2)
		    BCGTILE(4,3)
		    BCGTILE(4,4)
		    BCGTILE(4,5)
		    BCGTILE(5,0)
		    BCGTILE(5,1)
		    BCGTILE(5,2)
		    BCGTILE(5,3)
		    BCGTILE(5,4)
		    BCGTILE(5,5)
		  };
		};
		__DDIALOG_BG($STR_DOM_MISSIONSTRING_1219)
	};
	class controls {
		__CANCELCLOSEB(-1)
		class Map: D_RscMapControl {
			idc = 11010;
			colorBackground[] = {0.9, 0.9, 0.9, 0.9};
			x = 0.08; y = 0.54;
			w = 0.84; h = 0.33;
			showCountourInterval = 0;
		};
		class UnitsComboCaption: RscText2 {
			x = 0.08; y = 0.08;
			w = 0.2; h = 0.1;
			sizeEx = 0.032;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			shadow = 0;
			text = "$STR_DOM_MISSIONSTRING_1220";
		};
		class UnitsCombo:RscUIComboBox {
			idc = 1001;
			x = 0.08; y = 0.16;
			w = 0.25; h = 0.04;
			sizeEx = 0.032;
			onLBSelChanged = "[_this] spawn d_fnc_adselchanged";
		};
		class InfoText: UnitsComboCaption {
			idc = 1002;
			x = 0.4; y = 0.09;
			w = 0.55; h = 0.1;
			text = "";
		};
		class NameCaption: UnitsComboCaption {
			x = 0.4; y = 0.14;
			w = 0.07; h = 0.1;
			text = "$STR_DOM_MISSIONSTRING_1221";
		};
		class NameText: UnitsComboCaption {
			idc = 1003;
			x = 0.48; y = 0.14;
			w = 0.3; h = 0.1;
			text = "";
		};
		class UidCaption: UnitsComboCaption {
			x = 0.4; y = 0.18;
			w = 0.07; h = 0.1;
			text = "UID:";
		};
		class UidText: UnitsComboCaption {
			idc = 1004;
			x = 0.48; y = 0.18;
			w = 0.3; h = 0.1;
			text = "";
		};
		class StrNameCaption: UnitsComboCaption {
			x = 0.4; y = 0.22;
			w = 0.07; h = 0.1;
			text = "$STR_DOM_MISSIONSTRING_1222";
		};
		class StrNameText: UnitsComboCaption {
			idc = 1005;
			x = 0.48; y = 0.22;
			w = 0.3; h = 0.1;
			text = "";
		};
		class TKCaption: UnitsComboCaption {
			x = 0.4; y = 0.26;
			w = 0.07; h = 0.1;
			text = "TKs:";
		};
		class TKText: UnitsComboCaption {
			idc = 1006;
			x = 0.48; y = 0.26;
			w = 0.3; h = 0.1;
			text = "";
		};
		class ScoreCaption: UnitsComboCaption {
			x = 0.4; y = 0.3;
			w = 0.07; h = 0.1;
			text = "$STR_DOM_MISSIONSTRING_1223";
		};
		class ScoreText: UnitsComboCaption {
			idc = 1009;
			x = 0.48; y = 0.3;
			w = 0.3; h = 0.1;
			text = "";
		};
		class ResetTKsButton: RscButton {
			idc = 1007;
			style = 0;
			colorBackgroundActive[] = {1,1,1,0.1};
			text = "$STR_DOM_MISSIONSTRING_1224";
			action = "d_a_d_cur_uid remoteExecCall ['d_fnc_AdminDelTKs', 2];((uiNamespace getVariable 'D_AdminDialog') displayCtrl 1006) ctrlSetText '0';((uiNamespace getVariable 'D_AdminDialog') displayCtrl 1007) ctrlEnable false";
			x = 0.4; y = 0.38; w = 0.2;
		};
		class KickButton: ResetTKsButton {
			idc = 1008;
			text = "$STR_DOM_MISSIONSTRING_1225";
			action = "if (d_a_d_cur_name != d_name_pl) then {serverCommand ('#kick ' + d_a_d_cur_name);d_a_d_p_kicked = true}";
			x = 0.65;
		};
		class SpectateButton: ResetTKsButton {
			idc = -1;
			text = "$STR_DOM_MISSIONSTRING_1226";
			action = "closeDialog 0;call d_fnc_adminspectate";
			y = 0.46;
		};
		class BanButton: KickButton {
			idc = 1010;
			text = "$STR_DOM_MISSIONSTRING_1227";
			action = "if (d_a_d_cur_name != d_name_pl) then {serverCommand ('#exec ban ' + d_a_d_cur_name);d_a_d_p_kicked = true}";
			y = 0.46;
		};
		class DelMarkerButton: KickButton {
			idc = -1;
			text = "$STR_DOM_MISSIONSTRING_1517";
			action = "call d_fnc_removeallusermarkers";
			x = 0.08; y = 0.89; w = 0.3;
		};
		class DelMarkerButton2: KickButton {
			idc = -1;
			text = "$STR_DOM_MISSIONSTRING_1518";
			action = "call d_fnc_removediscusermarkers";
			x = 0.4; y = 0.89; w = 0.3;
		};
	};
};
