#include <iostream>     // std::cout
using namespace std;

int main(void)
{
	int gi_length_of_input_array = 5;
	int arr_input[5];
	/**
	cout << "What is the input array size? \n";
	cin >> gi_length_of_input_array;
	cout << gi_length_of_input_array;*/
	cout << "Enter the number \n" << gi_length_of_input_array;
	
	for (int i = 0; i < gi_length_of_input_array; i++)
	{
		cin >> arr_input[i];
	}

	for (int i = 0; i < gi_length_of_input_array; i++)
	{
		cout << arr_input[i] << "\n";
	}
	
	system("pause");
	return 0;
}
