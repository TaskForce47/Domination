/*
 * include in existing CfgFunctions class
 */

//class cfgFunctions{
	class tf47 {
		tag = "tf47";

		//class CoreScripts {
		//	file = "tf47CoreScripts";
		//};
		class CoreScripts {
			file = "tf47CoreScripts";
			class showmissingaddonsdiag;
		};
		class Whitelist {
			file = "tf47CoreScripts";
			//class vehicleOnEnter;
			class addGetInEvent;
			class addGetOutEvent;
			class unitMarkerInit;
		};

		class Helpers {
			file = "tf47CoreScripts\helper";
			class allowDamage;
			class setDamage;
			class setFuel;
			class lock;
			class setVehicleVarName;
            class spawnThing;
		};
	};

//};
