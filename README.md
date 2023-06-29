# Smart-Street-Light-Controller
 The purpose of this project is to control the street lights depending on   the sunlight and weather conditions. 

 # Street Light Controller using Arduino, Light Dependent Resistor, and IR Sensors

This project aims to develop a street light controller using Arduino, a Light Dependent Resistor (LDR), and IR sensors. The controller automatically adjusts the brightness of street lights based on ambient light conditions and detects the presence of vehicles or pedestrians using IR sensors. The following points provide a detailed description of the project:

## Introduction:
1. The street light controller is designed to improve energy efficiency and enhance safety on the streets by providing adaptive lighting based on environmental factors.
2. The controller utilizes Arduino, an open-source microcontroller platform, which allows for flexibility and easy integration of various sensors and components.
3. The Light Dependent Resistor (LDR) is used to measure the ambient light levels and provide feedback to the controller.
4. IR sensors are employed to detect the presence of vehicles or pedestrians, triggering appropriate lighting adjustments.

## Technology Used:
1. Arduino: The Arduino microcontroller platform serves as the central control unit for the street light controller. It provides the necessary processing power and I/O capabilities to interface with the sensors and control the lighting system.
2. Light Dependent Resistor (LDR): The LDR is a passive component that changes its resistance based on the amount of light falling on its surface. It acts as a sensor to measure ambient light levels.
3. IR Sensors: Infrared (IR) sensors are used to detect the presence of objects in their detection range. These sensors emit and detect infrared radiation, enabling the controller to detect vehicles or pedestrians passing by the streetlights.

## Key Features:
1. Adaptive Lighting: The controller adjusts the brightness of street lights based on ambient light conditions. It ensures that the lights are dimmed during daylight or well-lit areas, reducing energy consumption.
2. Motion Detection: The IR sensors detect the presence of vehicles or pedestrians, allowing the controller to activate additional lights or increase the brightness in the detected area, enhancing safety.
3. Customizable Thresholds: The system allows for easy customization of the ambient light thresholds and sensitivity levels of the IR sensors, enabling fine-tuning according to specific requirements.
4. Real-time Monitoring: The street light controller can provide real-time monitoring of ambient light levels, vehicle or pedestrian detection, and the status of each street light through a connected interface or display.
5. Energy Efficiency: By dynamically adjusting the brightness levels of street lights, the system promotes energy conservation and reduces overall electricity costs.

## Installation and Setup:
1. Clone the repository to your local machine using the command: `git clone <repository-url>`
2. Connect the Arduino board to your computer and upload the provided Arduino sketch.
3. Ensure the proper wiring connections between the Arduino board, LDR, and IR sensors as specified in the documentation.
4. Modify the code to adjust the threshold values and customize the behaviour of the street light controller if needed.
5. Power up the system and observe the automatic lighting adjustments based on ambient light and motion detection.

## Future Enhancements:
1. Integration with a central monitoring system for remote management and control of street lights.
2. Integration of additional sensors, such as temperature or humidity sensors, to gather more environmental data for improved control algorithms.
3. Implementing advanced algorithms for predictive lighting control, optimizing energy consumption, and providing adaptive lighting based on historical data.

## Contributing:
Contributions to this project are welcome. Feel free to open issues or submit pull requests to suggest enhancements, report bugs, or share your ideas for further development.

## License:
This project is licensed under the [MIT License](https://opensource.org/licenses/MIT). Please refer to the LICENSE file for more information.

## Acknowledgements:
We would like to thank the open-source community and contributors for their valuable resources and support that made this
 
