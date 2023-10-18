#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <map>

using namespace std;
const int monthDays[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
class Room
{
protected:
    int floor_no;
    int room_no;
    string status;
    vector<string> occupants;
    int checkin_day;
    int checkin_month;
    int checkin_year;
    int checkout_day;
    int checkout_month;
    int checkout_year;
    int total_bill;
    friend class Hotel;

public:
    Room(int floor_no, int room_no, string status, vector<string> occupants, int checkin_day, int checkin_month, int checkin_year, int checkout_day, int checkout_month, int checkout_year, int total_bill)
    {
        this->floor_no = floor_no;
        this->room_no = room_no;
        this->status = status;
        this->occupants = occupants;
        this->checkin_day = checkin_day;
        this->checkin_month = checkin_month;
        this->checkin_year = checkin_year;
        this->checkout_day = checkout_day;
        this->checkout_month = checkout_month;
        this->checkout_year = checkout_year;
        this->total_bill = total_bill;
    }

    static int countLeapYearDays(int d[])
    {
        int years = d[2];
        if (d[1] <= 2)
            years--;
        return ((years / 4) - (years / 100) + (years / 400));
    }

    static int calculateNumberOfDays(int checkin_day, int checkin_month, int checkin_year, int checkout_day, int checkout_month, int checkout_year)
    {
        int date1[3] = {checkin_day, checkin_month, checkin_year};
        int date2[3] = {checkout_day, checkout_month, checkout_year};

        long int dayCount1 = (date1[2] * 365);
        dayCount1 += monthDays[date1[1] - 1] + date1[0];
        dayCount1 += countLeapYearDays(date1);
        long int dayCount2 = (date2[2] * 365);
        dayCount2 += monthDays[date2[1] - 1] + date2[0];
        dayCount2 += countLeapYearDays(date2);

        return abs(dayCount2 - dayCount1);
    }

    int getFloorNo()
    {
        return floor_no;
    }

    int getRoomNo()
    {
        return room_no;
    }

    string getStatus()
    {
        return status;
    }

    vector<string> getOccupants()
    {
        return occupants;
    }

    int getCheckinDay()
    {
        return checkin_day;
    }

    int getCheckinMonth()
    {
        return checkin_month;
    }

    int getCheckinYear()
    {
        return checkin_year;
    }

    int getCheckoutDay()
    {
        return checkout_day;
    }

    int getCheckoutMonth()
    {
        return checkout_month;
    }

    int getCheckoutYear()
    {
        return checkout_year;
    }

    int getTotalBill()
    {
        return total_bill;
    }

    void setFloorNo(int floor_no)
    {
        this->floor_no = floor_no;
    }

    void setRoomNo(int room_no)
    {
        this->room_no = room_no;
    }

    void setStatus(string status)
    {
        this->status = status;
    }

    void setOccupants(vector<string> occupants)
    {
        this->occupants = occupants;
    }

    void setCheckinDate(int day, int month, int year)
    {
        checkin_day = day;
        checkin_month = month;
        checkin_year = year;
    }

    void setCheckoutDate(int day, int month, int year)
    {
        checkout_day = day;
        checkout_month = month;
        checkout_year = year;
    }

    void setTotalBill(int total_bill)
    {
        this->total_bill = total_bill;
    }

    virtual void calculateTotalBill() {}
};

class ClassicRoom : public Room
{
public:
    ClassicRoom(int floor_no, int room_no, string status, vector<string> occupants, int checkin_day, int checkin_month, int checkin_year, int checkout_day, int checkout_month, int checkout_year, int total_bill) : Room(floor_no, room_no, status, occupants, checkin_day, checkin_month, checkin_year, checkout_day, checkout_month, checkout_year, total_bill) {}

    void calculateTotalBill() override
    {
        total_bill = 2000 * calculateNumberOfDays(checkin_day, checkin_month, checkin_year, checkout_day, checkout_month, checkout_year);
    }
};

class DeluxeRoom : public Room
{
public:
    DeluxeRoom(int floor_no, int room_no, string status, vector<string> occupants, int checkin_day, int checkin_month, int checkin_year, int checkout_day, int checkout_month, int checkout_year, int total_bill) : Room(floor_no, room_no, status, occupants, checkin_day, checkin_month, checkin_year, checkout_day, checkout_month, checkout_year, total_bill) {}

    void calculateTotalBill() override
    {
        total_bill = 2500 * calculateNumberOfDays(checkin_day, checkin_month, checkin_year, checkout_day, checkout_month, checkout_year);
    }
};

class SuiteRoom : public Room
{
public:
    SuiteRoom(int floor_no, int room_no, string status, vector<string> occupants, int checkin_day, int checkin_month, int checkin_year, int checkout_day, int checkout_month, int checkout_year, int total_bill) : Room(floor_no, room_no, status, occupants, checkin_day, checkin_month, checkin_year, checkout_day, checkout_month, checkout_year, total_bill) {}

    void calculateTotalBill() override
    {
        total_bill = 3000 * calculateNumberOfDays(checkin_day, checkin_month, checkin_year, checkout_day, checkout_month, checkout_year);
    }
};

class Hotel
{
private:
    map<pair<int, int>, Room *> rooms;

public:
    // const int monthDays[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

    void addRoom(Room *room, int floor_no, int room_no)
    {
        rooms[{floor_no, room_no}] = room;
    }

    Room *getRoomByFloorAndRoomNo(int floor_no, int room_no)
    {
        auto roomIt = rooms.find({floor_no, room_no});
        if (roomIt != rooms.end() && roomIt->second->getStatus() == "Vacant")
        {
            return roomIt->second;
        }
        return nullptr;
    }

    void bookRoom(Room *room, vector<string> occupants, int checkin_day, int checkin_month, int checkin_year, int checkout_day, int checkout_month, int checkout_year)
    {
        room->setStatus("Booked");
        room->setOccupants(occupants);
        room->setCheckinDate(checkin_day, checkin_month, checkin_year);
        room->setCheckoutDate(checkout_day, checkout_month, checkout_year);
        int num_days = Room::calculateNumberOfDays(checkin_day, checkin_month, checkin_year, checkout_day, checkout_month, checkout_year);
        room->calculateTotalBill();
    }

    void calculateTotalBillForHotel()
    {
        int total_bill = 0;
        for (const auto &roomPair : rooms)
        {
            total_bill += roomPair.second->getTotalBill();
        }
        cout << "Total bill for the hotel: " << total_bill << endl;
    }
    void printRoomDetails()
    {
        int prevFloor = -1; // To keep track of the previous floor
        cout << left << setw(11) << "Floor No." << setw(11) << "Room No." << setw(10) << "Status" << setw(15) << "Occupant 1" << setw(15) << "Occupant 2" << setw(15) << "Occupant 3" << setw(15) << "Occupant 4" << setw(12) << "Checkin" << setw(12) << "Checkout" << setw(12) << "Total Bill" << endl;

        for (const auto &roomPair : rooms)

        {
            Room *room = roomPair.second;

            if (room->getFloorNo() != prevFloor)
            {
                cout << "-----------------------------------------------------------------------------------------------------------------------------\n"; // Add a separator line
                prevFloor = room->getFloorNo();
            }

            cout << left << setw(11) << room->getFloorNo() << setw(11) << room->getRoomNo() << setw(10) << room->getStatus();

            const vector<string> &occupants = room->getOccupants();
            for (int i = 0; i < 4; i++)
            {
                if (i < occupants.size())
                {
                    cout << setw(15) << occupants[i];
                }
                else
                {
                    cout << setw(15) << ""; // Empty column
                }
            }
            cout << room->getCheckinDay() << "/" << room->getCheckinMonth() << "/" << setw(10) << room->getCheckinYear();
            cout << room->getCheckoutDay() << "/" << room->getCheckoutMonth() << "/" << setw(11) << room->getCheckoutYear();
            cout << room->getTotalBill() << endl;
        }
    }

    void initializeCSVFile(const string &filename)
    {
        ofstream outfile(filename);

        // Write the header to the CSV file
        outfile << left << setw(11) << "Floor No." << setw(11) << "Room No." << setw(10) << "Status" << setw(15) << "Occupant 1" << setw(15) << "Occupant 2" << setw(15) << "Occupant 3" << setw(15) << "Occupant 4" << setw(10) << "Checkin" << setw(10) << "Checkout" << setw(10) << "Total Bill" << endl;

        for (int floor = 1; floor <= 5; floor++)
        {
            if (floor == 1 || floor == 2)
            {
                for (int roomNum = 1; roomNum <= 10; roomNum++)
                {
                    ClassicRoom *room = new ClassicRoom(floor, roomNum, "Vacant", {}, 0, 0, 0, 0, 0, 0, 0); // Use dynamic allocation (new)
                    addRoom(room, floor, roomNum);                                                          // Add the room to the hotel
                }
            }
            else if (floor == 3 || floor == 4)
            {
                for (int roomNum = 1; roomNum <= 10; roomNum++)
                {
                    DeluxeRoom *room = new DeluxeRoom(floor, roomNum, "Vacant", {}, 0, 0, 0, 0, 0, 0, 0); // Use dynamic allocation (new)
                    addRoom(room, floor, roomNum);                                                        // Add the room to the hotel
                }
            }
            else if (floor == 5)
            {
                for (int roomNum = 1; roomNum <= 10; roomNum++)
                {
                    SuiteRoom *room = new SuiteRoom(floor, roomNum, "Vacant", {}, 0, 0, 0, 0, 0, 0, 0); // Use dynamic allocation (new)
                    addRoom(room, floor, roomNum);                                                      // Add the room to the hotel
                }
            }
        }

        // Close the file
        outfile.close();
    }

    void saveRoomDetailsToFile()
    {
        ofstream outfile("room_details.csv");
        // Ensure the file is open
        if (!outfile.is_open())
        {
            cerr << "Failed to open the CSV file for appending." << endl;
            return;
        }
        outfile << left << setw(11) << "Floor No." << setw(11) << "Room No." << setw(10) << "Status" << setw(15) << "Occupant 1" << setw(15) << "Occupant 2" << setw(15) << "Occupant 3" << setw(15) << "Occupant 4" << setw(10) << "Checkin" << setw(10) << "Checkout" << setw(10) << "Total Bill" << endl;
        int prevFloor = -1; // To keep track of the previous floor

        for (const auto &roomPair : rooms)
        {
            Room *room = roomPair.second;

            if (room->getFloorNo() != prevFloor)
            {
                outfile << "-----------------------------------------------------------------------------------------------------------------------------\n"; // Add a separator line
                prevFloor = room->getFloorNo();
            }

            outfile << left << setw(11) << room->getFloorNo() << setw(11) << room->getRoomNo() << setw(10) << room->getStatus();

            const vector<string> &occupants = room->getOccupants();
            for (int i = 0; i < 4; i++)
            {
                if (i < occupants.size())
                {
                    outfile << setw(15) << occupants[i];
                }
                else
                {
                    outfile << setw(15) << ""; // Empty column
                }
            }

            outfile << room->getCheckinDay() << "/" << room->getCheckinMonth() << "/" << setw(10) << room->getCheckinYear() << " ";
            outfile << room->getCheckoutDay() << "/" << room->getCheckoutMonth() << "/" << setw(11) << room->getCheckoutYear() << " ";
            outfile << room->getTotalBill() << endl;
        }

        // Close the file
        outfile.close();
    }
    // function to delete booking
    void deleteRoom(int floor_no, int room_no)
    {
        auto roomIt = rooms.find({floor_no, room_no});
        if (roomIt != rooms.end())
        {
            Room *room = roomIt->second;

            // Reset the room status to "Vacant" and clear occupants
            room->setStatus("Vacant");
            room->setOccupants({});
            room->setCheckinDate(0, 0, 0);
            room->setCheckoutDate(0, 0, 0);
            room->setTotalBill(0);

            cout << "Booking for Room on Floor " << floor_no << ", Room No. " << room_no << " has been deleted." << endl;
        }
        else
        {
            cout << "Room not found. Make sure to enter the correct floor number and room number." << endl;
        }
    }

    // Search for a person by name and display their details
    void searchPerson(const string &name)
    {
        cout << "Searching for " << name << ":\n";
        for (const auto &roomPair : rooms)
        {
            Room *room = roomPair.second;
            const vector<string> &occupants = room->getOccupants();

            for (const string &occupant : occupants)
            {
                if (occupant == name)
                {
                    cout << "Name: " << occupant << endl;
                    cout << "Floor No.: " << room->getFloorNo() << endl;
                    cout << "Room No.: " << room->getRoomNo() << endl;
                    cout << "Check-in Date: " << room->getCheckinDay() << "/" << room->getCheckinMonth() << "/" << room->getCheckinYear() << endl;
                    cout << "Check-out Date: " << room->getCheckoutDay() << "/" << room->getCheckoutMonth() << "/" << room->getCheckoutYear() << endl;
                    cout << "Total Bill: " << room->getTotalBill() << endl;
                    return; // Exit the function after finding the person
                }
            }
        }

        // If the person is not found
        cout << "Person not found." << endl;
    }
};

int main()
{
    string csvFileName = "room_details.csv";
    char ans = 'y';
    Hotel hotel;
    hotel.initializeCSVFile(csvFileName);
    int flag = 0;
    while (ans == 'y' || ans == 'Y')
    {
        int choice;
        cout << "Menu:\n";
        cout << "1. Book a Room\n";
        cout << "2. Delete Booking\n";
        cout << "3. Search Booking\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1/2/3/4/5): ";
        cin >> choice;
        switch (choice)
        {
            int minRooms;
        case 1:
            // Book a room
            int numMembers;
            cout << "Enter the number of members: ";
            flag = 1;
            cin >> numMembers;

            // Calculate the minimum number of rooms needed
            minRooms = (numMembers + 3) / 4; // Ceiling division
            cout << "You'll need at least " << minRooms << " room(s) to accommodate all members." << endl;

            while (numMembers > 0) //loops that runs till all the members are appointed a room
            {
                cout << "\nRoom Types:\n1. Classic Room\n2. Deluxe Room\n3. Suite Room\n";
                int roomTypeChoice;
                cout << "Choose a room type (1/2/3): ";
                cin >> roomTypeChoice;

                int floorNo, roomNum;
                if (roomTypeChoice == 1)
                {
                    cout << "Classic Room - Choose the floor (1/2): ";
                    cin >> floorNo;
                    cout << "Enter a room number (1-10): ";
                    cin >> roomNum;
                }
                else if (roomTypeChoice == 2)
                {
                    cout << "Deluxe Room - Choose the floor (3/4): ";
                    cin >> floorNo;
                    cout << "Enter a room number (1-10): ";
                    cin >> roomNum;
                }
                else if (roomTypeChoice == 3)
                {
                    floorNo = 5; // Suite rooms are on the 5th floor
                    cout << "Enter a room number (1-10): ";
                    cin >> roomNum;
                }
                else
                {
                    cout << "Invalid room type choice. Please select again." << endl;
                    continue;
                }

                // Get a vacant room
                Room *room = hotel.getRoomByFloorAndRoomNo(floorNo, roomNum);

                if (room == nullptr)
                {
                    cout << "the room not vacant" << floorNo << ". Choose another floor or room type." << endl;
                    continue;
                }

                vector<string> occupants;
                int checkin_day, checkin_month, checkin_year;
                int checkout_day, checkout_month, checkout_year;

                for (int i = 0; i < 4 && numMembers > 0; i++)
                {
                    cout << "Enter name of occupant " << i + 1 << ": ";
                    string occupantName;
                    cin >> occupantName;
                    occupants.push_back(occupantName);
                    numMembers--;
                }

                cout << "Enter check-in date:" << endl;
                cout << "Day: ";
                cin >> checkin_day;
                cout << "Month: ";
                cin >> checkin_month;
                cout << "Year: ";
                cin >> checkin_year;

                cout << "Enter check-out date:" << endl;
                cout << "Day: ";
                cin >> checkout_day;
                cout << "Month: ";
                cin >> checkout_month;
                cout << "Year: ";
                cin >> checkout_year;

                // Book the room
                hotel.bookRoom(room, occupants, checkin_day, checkin_month, checkin_year, checkout_day, checkout_month, checkout_year);
            }
            break;
        case 2:
            // Delete booking
            int deleteChoice;
            cout << "Do you want to delete a room? (1 for Yes, 0 for No): ";
            cin >> deleteChoice;
            if (deleteChoice == 1)
            {
                int floorNo, roomNum;
                cout << "Enter the floor number of the room to delete: ";
                cin >> floorNo;
                cout << "Enter the room number of the room to delete: ";
                cin >> roomNum;
                hotel.deleteRoom(floorNo, roomNum);
            }
            break;
        case 3:
            // Search booking
            int searchBook;
            cout << "Do you want to search a booking? (1 for Yes, 0 for No): ";
            cin >> searchBook;
            if (searchBook == 1)
            {
                string searchName;
                cout << "Enter the name to search for: ";
                cin >> searchName;
                hotel.searchPerson(searchName);
            }
            break;
        case 4:
            // Display
            hotel.calculateTotalBillForHotel();
            hotel.printRoomDetails();
            hotel.saveRoomDetailsToFile();
            break;
        case 5:
            // Exit
            return 0;
        default:
            cout << "Invalid choice. Please select again." << endl;
            break;
        }
        cout << "Do you wish to continue? (y/n): ";
        char ans1;
        cin >> ans1;
        ans = ans1;
    }
    return 0;
}
