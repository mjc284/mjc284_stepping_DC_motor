# mjc284_stepping_DC_motor
Complete software and hardware build of a stepping DC motor using permanent magnets.

### Video demonstration:
https://www.youtube.com/watch?v=WFz_ZSToyOA

### Concept:
![Concept](/photos/concept.png "Concept")
The main focus of this project is to find a way to precisely control the angle of a DC motor in a similar way to stepper motors. This is achieved by attaching permenant magnets to the DC motor shaft, and creating magnetic potential 'wells' around the shaft for the rotor to fall into. In simple terms, the rotor magnet wants to be adjacent to opposite poles on the stator, giving the rotor only 3 possible states to rest on. Therefore, the motor would be driven by pulses to 'step' from one state from another, which is similar to how a stepper motor moves (although the driving operation is different). 

The output of the rotor is geared down to drive a numbered disc which represents a clock. On the electrical side, a 3-legged inverter that I designed for general purpose was used, where only two of the legs are utilized as an H-bridge. The motor 'stepping' is driven in a sequence as follows: a clockwise pulse, momentary off-state, a shorter anticlockwise pulse, and finally an off state. The anticlockwise pulse is necessary to prevent the rotor from rotating beyond the next desired state.

### Photos:
![Front](/photos/front.jpeg "Front")
![Left](/photos/left.jpeg "Left")
![Right](/photos/right.jpeg "Right")
![Top](/photos/top.jpeg "Top")

### Project Workflow:
- All the hardware and circuit were modelled using Fusion 360.
- Some of the parts were milled from 6mm MDF using a desktop-CNC. 
- 3D-printed some of the parts with postprocessing from Ultimaker-Cura.
- PCB was manufactured from the Fusion 360 gerber file by Chinese PCB services.
- Arduino-pro mini was programmed and used to drive the circuit.

### Possible Improvements:
- A better way to machine the parts with better accuracy would prevent the rotor from skipping steps occasionally.
- The rotor oscillates when it falls into the magnetic potential well. Perhaps this may be modelled as a harmonic oscillator and the stator dampened critically to prevent such oscillations.
