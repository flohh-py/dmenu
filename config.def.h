/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom */
static int incremental =
    0; /* -r  option; if 1, outputs text each time a key is pressed */
static int center =
    1; /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width = 500; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] = {"monospace:size=10"};
static char *prompt = NULL; /* -p  option; prompt to the left of input field */
static const char *dynamic =
    NULL; /* -dy option; dynamic command to run on input change */

static char *colors[][2] = {
    /*               fg         bg       */
    [SchemeNorm] = {"#bbbbbb", "#222222"},
    [SchemeSel] = {"#eeeeee", "#005577"},
    [SchemeOut] = {"#000000", "#00ffff"},
    [SchemeBorder] = {"#000000", "#005577"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 5;
/* -g option; if nonzero, dmenu uses a grid comprised of columns and lines */
static unsigned int columns = 0;
static unsigned int lineheight =
    0; /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char startpipe[] = "#";
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;

/*
 * Use prefix matching by default; can be inverted with the -x flag.
 */
static int use_prefix = 1;
