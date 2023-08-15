# Vehicle Circulation Authorization Checker

This C++ program is designed to verify the authorization for vehicle circulation based on their registration number. The program determines whether a vehicle is allowed to drive on a particular day, taking into account the day of the week and the last digit of the registration number.

## Functionality

The program operates as follows:

1. The user is prompted to enter a 7-digit vehicle registration number.
2. The program checks whether the entered number is exactly 7 digits long. If not, it displays an error message and terminates.
3. The program extracts the last digit of the registration number to determine if it's even or odd (`a = (pelak % 2)`).
4. The fourth and fifth digits of the registration number are used to identify emergency vehicles (Police, Fire Brigade, Emergency) using ASCII codes.
5. The user is prompted to input the day of the week.
6. The program validates the entered day and displays an error message if it's not a valid day name (Monday through Sunday).
7. Depending on the day and the last digit of the registration number, the program determines whether the vehicle is authorized to drive on that day.

## Vehicle Circulation Rules

- **Even Days**: Vehicles with even-numbered registration plates are allowed to circulate on odd-numbered days. These include Saturdays, Mondays, and Wednesdays.
- **Odd Days**: Vehicles with odd-numbered registration plates are allowed to circulate on even-numbered days. These include Sundays, Tuesdays, and Thursdays.
- **Free Day**: Fridays are designated as free days, meaning all vehicles have permission to circulate regardless of their registration number.

## License Plate Structure

A vehicle's license plate consists of a 7-digit number. The fourth and fifth digits represent the corresponding letter in the plate code, using the ASCII code for uppercase Latin letters. The program utilizes the ASCII codes for the following plate codes:

- Police (P)
- Fire Brigade (F)
- Emergency (E)

## Example

An example of a license plate structure:
```
12380567
```
In this case, the fourth and fifth digits (80) correspond to the letter "P," indicating a Police vehicle.

## Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Follow the prompts to enter the vehicle registration number and the day of the week.
4. The program will then display whether the vehicle is authorized to circulate on the entered day.

## Note

This program is intended for educational purposes and may require adjustments or enhancements for real-world use cases.

Feel free to modify, distribute, and utilize the code as needed. If you encounter any issues or have suggestions for improvements, please contribute by opening an issue or pull request on this GitHub repository. Your feedback is valuable!