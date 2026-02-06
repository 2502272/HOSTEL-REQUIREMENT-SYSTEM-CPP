#include <iostream>
#include <string>
using namespace std;

struct Hostel {
    string name;
    string address;
    string contact;
    int luxuryCharge; 
};

Hostel boysHostels[10];
Hostel girlsHostels[10];

void addHostel(Hostel list[], int index, string n, string a, string c, int l) {
    list[index].name = n;
    list[index].address = a;
    list[index].contact = c;
    list[index].luxuryCharge = l;
}

void initializeData() {
    
    addHostel(boysHostels, 0, "Ibrahim Hostel & Guest House", "Street 5, G-9/1, Islamabad", "0300-1234567", 0);
    addHostel(boysHostels, 1, "Punjab Boys Hostel Islamabad", "H-13, Near NUST, Islamabad", "0321-9876543", 500);
    addHostel(boysHostels, 2, "Royal Blue Boys Hostel", "F-8/2, Islamabad", "0333-5556667", 2000);
    addHostel(boysHostels, 3, "Azam Boys Hostel", "G-10 Markaz, Islamabad", "0312-4443332", 0);
    addHostel(boysHostels, 4, "The Luxurious Boys Hostel", "E-11/3 MPCHS, Islamabad", "0301-1112223", 4000);
    addHostel(boysHostels, 5, "Khan Boys Hostel", "G-11/2, Islamabad", "0345-7778889", 0);
    addHostel(boysHostels, 6, "I-8/4 Boys Hostels Shaheen", "I-8/4, Near Metro, Islamabad", "0302-3334445", 1500);
    addHostel(boysHostels, 7, "G-10 Boys Hostel Shaheen", "G-10/4, Islamabad", "0322-2223334", 1000);
    addHostel(boysHostels, 8, "Lavish Group of Boys Hostel", "Blue Area, Islamabad", "0334-9998887", 3000);
    addHostel(boysHostels, 9, "Awans Boys Hostel", "Soan Garden, Islamabad", "0315-6667778", 0);

    addHostel(girlsHostels, 0, "Falah Girls Hostel", "G-9/4, Islamabad", "0333-1122334", 0);
    addHostel(girlsHostels, 1, "Taaj Girls Hostel", "F-7/2, Islamabad", "0321-4433221", 2500);
    addHostel(girlsHostels, 2, "Al Muqtadir Girls Hostel", "I-10/2, Islamabad", "0300-5554443", 500);
    addHostel(girlsHostels, 3, "I-8/2 Girls Hostel Shaheen", "I-8/2, Islamabad", "0345-9990001", 1500);
    addHostel(girlsHostels, 4, "Pak Home Girls Hostel", "G-11/3, Islamabad", "0312-3332221", 1000);
    addHostel(girlsHostels, 5, "Fairy Land Hostel", "E-11/2, Islamabad", "0301-7776665", 3500);
    addHostel(girlsHostels, 6, "Grace Female Hostel", "F-10/3, Islamabad", "0332-1110009", 2000);
    addHostel(girlsHostels, 7, "Nazzal Islamabad Girls Hostel", "G-13/1, Islamabad", "0323-5556667", 1000);
    addHostel(girlsHostels, 8, "Palz Care Hostel", "H-13, Near University, Isb", "0305-4445556", 0);
    addHostel(girlsHostels, 9, "Alkhairi Girls Hostel", "PWD Housing Society, Isb", "0313-8889990", 0);
}

void displayHostels(Hostel list[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\t\t " << (i + 1) << ". " << list[i].name << endl;
    }
}

