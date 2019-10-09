#include <iostream>

using namespace std;

int main() {
    
    cout << "Enter the width of the room: ";
    double room_width {0};
    cin >> room_width;
    
    cout << "Enter the length of the room: ";
    double room_length {0};
    cin >> room_length;
    
    cout << "Enter the height of the room: ";
    double room_height {0};
    cin >> room_height;
    
    cout << "The volume of the room is " << room_length * room_width * room_height << " cubic meters" << endl;

    return 0;
}