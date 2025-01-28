# Self Made Tennis Ball Machine

## Description 
  This repository contains the code, general manufacturing steps, and basic overview of the main electronic components used in creating my own tennis ball feeding machine. The code for this project originally started in Arduino IDE and is in the process of migrating to platformIO. The project is not fully complete and still has around 25% left in order to meet the original requirements and be fully automated. While this readme will not be a step by step guide on how to build a tennis ball machine from scratch, I will do my best to list key details, materials, and obstacles I faced as I continue to document my journey with this project. 

  If you happen to decide to take on the task of making your own tennis ball machine, please understand this project is not for the faint of heart. It will require technical, mechanical, and electrical knowledge as well as a  variety of power tools in order to create a functional machine. If you're still set on making your very own tennis ball machine, I strongly suggest to use this readme and my experience as a guide and reference and not a step by step tutorial. There is more than one way to make a ball machine and the specific capabilities desired differ from person to person. 
  
  I suggest looking at other machines people have made across the internet and use this guide, as well as others, to formulate your own plan and process on how you want your tennis ball machine to function and the "must have" functions that will best advance your game on the court!

## Why Did I Make This?
As an avid tennis player I am always looking for hitting partners and new ways to advance my abilities on the court. Ball machines are a great tool as they can allow you to recreate just about any shot and practice it over and over again, which was ultimately my main reason for wanting one. 

So why don't I just go and buy one?

Sure, buying an already made, modern, highly engineered, fully functioning out of the box ball machine is the most logical solution here right? Thats until I realized the price for which meets all the requirements listed below starts at $1,200 minimum. Plus, buying a machine and calling it quits does little to fullfil my consistent, unexplainable, and rather enigmatic desire to take on extensive projects I have little to absolutely no experience with. 

With that said, the only viable and clear solution here was to hurl myself into a world unbeknown to me called Mechanical Engineering.

## Requirements
There are many features across the range of ball machines currently on the market. The features that I value the most and deemed as requirements to incorporate into my build include:
* Ball Spin Control (applying topspin or backspin to the ball) with 2 separately driven throwing wheels.
* Throwing speed of at least 60mph+.
* Throwing angle adjustment.
* Portable enough to "easily" transport.
* Battery powered and maybe the option to run it off AC power.
* Auto feeding with a large holding capacity and adjustable rate for BPM (Balls Per Minute)

There are other small features here and there I have added and will continue to add, but the list above are the main requirements I defined at the start of this journey in order for my DIY ball machine to be worth it. 

## Languages Used
In the projects current state, C++ is the only language used. Currently the code is quite simple, which was the initial goal as I wanted to get everything working to start considering the large amount of mechanical engineering and changes required in this project.

Once the ball machine is complete, or close to it, I do plan on implementing many improvements and multiple languages will be used. More on this in the Future Improvements and Updates section below. 

## List of Main Materials 
When it comes to the materials list, its hard for me to make an all inclusive list down to each bolt and screw. This is largely due to the culmination of "lets see if this will work" parts, which has slowly but surely turned into a large box of indiscriminate bolts, screws,etc. In all seriousness I should have foreseen that happening and done a better job at documenting each piece of hardware I ended up using. 

As I get closer to the end I will update this list and aim to have a more detailed guide for each and every part used for the different sections. For now I'll list and provide links for the electronic components and the must have hardware pieces. 
### Electronics 
* <font color="green">Arduino Mega R3 2560 </font>

  <!-- <p align="center"> -->
  <img src="images/arduino-mega-r3.jpg" alt="Arduino Mega R3 2560" width="50%" style="margin-top: 20px; margin-bottom: 20px;">
<!-- </p> -->

  * I chose this MCU dev board largely due to the many IOs. The ball machine has multiple motors and controls so we need a good amount of analog, digital, and pwm capable IOs. 

<br><br>
* <font color="green">(2) 150W 24V, 5500RPM Permanent Magnet DC Motors (For the Throwing Wheels)</font>

  <img src="images/ball-machine-motors.png" alt="Ball Machine Throwing Motors" width="55%" style="margin-top: 20px; margin-bottom: 20px;">

  * There are multiple motor options you can use for the throwing wheels and it will largely depend on how fast you want the balls to be launched, and  also the power supply you choose for powering the machine and its capabilities. 
  * Permanent Magnet motors are the norm for most ball machines and are usually whats used in the name brand ones on the market.
  * Regardless of which motors you go with, there are a few important factors you have to consider...
    1. The stall current rating for the motors.
    2. The motors RPMs. 

  * To break this down further, The Stall Current is the amount of current a DC motor draws when it's powered but not spinning. It's the highest current a motor can draw. 
  
    In our situation, the way the throwing wheels shoot the ball from 0 to 60+ mph is by compressing the ball and then releasing the energy. As the tennis ball is being compressed the motors have to work harder in order to continue spinning at the speed and not stall out in order to successfully shoot the ball. This is why the rated stall current plays a massive role in the overall capabilities of the tennis ball machine. The more the ball can be compressed, the faster it can go.  

  * The RPM rating matters because it influences shot speed, spin control, consistency, training effectiveness, and the overall performance of the tennis ball machine. In order to meet the requirement of throwing a ball 60+ mph, the motors have to be able to spin fast enough. 

<br><br>
* <font color="green">MDD10A Cytron Dual Channel 10A DC Motor Driver </font>

  <img src="images/MDD10A-motor-driver .png" alt="Motor Driver For Throwing Motors" width="55%" style="margin-top: 20px; margin-bottom: 20px;">

  * Now that we have the throwing wheel motors, we need a driver that can supply enough power and meets the requirements. This specific driver is a 2 channel bi-directional driver which is capable of supplying up to 10amps at 30volts per channel. This meets the requirements for the throwing motors and gives a nice cushion for any spikes in current the system may experience. 
  * Another capability this specific driver has is its ability for bi-directional control of each channel. That means we can control each motor's direction independently from one another which is required for a ball machine that has 2 throwing wheels. As explained previously, in order for the ball to shoot, the throwing wheels must grab it and compress it. This means the wheels will have to spin in opposite directions from one another otherwise it cant grab the ball. 
  * lastly, this driver has PWM pins that we will utilize and connect to the our Arduino microcontroller. PWM stands for Pulse With Modulation which is a technique that uses pulses of varying width to represent a signal. It's used to control the average power or amplitude of an electrical signal. This is what we will use vary and control the speed of each motor. 
  * There are many drivers you can chose from and 2 separate drivers for each motor is also an option.

  


 



## Tests

## Next Steps

## Future Improvements and Updates 

## Questions 
