class D_MarkArtilleryDialog {
	idd = -1;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable ['D_MarkArtilleryDialog', param [0]];[param [0]] call bis_fnc_guiEffectTiles;call d_fnc_initMarkArtyDlg;d_markarti_dialog_open = true";
	onUnLoad = "uiNamespace setVariable ['D_MarkArtilleryDialog', nil];d_markarti_dialog_open = false";
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
		__DDIALOG_BG($STR_DOM_MISSIONSTRING_1524)
	};
	class controls {
		class SalvosText: RscText2 {
			idc = 11009;
			x = 0.68; y = 0.425;
			w = 0.3; h = 0.1;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			sizeEx = 0.03;
			text = "$STR_DOM_MISSIONSTRING_1243";
		};
		class FireSeriesCombo:RscUIComboBox {
			idc = 889;
			x = 0.685; y = 0.5;
			w = 0.288; h = 0.035;
			sizeEx = 0.032;
		};
		class ArtyTypeCombo:FireSeriesCombo {
			idc = 888;
			y = 0.185;
			onLBSelChanged = "[_this] call d_fnc_artytypeselchanged2";
		};
		class ETA_text: SalvosText {
			idc = 900;
			text = "$STR_DOM_MISSIONSTRING_1458";
			x = 0.68; y = 0.6;
		};
		class ArtyRequestButton: RscButton {
			idc = 890;
			style = 2;
			colorBackgroundActive[] = {1,1,1,0.1};
			text = "$STR_DOM_MISSIONSTRING_1244b";
			action = "call d_fnc_firearty2;closeDialog 0";
			x = 0.68; y = 0.7; w = 0.3;
		};
		class Ordnance: RscText2 {
			x = 0.68; y = 0.11;
			w = 0.3; h = 0.1;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			sizeEx = 0.03;
			text = "$STR_DOM_MISSIONSTRING_1245";
		};
		class Map: D_RscMapControl {
			idc = 11111;
			colorBackground[] = {0.9, 0.9, 0.9, 0.9};
			x = 0.03; y = 0.07;
			w = 0.62; h = 0.85;
			showCountourInterval = 0;
		};
		__CANCELCLOSEB(-1)
	};
};
