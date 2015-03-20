//macroBar.ino Copyright 2015 Paul Beaudet ~ See Licence for details
//four key bar for key macros
//uses the Arduino Micro or Leonardo and 4 tact or machnical keyswitch wired
//from pin to ground. Set desired pins in button.ino

//set custom keys from left to right
byte customKeys[] = { 'r', 'k',  'm',  ' ' };

void setup()
{
  buttonUp();
  Keyboard.begin();
}

void loop()
{
  buttonUpdate();//from buttons.ino ~ monitors pins *no delays in code*
  int buttonState = trueChord(0);//buttons.ino ~ Takes current reading
  if(buttonState)
  {
    if(byte printable = findButtonType(buttonState))//detects printable char
    {
      Keyboard.write(printable); //types printable char
    }
  }
  
}

byte findButtonType(int chord)
{
  for(byte i = 0; i < 4; i++)
  {
    if(chord == 1 << i){return customKeys[i];}
  }
  return 0;
}
