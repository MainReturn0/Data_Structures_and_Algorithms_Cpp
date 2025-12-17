#include <iostream>
using namespace std;

class Jubayer // The class "Jubayer" acts as a blueprint for creating objects. It defines attributes and methods.
{
private:             // These attributes are private, meaning they cannot be accessed directly from outside the class.
    string fullName; // Attribute to store the full name of the object.
    int age;         // Attribute to store the age of the object.
    float height;    // Attribute to store the height of the object.
    int grade;       // Attribute to store the grade of the object.

public:       // These methods and constructors are public, meaning they can be accessed from outside the class.
    Jubayer() // Default constructor: Initializes the object with default values.
    {
        fullName = "unknown";                     // Sets the default value for fullName.
        cout << "Hi, My name is Jubayer" << endl; // Prints a message when the default constructor is called.
    }

    Jubayer(string name, int a, float h, int g) // Parameterized constructor: Initializes the object with provided values.
    {
        // Assigns the provided values to the attributes of the class.
        fullName = name; // here we wont use //! this -> constructor, because we have diffrent types of parameter.
        age = a;
        height = h;
        grade = g;
    }

    // Method to display the object's details.
    void result()
    {
        // Prints the full name and grade of the object.
        cout << "Class: " << fullName << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    // Creating an object using the default constructor.
    // This will call the default constructor, which initializes the object with default values and prints a message.
    Jubayer g21; //? the object name is the same as class name, but we can also distinguish it from the class name by adding another keyword like g21, now the object name is g21.
    // we are giving the name g21 of the object to use it later. otherwise it would be a temp onject and inaccisilbe later,
    g21.result(); // Calls the result method to display the object's details.

    // Creating an object using the parameterized constructor.
    // This will call the parameterized constructor, which initializes the object with the provided values.
    Jubayer g21("Jubayer", 21, 5.9, 85);
    g21.result(); // Calls the result method to display the object's details.

    return 0; // Indicates successful program termination.
}

//? When you create an object, C++ will automatically pick the constructor that matches the arguments you pass in.
// When we make a class and initialize it with an object name, to access or call any function in public,
    // we need to use the object name so the compiler can understand that the function belongs to this class.
    // If we don't use the object name, the compiler will assume either the function doesn't belong to this class
    // or it's a static function defined under the class. If the static function is not found, the compiler will throw an error.