#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
 Declarations Tasks

 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here:

 void
 bool

 int
 unsigned int
 short
 unsigned short
 long
 unsigned long
 long long
 unsigned long long

 char
 unsigned char

 float
 double
 long double

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function

3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function.
    if your function returns something other than void, add 'return {};' at the end of it.

4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments

 click the [run] button.  Clear up any errors or warnings as best you can.

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    bool isPlaying = false;
    bool shouldRotate = true;
    bool finishedReading = false;
    ignoreUnused(isPlaying, shouldRotate, finishedReading);

    int val = 0;
    int numOfLegs = 4;
    int connectedDevices = 2;
    ignoreUnused(val, numOfLegs, connectedDevices);

    unsigned int numOfBooks = 1;
    unsigned int numOfPages = 2;
    unsigned int numOfWords = 400;
    ignoreUnused(numOfBooks, numOfPages, numOfWords);

    short numOfDays = 4;
    short currentSpeed = 3;
    short currentBPM = 120;
    ignoreUnused(numOfDays, currentSpeed, currentBPM);

    unsigned short numOfCharacters = 20;
    unsigned short numOfChannels = 30;
    unsigned short numOfSpeakers = 30;
    ignoreUnused(numOfCharacters, numOfChannels, numOfSpeakers);

    long amplitude = -20;
    long fileSize = 300000;
    long brightness = 10;
    ignoreUnused(amplitude, fileSize, brightness);

    unsigned long numOfParticles = 3000000;
    unsigned long numOfAnts = 20000;
    unsigned long numOfMolecules = 1000000;
    ignoreUnused(numOfParticles, numOfAnts, numOfMolecules);

    long long roomTemperature = -100;
    long long altitude = -200;
    long long waterLevel = 20;
    ignoreUnused(roomTemperature, altitude, waterLevel);

    unsigned long long numOfAtoms = 3000;
    unsigned long long numOfNotes = 1000;
    unsigned long long numOfPhotons = 20000000;
    ignoreUnused(numOfAtoms, numOfNotes, numOfPhotons);

    char a = 'a';
    char b = 'b';
    char c = 'c';
    ignoreUnused(a, b, c);

    unsigned char A = 'A';
    unsigned char B = 'B';
    unsigned char C = 'C';
    ignoreUnused(A, B, C);

    float distance = 3.0f;
    float frequency = 400.0f;
    float area = 200.0f;
    ignoreUnused(distance, frequency, area);

    double weight = 3.0;
    double height = 20.5;
    double pressure = 20.0;
    ignoreUnused(weight, height, pressure);

    long double xCoordinate = 0.0L;
    long double yCoordinate = 0.1L;
    long double zCoordinate = 3.0L;
    ignoreUnused(xCoordinate, yCoordinate, zCoordinate);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
}

/*
 1)
 */
bool playAudio(int audioIndex, float volume = 100)
{
    ignoreUnused(audioIndex, volume);
    return {};
}
/*
 2)
 */
bool playNote(unsigned int note, float volume = 100)
{
    ignoreUnused(note, volume);
    return {};
}

/*
 3)
 */
void rotateTable(float degree = 90)
{
    ignoreUnused(degree);
    return;
}
/*
 4)
 */
bool flipToPage(unsigned int pageNum = 0)
{
    ignoreUnused(pageNum);
    return {};
}
/*
 5)
 */
unsigned int getNumOfPages(unsigned int bookIndex)
{
    ignoreUnused(bookIndex);
    return {};
}

/*
 6)
 */
void changeTuning(int string1 = 0, int string2 = 1, int string3 = 2, int string4 = 3, int string5 = 4, int string6 = 5)
{
    ignoreUnused(string1, string2, string3, string4, string5, string6);
    return;
}

/*
 7)
 */
bool changeTempo(unsigned int tempo = 60)
{
    ignoreUnused(tempo);
    return {};
}

/*
 8)
 */
void setTemperature(double temperature, bool useCelcius = false)
{
    ignoreUnused(temperature, useCelcius);
    return;
}

/*
 9)
 */
bool fillWithLiquid(int liquidType, double volumeInOz = 5)
{
    ignoreUnused(liquidType, volumeInOz);
    return {};
}

/*
 10)
 */
long getNumOfSamples(int audioId, int channel = 0)
{
    ignoreUnused(audioId, channel);
    return {};
}

int main()
{
    //example of calling that function
    rentACar(6, 2);

    //1)
    playAudio(1);

    //2)
    playNote(1, 20);

    //3)
    rotateTable(50);

    //4)
    flipToPage(2);

    //5)
    getNumOfPages(1);

    //6)
    changeTuning();

    //7)
    changeTempo(100);

    //8)
    setTemperature(100, true);

    //9)
    fillWithLiquid(0, 10);

    //10)
    getNumOfSamples(1, 1);

    std::cout << "good to go!" << std::endl;
    return 0;
}
