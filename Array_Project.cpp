// Array_Project Code Junior Ezuma - Ngwu

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib> 
#include <ctime>
using namespace std;

// Global Variables
const int SIZE = 50;
int numbers[SIZE];
int c = 0;

// Array printing format function
int formatArray(int format)
{
// Prints 5 values per row 10 times
    for (int c = 0; c < SIZE; c++);
    { cout << numbers[c] << " ";
        if ((SIZE + 1) % format == 0)
        {
            cout << "\n";
        }
    }
    cout << endl;
    return format;
}

// Lowest array value function
int lowValue()
{

    int lowest = numbers[0];

    for (int c = 1; c < SIZE; c++)
    {
        if (numbers [c] < lowest)
        {
            lowest = numbers[c];
        }
    }
    return lowest;
}
// Highest array value function
int highValue()
{
    
    int highest = numbers[0];
    
    for (int c = 1; c < SIZE; c++)
    {
        if (numbers[c] > highest)
        {
            highest = numbers[c];
        }
        
        return highest;
    }
}

int sumArray()
{
    int sum = 0;
    for (int c = 0; c < SIZE; c++) 
    {
        sum += numbers[c];
    }
    return sum;
}

void printArray(int format, ostream& out)
{
    for (int c = 0; c < SIZE; c++)
    {
        out << numbers[c] << " ";
        if ((c + 1) % format == 0)
        {
            cout << endl;
        }
    }
}

// random number generation function
void fillArray(int min, int max)
{
    srand(time(nullptr));
    for(int c = 0; c < SIZE; c++)
    {
        numbers[c] = rand() % (max - min + 1) + min;
    }

}

int main()
{
// Initilaized variables in main
    string fileName;

    int min = -75, max = 200;
    int sum, format = 5;
    double average;
    int c = 0;

// User prompted to type file name
    cout << " Enter the name of the file: ";
    getline(cin >> ws, fileName);

/* The array is filled with 50 random numbers that identifies
    the mininum and maximum array values*/
    fillArray(min, max);

    cout << "Array Values: " << endl;
    printArray(format, cout);

// Code is being printed to a .txt file
    std::ofstream outputFile;
    outputFile.open(fileName + ".txt");

    if(outputFile.is_open())
    {
        cout << "Array Values: (" << fileName << ".txt):" << endl;
        printArray(format, cout);
    }
    else
    {
        cout << "Unable to open file." << endl;
    }

// Sum function of array values and average calculated
    sum = sumArray();
    average = static_cast<double>(sum) / SIZE;

// Outputting Array to terminal
    cout << "Minimum Array Value: " << lowValue() << endl;
    cout << "Maximum Array Value: " << highValue() << endl;
    cout << "Sum of Array Values: " << sum << endl;
    cout << "Average of Array Values: " << fixed << setprecision(2) << average << endl;

// Writting to text file
    outputFile << "Minimum Array Value: " << lowValue() << endl;
    outputFile << "Maximum Array Value: " << highValue() << endl;
    outputFile << "Sum of Array Values: " << sum << endl;
    outputFile << "Average of Array Values: " << fixed << setprecision(2) << average << endl;

    outputFile.close();

    return 0;
}


    
    
