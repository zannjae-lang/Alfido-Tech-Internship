#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void createLog()
{
    ofstream file("logs.txt");

    if(file)
    {
        cout << "Log file created successfully.\n";
        file.close();
    }
    else
    {
        cout << "Error creating file.\n";
    }
}

void addLog()
{
    ofstream file("logs.txt", ios::app);

    string message;

    cin.ignore();

    cout << "Enter log message: ";
    getline(cin, message);

    file << message << endl;

    file.close();

    cout << "Log added successfully.\n";
}

void viewLogs()
{
    ifstream file("logs.txt");

    string line;

    cout << "\n----- LOG CONTENT -----\n";

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void archiveLogs()
{
    ifstream source("logs.txt");

    ofstream archive("archived_logs.txt", ios::app);

    string line;

    while(getline(source, line))
    {
        archive << line << endl;
    }

    source.close();
    archive.close();

    ofstream clearFile("logs.txt");

    clearFile.close();

    cout << "Logs archived successfully.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== LOG MANAGEMENT SYSTEM =====\n";
        cout << "1. Create Log File\n";
        cout << "2. Add Log Entry\n";
        cout << "3. View Logs\n";
        cout << "4. Archive Logs\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                createLog();
                break;

            case 2:
                addLog();
                break;

            case 3:
                viewLogs();
                break;

            case 4:
                archiveLogs();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 5);

    return 0;
}