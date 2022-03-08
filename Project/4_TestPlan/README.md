# Test Plan
## High Level Test Plan
|Test ID|	Description|	 Input|	Expected output|	Actual output|	Status|
|---|---|---|----|---|---|
|1|	Power on	|Run SimulIDE|Display Induction ON|Displayed	Induction ON|	pass|
|2|	Detecting Vessel|	Push button(vessel)|	LED ON|	LED ON	|Pass||3	|Cooling Circuit|	Vessel Push Button ON|	Rotation of DC motor| 	Rotation of DC motor| 	Pass|
|3	|Take User entry|	*	FRY	*WATER *MILK *PREASURE COOKER *CURRY|	Display respective option|	Displayed respective option|	Pass|
|3	|Cooling Circuit|	Vessel Push Button ON|	Rotation of DC motor| 	Rotation of DC motor| 	Pass|
|5	|Display Heat value And Timing|	User entry| 	Display timing and heat value|	Displayed timing and heat value|	pass|

##Low level Test plan
|Test ID|	Description	Expected| Input|	Expected Output|	Actual output|	Status|
|----|----|---|---|---|---|
|1	|Read temperature of milk and water|	temperature|	Temperature display	|Temperature display|	Passed|
|2|	Time calculating|	User entry and inbuilt timer|	Buzzer	|buzzer	Passed|
|3|	Exact LED Display when input is changed|	Changes made|	Changes display on LCD|	Changes displayed on LCD|	passed|





