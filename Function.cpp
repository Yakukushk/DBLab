#include "Hearders.h"

void DataInitialization(){
ofstream _buf("Buffer.txt");
if(!_buf){
    cout << "Error" << endl;


}
_buf.close();
}
void DataEntry(){
string name;
int price;
string city;
int n;
cout << "Count data files";
cin >> n;
ofstream record("Buffer.txt", ios::app);
if(record){
    record << n << endl;
    for(int i = 0; i < n; i++){
        cout << "Name of product";
        cin >> name;
        cout << "Price";
        cin >> price;
        cout << "City";
        cin >> city;
        record << name << endl;
        record << price << endl;
        if(i < n - 1){
            record << city << endl;

        }else
        record << city;
         cout << "..........." << endl;



    }

}
else
        cout << "Error! not open files" << endl;


    record.close();
}

void DataReading(string fileName){
    ifstream reading(fileName);
    ofstream record("Buffer.txt", ios:: app);
    if(reading){
        if(record){
            string name;
            int price;
            string city;
            int n;
            reading >> n;
            record << n << endl;
            for(int i = 0; i < n; i++){
                reading >> name;
                reading >> price;
                reading >> city;
                record << name << endl;
                record << price << endl;
                if(i < n-1)
                record << city << endl;
                else
                    record << city;

            }
            cout << "Recording finished!" << endl;
        }
        else
            cout << "Error! open buffer" << endl;


    }
    else
        cout << "Error! open files" << endl;

    reading.close();
    record.close();

}
void Print(){
ifstream reading("Buffer.txt");
if(reading){
    string name;
    int price;
    string city;
    int n;
    reading >> n;
    cout << "Count data"<< n << endl << endl;
    for(int i =0; i < n; i++){
        cout << "Data Id" << i + 1 << endl;
        reading >> name;
        cout << "Data name" << name << endl;
        reading >> price;
        cout << "Data price" << price << endl;
        reading >> city;
        cout << "Data city" << city << endl;
        cout << "..........." << endl;
    }


}
else
    cout << "Error! reading buffer" << endl;
reading.close();
}
void DataChange(){
Copy();
ifstream reading("Buffer_.txt");
ofstream record("Buffer.txt", ios::app);
if(reading){
    if(record){
        string name;
        int price;
        string city;
        int n, _n;
        reading >> n;
        cout << "Choice nunmber elements" << n;
        cin >> _n;
        _n--;
        system("cls");
        record << n << endl;
        if(_n >= 0 && _n < n){
            for(int i =0; i < n; i++){
                if(i != n){
                    reading >> name;
                    record << name << endl;
                    reading >> price;
                    record << price << endl;
                    if(i < n -1) {
                        reading >> city;
                    record << city << endl;
                    }
                    else{
                        record << city;
                    }
                }
                else {
                    cout << "Input name" ;
                    cin >> name;
                    cout << "Input price" ;
                    cin >> price;
                    cout << "Input city";
                    cin >> city;
                   record << name << endl;
                   record << price << endl;
                    if(i < n -1)

                    record << city << endl;
                    else
                        record << city;

                        reading >> name;
                        reading >> price;
                        reading >> city;
                }
            }

            cout << "Data is changed" << endl;
        }
        else
        cout << "Error! incorretly number"<< endl;

    }
    else
        cout << "Error! open file" << endl;

}
else
    cout << "Error! open buffer file" << endl;
record.close();
reading.close();
remove("Buffer_.txt");
}
void Copy(){
ifstream reading("Buffer.txt");
ofstream record("Buffer_.txt", ios:: app);
if(reading){
    if(record){
        string name;
            int price;
            string city;
            int n;
            reading >> n;
            record << n << endl;
            for(int i = 0; i < n; i++){
                reading >> name;
                reading >> price;
                reading >> city;
                record << name << endl;
                record << price << endl;
                if(i < n-1)
                record << city << endl;
                else
                    record << city;
    }

}
 else{
        cout << "Error open files" << endl;
    }
}
else
    cout << "Error open buffer files" << endl;
record.close();
reading.close();
}
void Delete(){
Copy();
fstream reading("Buffer_.txt");
ofstream record("Buffer.txt", ios::out);
if(reading){
    if(record){
        string name;
        int price;
        string city;
        int n, _n;
        reading >> n;
        int b = n - 1;
        cout << "Choice number elements ";
        cin >> _n;
        _n--;
        system("cls");
        record << b << endl;
        if(_n >= 0 && _n < n){
            for(int i =0; i < n; i++){
                if(i != _n){
                    reading >> name;
                    record << name << endl;
                    reading >> price;
                    record << price << endl;
                    reading >> city;
                    if(i < n -1)
                        record << city << endl;
                    else
                        record << city;
                }
                else {
                reading >> name;
                reading >> price;
                reading >> city;
            }

            }
            cout << "Data deleted!" << endl;

        }
        else
            cout << "Num input incorrectly" << endl;



    }
    else
        cout << "Error! buffer file" << endl;
    record.close();
    reading.close();
    remove("Buffer_.txt");
}

}
void AddData(){
string name;
int price;
string city;
int n = AmountOfDataTable() + 1;

ofstream record("Buffer.txt", ios::app);
ofstream record_("Buffer.txt", ios::out | ios::in);
if(record_){
    record_ << n << endl;

}
else {
    cout << "Error! buffer file" << endl;
}
if(record){
    record << endl;
    cout <<"Name >>";
    cin >> name;
    cout <<"Price >>";
    cin >> price;
    cout << "City >>";
    cin >> city;
    record << name << endl;
    record << price << endl;
    record << city;
}
else
    cout << "Error! open files" << endl;
record.close();
record_.close();
}
int AmountOfDataTable(){
ifstream buf("Buffer.txt");
int n;
if(buf){
    buf >> n;
}
else
    cout << "Error! buffer file"<<endl;

    buf.close();
return n;
}
void Save(string fileName){
ifstream reading("Buffer.txt");
ofstream record(fileName, ios::out);
if(reading){
    if(record){
        string name;
        int price;
        string city;
        int n;
        reading >> n;
        record << n << endl;
        for(int i =0; i < n; i++){
            reading >> name;
            record << name << endl;
            reading >> price;
            record << price << endl;
            reading >> city;
            if(i < n -1)
            record << city << endl;
            else
                record << city;

        }
        cout << "Files connection..." << fileName << endl;

    }
    else
        cout << "Error! buffer file" << endl;
}
else
    cout << "Error! open files" << endl;
record.close();
reading.close();
}
bool DataCleaning(){
bool clear = false;
fstream buf("Buffer.txt", ios::out );
if(!buf)
    cout << "Error! buffer files" << endl;
buf.clear();
if(buf.peek() == EOF)
    clear = true;
    else
        clear = false;
    buf.close();
    return clear;

}

