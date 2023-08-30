//// 45. Declaring and initializing variables
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int length {0};
//    int breadth {0};
//    cout << "Enter length and breadth of the room in metres: ";
//    cin >> length >> breadth;
//    cout << "Area of the room is: " << length * breadth << " m^2" << endl;
//    return 0;
//}

//// 46. Global variables
//#include <iostream>
//
//using namespace std;
//
//int age {0};  // global variable
//int main() {
//    cout << age << endl;
//    return 0;
//}

//// 47. C++ Built in primitive data types
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    // character
//
//    char last_name_initial {'S'};
//    cout << "My last name initial is: " << last_name_initial << endl;
//
//    // integer
//
//    short int negative_score {-99};
//    cout << "My exam score is: " << negative_score << endl;
//
//    unsigned short int exam_score {95};
//    cout << "My exam score is: " << exam_score << endl;
//
//    unsigned int exam_score_2 {100};
//    cout << "My exam score is: " << exam_score_2 << endl;
//
//    int exam_score_3 {200};
//    cout << "My exam score is: " << exam_score_3 << endl;
//
//    // float
//
//    float exam_score_4 {12.5};
//    cout << "My exam score is: " << exam_score_4 << endl;
//
//    double pi {3.14159};
//    cout << "Pi value is: " << pi << endl;
//
//    long double large_amt {2.7e120};
//    cout << large_amt << " is a very big number!" << endl;
//
//    // boolean
//
//    bool game_over {false};
//    cout << "The value of game over is: " << game_over << endl;
//
//    return 0;
//}

//// 48. Using the sizeof operator
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    cout << "***** sizeof Information *****" << endl;
//
//    cout << "==============================" << endl;
//
//    cout << "char: " << sizeof(char) << " bytes" << endl;
//
//    cout << "==============================" << endl;
//
//    cout << "short int: " << sizeof(short int) << " bytes" << endl;
//    cout << "unsigned short int: " << sizeof(unsigned short int) << " bytes" << endl;
//    cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
//    cout << "int: " << sizeof(int) << " bytes" << endl;
//
//    cout << "==============================" << endl;
//
//    cout << "float: " << sizeof(float) << " bytes" << endl;
//    cout << "double: " << sizeof(double) << " bytes" << endl;
//    cout << "long double: " << sizeof(long double) << " bytes" << endl;
//
//    cout << "==============================" << endl;
//
//    cout << "bool: " << sizeof(bool) << " bytes" << endl;
//
//    return 0;
//}

//// 49. Constants
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    const double pi {3.1415926};
//    cout << pi << endl;
//    return 0;
//}

//// 50. Declaring and using constants
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int room_num {0};
//    const double tax {0.06};
//    const int price_per_room {30};
//    const int days {30};
//    cout << "Estimate for carpet cleaning service:" << endl;
//    cout << "Enter number of rooms: ";
//    cin >> room_num;
//    cout << "Cost: $" << room_num * price_per_room << endl;
//    cout << "Tax: $" << room_num * price_per_room * tax << endl;
//    cout << "===========================================" << endl;
//    cout << "Total estimate: $" << room_num * price_per_room + room_num * price_per_room * tax << endl;
//    cout << "The estimate is valid for " << days << " days";
//
//    return 0;
//}

//// 51. Section challenge
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    const int small_room_price {25};
//    const int large_room_price {35};
//    const double tax {0.06};
//    int small_rooms;
//    int large_rooms;
//    cout << "Estimate for carpet cleaning service" << endl;
//    cout << "Enter the number of small rooms: ";
//    cin >> small_rooms;
//    cout << "Enter the number of large rooms: ";
//    cin >> large_rooms;
//    cout << "Number of small rooms: " << small_rooms << endl;
//    cout << "Number of large rooms: " << large_rooms << endl;
//    cout << "Price per small room: $" << small_room_price << endl;
//    cout << "Price per large room: $" << large_room_price << endl;
//    cout << "Cost: $" << small_rooms * small_room_price + large_rooms * large_room_price << endl;
//    cout << "Tax: $" << (small_rooms * small_room_price + large_rooms * large_room_price) * tax << endl;
//    cout << "====================================================" << endl;
//    cout << "Total estimate: $" << (small_rooms * small_room_price + large_rooms * large_room_price) + ((small_rooms * small_room_price + large_rooms * large_room_price) * tax) << endl;
//    cout << "The estimate is valid for 30 days" << endl;
//
//    return 0;
//}

