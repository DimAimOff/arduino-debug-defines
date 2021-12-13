# arduino-debug-defines
Usefull option for remove Serial debugging with one char change.

Instead of using <b>Serial</b>.<i>print</i> or <b>Serial</b>.<i>println</i><br>
good to use <b>__dbg</b> with variations to quickly switch between printing to COM-port On/Off

E.g.<br>
Instead of:<br>
<code>Serial.print( "x = " ); Serial.println( x );</code><br>
do this:<br>
<code>__dbgln( "x = ", x );</code><br>

And then turn debug outputs to Off with one char:<br>
<code>#define DEBUG 0</code>

Thank you https://github.com/RalphBacon<br>
for this idea!<br>
https://www.youtube.com/watch?v=--KxxMaiwSE
