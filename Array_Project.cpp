// Array_Project Code Junior Ezuma - Ngwu

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int formatArray(int format)
{
    for (int c = 0; c < SIZE; c++);
        cout << numbers[SIZE] << " ";
        if (int c = 5 % 0 )
        {
            cout << "\n";
        }
    
    for (int val : numbers)
    cout << " Here are the numbers for the array: " << val << endl;

    return format;
}

int lowValue(int min)
{
    int count;
    int lowest;
    lowest = numbers[0];

    for (count = 1; count < SIZE; count++)
    {
        if (numbers [count] < lowest)
        lowest = numbers[count];
    }

    return min;
}

int highValue(int max)
{
    int count;
    int highest;
    highest = numbers[0];
    
    for (count = 1; count < SIZE; count++)
    {
        if (numbers[count] > highest)
        highest = numbers[count];

        return max;
    }
}

int randoms(int random_numbers)

{
    int random_numbers;

    const int MIN_VALUE = -75;
    const int MAX_VALUE = 200;

    unsigned seed = time(0);

    srand(seed);

    random_numbers = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    return random_numbers;
}

void showArray(int [], int); // Function prototype

const int SIZE = 50;
int numbers [50];



int main()
{
    const int SIZE = 50;
    int numbers [SIZE];

    double average, sum = 0;

    int min, max, format, random_numbers = 0;

    string fileName;

    cout << " Enter the name of the file: ";
    getline(cin >> ws, fileName);

    std::ofstream outputFile;
    outputFile.open(fileName + ".txt");

// Array Values
    for(int &val : numbers)
    cout << "Array numbers are as follows: ";
    cout << randoms(random_numbers);

// Calculating total of all array numbers and averaging them
    for(int count = 0; count <= SIZE; count++)
        sum +=  numbers[SIZE];

    average = sum / SIZE;


// Pinting Aray element by element
    for(int i = 0; i < SIZE; i++)
    cout << numbers[i] << endl;


// Outputting Array to terminal
    cout << "Array Values: " << formatArray(format) << endl;
    cout << "Minimum Array Value: " << lowValue(min) << endl;
    cout << "Maximum Array Value: " << highValue(max) << endl;

// Writting to text file
    outputFile << "Array Values: " << formatArray(format) << endl;
    outputFile << "Minimum Array Value: " << lowValue(min) << endl;
    outputFile << "Maximum Array Value: " << highValue(max) << endl;

    outputFile.close();

    return 0;
}


    
    
