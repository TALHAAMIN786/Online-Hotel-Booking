#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<conio.h>
#include<fstream>

using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"

const int SCENERY_PRICE_SINGLE = 1500;
const int SCENERY_PRICE_DOUBLE = 3000;

const int SINGLE_ROOM_PRICE = 5000;
const int DOUBLE_ROOM_PRICE = 10000;

struct Guest
{
    string firstName;
    string secondName;
    string cnic;
    string phoneNumber;
    string email;
    string checkInDate;
    string daysOfStay;
    string numberOfGuests;
};

struct RoomAvailability
{
    int singleRooms;
    int doubleRooms;
};

void displaybuilding()
{
    cout << endl << endl << endl;
    cout << BLUE;
    cout << "          ____________                                                           ____________      " << endl;
    cout << "         /            \\                                                         /            \\    " << endl;
    cout << "        /              \\                                                       /              \\   " << endl;
    cout << "       /________________\\                                                     /________________\\  " << endl;
    cout << "       |   _   _   _   _ |                                                    |   _   _   _   _ |  " << endl;
    cout << "       | |_| |_| |_| |_| | " << "             _______________________             " << "  | |_| |_| |_| |_| | " << endl;
    cout << "       | |_| |_| |_| |_| | " << "            |                       |            " << "  | |_| |_| |_| |_| | " << endl;
    cout << "       | |_| |_| |_| |_| | " << "            |     ALI AND TALHA     |            " << "  | |_| |_| |_| |_| | " << endl;
    cout << "       |   _   _   _   _ |  " << "  _________||_____________________||__________   " << " |   _   _   _   _ | " << endl;
    cout << "       | |_| |_| |_| |_| | " << "  |    |    |    |    |    |    |    |    |    |  " << " | |_| |_| |_| |_| | " << endl;
    cout << "       | |_| |_| |_| |_| | " << "  |    |    |    |    |    |    |    |    |    |  " << " | |_| |_| |_| |_| | " << endl;
    cout << "       | |_| |_| |_| |_| | " << "  |----|----|----|----|----|----|----|----|----|  " << " | |_| |_| |_| |_| | " << endl;
    cout << "       |   _   _   _   _ |  " << " |    |    |    |    |    |    |    |    |    |  " << " |   _   _   _   _ |  " << endl;
    cout << "       | |_| |_| |_| |_| | " << "  |    |    |    |    |    |    |    |    |    |  " << " | |_| |_| |_| |_| | " << endl;
    cout << "       | |_| |_| |_| |_| | " << "  |----|----|----|----|----|----|----|----|----|  " << " | |_| |_| |_| |_| | " << endl;
    cout << "       | |_| |_| |_| |_| | " << "  |    |    |    |    |    |    |    |    |    |  " << " | |_| |_| |_| |_| | " << endl;
    cout << "       |   _   _   _   _ |  " << " |    |    |    |    |    |    |    |    |    |  " << " |   _   _   _   _ |  " << endl;
    cout << "       | |_| |_| |_| |_| | " << "  |----|----|----|----|----|----|----|----|----|  " << " | |_| |_| |_| |_| | " << endl;
    cout << "       | |_| |_| |_| |_| | " << "  |    |    |    |    |    |    |    |    |    |  " << " | |_| |_| |_| |_| | " << endl;
    cout << "       | |_| |_| |_| |_| | " << "  |    |    |    |    |    |    |    |    |    |  " << " | |_| |_| |_| |_| | " << endl;
    cout << "       |    _________    |  " << " |----|----|----|----|----|----|----|----|----|  " << " |    _________    |  " << endl;
    cout << "       |   |         |   |  " << " |    |    |    |    |    |    |    |    |    |  " << " |   |         |   |  " << endl;
    cout << "       |   |_________|   |  " << " |    |    |    |    |    |    |    |    |    |  " << " |   |_________|   |  " << endl;
    cout << "       |___|_________|___|  " << " |____________________________________________|  " << " |___|_________|___| " << endl;
    cout << RESET;
    cout << endl << endl << endl << endl << endl;
    cout << CYAN;
    cout << "                ************************************************************************" << endl;
    cout << "                *                                                                      *" << endl;
    cout << "                *                          HOTEL BOOKING SYSTEM                        *" << endl;
    cout << "                *                                                                      *" << endl;
    cout << "                ************************************************************************" << endl;
    cout << endl;
    cout << RESET;
    cout << endl << endl << endl;
}

