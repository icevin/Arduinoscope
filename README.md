# Arduinoscope
Using an arduino analog input as a crude oscilliscope

Wiring:
- Pull down 2M ohm resistor (A0 - > Ground)
- Tie circuit ground & Arduino ground
- Probe to A0

Time base vs baud rate:


Setup:
- Select a time base, and set the "rate" variable equal to the corresponding baud rate
- Download code to Arduino
- Open Tools -> Serial Plotter
- Select baud rate equal to what was selected earlier ("rate" variable)
