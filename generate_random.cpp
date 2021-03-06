#include <iostream>
#include <cstdlib>  // includes rand() and other functions from the C standard library  
#include <ctime>    // includes functions that return time 

using namespace std;
/* look in the standard library at the function int rand ( void ); 
    http://www.cplusplus.com/reference/clibrary/cstdlib/rand/
    
    rand(void) - Returns a pseudo-random integer number in the range 0 to 
	RAND_MAX. RAND_MAX is an integer constant defined in <cstdlib> library. 

	Its default maximum value may vary between implementations 
	but it is granted to be at least 32767.
    */

int main()
{
    string answer;
    /* line 28 = initializes the seed for the random number generator algorithm with the current time.
    The seed determines the sequence of random numbers generated by rand(). If you don't change the seed, 
    then the program will always generate the same 
    sequence of random nunumbers
    */
    // time(NULL) function that returns the current time its code is in <ctime> library
    // read more about srand at http://www.cplusplus.com/reference/cstdlib/srand/?kw=srand
    srand ( time(NULL) ); // assigns the current time to the seed 

    cout << "RAND_MAX value is " << RAND_MAX << endl;
                            
    for (int i = 0; i < 10; i ++)
        cout << rand() << '\t';
    cout << "\nQ1: What is the output of rand(). Why? " << endl;
    answer = "" ; // 1. Write your answer to Q1 in between " "
    cout << "Answer Q1: " << answer << endl;

    cout << endl;
    for (int i = 0; i < 10; i ++)
        cout << rand()%5 << '\t';
    cout << "\nQ2: What is the output of rand()%5. Why? " << endl;
    answer = "" ; // 2. Write your answer to Q2 in between " "
    cout << "Answer Q2: " << answer << endl;

    cout << endl;
    for (int i = 0; i < 10; i ++)
        cout << rand()%5+3 << '\t';
    cout << "\nQ3: What is the output of rand()%5+3. Why?" << endl;
    answer = "" ; // 3. Write your answer to Q3 in between " "
    cout << "Answer Q3: " << answer << endl;

    // Comment the line srand(time(NULL)); compile and run the program twice
    cout << "\nQ4: What is the output of the program when srand(time(NULL)) is removed. Why" << endl;
    answer = "" ; // 4. Write your answer to Q4 in between " "
    cout << "Answer Q4: " << answer << endl;

    // 5. Change the rand() expression below to generate a random number 
    // between 1 and 6 that will be assigned to dice_output variable. 
    cout << endl;
    bool is_error = false; 
    for (int i = 0; i < 50; i ++)
    {
        int dice_output = rand(); //change this expression so dice_output has a value between 1 and 6
        if (dice_output < 1 || dice_output > 6)
        {
            cout << "Error: your code does not generate # between 1 and 6" << endl;
            is_error = true;
            break;  // exits the loop
        }
        cout << dice_output << '\t';
    }	
    cout << endl;

    if (is_error)
        exit(1);  // failure
    else
        exit(0); // success

    // read more about exit codes at https://www.geeksforgeeks.org/exit-codes-in-c-c-with-examples/#:~:text=The%20purpose%20of%20the%20exit,executed%20succesfully%20without%20any%20error.
    // http://www.cplusplus.com/reference/cstdlib/exit/
}
