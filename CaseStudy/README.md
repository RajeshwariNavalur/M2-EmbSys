# Description

# Case study on Induction Stove(Cook)
 
* ##  Basic working idea of induction stove
* The Induction Stove\cooktop consists of a surface( usually made of glass), under which  there is a coiled metal induction element. A magnetic field is created as electricity flows into the coils. Within this field the cookwares are placed, these ferromagnetic cookware functions as the second conductor, and a current is produced onto it.This generates the Eddy currents  within the cookware, which has its own magnetic field. This in turn opposes the induction element's currents. Energy produced by the opposing magnetic fields is released in the form of heat within the cookware (or vessel), due to this the contents in the cookware also gets heated.

![image](https://user-images.githubusercontent.com/98839182/154838130-46945582-1240-45e6-977f-aed2dd4fa170.PNG)



## Block Diagram of embedded system in a Induction Stove(cook)
![case study](https://user-images.githubusercontent.com/98839182/154838136-a203cebd-019b-4678-b0f0-a49c12629a5e.PNG)



* Microcontroller :  The basic controlling block the system
* Power Supply switch :  Used  to get the input power in order to the run machine.
* Rectifier circuit Used for current conversion that is from AC to DC and Automatic voltage Regulator for limiting the possible  radiation hazards
* User entry block :  It is used to take the input from the user with the help of touch sensor. example: commercially available induction stove\cook have the options like: pan, Curry, Milk, water, idly, tea etc.There is also an option to set the required time and to increase or decrease heat
* LED Display :  This is used to display the option selected by the user, the temperature or the timing.
* Vessel Sensor : This is used to detect whether the  vessel is placed on cooktop and the cookwares  used are Induction friendly or not
* Voltage and current  measurement :  This is done to check the level of input current and voltage in order to protect the device and for power control.
* Temperature Sensor :  Used to measure and set the temperature as per the option given by the user.
* Cooling fan  circuit :  To reduce the heat that is produced while the machine is ON and to cool the devices placed inside.
* Timer: Timers are used to set the timing as per the user's option.
Induction Coil :  Use to produce the required heat.

# V Model
![Vmodel](https://user-images.githubusercontent.com/98839182/154838144-54c6a596-d881-4a77-a6fc-0df5cc9eb75f.PNG)

## Requirements
* The primary step in any project/case study is to collect the user and market Requirements, which are used to build the objectives of the project
## * High Level Requirements
* Switching circuit.
* Cooking Options.
* Detection of Vessel.
* Producing enough amount of heat to cook.

 
 ## * Low Level Requirements
 * Led/lcd  Display
 * Time changing option
 * Temperature changing option,  

 ## System Design
 * This phase consists of block diagram, Flow chard, Behavioural diagram etc of the whole system

 ## Sub System Design
 * In this phase each subsystems are designed and built
 * example: In this case study, Temperature sensor sub system, heat generation sub system, etc are designed and built
 * white box testing is also carried out in this stage.
 ## Code
 * During this phase code is written and executed for the required application.

 ## Sub System Testing
 * Each of the subsystem is tested and the conclusion is drawn to check whether the subsystem is capable of working or not.
 * Black Box test is carried out in this phase.

## System Testing
* In this phase, all the susbsystems and codes are collaborate or integrated and test is carried out. If all the tests are passed then the system is sent for validation.

## Validation
* The main objectives of the product are validated, that is all the high level and low level requirements are tested, if the product passes all these testes then it is ready for the market, else it is sent back for re examining
 


