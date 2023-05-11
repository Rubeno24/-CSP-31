//Ruben Ortega
//Csp 31b
//Assignment 6 Abstraction and encapsolation


#include <iostream>
using namespace std;
#include <string>
class Room {
private:
    string room_name;
    int room_length, room_width;
public:
    void set()
    {
        string room_name1;
        int room_length1, room_width1;
        cout << "Enter the Room's Name " << endl;
        cin >> room_name1;
        cout << "Enter the the Room's length " << endl;
        cin >> room_length1;
        cout << "Enter the Room's Width" << endl;
        cin >> room_width1;
        room_name = room_name1;
        room_length = room_length1;
        room_width = room_width1;

    }

    void display()
  //for some reason I couldnt make the room name able to have a space. If you enter a space the program crashes
    {
        cout << "Room name - " << room_name << endl;
        cout << "Room length -  " << room_length << endl;
        cout << "Room width - " << room_width << endl;
	cout <<"----------------------------------------------------------------------------"<<endl;
    }
};


class Adress {
private:
    string state, city;
    int house_Num;

public:
    void set()
    {
        string state_name, city_name;
        int house_number;
        cout << "Enter the State's Name " << endl;
        getline(cin, state_name);
        cout << "Enter the City's Name " << endl;
        getline(cin, city_name);
        cout << "Enter the House's Number " << endl;
        cin >> house_number;
        state = state_name;
        city = city_name;
        house_Num = house_number;

    }

    void display()
    {
        cout << "State - " << state << endl;
        cout << "City - " << city << endl;
        cout << "House Number - " << house_Num << endl;
	cout <<"----------------------------------------------------------------------------"<<endl;
    }
};



class House {
private:
    string house_name, house_adress;
    int room_num;
    Adress a;
    Room s;
public:
    void set()

    {
        string houseName, HouseAdress;
        int roomNumber = 3;

        cout << "Enter the House's Name " << endl;
        getline(cin, houseName);
        cout << "Enter the House Address " << endl;
        getline(cin, HouseAdress);
        a.set();
        for (int i = 0; i < 3; i++) {
            cout << "House Details - " << i + 1 << "\n";
            s.set();


        }
        house_name = houseName;
        house_adress = HouseAdress;
        room_num = roomNumber;
    };


    void display()
    {	cout <<"----------------------------------------------------------------------------"<<endl;
        cout << "House's Name - " << house_name << endl;
        cout << "House Adress - " << house_adress << endl;
        cout << "Number of Rooms - " << room_num << endl;
        a.display();


        for (int i = 0; i < 3; i++) {
            cout << "House Details - " << i + 1 << "\n";
            s.display();
        }
    };

};



        int main()
        {
            House myHouse;
            myHouse.set();
            myHouse.display();
            return 0;
        };