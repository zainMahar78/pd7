#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int cargo;
    cout <<"Enter the count of cargo for transportation: ";
    cin >> cargo;
    float tonage;
    float Bus=0;
    float truck=0;
    float train=0;
    for (int i=1;i<=cargo;i++)
    {
        cout <<"Enter the tonnage of cargo " << i << ": ";
        cin >> tonage;
        if(tonage <= 3)
            Bus += tonage;
        if(tonage > 3 && tonage <= 11)
            truck += tonage;
        if(tonage > 11)
            train += tonage;
}    
   int finalPrice1 = Bus + truck + train;
   float  BusPercentage = (Bus / finalPrice1) * 100;
   float truckPercentage = (truck / finalPrice1) * 100;
   float trainPercentage = (train / finalPrice1) * 100;
   float averagePrice = (Bus *200 + truck * 175 + train * 120) / finalPrice1;
   cout << fixed << setprecision(2) << averagePrice <<endl;
   cout << fixed << setprecision(2) << BusPercentage <<"%" <<endl;
   cout << fixed << setprecision(2) << truckPercentage <<"%" <<endl;
   cout << fixed << setprecision(2) << trainPercentage <<"%";
}
