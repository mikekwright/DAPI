#pragma once

namespace DAPI
{
	typedef enum {
		PLAYER_MODE_STANDING = 0,
		PLAYER_MODE_WALKING_1 = 1,
		PLAYER_MODE_WALKING_2 = 2,
		PLAYER_MODE_WALKING_3 = 3,
		PLAYER_MODE_ATTACKING_MELEE = 4,
		PLAYER_MODE_ATTACKING_RANGED = 5,
		PLAYER_MODE_BLOCKING = 6,
		PLAYER_MODE_GETTING_HIT = 7,
		PLAYER_MODE_DYING = 8,
		PLAYER_MODE_CASTING_A_SPELL = 9,
		PLAYER_MODE_CHANGING_LEVELS = 10,
		PLAYER_MODE_QUITTING = 11,
	} player_mode;

	typedef enum {
		DIRECTION_SOUTH = 0,
		DIRECTION_SOUTH_WEST = 1,
		DIRECTION_WEST = 2,
		DIRECTION_NORTH_WEST = 3,
		DIRECTION_NORTH = 4,
		DIRECTION_NORTH_EAST = 5,
		DIRECTION_EAST = 6,
		DIRECTION_SOUTH_EAST = 7,
		DIRECTION_OMNI = 8, ///< All directions.
	} direction;

	typedef enum {
		CMD_STAND = 0,
		CMD_WALKXY = 1,
		CMD_ACK_PLRINFO = 2,
		CMD_ADDSTR = 3,
		CMD_ADDMAG = 4,
		CMD_ADDDEX = 5,
		CMD_ADDVIT = 6,
		CMD_SBSPELL = 7,
		CMD_GETITEM = 8,
		CMD_AGETITEM = 9,
		CMD_PUTITEM = 10,
		CMD_RESPAWNITEM = 11,
		CMD_ATTACKXY = 12,
		CMD_RATTACKXY = 13,
		CMD_SPELLXY = 14,
		CMD_TSPELLXY = 15,
		CMD_OPOBJXY = 16,
		CMD_DISARMXY = 17,
		CMD_ATTACKID = 18,
		CMD_ATTACKPID = 19,
		CMD_RATTACKID = 20,
		CMD_RATTACKPID = 21,
		CMD_SPELLID = 22,
		CMD_SPELLPID = 23,
		CMD_TSPELLID = 24,
		CMD_TSPELLPID = 25,
		CMD_RESURRECT = 26,
		CMD_OPOBJT = 27,
		CMD_KNOCKBACK = 28,
		CMD_TALKXY = 29,
		CMD_NEWLVL = 30,
		CMD_WARP = 31,
		CMD_CHEAT_EXPERIENCE = 32,
		CMD_CHEAT_SPELL_LEVEL = 33,
		CMD_DEBUG = 34,
		CMD_SYNCDATA = 35,
		CMD_MONSTDEATH = 36,
		CMD_MONSTDAMAGE = 37,
		CMD_PLRDEAD = 38,
		CMD_REQUESTGITEM = 39,
		CMD_REQUESTAGITEM = 40,
		CMD_GOTOGETITEM = 41,
		CMD_GOTOAGETITEM = 42,
		CMD_OPENDOOR = 43,
		CMD_CLOSEDOOR = 44,
		CMD_OPERATEOBJ = 45,
		CMD_PLROPOBJ = 46,
		CMD_BREAKOBJ = 47,
		CMD_CHANGEPLRITEMS = 48,
		CMD_DELPLRITEMS = 49,
		CMD_PLRDAMAGE = 50,
		CMD_PLRLEVEL = 51,
		CMD_DROPITEM = 52,
		CMD_PLAYER_JOINLEVEL = 53,
		CMD_SEND_PLRINFO = 54,
		CMD_SATTACKXY = 55,
		CMD_ACTIVATEPORTAL = 56,
		CMD_DEACTIVATEPORTAL = 57,
		CMD_DLEVEL_0 = 58,
		CMD_DLEVEL_1 = 59,
		CMD_DLEVEL_2 = 60,
		CMD_DLEVEL_3 = 61,
		CMD_DLEVEL_4 = 62,
		CMD_DLEVEL_5 = 63,
		CMD_DLEVEL_6 = 64,
		CMD_DLEVEL_7 = 65,
		CMD_DLEVEL_8 = 66,
		CMD_DLEVEL_9 = 67,
		CMD_DLEVEL_10 = 68,
		CMD_DLEVEL_11 = 69,
		CMD_DLEVEL_12 = 70,
		CMD_DLEVEL_13 = 71,
		CMD_DLEVEL_14 = 72,
		CMD_DLEVEL_15 = 73,
		CMD_DLEVEL_16 = 74,
		CMD_DLEVEL_JUNK = 75,
		CMD_DLEVEL_END = 76,
		CMD_HEALOTHER = 77,
		CMD_STRING = 78,
		CMD_SETSTR = 79,
		CMD_SETMAG = 80,
		CMD_SETDEX = 81,
		CMD_SETVIT = 82,
		CMD_RETOWN = 83,
		CMD_SPELLXYD = 84,
		CMD_ITEMEXTRA = 85,
		CMD_SYNCPUTITEM = 86,
		CMD_KILLGOLEM = 87,
		CMD_SYNCQUEST = 88,
		CMD_ENDSHIELD = 89,
		CMD_AWAKEGOLEM = 90,
		CMD_NOVA = 91,
		CMD_SETSHIELD = 92,
		CMD_REMSHIELD = 93,
		FAKE_CMD_SETID = 94,
		FAKE_CMD_DROPID = 95,
		NUM_CMDS = 96,
	} _cmd_id;

