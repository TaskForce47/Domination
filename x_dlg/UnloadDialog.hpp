class D_UnloadDialog {
	idd = -1;
	movingEnable = 1;
	onLoad="uiNamespace setVariable ['D_UnloadDialog', param [0]];[param [0]] call bis_fnc_guiEffectTiles;d_unload_dialog_open = true;call d_fnc_fillunload";
	onUnLoad="uiNamespace setVariable ['D_UnloadDialog', nil];d_unload_dialog_open = false";
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
		__DDIALOG_BG($STR_DOM_MISSIONSTRING_1319)
	};
	class controls {
		class SelectButton: RscButton {
			idc = -1;
			colorBackgroundActive[] = {1,1,1,0.1};
			text = "$STR_DOM_MISSIONSTRING_1320";
			action = "call d_fnc_unloadsetcargo";
			x = 0.36;
			y = 0.80;
			w = 0.3;
		};
		__CANCELCLOSEB(-1)
		class Unloadlistbox: RscListBox {
			idc = 101115;
			x = 0.3;
			y = 0.2;
			w = 0.4;
			h = 0.5;
			sizeEx = 0.037;
			rowHeight = 0.06;
			style = ST_LEFT;
		};
		class UnloadCaption: RscText2 {
			x = 0.37;
			y = 0.08;
			w = 0.4;
			h = 0.1;
			sizeEx = 0.029;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			text = "$STR_DOM_MISSIONSTRING_1321";
		};
	};
};
