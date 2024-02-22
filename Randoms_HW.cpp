// Topic 3 reading assignment February 21 2024

// Preprocessors Used

	#include <iostream> // input output stream
	#include <cstdlib> // rand and srand
	#include <ctime> // time function
	using namespace std; 

	int main()
	{
		// Constants 
		const int MIN_VALUE = 1; // Minimum value 
		const int MAX_VALUE = 300; // Maximum valie

		// Variables 
		int random1;
		int random2;
		double human_answer;


		// Request System Time
		unsigned seed = time(0);

		// Number Generator
		srand(seed) ;

		// Limitations 
		 random1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		 random2 = (rand() % (random1 - MIN_VALUE + 1)) + MIN_VALUE;

		// Random Numbers Displayed
		cout << "   " << random1 << endl;
		cout << "-  " << random2 << endl;
		cout << "-------  " << endl;

		// User Input
		cout << "Enter your answer:  ";
		cin >> human_answer;

		// Math Calculation
		int math_answer = random1 - random2;
		cout << "Real Answer:  " << math_answer << endl;

		return 0;
	}