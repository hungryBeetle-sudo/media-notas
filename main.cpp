#include <string>
#include <iostream>
#include <vector>

int main(){

	std::vector<double> grades;
	std::string user_input;
	double final_grade;
	std::string final_situation;

	std::cout << "Minimum passing grade: 7\n";
	std::cout << "Insert the notes:\n";

	for(int i = 0; i < 4; i++){
		std::cout << "N" << i + 1 << ": ";
		std::cin >> user_input;
		double aux = std::stod(user_input);
		grades.push_back(aux);
		user_input.clear();
	}

	for(double foo : grades){
		final_grade += foo;
	}

	final_grade = final_grade / 4;

	if(final_grade >= 7){ final_situation = "Approved"; }
	else{ final_situation = "Failed"; }

	std::cout << "Result: " << final_grade << ", " << final_situation << "\n";

	return 0;
}
