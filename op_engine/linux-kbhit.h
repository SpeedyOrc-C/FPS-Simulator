
//定义按键们的宏
#define     ESC     "\033"
#define     UP      "\033[A"
#define     DOWN    "\033[B"
#define     LEFT    "\033[D"
#define     RIGHT   "\033[C"
#define     SPACE   " "
#define     A   "a"
#define     B   "b"
#define     C   "c"
#define     D   "d"
#define     E   "e"
#define     F   "f"
#define     G   "g"
#define     H   "h"
#define     I   "i"
#define     J   "j"
#define     K   "k"
#define     L   "l"
#define     M   "m"
#define     N   "n"
#define     O   "o"
#define     P   "p"
#define     Q   "q"
#define     R   "r"
#define     S   "s"
#define     T   "t"
#define     U   "u"
#define     V   "v"
#define     W   "w"
#define     X   "x"
#define     Y   "y"
#define     Z   "z"
#define     ENTER   "\n"


void term_setup(void (*sighandler)(int));
void term_restore();
bool kbhit();
bool keydown(const char* key);