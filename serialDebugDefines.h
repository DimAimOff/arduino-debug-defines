/*
  Created by Dmitry AimOff
  13-12-2021
  
  simple enable/disable serial output debug info
  
  possibility to print in one line two or more outputs
*/

#define DEBUG 0 // debug enable is 1

#define __dbgstart(x) Serial.begin(x)                   // initial Serial communication
#define __dbg(x) Serial.println(x)                      // one variable output with new line
#define __dbgln(x,y) Serial.print(x); Serial.println(y) // two variables output with new line
#define __dbglone(x) Serial.print(x)                    // one variable output without new line
#define __dbgl(x,y) Serial.print(x); Serial.print(y)    // two variables output without new line
#else // clear all debug outputs and initial
#define __dbgstart(x)
#define __dbg(x)
#define __dbgln(x,y)
#define __dbglone(x)
#define __dbgl(x,y)
#endif
