# Arduinoscope
Using an arduino analog input as a crude oscilliscope

Wiring:
- Pull down 2M ohm resistor (A0 - > Ground)
- Tie circuit ground & Arduino ground
- Probe to A0

Setup:
- Download code to Arduino
- Open Tools -> Serial Plotter
- Select baud rate equal to "rate" variable (default 19200)

Compatibility (Tested):
- Arduino Uno
- Arduino Zero
- Arduino Nano

Should work with any Arduino/Arduino compatible board, that has analog inputs

Time base - approximately 5us
