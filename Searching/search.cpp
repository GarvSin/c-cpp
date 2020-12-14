#include <iostream>     // std::cout
using namespace std;

int main(void)
{
	int gi_length_of_input_array = 5;
	int arr_input[5],gi_search_this_number;
	int gi_low, gi_high, gi_mid, gi_record_found = 0;
	/**
	cout << "What is the input array size? \n";
	cin >> gi_length_of_input_array;
	cout << gi_length_of_input_array;
	cout << "Enter the number \n" << gi_length_of_input_array;*/
	
	cout << "Enter 5 numbers. \n";
	
	for (int i = 0; i < gi_length_of_input_array; i++)
	{
		cin >> arr_input[i];
	}

	cout << "Enter the number needs to be serached. \n";
	cin >> gi_search_this_number;

    /*Sort the array. This is Bubble Sort.*/
	for(int i=0;i<gi_length_of_input_array;i++)
    {
        for(int j=0;j<gi_length_of_input_array-i;j++)
        {
            if(arr_input[j]>arr_input[j+1])
            {
                arr_input[j]=arr_input[j]+arr_input[j+1];
                arr_input[j+1]=arr_input[j]-arr_input[j+1];
                arr_input[j]=arr_input[j]-arr_input[j+1];
            }
        }
    }

    gi_low  = 0;
	gi_high = gi_length_of_input_array - 1;

	while (gi_low <= gi_high)
	{
		/* code */
		gi_mid = (gi_low + gi_high) >> 1;

		if(arr_input[gi_mid] < gi_search_this_number)
            gi_low = gi_mid + 1;
		else if (arr_input[gi_mid] > gi_search_this_number)
		    gi_high = gi_mid - 1;
		else
		{
			gi_record_found = 1;
		    break;
		}
	}

	if (gi_record_found)
		cout << gi_search_this_number << "is present in the array.\n";
	else
        cout << gi_search_this_number << "is not present in the array.\n";
		
	system("pause");
	return 0;
}
