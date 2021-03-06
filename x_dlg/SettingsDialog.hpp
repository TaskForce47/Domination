class D_SettingsDialog {
	idd = -1;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable ['D_SettingsDialog', param [0]];[param [0]] call bis_fnc_guiEffectTiles;(param [0]) call d_fnc_settingsdialoginit;d_settings_dialog_open = true";
	onUnLoad = "uiNamespace setVariable ['D_SettingsDialog', nil];d_settings_dialog_open = false";
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
		__DDIALOG_BG($STR_DOM_MISSIONSTRING_1293)
	};
	class controls {
		class ViewDistanceCaption: RscText2 {
			idc = 1999;
			x = 0.02;
			y = 0.07;
			w = 0.25;
			h = 0.032;
			sizeEx = 0.032;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			shadow = 0;
			text = "$STR_DOM_MISSIONSTRING_1285";
		};
		class ViewDistanceHint: ViewDistanceCaption {
			idc = 1997;
			y = 0.1;
			w = 0.25;
			h = 0.022;
			sizeEx = 0.021;
			colorText[] = {1, 1, 1, 0.8};
			text = "$STR_DOM_MISSIONSTRING_1286";
		};
		class VD_Slider: RscXSliderH {
			idc = 1000;
			x = 0.025;
			y = 0.13;
			w = 0.25;
			h = 0.031;
			onSliderPosChanged = "_this call d_fnc_vdsliderchanged";
		};
		class GraslayerCaption: ViewDistanceCaption {
			idc = 1998;
			y = 0.2;
			text = "$STR_DOM_MISSIONSTRING_1287";
		};
		class GraslayerHint: ViewDistanceHint {
			idc = 1996;
			y = 0.23;
			text = "$STR_DOM_MISSIONSTRING_1288";
		};
		class GraslayerCombo: RscUIComboBox {
			idc = 1001;
			x = 0.025;
			y = 0.26;
			w = 0.25;
			h = 0.031;
			onLBSelChanged = "[_this] call d_fnc_glselchanged";
		};
		class PlayermarkerCaption: ViewDistanceCaption {
			idc = 1501;
			y = 0.33;
			text = "$STR_DOM_MISSIONSTRING_1289";
		};
		class PlayermarkerHint: ViewDistanceHint {
			idc = 1500;
			y = 0.36;
			text = "$STR_DOM_MISSIONSTRING_1290";
		};
		class PlayermarkerCombo: GraslayerCombo {
			idc = 1002;
			y = 0.39;
			onLBSelChanged = "[_this] call d_fnc_pmselchanged";
		};
		class PlayernamesCaption: ViewDistanceCaption {
			idc = 1601;
			y = 0.46;
			text = "$STR_DOM_MISSIONSTRING_1291";
		};
		class PlayernamesHint: ViewDistanceHint {
			idc = 1600;
			y = 0.49;
			text = "$STR_DOM_MISSIONSTRING_1292";
		};
		class PlayernamesCombo: PlayermarkerCombo {
			idc = 1602;
			y = 0.52;
			onLBSelChanged = "[_this] call d_fnc_pnselchanged";
		};
		__CANCELCLOSEB(-1)
		class PointsCaption: RscText2 {
			y = 0.6;
			x = 0.02;
			w = 0.25;
			h = 0.025;
			sizeEx = 0.025;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			text = "$STR_DOM_MISSIONSTRING_1294";
		};
		class PointsCaption2: PointsCaption {
			y = 0.63;
			text = "$STR_DOM_MISSIONSTRING_1295";
		};
		class CorporalPic: D_RscPicture {
			x=0.03;
			__EXEC(ypospic = 0.697)
			y = __EVAL(ypospic);
			w=0.02;
			h=0.025;
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
			sizeEx = 256;
			colorText[] = {1, 1, 1, 1};
		};
		class CorporalString: RscText2 {
			x = 0.07;
			__EXEC(yposstr = 0.66)
			y = __EVAL(yposstr);
			w = 0.25;
			h = 0.1;
			sizeEx = 0.025;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			text = "Corporal";
		};
		class CorporalPoints: RscText2 {
			idc = 2001;
			x = 0.16;
			y = __EVAL(yposstr);
			w = 0.25;
			h = 0.1;
			sizeEx = 0.025;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			text = "";
		};
		class SergeantPic: CorporalPic {
			__EXEC(ypospic = ypospic + 0.03)
			y = __EVAL(ypospic);
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
		};
		class SergeantString: CorporalString {
			__EXEC(yposstr = yposstr + 0.03)
			y = __EVAL(yposstr);
			text = "Sergeant";
		};
		class SergeantPoints: CorporalPoints {
			idc = 2002;
			y = __EVAL(yposstr);
			text = "";
		};
		class LieutenantPic: CorporalPic {
			__EXEC(ypospic = ypospic + 0.03)
			y = __EVAL(ypospic);
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa";
		};
		class LieutenantString: CorporalString {
			__EXEC(yposstr = yposstr + 0.03)
			y = __EVAL(yposstr);
			text = "Lieutenant";
		};
		class LieutenantPoints: CorporalPoints {
			idc = 2003;
			y = __EVAL(yposstr);
			text = "";
		};
		class CaptainPic: CorporalPic {
			__EXEC(ypospic = ypospic + 0.03)
			y = __EVAL(ypospic);
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
		};
		class CaptainString: CorporalString {
			__EXEC(yposstr = yposstr + 0.03)
			y = __EVAL(yposstr);
			text = "Captain";
		};
		class CaptainPoints: CorporalPoints {
			idc = 2004;
			y = __EVAL(yposstr);
			text = "";
		};
		class MajorPic: CorporalPic {
			__EXEC(ypospic = ypospic + 0.03)
			y = __EVAL(ypospic);
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa";
		};
		class MajorString: CorporalString {
			__EXEC(yposstr = yposstr + 0.03)
			y = __EVAL(yposstr);
			text = "Major";
		};
		class MajorPoints: CorporalPoints {
			idc = 2005;
			y = __EVAL(yposstr);
			text = "";
		};
		class ColonelPic: CorporalPic {
			__EXEC(ypospic = ypospic + 0.03)
			y = __EVAL(ypospic);
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa";
		};
		class ColonelString: CorporalString {
			__EXEC(yposstr = yposstr + 0.03)
			y = __EVAL(yposstr);
			text = "Colonel";
		};
		class ColonelPoints: CorporalPoints {
			idc = 2006;
			y = __EVAL(yposstr);
			text = "";
		};
		class MedicsCaption: RscText2 {
			x = 0.35;
			y = 0.07;
			w = 0.4;
			h = 0.032;
			sizeEx = 0.032;
			colorBackground[] = {1, 1, 1, 0};
			colorText[] = {1, 1, 1, 1};
			text = "$STR_DOM_MISSIONSTRING_1298";
			shadow = 0;
		};
		class MedicsTxt: RscText2 {
			idc = 2008;
			x = 0.358;
			y = 0.11;
			w = 0.6;
			h = 0.2;
			style = 16;
			lineSpacing = 1;
			colorbackground[] = __GUI_TXT_RGB;
			sizeEx = 0.027;
			text = "";
		};
		class ArtilleryCaption: MedicsCaption {
			y = 0.33;
			text = "$STR_DOM_MISSIONSTRING_1299";
		};
		class ArtilleryTxt: MedicsTxt {
			idc = 2009;
			y = 0.37;
		};
		class EngineerCaption: MedicsCaption {
			y = 0.59;
			text = "$STR_DOM_MISSIONSTRING_1300";
		};
		class EngineerTxt: MedicsTxt {
			idc = 2010;
			y = 0.63;
		};
	};
};
