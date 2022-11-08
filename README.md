# connected-jacket

Lyna Saoucha
Mayura Subramaniam

A jacket with lights in it that change colors with your heart pulse.

#Project journal


## Principle of the project

We had two distinct ideas at the beginning: to use a heart sensor to perceive the pulse, and to create a light garment which changes according to the movement of the person who wears it or according to the environment.

We decided to combine these ideas and create a garment (t-shirt or jacket..., unisex and easy to put on/off) equipped with LEDs linked by ARDUINO to a heart rate sensor.

## Inspirations

**Light Clothing**

Clara Daguin
Hussein Chalayan
Zac Posen
Behnaz Farahi

**Heart Sensor**

- https://www.instructables.com/id/Wireless-Heartbeat-Monitor-Part-I/
- https://www.instructables.com/id/ECG-Monitoring-System-by-Using-Arduino-or-AD8232/

## Creation

We used ARDUINO, a Base Shield V2 (Seeed studio), an LED and a resistor to first measure the heart rate, then turn on the LED and change its intensity according to the heart rate.

![zjqb](https://user-images.githubusercontent.com/46900484/200615127-ba573833-2c7a-4163-9377-1dc569e1438c.png)

https://youtu.be/Lx0nLdErSyQ

Soldering and testing of the LED strip, with the help of this site: http://www.fablabredon.org/wordpress/2017/12/17/lumiere-sur-larduino-avec-de-la-couleur-et-des-led/ and http://www.fablabredon.org/wordpress/2019/01/02/ruban-de-led-le-retour/

![hvaw](https://user-images.githubusercontent.com/46900484/200615326-147e0f37-b947-4a4a-9b13-6148cee07e7b.png)

![r6x9](https://user-images.githubusercontent.com/46900484/200615357-a8978c3a-719e-4c0a-9c13-5979d5171135.png)

https://youtu.be/twIl-URM1Go

After successfully manipulating the LED string with the Arduino, a program was written to connect the string to the heart rate sensor. The garland turns on and off following the pulse data. Then, we modified the program so that with each beat, the lights change colors: we have 8 colors in all.

Try to change the program: make sure that the beats are translated by variations in light intensity, and that the color depends on the heart rate. For example: between 50 and 60 bpm = blue / between 60 and 70 bpm = green / between 70 and 80 bpm = orange, etc... (perhaps with a smaller range of values, to have more color variations)

Test on Arduino Nano

## Final product

![pf8x](https://user-images.githubusercontent.com/46900484/200615681-b4195c3d-f77d-46ae-b4c2-c5d4c7133533.png)

![euo1](https://user-images.githubusercontent.com/46900484/200615690-bee2f32b-35d3-45e6-9974-d10091a14922.png)

https://youtu.be/OOlMzG-E_K8
