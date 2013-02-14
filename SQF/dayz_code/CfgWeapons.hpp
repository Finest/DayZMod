class CfgWeapons {
	class ItemCore;
	class ItemMap_Debug: ItemCore {
		descriptionshort = "Debug Map - Admin use only";
		displayname = "Map";
		picture = "\ca\ui\data\gear_picture_map_ca.paa";
		scope = 2;
		simulation = "ItemMap";
		class Library {
			libtextdesc = "Debug Map - Admin use only";
		};
	};
	class Crossbow;
	class Crossbow_DZ : Crossbow {
		autoreload = 1;
		magazines[] =
		{
			"Quiver",
			"WoodernArrow"
		};
	};
};