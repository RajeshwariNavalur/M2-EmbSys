# Description
## Case study on Induction Stove(Cook)
* Basic working idea of induction stove
* Under the Induction cooktop's surface(usually glass), there is a coiled metal induction element. A magnetic field is created as electricity flows into the coils. Within this field the cookwares are placed, these  ferromagnetic cookware functions as the second conductor, and a current is produced onto it.This generates the Eddy currents  within the cookware, which has its own magnetic field. This inturn opposes the induction element's currents. Energy cproduced by the opposing magnetic fields is released in the form of heat within the cookwear (or vessel), due to this the contents in the cookwaer also get heated
 ![image](https://user-images.githubusercontent.com/98839182/154834427-2dbd9ed1-419b-43fd-90ad-0e2458991bde.PNG)




# Block Daigram of embedded system in a Induction Stove(cook)
![case study](https://user-images.githubusercontent.com/98839182/154834134-520da511-49fd-406a-82b2-adc671a01ce6.PNG)



* Microcontroller : The basic controlling block the system
* Power Supply switch: To get the input power in order to the run machine.
* Rectifier circuit: Used for current conversion that is from AC to DC and Automatic voltage Regulator for limiting the possible  radiation hazards
* User entry block: It is used to take the input from the user with hepl of touch sensor. example: commercially avilable induction stove\cook have the options like: Dosa, Chapatti, Curry, Milk,watter, Idly, Tea etc.There is also an option to set the required time.
* LED Display: Thi is used to display the option selected by the user, the temperatute or the timing.
* Vessel Sensor : This is used to detect whether the  vessel is placed on cooktop and the cookwears  used are Induction friendly or not
* Voltage and current measurment: This is done to check the level of input current and voltage in order to protect the device and for power control.
* Temperature Sensor: Used to measure and set the temperature as per the option given by the user.
* Cooling fan  circuit : To reducr the heat that is produced while the machine is ON and to cool the devices placed inside.
* Timer: Timers are used to set the timing as the the user's option.
Induction Coil: Use to produce the required heat.

# Requirments
## High Level Requirments
* Switching circuit.
* Cooking Options.
* Detection of Vessel.
* Producing enough amount of heat to cook.

 
 ## Low level requirments
 * Led/lcd  Display
 * Time changing option
 * Temperature changing option


