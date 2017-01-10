class D_ParajumpDialog {
	idd = -1;
	movingEnable = 1;
	onLoad = "[param [0]] call bis_fnc_guiEffectTiles;d_parajump_dialog_open = true";
	onUnLoad = "d_parajump_dialog_open = false";
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
		__DDIALOG_BG($STR_DOM_MISSIONSTRING_1266)
	};
	class controls {
		__CANCELCLOSEB(-1)
		class Map: D_RscMapControl {
			idc = -1;
			colorBackground[] = {0.9, 0.9, 0.9, 0.9};
			x = 0.06;
			y = 0.14;
			w = 0.885;
			h = 0.7;
			showCountourInterval = 0;
			onMouseButtonClick = "closeDialog 0;_pp = (param [0]) ctrlMapScreenToWorld [param [2], param [3]];d_global_jump_pos = _pp";
		};
		class ParaMapText: RscText2 {
			x = 0.06;
			y = 0.05;
			w = 0.7;
			h = 0.1;
			sizeEx = 0.035;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			text = "$STR_DOM_MISSIONSTRING_1267";
		};
		class ArtiMapText2: ParaMapText {
			y = 0.83;
			text = "$STR_DOM_MISSIONSTRING_1269";
		};
		class ArtiMapText3: ParaMapText {
			y = 0.86;
			text = "$STR_DOM_MISSIONSTRING_1271";
		};
	};
};
