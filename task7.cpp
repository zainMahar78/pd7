#include<iostream>

using namespace std;

main()
{
    int d;
    
    cout << "Enter Number of days you visited Hospital: ";
    cin >> d;

    int patientCount;
    int treatedPatient = 0;
    int untreatedPatient = 0;
    int dr = 7;

    for (int i = 1; i <= d; i++)
    {
        if ((i % 3 == 0) && untreatedPatient > treatedPatient)
            dr += 1;
        
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patientCount;

        if (patientCount <= dr)
        {
            treatedPatient += patientCount;
            untreatedPatient += 0;

        }
    
        else if (patientCount > dr)
        {
            untreatedPatient += (patientCount - dr);
            treatedPatient += dr;
        }

    }    
    
    cout << "Treated Patients: " << treatedPatient << endl;
    cout << "Untreated Patients: " << untreatedPatient;
        
}