void getRoomAvailability(RoomAvailability& availability)
{
    int totalRooms = rand() % 101; // Random number of rooms between 0 and 100
    availability.singleRooms = rand() % (totalRooms + 1); // Random number of single rooms between 0 and totalRooms
    availability.doubleRooms = totalRooms - availability.singleRooms; // Remaining rooms are double rooms
}

void displayAllHotels()
{
    string cities[] = { "Lahore", "Karachi", "Peshawar", "Multan", "Hyderabad", "Swat", "Rawalpindi", "Islamabad" };
    RoomAvailability availability;

    for (const string& cityName : cities)
    {
        cout << "\t\t\t\t\tHotels in " << cityName << ":" << endl;

        string hotels[5];

        if (cityName == "Lahore")
        {
            hotels[0] = "Pearl Continental Hotel Lahore";
            hotels[1] = "Avari Lahore";
            hotels[2] = "Falettis Hotel Lahore";
            hotels[3] = "Hospitality Inn Lahore";
            hotels[4] = "Park Lane Hotel Lahore";
        }
        else if (cityName == "Karachi")
        {
            hotels[0] = "Pearl Continental Hotel Karachi";
            hotels[1] = "Marriott Hotel Karachi";
            hotels[2] = "Mövenpick Hotel Karachi";
            hotels[3] = "Avari Towers Karachi";
            hotels[4] = "Karachi Marriott Hotel";
        }
        else if (cityName == "Peshawar")
        {
            hotels[0] = "Pearl Continental Hotel Peshawar";
            hotels[1] = "Shelton's Rezidor Peshawar";
            hotels[2] = "Greens Hotel Peshawar";
            hotels[3] = "Park Hotel Peshawar";
            hotels[4] = "The Smart Hotel Peshawar";
        }
        else if (cityName == "Multan")
        {
            hotels[0] = "Ramada Multan";
            hotels[1] = "Hotel One Multan";
            hotels[2] = "Fortalice Multan";
            hotels[3] = "Grace Crown Hotel Multan";
            hotels[4] = "Dreamland Hotel Multan";
        }
        else if (cityName == "Hyderabad")
        {
            hotels[0] = "Indus Hotel Hyderabad";
            hotels[1] = "Hotel Faran Hyderabad";
            hotels[2] = "Hotel City Gate Hyderabad";
            hotels[3] = "Hotel Royal Palace Hyderabad";
            hotels[4] = "Hotel Zeeshan Hyderabad";
        }
        else if (cityName == "Swat")
        {
            hotels[0] = "Swat Serena Hotel";
            hotels[1] = "Swat Continental Hotel";
            hotels[2] = "Swat View Hotel";
            hotels[3] = "Rock City Resort Swat";
            hotels[4] = "White Palace Hotel Swat";
        }
        else if (cityName == "Rawalpindi")
        {
            hotels[0] = "Pearl Continental Hotel Rawalpindi";
            hotels[1] = "Hotel Shalimar Rawalpindi";
            hotels[2] = "Royalton Hotel Rawalpindi";
            hotels[3] = "Flashman's Hotel Rawalpindi";
            hotels[4] = "Grace Crown Hotel Rawalpindi";
        }
        else if (cityName == "Islamabad")
        {
            hotels[0] = "Serena Hotel Islamabad";
            hotels[1] = "Marriott Hotel Islamabad";
            hotels[2] = "Ramada by Wyndham Islamabad";
            hotels[3] = "Islamabad Serena Hotel";
            hotels[4] = "Hotel One Super";
        }
        else
        {
            cout << "No hotels available for this city." << endl;
            return;
        }

        for (int i = 0; i < 5; ++i)
        {
            cout << YELLOW;
            cout << "\t\t\t\t\t" << (i + 1) << ". " << hotels[i] << endl;
            getRoomAvailability(availability);
            cout << RESET;
            cout << CYAN;
            cout << "\t\t\t\t\tRoom availability:" << endl;
            cout << RESET;
            if (availability.singleRooms == 0 && availability.doubleRooms == 0)
            {
                cout << RED << "\t\t\t\t\tBooking is full" << RESET << endl;
            }
            else if (availability.singleRooms == 0)
            {
                cout << RED << "\t\t\t\t\tNo single bedrooms available, " << RESET << BOLD << availability.doubleRooms << RESET << GREEN << " double bedrooms available" << RESET << endl;
            }
            else if (availability.doubleRooms == 0)
            {
                cout << RED << "\t\t\t\t\tNo double bedrooms available, " << RESET << BOLD << availability.singleRooms << RESET << GREEN << " single bedrooms available" << RESET << endl;
            }
            else
            {
                cout << "\t\t\t\t\t" << BOLD << availability.singleRooms << RESET << GREEN << " single bedrooms, " << RESET << BOLD << availability.doubleRooms << RESET << GREEN << " double bedrooms available" << endl;
            }
            cout << "\t\t\t\t\t-------------------------------------------" << endl;
            cout << RESET;
            cout << endl << endl;
        }

    }
}

