#include <bits/stdc++.h>

int main () {
	
	// prompt for a string input //
	std::cout << "Enter the string to be examined : \n"; 
	
	// enter the string //
	std::string input_string;
	std::cin >> input_string;
	
	///////////////////// checking if string is unique or not ////////////////////////
	
	// if string has more than 128 characters, it automatically has repeated characters //
	if (input_string.length() > 128){
		std::cout << "String does not have unique characters! \n";
		return 0;
	}	
	
	// checking the array if it is shorter than 128 characters //
	int char_index_arr[128], var;
	memset(char_index_arr, 0, sizeof(char_index_arr));
	
	for (int i = 0; i < input_string.length(); i++){
		
		var = input_string[i];
		if(char_index_arr[var] == 0){
			char_index_arr[var] = 1;
		}
		else{
			std::cout << "String does not have unique characters! \n" ;
			return 0;
		}
	}
	std::cout << "String has all unique characters! \n" ;
}
