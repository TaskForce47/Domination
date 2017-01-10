class D_ArtilleryDialog2 {
	idd = -1;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable ['D_ArtilleryDialog2', param [0]];[param [0]] call bis_fnc_guiEffectTiles;call d_fnc_initArtyDlg2;d_arti_dialog_open = true";
	onUnLoad = "uiNamespace setVariable ['D_ArtilleryDialog2', nil];d_arti_dialog_open = false;d_cur_art_marker_ar = nil";
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
		__DDIALOG_BG($STR_DOM_MISSIONSTRING_1242)
	};
	class controls {
		class Targets: RscListBox {
			idc = 1000;
			x = 0;
			y = 0.043;
			w = 0.499;
			h = 0.85;
			sizeEx = "2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call d_fnc_artmselchanged";
		};
		class RefreshTargetsButton: RscButton {
			idc = 1010;
			style = 2;
			colorBackgroundActive[] = {1,1,1,0.1};
			text = "$STR_DOM_MISSIONSTRING_1530";
			action = "closeDialog 0;createDialog 'D_ArtilleryDialog2'";
			x = 0.1; y = 0.902; w = 0.3;
		};
		class Map: D_RscMapControl {
			idc = 1001;
			colorBackground[] = {0.9, 0.9, 0.9, 0.9};
			x = 0.5; y = 0.044;
			w = 0.498; h = 0.5;
			showCountourInterval = 0;
		};
		class ArtyFireButton: RefreshTargetsButton {
			idc = 1002;
			colorBackgroundActive[] = {1,1,1,0.1};
			text = "$STR_DOM_MISSIONSTRING_1244";
			action = "call d_fnc_FireArty; closeDialog 0";
			x = 0.6; y = 0.85;
		};
		class ReqFromTxt: RscText2 {
			idc = -1;
			x = 0.55; y = 0.55;
			w = 0.3; h = 0.1;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			sizeEx = 0.032;
			text = "$STR_DOM_MISSIONSTRING_1526";
		};
		class ReqFromNameTxt: ReqFromTxt {
			idc = 2000;
			x = 0.73;
			text = "";
		};
		class ReqTypeTxt: ReqFromTxt {
			y = 0.6;
			text = "$STR_DOM_MISSIONSTRING_1527";
		};
		class ReqTypeSelTxt: ReqTypeTxt {
			idc = 2001;
			x = 0.73;
			text = "";
		};
		class ReqSalvosTxt: ReqFromTxt {
			y = 0.65;
			text = "$STR_DOM_MISSIONSTRING_1528";
		};
		class ReqNumSalvosTxt: ReqSalvosTxt {
			idc = 2002;
			x = 0.73;
			text = "";
		};
		__CANCELCLOSEB(-1)
	};
};
