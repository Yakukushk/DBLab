#include <iostream>
#include "Hearders.h"
using namespace std;
int stateMEnu;
void Menu(){
cout<<"Choice >>"<<endl
<< "(0) Exit>> " << endl
<< "(1) Input>> " << endl
<< "(2) Output>> " << endl
<< "(3) Change>> " << endl
<< "(4) Delete>> " << endl
<< "(5) Add>> " << endl
<< "(6) Save>> " << endl
<<"(7) Exit and return>> " << endl
<< "Your Choice: ";
cin >> stateMEnu;
}
int main()
{
DataInitialization();
Menu();
int actions;
string fileName;
while(stateMEnu != 0){
system("cls");
switch(stateMEnu){
case 1:
    system("cls");
    cout << "Enter or from files" << endl;
    cin >> actions;
    if(actions == 1){
        DataEntry();

    }else {
    cout << "Name file..";
    cin >> fileName;
    DataReading(fileName);
    }
    system("pause");
    system("cls");
    Menu();
    break;
case 2:
    system("cls");
    Print();
    system("pause");
    Menu();
    break;
case 3:
    system("cls");
    DataChange();
    system("pause");
    Menu();
    break;
case 4:
    system("cls");
    Delete();
    system("pause");
    Menu();
    break;
case 5:
    system("cls");
    AddData();
    system("pause");
    Menu();
    break;
case 6:
   system("cls");
   cout << "Input data file: ";
   cin >> fileName;
   system("cls");
   Save(fileName);
   system("pause");
   Menu();
   break;
case 7:
    system("cls");
    exit(3);
    return 3;
    system("pause");
    Menu();
    break;
default:
    cout <<"Incorrently input in menu" << endl;
    break;
}

}
system("cls");
if(DataCleaning())
    cout << "Data Cleaning.." << endl;


else
cout << "Error! Data not cleaning!" << endl;

cout << "Work is end" << endl;
system("pause");
}