int main() {
    initializeData(); 
    string inputStr; 
    int mainChoice = 0;
    int hostelIndex = 0;
    bool running = true;

    while (running) {
        
        for(int i=0; i<5; i++) cout << endl;
        
        cout << "\t\t******************************************\n";
        cout << "\t\t* HOSTEL RECRUITMENT SYSTEM              *\n";
        cout << "\t\t******************************************\n";
        
        cout << "\t\t     MAIN MENU\n";
        cout << "\t\t==========================================\n";
        cout << "\t\t [1] Boys Hostels\n";
        cout << "\t\t [2] Girls Hostels\n";
        cout << "\t\t [3] Exit System\n";
        cout << "\t\t==========================================\n";
        cout << "\t\t Enter Choice: ";
        
        
        cin >> inputStr;
        mainChoice = 0; 
        
        
        if (inputStr == "1") mainChoice = 1;
        else if (inputStr == "2") mainChoice = 2;
        else if (inputStr == "3") mainChoice = 3;

        if (mainChoice == 0) {
            cout << "\t\t Invalid Choice! Press Enter to try again.";
            cin.ignore(); cin.get(); 
            continue;
        }

        if (mainChoice == 3) {
            cout << "\n\t\t Exiting Application... Thank you!\n";
            running = false;
            break;
        }

        Hostel* selectedList = NULL;
        string category = "";

        if (mainChoice == 1) {
            selectedList = boysHostels;
            category = "BOYS";
        } else {
            selectedList = girlsHostels;
            category = "GIRLS";
        }

        cout << "\n\n";
        cout << "\t\t==========================================\n";
        cout << "\t\t LIST OF " << category << " HOSTELS\n";
        cout << "\t\t==========================================\n";
        
        displayHostels(selectedList, 10);
        
        cout << "\n\t\t Select a Hostel (1-10): ";
        cin >> inputStr;
        
        hostelIndex = 0;
        
        if (inputStr == "1")      hostelIndex = 1;
        else if (inputStr == "2") hostelIndex = 2;
        else if (inputStr == "3") hostelIndex = 3;
        else if (inputStr == "4") hostelIndex = 4;
        else if (inputStr == "5") hostelIndex = 5;
        else if (inputStr == "6") hostelIndex = 6;
        else if (inputStr == "7") hostelIndex = 7;
        else if (inputStr == "8") hostelIndex = 8;
        else if (inputStr == "9") hostelIndex = 9;
        else if (inputStr == "10") hostelIndex = 10;

        if (hostelIndex < 1 || hostelIndex > 10) {
            cout << "\t\t Invalid Selection! Returning to Menu...";
            cin.ignore(); 
            cin.get();
            continue; 
        }
        Hostel selectedHostel = selectedList[hostelIndex - 1];

        cout << "\n\n";
        cout << "\t\t==========================================\n";
        cout << "\t\t HOSTEL DETAILS\n";
        cout << "\t\t==========================================\n";
        cout << " Name:    " << selectedHostel.name << endl;
        cout << " Address: " << selectedHostel.address << endl;
        cout << " Contact: " << selectedHostel.contact << endl;
        cout << "\t\t==========================================\n";

        int seaterChoice = 0;
        string washroomInput, messInput;

        cout << "\n\t\t ROOM CONFIGURATION\n";
        cout << "\t\t ------------------\n";
        cout << "\t\t [1] Single Seater (Private)\n";
        cout << "\t\t [2] Bi-Seater   (2 Persons)\n";
        cout << "\t\t [3] Tri-Seater  (3 Persons)\n";
        cout << "\t\t [4] Tetra-Seater (4 Persons)\n";
        cout << "\t\t Select Room Type: ";
        cin >> inputStr;
        
        if (inputStr == "1") seaterChoice = 1;
        else if (inputStr == "2") seaterChoice = 2;
        else if (inputStr == "3") seaterChoice = 3;
        else if (inputStr == "4") seaterChoice = 4;
        else {
            cout << "\t\t Invalid Room Type! Defaulting to Standard (Bi-Seater).\n";
            seaterChoice = 2;
        }

        cout << "\t\t Need Attached Washroom? (y/n): ";
        cin >> washroomInput;

        while(washroomInput != "y" && washroomInput != "Y" && washroomInput != "n" && washroomInput != "N") {
            cout << "\t\t Invalid! Please enter 'y' or 'n': ";
            cin >> washroomInput;
        }

        cout << "\t\t Include Mess/Food? (y/n): ";
        cin >> messInput;

        while(messInput != "y" && messInput != "Y" && messInput != "n" && messInput != "N") {
            cout << "\t\t Invalid! Please enter 'y' or 'n': ";
            cin >> messInput;
        }

       
        int roomPrice = 0;
        string roomType = "";
        
        if (seaterChoice == 1)      { roomPrice = 25000; roomType = "Single Seater"; }
        else if (seaterChoice == 2) { roomPrice = 20000; roomType = "Bi-Seater"; }
        else if (seaterChoice == 3) { roomPrice = 16000; roomType = "Tri-Seater"; }
        else if (seaterChoice == 4) { roomPrice = 13000; roomType = "Tetra-Seater"; }
        else { roomPrice = 20000; roomType = "Standard"; }

        int washroomCost = 0;
        if (washroomInput == "y" || washroomInput == "Y") {
            washroomCost = 3000;
        }

        int messCost = 0;
        if (messInput == "y" || messInput == "Y") {
            messCost = 8000;
        }

        int totalFare = roomPrice + washroomCost + messCost + selectedHostel.luxuryCharge;

        cout << "\n\n";
        cout << "\t\t==========================================\n";
        cout << "\t\t          FINAL BOOKING RECEIPT           \n";
        cout << "\t\t==========================================\n";
        cout << "\t\t Hostel:       " << selectedHostel.name << endl;
        cout << "\t\t Room Type:    " << roomType << " (" << roomPrice << " PKR)" << endl;
        
        if (selectedHostel.luxuryCharge > 0)
            cout << "\t\t Location Fee: " << selectedHostel.luxuryCharge << " PKR" << endl;

        cout << "\t\t Washroom:     " << (washroomCost > 0 ? "Attached (+3000)" : "Common (0)") << endl;
        cout << "\t\t Mess:         " << (messCost > 0 ? "Included (+8000)" : "Not Included (0)") << endl;
        cout << "\t\t------------------------------------------\n";
        cout << "\t\t TOTAL MONTHLY FARE: PKR " << totalFare << "/-\n";
        cout << "\t\t==========================================\n";
        
        cout << "\n\t\t Press 1 to return to Main Menu, 0 to Exit: ";
        cin >> inputStr;
        
        if (inputStr == "0") running = false;
        
    }

    return 0;
}
