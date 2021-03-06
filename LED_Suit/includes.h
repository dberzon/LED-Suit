// V(ersion): Which controller code is for.
// Change manuall for compilation.
// 0 = pants
// 1 = jacket   

#define PANTS 0
#define JACKET 1
#define V PANTS 

// Debug mode
#define DEBUG 1

// Button constans
#define DEBOUNCE 50
#define PRESS_LIMIT 100

// Pins
#define B_PIN 13
#define R_PANT_PIN 6
#define L_PANT_PIN 7
#define R_CHEST_PIN 2 //R/Y
#define L_CHEST_PIN 5 // green
#define R_ARM_PIN 8 //red
#define L_ARM_PIN 11 // yellow

// Pants construction vars
#define NUM_PANT 120
#define L_PANT_STRIP 0
#define R_PANT_STRIP 1

// Chest construction vars
#define NUM_CHEST 74
#define NUM_ARM 39
#define L_CHEST_STRIP 0
#define R_CHEST_STRIP 1
#define L_ARM_STRIP 2
#define R_ARM_STRIP 3

// Compile-time definitions dependent on Version
#if V == 0
# define STRIP_LEN 120
# define NUM_STRIP 2
// Chest construction vars
#elif V == 1
# define STRIP_LEN 74
# define NUM_STRIP 4
#endif

// General vars
#define BRIGHTNESS 64
#define NUM_ANIMATIONS 9
#define FPS 60

//////////////////////////////////////////////
// Animation settings
//////////////////////////////////////////////

// Splash
#define SPLASH_FADE 80
#define SPLASH_CHANCE 100
#if V == PANTS
# define SPLASH_TAIL 6
# define NUM_SPLASH 8
// Chest construction vars
#elif V == JACKET
# define SPLASH_TAIL 4
# define NUM_SPLASH 8
#endif

// Rainbow Seizure
#if V == PANTS
# define RS_BAR_SIZE 4
#elif V == JACKET
# define RS_BAR_SIZE 8
#endif

// SparkleOsc
#define LEVEL 4
#if V == pants
# define OSC_SIZE 30
#elif V == JACKET
# define OSC_SIZE 20
#endif

// Sparkle
#define PROB 500

// Tails
#define TAIL_LEN 12

