# Description

# Case study on automated temperature-controlled fan
 
* To develop an low cost, user friendly automated temperature-controlled fan regulator which regulates the speed of fan based on temperature, reduces power consumption and also responses for user entry


# V Model
![Vmodel](https://user-images.githubusercontent.com/98839182/154838144-54c6a596-d881-4a77-a6fc-0df5cc9eb75f.PNG)

## Requirements
* The primary step in any project/case study is to collect the user and market Requirements, which are used to build the objectives of the project
## * High Level Requirements
* It shall sense the temperature and humidity inside the room.
* It shall take user inputs also.
* It shall regulate the speed as per the room temperature or user entry

 
 ## * Low Level Requirements
 * Time delay between every temperature sensing action
 * Maximum and minimum speed operating range 

 ## System Design
 * This phase consists of block diagram, Flow chart, Behavioural diagram etc of the whole system.

 
 # Block Diagram 
![Fan case study](https://user-images.githubusercontent.com/98839182/155317347-f24db774-ff25-44eb-9f48-94c157783b61.PNG)

* Microcontroller : This is the heart of embedded system. This the the basic controlling block of the product.
* Temperature and humidity sensor : This sensor is used to sense the room temperature and humidity the output is fed to the microcontroller.
* Remote Control : With  help of this block the microcontroller recives the data from user.
* Power Supply : Power for the working of fan is drawn throuch this circuit. 
* EEPROM: Used to store the sensor data and user entered data.
* speed regulator: This is used to monitor and control the speed of the fan.

 ## Sub System Design
 * In this phase each subsystems are designed and built
 * example: In this case study, Temperature sensor sub system, Remote control sub system, etc are designed and built
 * white box testing is also carried out in this stage.
 ## Code
 * During this phase code for different functionality is written and executed for the required application.

 ## Sub System Testing
 * Each of the subsystem is tested and the conclusion is drawn to check whether the subsystem is capable of working or not.
 * Black Box test is carried out in this phase.

## System Testing
* In this phase, all the susbsystems and codes are collaborated or integrated and test is carried out. If all the tests are passed then the system is sent for validation.

## Validation
* The main objectives of the product are validated, that is all the high level and low level requirements are tested, if the product passes all these tests then it is ready for the market, else it is sent back for re examining
 