void saveGuestInfo(const Guest& guest, int singleRoomBooking, int doubleRoomBooking, int totalCost, int numberofdays)
{
    ofstream outFile("guest_info.txt", ios::app);
    if (outFile.is_open())
    {
        outFile << "\t\t\t\t\t| CNIC: " << guest.cnic << endl;
        outFile << "\t\t\t\t\t| First Name: " << guest.firstName << endl;
        outFile << "\t\t\t\t\t| Second Name: " << guest.secondName << endl;
        outFile << "\t\t\t\t\t| Phone Number: " << guest.phoneNumber << endl;
        outFile << "\t\t\t\t\t| Email: " << guest.email << endl;
        outFile << "\t\t\t\t\t| Check-In Date: " << guest.checkInDate << endl;
        outFile << "\t\t\t\t\t| Days Of Stay: " << numberofdays << endl;
        outFile << "\t\t\t\t\t| Number Of Guests: " << guest.numberOfGuests << endl;
        outFile << "\t\t\t\t\t| Single Rooms Booked: " << singleRoomBooking << endl;
        outFile << "\t\t\t\t\t| Double Rooms Booked: " << doubleRoomBooking << endl;
        outFile << "\t\t\t\t\t| Total Cost: " << totalCost << " PKR" << endl;
        if ((singleRoomBooking * SCENERY_PRICE_SINGLE) + (doubleRoomBooking * SCENERY_PRICE_DOUBLE) > 0)
        {
            outFile << "\t\t\t\t\t| Scenery Added: Yes" << endl;
            outFile << "\t\t\t\t\t| Scenery Cost: " << (singleRoomBooking * SCENERY_PRICE_SINGLE) + (doubleRoomBooking * SCENERY_PRICE_DOUBLE) << " PKR" << endl;
        }
        else
        {
            outFile << "\t\t\t\t\t| Scenery Added: No" << endl;
        }
        outFile << "\t\t\t\t\t-----------------------------------------" << endl;
        outFile.close();
    }
    else
    {
        cout << RED << "Error opening file for writing!" << RESET << endl << endl;
    }
}

