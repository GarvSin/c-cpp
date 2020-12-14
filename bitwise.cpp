#include <iostream>
using namespace std;

int main(void)
{
    int gi_number = 100;
    int move_right_by_1_bit,
        move_left_by_1_bit;

    cout << "The number is : " << gi_number << endl;

    move_right_by_1_bit = gi_number >> 1;
    cout << "The number after moving everything a bit in the RIGHT : " << move_right_by_1_bit << endl;

    move_left_by_1_bit = gi_number << 1;
    cout << "The number after moving everything a bit in the RIGHT : " << move_left_by_1_bit << endl;

    return 0;
}