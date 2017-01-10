class D_AIRecruitDialog {
	idd = -1;
	movingEnable = true;
	onLoad = "uiNamespace setVariable ['D_AIRecruitDialog', param [0]];[param [0]] call bis_fnc_guiEffectTiles;call d_fnc_fillRecruit;d_airecruit_dialog_open = true";
	onUnLoad = "uiNamespace setVariable ['D_AIRecruitDialog', nil];d_airecruit_dialog_open = false";
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
		__DDIALOG_BG($STR_DOM_MISSIONSTRING_1235)
	};
	class controls {
		__CANCELCLOSEB(-1)
		class UnitsListBoxCaption: RscText2 {
			x = 0.08; y = 0.11;
			w = 0.2; h = 0.1;
			sizeEx = 0.029;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			text = "$STR_DOM_MISSIONSTRING_1237";
		};
		class UnitsListbox: RscListBox {
			idc = 1000;
			x = 0.08; y = 0.2;
			w = 0.4; h = 0.5;
			style = ST_LEFT;
			onMouseButtonDblClick = "call d_fnc_recruitbuttonaction";
		};
		class RecruitButton: RscButton {
			idc = 1010;
			colorBackgroundActive[] = {1,1,1,0.1};
			text = "$STR_DOM_MISSIONSTRING_1238";
			action = "call d_fnc_recruitbuttonaction";
			x = 0.17; y = 0.72; w = 0.2;
		};

		class CurUnitsListBoxCaption: UnitsListBoxCaption {
			idc = 1030;
			x = 0.5;
			w = 0.3;
			text = "$STR_DOM_MISSIONSTRING_1239";
		};
		class CurUnitsListbox: RscListBox {
			idc = 1001;
			x = 0.5; y = 0.2;
			w = 0.4; h = 0.5;
			style = ST_LEFT;
			onMouseButtonDblClick = "call d_fnc_dismissbuttonaction";
		};

		class DismissButton: RecruitButton {
			idc = 1011;
			text = "$STR_DOM_MISSIONSTRING_1240";
			action = "call d_fnc_dismissbuttonaction";
			x = 0.59;
		};

		class DismissAllButton: RecruitButton {
			idc = 1012;
			text = "$STR_DOM_MISSIONSTRING_1241";
			action = "call d_fnc_dismissallbuttonaction";
			x = 0.34; y = 0.8;
		};
	};
};
