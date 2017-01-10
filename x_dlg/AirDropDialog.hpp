class D_AirDropDialog {
	idd = -1;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable ['D_AirDropDialog', param [0]];[param [0]] call bis_fnc_guiEffectTiles;call d_fnc_initairdropdialog;d_airdrop_dialog_open = true";
	onUnLoad = "uiNamespace setVariable ['D_AirDropDialog', nil];d_airdrop_dialog_open = false";
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
		__DDIALOG_BG($STR_DOM_MISSIONSTRING_1228)
	};
	class controls {
		__CANCELCLOSEB(-1)
		class Drop3: RscButton {
			idc = 11004;
			style = 0;
			colorBackgroundActive[] = {1,1,1,0.1};
			text = "$STR_DOM_MISSIONSTRING_1230";
			action = "d_x_drop_type = (d_X_Drop_Array select 2) select 1;closeDialog 0";
			x = 0.68; y = 0.32; w = 0.3;
		};
		class Drop2: Drop3 {
			idc = 11003;
			text = "$STR_DOM_MISSIONSTRING_1231";
			action = "d_x_drop_type = (d_X_Drop_Array select 1) select 1;closeDialog 0";
			y = 0.26;
		};
		class Drop1: Drop3 {
			idc = 11002;
			text = "$STR_DOM_MISSIONSTRING_1232";
			action = "d_x_drop_type = (d_X_Drop_Array select 0) select 1;closeDialog 0";
			y = 0.20;
		};
		class DropMapText: RscText2 {
			x = 0.02; y = 0.02;
			w = 0.5; h = 0.1;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			text = "$STR_DOM_MISSIONSTRING_1234";
		};
		class DropText: DropMapText {
			x = 0.68;
			colorText[] = {1, 1, 1, 1};
			sizeEx = 0.03;
			text = "$STR_DOM_MISSIONSTRING_1233";
		};
		class Map: D_RscMapControl {
			idc = 11111;
			colorBackground[] = {0.9, 0.9, 0.9, 0.9};
			x = 0.02; y = 0.115;
			w = 0.61; h = 0.8;
			showCountourInterval = 0;
			onMouseButtonClick = "if (ctrlShown ((uiNamespace getVariable 'D_AirDropDialog') displayCtrl 11111)) then {_pp = (param [0]) ctrlMapScreenToWorld [param [2], param [3]];'d_drop_zone' setMarkerPosLocal _pp}";
		};
	};
};
