#MacroBar 
#####*Simple way to add macro keys with an Arduino*

Step 1: modify buttons.ino "buttons" array to include the Arduino pin numbers to be used (up to 16)

Step 2: modify macroBar.ino "customKeys" array to include the characters you wish to be sent

 More complicated macros would need to programed- just keep the following in mind

-   trueChord() returns an int: an int comprises of 16 bits each bit representing whether a button is press or not

- An if statement can catch the press intended and do something more complex like ctrl-S
- Use time tracking to for more complex macros, the delay() function will block buttonUpdate() from working properly

Step 3: Select proper board in the IDE and Upload code to Arduino
Step 4: Unplug Arduino and wire buttons in. The simple way to do this is to use a breadboard and breadboardable tack switches. Wire one side of the button to ground and the other to one of the pins outlined in the "buttons" array mentioned in step 1. Repeat till all pins are wired.

Step 5: Plug back in test and modify! Have fun. 
