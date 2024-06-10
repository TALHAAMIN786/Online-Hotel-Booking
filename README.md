# Online-Hotel-Booking
The Online Hotel Booking System in C++ automates room reservations, offering features like user registration, room search, booking, payment integration, and profile management. Administrators can manage rooms, bookings, and users through a dedicated panel.

## Features

- **View Hotels by City**: Display a list of hotels in different cities with their room availability.
- **Book Rooms**: Book single or double rooms, optionally add scenery to rooms, and specify the number of days for the stay.
- **Input Validation**: Ensure correct formats for CNIC, phone numbers, and other user inputs.
- **Save and Display Guest Information**: Save booking details to a file and retrieve them using the guest's CNIC.
- **Cancel Bookings**: Cancel existing bookings by providing the guest's CNIC.
- **Random Room Availability**: Simulate room availability using random generation.

## Dependencies

- C++ Standard Library
- `cstdlib` for random number generation
- `ctime` for seeding the random number generator
- `conio.h` for console input handling (platform-specific)
- `fstream` for file operations

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/hotel-booking-system.git
    cd hotel-booking-system
    ```

2. Compile the program using a C++ compiler:
    ```bash
    g++ -o HotelBookingSystem main.cpp
    ```

3. Run the program:
    ```bash
    ./HotelBookingSystem
    ```

## Usage

### Main Menu

When the program starts, the main menu provides options to:

1. **Display All Hotels**: View hotels and their room availability in various cities.
2. **Check Booking**: Enter CNIC to view existing booking details.
3. **Book Rooms**: Select a city and a hotel, then proceed with booking rooms.
4. **Cancel Booking**: Enter CNIC to cancel an existing booking.
5. **Exit**: Exit the program.

### Booking Process

1. **Display Hotels in a City**:
   - Select a city from the list.
   - View a list of hotels and their room availability.

2. **Select a Hotel**:
   - Choose a hotel to see detailed room availability.

3. **Book Rooms**:
   - Specify the number of single and/or double rooms to book.
   - Optionally add scenery to the rooms.
   - Enter the number of days for the stay.
   - Provide guest information including CNIC, name, phone number, email, and check-in date.
   - The total cost is calculated and displayed.

4. **Save Guest Information**:
   - The guest information and booking details are saved to a file (`guest_info.txt`).

5. **Cancel Booking**:
   - Provide the CNIC of the booking to cancel.
   - The system searches for the booking and removes it from the file if found.

### Input Validation

- **CNIC**: Must be in the format `00000-0000000-0`.
- **Phone Number**: Must be in the format `0000-0000000`.
- **Names**: Must contain only alphabetic characters.
- **Check-In Date**: Must be in the format `DD-MM-YYYY`.
- **Number of Guests**: Must be a numeric value.

### Files

- **guest_info.txt**: Stores guest booking information. Each entry includes CNIC, names, phone number, email, check-in date, number of days of stay, number of guests, room bookings, and total cost.

## Contribution

Contributions are welcome! Feel free to open issues or submit pull requests for improvements or bug fixes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For any questions or feedback, please contact [your email address].

---

This detailed description provides an overview of the functionality, usage, and structure of the Hotel Booking System. It serves as a guide for users and developers who are interested in using or contributing to the project.
