#ifndef	__CG_TEXT_H__
#define	__CG_TEXT_H__



extern int precacheWav_i;	// Current high index of precacheWav array
#define MAX_PRECACHEWAV  256

typedef struct precacheWav_s
{
	char *wavFile;
	char textKey[8];	// The key for the text (stored in precacheText[]) to this wav file
	int speaker;
} precacheWav_t;

extern precacheWav_t precacheWav[MAX_PRECACHEWAV];


extern int precacheText_i;	// Current high index of precacheText array
#define MAX_PRECACHETEXT  512
typedef struct precacheText_s
{
	const char *key;	// Key to text
	const char *text;	// Final text
} precacheText_t;

extern precacheText_t precacheText[MAX_PRECACHETEXT];


int CG_SearchTextPrecache(char *key);
int CG_SearchWavPrecache(char *key);

// Ingame Text enum
typedef enum{
	IGT_NONE,
	IGT_PAUSED,
	IGT_MISSIONINFORMATION,
	IGT_TACTICALINFO,
	IGT_OBJECTIVES,
	IGT_NONE1,
	IGT_MISSIONINFO_UPDATED,
	IGT_FAILED,
	IGT_SUCCEEDED,
	IGT_LCARS,
	IGT_MISSIONANALYSIS,
	
	IGT_ENEMIES,
	IGT_CASULATIES,
	IGT_SHOTSFIRED,
	IGT_EFFECTIVE,
	IGT_ACCURACY,
	IGT_PUZZLESSOLVED,
	IGT_DURATION,
	IGT_ANALYSIS,

	IGT_MISSIONSUCCESSFUL,
	IGT_MISSIONFAILED,
	IGT_INADEQUATE,
	IGT_RESPONSETIME,
	IGT_SHOOTINRANGE,
	IGT_TRYAGAIN,

	IGT_ADEQUATE,
	IGT_RESPONSETIMEIMPRESSIVE,
	IGT_MARKSMAN,
	IGT_CONGRATULATIONS,

	IGT_PUZZLESSOLVED_FINAL,
	IGT_DURATION_FINAL,

	IGT_INSUBORDINATION,
	IGT_YOUCAUSEDDEATHOFTEAMMATE,
	IGT_MISSIONINFO_UPDATED2,
	IGT_RELOADMISSION,
	IGT_INSUFFICIENTENERGY,
	IGT_DIDNTPROTECTTECH,
	IGT_DIDNTPROTECT7OF9,

	IGT_NOTSTEALTHYENOUGH,
	IGT_STEALTHTACTICSNECESSARY,
	IGT_KILLEDANINNOCENTCREWMAN,
	IGT_RESISTANCEISFUTILE,
	IGT_ADDEDTOCOLLECTIVE,
	IGT_YOUAND7OF9INCOMMON,
	IGT_NAMEIS8OF12,
	IGT_WATCHYOURSTEP,
	IGT_JUDGEMENTMUCHDESIRED,
	IGT_TRAINONHOLODECK,
	IGT_WHATCOLORSHIRT,
	IGT_NOTIMPRESS7OF9,
	IGT_NEELIXFAREDBETTER,
	IGT_THATMUSTHURT,
	IGT_TUVOKDISAPPOINTED,
	IGT_STARFLEETNOTIFYFAMILY,
	IGT_TEAMMATESWILLMISSYOU,
	IGT_LESSTHANEXEMPLARY,
	IGT_SACRIFICEDFORTHEWHOLE,
	IGT_NOTLIVELONGANDPROSPER,
	IGT_BETTERUSEOFSIMULATIONS,
	IGT_SECURITYINFO_UPDATED,
	IGT_SECURITYINFO_UPDATED2,
	IGT_TOURSHOTS,
	IGT_TOURFIRED,
	IGT_TOUREFFECTIVE,
	IGT_TOURSTEALTH,
	IGT_TOUREXPLORATION,
	IGT_TOURDAMAGETAKEN,
	IGT_TOURPERFORMANCERATING,
	IGT_TOUROBJECTIVES,
	IGT_TOUROBJSUCCEEDED,
	IGT_TOUROBJFAILED,
	IGT_RACE,
	IGT_DATANOTAVAILABLE,
	IGT_NAME,
	IGT_RANK,
	IGT_UNKNOWNENTITY,
	IGT_WEAPON,
	IGT_UNKNOWNOBJECT,
	IGT_HT,
	IGT_CM,
	IGT_WT,
	IGT_KG,
	IGT_HUMAN,
	IGT_BORG,
	IGT_FERROVORE,
	IGT_KLINGON,
	IGT_MALON,
	IGT_HIROGEN,
	IGT_ETHERIAN,
	IGT_SPECIES8472,
	IGT_DREADBOT,
	IGT_HARVESTER,
	IGT_REAVER,
	IGT_AVATAR,
	IGT_VULCAN,
	IGT_BETAZOID,
	IGT_BOLIAN,
	IGT_TALAXIAN,
	IGT_BAJORAN,
	IGT_PHOTONIC,
	IGT_UNKNOWN,
	IGT_CIVILIAN,
	IGT_CREWMAN,
	IGT_ENSIGN,
	IGT_LTJG,
	IGT_LT,
	IGT_LTCOMMANDER,
	IGT_COMMANDER,
	IGT_CAPTAIN,
	IGT_MAX
} ingameTextType_t;


extern const char *ingame_text[IGT_MAX];

#endif	//__CG_TEXT_H__
