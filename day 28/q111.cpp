#include <iostream>
#include <string>
using namespace std;

struct Ticket
{
    int ticketNo;
    string passengerName;
    string source;
    string destination;
    bool booked;
};

int main()
{
    Ticket t[100];
    int n = 0, choice, no, i;
    bool found;

    do
    {
        cout << "\n====== Ticket Booking System ======\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Bookings\n";
        cout << "3. Search Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Ticket Number: ";
                cin >> t[n].ticketNo;

                cin.ignore();

                cout << "Enter Passenger Name: ";
                getline(cin, t[n].passengerName);

                cout << "Enter Source: ";
                getline(cin, t[n].source);

                cout << "Enter Destination: ";
                getline(cin, t[n].destination);

                t[n].booked = true;
                n++;

                cout << "Ticket Booked Successfully.\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Bookings Available.\n";
                }
                else
                {
                    cout << "\n------ Ticket Details ------\n";

                    for(i = 0; i < n; i++)
                    {
                        cout << "\nTicket No   : " << t[i].ticketNo;
                        cout << "\nPassenger   : " << t[i].passengerName;
                        cout << "\nSource      : " << t[i].source;
                        cout << "\nDestination : " << t[i].destination;
                        cout << "\nStatus      : ";

                        if(t[i].booked)
                            cout << "Booked";
                        else
                            cout << "Cancelled";

                        cout << "\n-----------------------------\n";
                    }
                }
                break;

            case 3:
                cout << "Enter Ticket Number to Search: ";
                cin >> no;

                found = false;

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == no)
                    {
                        cout << "\nTicket Found\n";
                        cout << "Passenger   : " << t[i].passengerName << endl;
                        cout << "Source      : " << t[i].source << endl;
                        cout << "Destination : " << t[i].destination << endl;
                        cout << "Status      : ";

                        if(t[i].booked)
                            cout << "Booked\n";
                        else
                            cout << "Cancelled\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Ticket Not Found.\n";

                break;

            case 4:
                cout << "Enter Ticket Number to Cancel: ";
                cin >> no;

                found = false;

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == no)
                    {
                        if(t[i].booked)
                        {
                            t[i].booked = false;
                            cout << "Ticket Cancelled Successfully.\n";
                        }
                        else
                        {
                            cout << "Ticket Already Cancelled.\n";
                        }

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Ticket Not Found.\n";

                break;

            case 5:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while(choice != 5);

    return 0;
}