	typedef enum
	{
		SPL_NULL = 0x0,
		SPL_FIREBOLT = 0x1,
		SPL_HEAL = 0x2,
		SPL_LIGHTNING = 0x3,
		SPL_FLASH = 0x4,
		SPL_IDENTIFY = 0x5,
		SPL_FIREWALL = 0x6,
		SPL_TOWN = 0x7,
		SPL_STONE = 0x8,
		SPL_INFRA = 0x9,
		SPL_RNDTELEPORT = 0xA,
		SPL_MANASHIELD = 0xB,
		SPL_FIREBALL = 0xC,
		SPL_GUARDIAN = 0xD,
		SPL_CHAIN = 0xE,
		SPL_WAVE = 0xF,
		SPL_DOOMSERP = 0x10,
		SPL_BLODRIT = 0x11,
		SPL_NOVA = 0x12,
		SPL_INVISIBIL = 0x13,
		SPL_FLAME = 0x14,
		SPL_GOLEM = 0x15,
		SPL_BLODBOIL = 0x16,
		SPL_TELEPORT = 0x17,
		SPL_APOCA = 0x18,
		SPL_ETHEREALIZE = 0x19,
		SPL_REPAIR = 0x1A,
		SPL_RECHARGE = 0x1B,
		SPL_DISARM = 0x1C,
		SPL_ELEMENT = 0x1D,
		SPL_CBOLT = 0x1E,
		SPL_HBOLT = 0x1F,
		SPL_RESURRECT = 0x20,
		SPL_TELEKINESIS = 0x21,
		SPL_HEALOTHER = 0x22,
		SPL_FLARE = 0x23,
		SPL_BONESPIRIT = 0x24,
		SPL_INVALID = 0xFFFFFFFF,
	} spell_id;

	typedef enum
	{
		RSPLTYPE_SKILL = 0x0,
		RSPLTYPE_SPELL = 0x1,
		RSPLTYPE_SCROLL = 0x2,
		RSPLTYPE_CHARGES = 0x3,
		RSPLTYPE_INVALID = 0x4,
	} spell_type;