void InputGuestInfo(int singleRoomBooking, int doubleRoomBooking, int totalCost, int numberofdays)
{
    cin.ignore();
    Guest guest;
    cout << YELLOW << "\t\t\t\t\tEnter details Of User " << RESET << endl << endl;
invalid_CNIC:
    cout << YELLOW << "\t\t\t\t\tEnter CNIC (00000-0000000-0):  " << RESET;
    cin >> guest.cnic;
    cout << endl;
    while (guest.cnic.length() != 15 || guest.cnic[5] != '-' || guest.cnic[13] != '-')
    {
        cout << RED;
        cout << "\t\t\t\t\tInvalid Format !" << endl;
        cout << "\t\t\t\t\tPlease Try Again !" << endl;
        cout << RESET;
        goto invalid_CNIC;
    }
    for (char i : guest.cnic)
    {
        if (i == '-')
        {
            break;
        }
        if (!(i >= '0' && i <= '9'))
        {
            cout << RED << "\t\t\t\t\tInvalid input. Please enter Numeric Values only only." << RESET << endl << endl;
            goto invalid_CNIC;
        }
    }
invalid_firstname:
    cout << YELLOW << "\t\t\t\t\tEnter First Name: " << RESET;
    cin >> guest.firstName;
    cout << endl;
    for (char i : guest.firstName)
    {
        if (!((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')))
        {
            cout << RED << "\t\t\t\t\tInvalid input!, Please enter alphabets only." << RESET << endl;
            goto invalid_firstname;
        }
    }
invalid_secondname:
    cout << YELLOW << "\t\t\t\t\tEnter Second Name: " << RESET;
    cin >> guest.secondName;
    cout << endl;
    for (char i : guest.secondName)
    {
        if (!((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')))
        {
            cout << RED << "\t\t\t\t\tInvalid input!, Please enter alphabets only." << RESET << endl << endl;
            goto invalid_secondname;
        }
    }

invalid_phone:
    cout << YELLOW << "\t\t\t\t\tEnter Phone Number(0000-0000000): " << RESET;
    cin >> guest.phoneNumber;
    cout << endl;
    while (guest.phoneNumber.length() != 12 || guest.phoneNumber[4] != '-')
    {
        cout << RED;
        cout << "\t\t\t\t\tInvalid Format !" << endl << endl;
        cout << "\t\t\t\t\tPlease Try Again !" << endl << endl;
        cout << RESET;
        goto invalid_phone;
    }
    for (char i : guest.phoneNumber)
    {
        if (i == '-')
        {
            break;
        }
        if (!(i >= '0' && i <= '9'))
        {
            cout << RED << "\t\t\t\t\tInvalid input.Please enter Numeric Values only only." << RESET << endl << endl;
            goto invalid_phone;
        }
    }
    cout << YELLOW << "\t\t\t\t\tEnter Email: " << RESET;
    cin >> guest.email;
    cout << endl;
invalid_checkin:
    cout << YELLOW << "\t\t\t\t\tEnter The Date of Check-In (DD-MM-YYYY): " << RESET;
    cin >> guest.checkInDate;
    cout << endl;
    while (guest.checkInDate.length() != 10 || guest.checkInDate[2] != '-' || guest.checkInDate[5] != '-')
    {
        cout << RED;
        cout << "\t\t\t\t\tInvalid Format !" << endl << endl;
        cout << "\t\t\t\t\tPlease Try Again !" << endl << endl;
        cout << RESET;
        goto invalid_checkin;
    }
    for (char i : guest.checkInDate)
    {
        if (i == '-')
        {
            break;
        }
        if (!(i >= '0' && i <= '9'))
        {
            cout << RED << "\t\t\t\t\tInvalid input. Please enter Numeric Values only only." << RESET << endl << endl;
            goto invalid_checkin;
        }
    }
invalid_guests:
    cout << YELLOW << "\t\t\t\t\tEnter The Number Of Guests: " << RESET;
    cin >> guest.numberOfGuests;
    cout << endl;
    for (char i : guest.numberOfGuests)
    {
        if (!(i >= '0' && i <= '9'))
        {
            cout << RED << "\t\t\t\t\tInvalid input. Please enter Numeric Values only only." << endl << RESET << endl;
            goto invalid_guests;
        }
    }
    cout << GREEN << "\t\t\t\t\tYou are All Set!" << RESET << endl << endl;

    saveGuestInfo(guest, singleRoomBooking, doubleRoomBooking, totalCost, numberofdays);
}

void displayBooking()
{
    string inputCnic;
    ifstream inFile;
    bool found = false;

cnic_prompt:
    cout << "\t\t\t\t\tEnter your CNIC to see your booking: ";
    cin >> inputCnic;

    inFile.open("guest_info.txt");

    if (inFile.is_open())
    {
        string line;
        while (getline(inFile, line))
        {
            if (line.find("CNIC: " + inputCnic) != string::npos)
            {
                found = true;
                cout << "" << line << endl << endl; // Display CNIC line
                for (int i = 0; i < 10; ++i)
                { // Display next 7 lines for complete booking info
                    if (getline(inFile, line))
                    {
                        cout << "" << line << endl << endl;
                    }
                }
                break;
            }
        }
        inFile.close();

        if (!found)
        {
            cout << RED << "\t\t\t\t\tInvalid CNIC. " << RESET << endl << endl;
        }
    }
    else
    {
        cout << RED << "\t\t\t\t\tError opening file!" << RESET << endl << endl;
    }
}

void displayHotelsInCity(const string& cityName, RoomAvailability& availability)
{
invalid:
    cout << CYAN << "\t\t\t\t\t          |  Hotels in " << cityName << ":  |" << RESET << endl;
    cout << endl << endl;

    // Array of hotel names in the city
    string hotels[5];

    if (cityName == "Lahore")
    {
        hotels[0] = "| Pearl Continental Hotel Lahore     |";
        hotels[1] = "| Avari Lahore                       |";
        hotels[2] = "| Falettis Hotel Lahore              |";
        hotels[3] = "| Hospitality Inn Lahore             |";
        hotels[4] = "| Park Lane Hotel Lahore             |";
    }
    else if (cityName == "Karachi")
    {
        hotels[0] = "| Pearl Continental Hotel Karachi    |";
        hotels[1] = "| Marriott Hotel Karachi             |";
        hotels[2] = "| Mövenpick Hotel Karachi            |";
        hotels[3] = "| Avari Towers Karachi               |";
        hotels[4] = "| Karachi Marriott Hotel             |";
    }
    else if (cityName == "Peshawar")
    {
        hotels[0] = "| Pearl Continental Hotel Peshawar   |";
        hotels[1] = "| Shelton's Rezidor Peshawar         |";
        hotels[2] = "| Greens Hotel Peshawar              |";
        hotels[3] = "| Park Hotel Peshawar                |";
        hotels[4] = "| The Smart Hotel Peshawar           |";
    }
    else if (cityName == "Multan")
    {
        hotels[0] = "| Ramada Multan                      |";
        hotels[1] = "| Hotel One Multan                   |";
        hotels[2] = "| Fortalice Multan                   |";
        hotels[3] = "| Grace Crown Hotel Multan           |";
        hotels[4] = "| Dreamland Hotel Multan             |";
    }
    else if (cityName == "Hyderabad")
    {
        hotels[0] = "| Indus Hotel Hyderabad              |";
        hotels[1] = "| Hotel Faran Hyderabad              |";
        hotels[2] = "| Hotel City Gate Hyderabad          |";
        hotels[3] = "| Hotel Royal Palace Hyderabad       |";
        hotels[4] = "| Hotel Zeeshan Hyderabad            |";
    }
    else if (cityName == "Swat")
    {
        hotels[0] = "| Swat Serena Hotel                  |";
        hotels[1] = "| Swat Continental Hotel             |";
        hotels[2] = "| Swat View Hotel                    |";
        hotels[3] = "| Rock City Resort Swat              |";
        hotels[4] = "| White Palace Hotel Swat            |";
    }
    else if (cityName == "Rawalpindi")
    {
        hotels[0] = "| Pearl Continental Hotel Rawalpindi |";
        hotels[1] = "| Hotel Shalimar Rawalpindi          |";
        hotels[2] = "| Royalton Hotel Rawalpindi          |";
        hotels[3] = "| Flashman's Hotel Rawalpindi        |";
        hotels[4] = "| Grace Crown Hotel Rawalpindi       |";
    }
    else if (cityName == "Islamabad")
    {
        hotels[0] = "| Serena Hotel Islamabad             |";
        hotels[1] = "| Marriott Hotel Islamabad           |";
        hotels[2] = "| Ramada by Wyndham Islamabad        |";
        hotels[3] = "| Islamabad Serena Hotel             |";
        hotels[4] = "| Hotel One Super                    |";
    }
    else
    {
        cout << "\t\t\t\t\tNo hotels available for this city." << endl;
        return;
    }
    // Display hotels
    for (int i = 0; i < 5; ++i) {
        cout << BLUE << "\t\t\t\t\t" << (i + 1) << ". " << hotels[i] << RESET << endl;
    }

    // Get user's choice for the hotel
    cout << endl << endl;
    int hotelChoice;
    cout << YELLOW << "\t\t\t\t\tEnter the number of the hotel to see room availability: " << RESET;
    cin >> hotelChoice;
    cout << endl;
    if (hotelChoice < 1 || hotelChoice > 5)
    {
        cout << RED << "\t\t\t\t\tInvalid choice. Please select a valid option." << RESET << endl;
        goto invalid;
    }
    cout << endl;
    getRoomAvailability(availability);
    cout << CYAN << "\t\t\t\t\tRoom availability for " << hotels[hotelChoice - 1] << ":" << RESET << endl << endl;
    if (availability.singleRooms == 0 && availability.doubleRooms == 0) {
        cout << MAGENTA << "\t\t\t\t\tBooking is full" << RESET << endl << endl;
    }
    else if (availability.singleRooms == 0) {
        cout << MAGENTA << "\t\t\t\t\tNo single bedrooms available, " << availability.doubleRooms << " double bedrooms available" << RESET << endl << endl;
    }
    else if (availability.doubleRooms == 0) {
        cout << MAGENTA << "\t\t\t\t\tNo double bedrooms available, " << availability.singleRooms << " single bedrooms available" << RESET << endl << endl;
    }
    else {
        cout << MAGENTA << "\t\t\t\t\t" << availability.singleRooms << " single bedrooms, " << availability.doubleRooms << " double bedrooms available" << RESET << endl << endl;
    }
}

void bookRooms(RoomAvailability& availability)
{
    int singleRoomBooking = 0;
    int doubleRoomBooking = 0;
    int numberofdays = 0;

    if (availability.singleRooms > 0)
    {
    notenoughsingle:
        cout << YELLOW << "\t\t\t\t\tHow many single bedrooms do you want to book?: " << RESET;
        cin >> singleRoomBooking;
        cout << endl;
        if (singleRoomBooking > availability.singleRooms) {
            cout << RED << "\t\t\t\t\tNot enough single bedrooms available!, TRY AGAIN" << RESET << endl << endl;
            goto notenoughsingle;
        }
    }
    else
    {
        cout << RED << "\t\t\t\t\tNo single bedrooms available!" << RESET << endl << endl;
    }
    if (availability.doubleRooms > 0)
    {
    notenoughdouble:
        cout << YELLOW << "\t\t\t\t\tHow many double bedrooms do you want to book?: " << RESET;
        cin >> doubleRoomBooking;
        cout << endl;
        if (doubleRoomBooking > availability.doubleRooms) {
            cout << RED << "\t\t\t\t\tNot enough double bedrooms available!, TRY AGAIN" << RESET << endl << endl;
            goto notenoughdouble;
        }
    }
    else
    {
        cout << RED << "\t\t\t\t\tNo double bedrooms available!" << RESET << endl << endl;
    }

    char addScenery;
    int sceneryCost = 0;

invalid_scenery:

    cout << YELLOW << "\t\t\t\t\tDo you want to add scenery to the rooms? (y/n): " << RESET;
    cin >> addScenery;
    cout << endl;
    if (addScenery == 'y' || addScenery == 'Y')
    {
        sceneryCost = (singleRoomBooking * SCENERY_PRICE_SINGLE) + (doubleRoomBooking * SCENERY_PRICE_DOUBLE);
        cout << GREEN << "\t\t\t\t\tScenery Added!" << RESET << endl << endl;;
    }
    else if (addScenery == 'n' || addScenery == 'N')
    {
        cout << GREEN << "\t\t\t\t\tNo Scenery Added!" << RESET << endl << endl;;
    }
    else
    {
        cout << RED << "\t\t\t\t\tInvalid Option!, TRY AGAIN" << RESET << endl << endl;
        goto invalid_scenery;
    }

    availability.singleRooms -= singleRoomBooking;
    availability.doubleRooms -= doubleRoomBooking;

    cout << YELLOW << "\t\t\t\t\tEnter Days of Stay: " << RESET;
    cin >> numberofdays;
    cout << endl;
    int totalCost = ((singleRoomBooking * SINGLE_ROOM_PRICE) + (doubleRoomBooking * DOUBLE_ROOM_PRICE) + sceneryCost) * numberofdays;

    cout << GREEN << "\t\t\t\t\tRooms booked successfully!" << RESET << endl << endl;
    cout << "\t\t\t\t\tRemaining availability: " << availability.singleRooms << " single bedrooms, " << availability.doubleRooms << " double bedrooms" << endl << endl;
    cout << "\t\t\t\t\tTotal cost: " << totalCost << " PKR" << endl << endl;

    string input;
    int numGuests;

    InputGuestInfo(singleRoomBooking, doubleRoomBooking, totalCost, numberofdays);
}

void cancelBooking()
{
    string cnic;
    cout << "\t\t\t\t\tEnter CNIC of the booking to cancel: ";
    cin >> cnic;

    ifstream inFile("guest_info.txt");
    ofstream tempFile("temp.txt");

    if (inFile.is_open() && tempFile.is_open())
    {
        string line;
        bool found = false;
        while (getline(inFile, line))
        {
            if (line.find("CNIC: " + cnic) != string::npos)
            {
                found = true;
                // Skip the next 4 lines to remove the booking details
                for (int i = 0; i < 5; ++i)
                {
                    getline(inFile, line);
                }
            }
            else
            {
                tempFile << line << endl;
            }
        }

        inFile.close();
        tempFile.close();

        if (found)
        {
            remove("guest_info.txt");
            rename("temp.txt", "guest_info.txt");
            cout << GREEN << "\t\t\t\t\tBooking cancelled successfully!" << RESET << endl;
        }
        else
        {
            remove("temp.txt");
            cout << RED << "\t\t\t\t\tBooking not found!" << RESET << endl;
        }
    }
    else
    {
        cout << RED << "\t\t\t\t\tError opening file!" << RESET << endl;
    }
}

int main() {
    srand(time(0));
    int choice;
    int option;
    RoomAvailability availability;

    cout << BLUE;
    cout << endl << endl << endl << endl;

    cout << "\t\t\t__          __  ______   _        _____    ____   __  __  ______          \n";
    cout << "\t\t\t\\ \\        / / |  ____| | |      / ____|  / __ \\ |  \\/  ||  ____|                 \n";
    cout << "\t\t\t \\ \\  /\\  / /  | |__    | |     | |      | |  | || \\  / || |___           \n";
    cout << "\t\t\t  \\ \\/  \\/ /   |  __|   | |     | |      | |  | || |\\/| ||  ___|             \n";
    cout << "\t\t\t   \\  /\\  /    | |____  | |____ | |____  | |__| || |  | || |___              \n";
    cout << "\t\t\t    \\/  \\/     |______| |______| \\_____|  \\____/ |_|  |_||_____|            \n";

    cout << "\t\t\t\t\t _______    ____              " << endl;
    cout << "\t\t\t\t\t|__   __|  / __ \\          " << endl;
    cout << "\t\t\t\t\t   | |    | |  | |          " << endl;
    cout << "\t\t\t\t\t   | |    | |  | |         " << endl;
    cout << "\t\t\t\t\t   | |    | |  | |        " << endl;
    cout << "\t\t\t\t\t   |_|     \\____/        " << endl;
    cout << "\t\t  ____   _   _  _      _____  _   _  _____       _    _   ____   _______  _____  _           " << endl;
    cout << "\t\t / __ \\ | \\ | || |    |_   _|| \\ | ||  ___|     | |  | | / __ \\ |__   __|| ____|| |         " << endl;
    cout << "\t\t| |  | ||  \\| || |      | |  |  \\| || |__       | |__| || |  | |   | |   | |__  | |          " << endl;
    cout << "\t\t| |  | || . ` || |      | |  | . ` ||  __|      |  __  || |  | |   | |   |  __| | |          " << endl;
    cout << "\t\t| |__| || |\\  || |___  _| |_ | |\\  || |___      | |  | || |__| |   | |   | |___ | |____      " << endl;
    cout << "\t\t \\____/ |_| \\_||_____||_____||_| \\_||_____|     |_|  |_| \\____/    |_|   |_____||______|    " << endl;

    cout << "\t\t\t\t\t ____    ____    ____   _  __  _____  _   _  ____                 " << endl;
    cout << "\t\t\t\t\t|  _ \\  / __ \\  / __ \\ | |/ / |_   _|| \\ | |/ ___|                " << endl;
    cout << "\t\t\t\t\t| |_) || |  | || |  | || ' /    | |  |  \\| || |                " << endl;
    cout << "\t\t\t\t\t|  _ < | |  | || |  | || . \\    | |  | . ` || |  _                   " << endl;
    cout << "\t\t\t\t\t| |_) || |  | || |  | || |\\ \\  _| |_ | |\\  || |_| |               " << endl;
    cout << "\t\t\t\t\t|____/  \\____/  \\____/ |_| \\_\\|_____||_| \\_|\\_____|              " << endl;
    cout << RESET;
    displaybuilding();



    do {
    invalid1:
        cout << YELLOW;
        cout << "\t\t\t\t\t| Select Your Option:     |" << endl;
        cout << RESET;
        cout << BLUE;
        cout << "\t\t\t\t\t| 1. Book a Room          |" << endl;
        cout << "\t\t\t\t\t| 2. View Every Option    |" << endl;
        cout << "\t\t\t\t\t| 3. See your Booking     |" << endl;
        cout << "\t\t\t\t\t| 4. Cancel your booking  |" << endl;
        cout << "\t\t\t\t\t| 5. EXIT                 |" << endl;
        cout << RESET;
        cout << YELLOW;
        cout << endl << endl;
        cout << "\t\t\t\t\tEnter Your Choice: ";
        cout << RESET;

        cin >> option;

        cin.ignore();
        cout << endl << endl;
        switch (option) {
        case 1: {
            system("CLS");
            displaybuilding();
        invalid:
            cout << YELLOW;
            cout << "\t\t\t\t\t|  Select a city:  |" << endl;
            cout << RESET;
            cout << BLUE;
            cout << "\t\t\t\t\t|  1. Lahore       |" << endl;
            cout << "\t\t\t\t\t|  2. Karachi      |" << endl;
            cout << "\t\t\t\t\t|  3. Peshawar     |" << endl;
            cout << "\t\t\t\t\t|  4. Multan       |" << endl;
            cout << "\t\t\t\t\t|  5. Hyderabad    |" << endl;
            cout << "\t\t\t\t\t|  6. Swat         |" << endl;
            cout << "\t\t\t\t\t|  7. Rawalpindi   |" << endl;
            cout << "\t\t\t\t\t|  8. Islamabad    |" << endl;
            cout << "\t\t\t\t\t|  0. EXIT         |" << endl;
            cout << RESET;
            cout << endl << endl;
            cout << YELLOW << "\t\t\t\t\tEnter your choice: " << RESET;
            cin >> choice;
            cout << endl << endl;
            switch (choice) {
            case 1:
                displayHotelsInCity("Lahore", availability);
                break;
            case 2:
                displayHotelsInCity("Karachi", availability);
                break;
            case 3:
                displayHotelsInCity("Peshawar", availability);
                break;
            case 4:
                displayHotelsInCity("Multan", availability);
                break;
            case 5:
                displayHotelsInCity("Hyderabad", availability);
                break;
            case 6:
                displayHotelsInCity("Swat", availability);
                break;
            case 7:
                displayHotelsInCity("Rawalpindi", availability);
                break;
            case 8:
                displayHotelsInCity("Islamabad", availability);
                break;
            case 0:
                goto invalid1;
            default:
                cout << RED << "\t\t\t\t\tInvalid choice. Please select a valid option." << RESET << endl;
                goto invalid;
                break;
            }

            bookRooms(availability);
            break;
        }
        case 2:
            system("CLS");
            displaybuilding();
            displayAllHotels();
            break;
        case 3:
            system("CLS");
            displaybuilding();
            displayBooking();
            break;
        case 4:
            system("CLS");
            displaybuilding();
            cancelBooking();
            break;
        case 5:
            cout << RED << "\t\t\t\t\t\tExiting..." << RESET << endl;
            goto exit;
        default:
            cout << RED << "\t\t\t\t\tInvalid option, please try again." << RESET << endl;
            break;
        }
    } while (option != 5);
exit:
    _getch();
    return 0;

}