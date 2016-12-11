// See LICENSE file for copyright and license details.
// Default settings; can be overriden by command line.

// -b  option; if 0, dmenu appears at bottom
static int topbar = 0;

// -fn option overrides fonts[0]; default X11 font or font set
static const char *fonts[] = {
	"tamsyn"
};

// -p  option; prompt to the left of input field
static const char *prompt = NULL;

static const char *colors[SchemeLast][2] = {
	//               fg         bg
	[SchemeNorm] = { "#d6d6d6", "#101010" },
	[SchemeSel] =  { "#d6d6d6", "#1d1f21" },
	[SchemeOut] =  { "#000000", "#00ffff" },
};

// -l  option; if nonzero, dmenu uses vertical list with given number of lines
static unsigned int lines      = 5;
static unsigned int lineheight = 28;

// -w  option: width of dmenu, 0 means full-width
static unsigned int dmw = 800;

// Characters not considered part of a word while deleting words
// for example: " /?\"&[]"
static const char worddelimiters[] = " ";