	typedef enum
	{
		OBJ_L1LIGHT = 0x0,
		OBJ_L1LDOOR = 0x1,
		OBJ_L1RDOOR = 0x2,
		OBJ_SKFIRE = 0x3,
		OBJ_LEVER = 0x4,
		OBJ_CHEST1 = 0x5,
		OBJ_CHEST2 = 0x6,
		OBJ_CHEST3 = 0x7,
		OBJ_CANDLE1 = 0x8,
		OBJ_CANDLE2 = 0x9,
		OBJ_CANDLEO = 0xA,
		OBJ_BANNERL = 0xB,
		OBJ_BANNERM = 0xC,
		OBJ_BANNERR = 0xD,
		OBJ_SKPILE = 0xE,
		OBJ_SKSTICK1 = 0xF,
		OBJ_SKSTICK2 = 0x10,
		OBJ_SKSTICK3 = 0x11,
		OBJ_SKSTICK4 = 0x12,
		OBJ_SKSTICK5 = 0x13,
		OBJ_CRUX1 = 0x14,
		OBJ_CRUX2 = 0x15,
		OBJ_CRUX3 = 0x16,
		OBJ_STAND = 0x17,
		OBJ_ANGEL = 0x18,
		OBJ_BOOK2L = 0x19,
		OBJ_BCROSS = 0x1A,
		OBJ_NUDEW2R = 0x1B,
		OBJ_SWITCHSKL = 0x1C,
		OBJ_TNUDEM1 = 0x1D,
		OBJ_TNUDEM2 = 0x1E,
		OBJ_TNUDEM3 = 0x1F,
		OBJ_TNUDEM4 = 0x20,
		OBJ_TNUDEW1 = 0x21,
		OBJ_TNUDEW2 = 0x22,
		OBJ_TNUDEW3 = 0x23,
		OBJ_TORTURE1 = 0x24,
		OBJ_TORTURE2 = 0x25,
		OBJ_TORTURE3 = 0x26,
		OBJ_TORTURE4 = 0x27,
		OBJ_TORTURE5 = 0x28,
		OBJ_BOOK2R = 0x29,
		OBJ_L2LDOOR = 0x2A,
		OBJ_L2RDOOR = 0x2B,
		OBJ_TORCHL = 0x2C,
		OBJ_TORCHR = 0x2D,
		OBJ_TORCHL2 = 0x2E,
		OBJ_TORCHR2 = 0x2F,
		OBJ_SARC = 0x30,
		OBJ_FLAMEHOLE = 0x31,
		OBJ_FLAMELVR = 0x32,
		OBJ_WATER = 0x33,
		OBJ_BOOKLVR = 0x34,
		OBJ_TRAPL = 0x35,
		OBJ_TRAPR = 0x36,
		OBJ_BOOKSHELF = 0x37,
		OBJ_WEAPRACK = 0x38,
		OBJ_BARREL = 0x39,
		OBJ_BARRELEX = 0x3A,
		OBJ_SHRINEL = 0x3B,
		OBJ_SHRINER = 0x3C,
		OBJ_SKELBOOK = 0x3D,
		OBJ_BOOKCASEL = 0x3E,
		OBJ_BOOKCASER = 0x3F,
		OBJ_BOOKSTAND = 0x40,
		OBJ_BOOKCANDLE = 0x41,
		OBJ_BLOODFTN = 0x42,
		OBJ_DECAP = 0x43,
		OBJ_TCHEST1 = 0x44,
		OBJ_TCHEST2 = 0x45,
		OBJ_TCHEST3 = 0x46,
		OBJ_BLINDBOOK = 0x47,
		OBJ_BLOODBOOK = 0x48,
		OBJ_PEDISTAL = 0x49,
		OBJ_L3LDOOR = 0x4A,
		OBJ_L3RDOOR = 0x4B,
		OBJ_PURIFYINGFTN = 0x4C,
		OBJ_ARMORSTAND = 0x4D,
		OBJ_ARMORSTANDN = 0x4E,
		OBJ_GOATSHRINE = 0x4F,
		OBJ_CAULDRON = 0x50,
		OBJ_MURKYFTN = 0x51,
		OBJ_TEARFTN = 0x52,
		OBJ_ALTBOY = 0x53,
		OBJ_MCIRCLE1 = 0x54,
		OBJ_MCIRCLE2 = 0x55,
		OBJ_STORYBOOK = 0x56,
		OBJ_STORYCANDLE = 0x57,
		OBJ_STEELTOME = 0x58,
		OBJ_WARARMOR = 0x59,
		OBJ_WARWEAP = 0x5A,
		OBJ_TBCROSS = 0x5B,
		OBJ_WEAPONRACK = 0x5C,
		OBJ_WEAPONRACKN = 0x5D,
		OBJ_MUSHPATCH = 0x5E,
		OBJ_LAZSTAND = 0x5F,
		OBJ_SLAINHERO = 0x60,
		OBJ_SIGNCHEST = 0x61,
		OBJ_NULL_98 = 0x62,
	} _object_id;
}