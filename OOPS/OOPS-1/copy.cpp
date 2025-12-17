//! Shallow and deep copy.

// Shallow copy copies only the pointers (addresses) not any actual data. but Deep copy copies the actual data. so any changes in shallow copy can also change the original data.

//? we dont need to make a custom constructor while doing shallow copy, we basically need the custom constructor while we wanna do a deep copy.

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class jubayer
{
public:
    string fullname;
    int age;
    float height;
    string *country; // we used * here so we can access it later.

    jubayer()
    {
        cout << "Hi, talking from default constructor. I got a life when you just created an object, and leave it blank. I have nothing a lot to do. bye. 😛" << endl;
    }
    jubayer(string fullname, int age, float height)
    {
        this->fullname = fullname;
        this->age = age;
        this->height = height;
        country = new string;
        *country = "Bangladesh"; // we access our country here, and allocated dynamically.

        cout << "Your data from the parameterized constructor is: " << fullname << ", " << age << ", " << height << ", " << *country << ", " << endl;
    }

    // Deep copy constructor
    jubayer(const jubayer &original)

    // This is the copy constructor. meaning you just copy the values from the ahmed object to the new object (the one you're constructing).

    //       use const here because we don’t want to modify the original object during the copying process. We’re just reading its data.
    //       jubayer&: This tells the compiler that we're taking a reference to another object of the same class (jubayer) — not a copy of it.

    //      original:  This is the name of the reference to the original object that we want to copy from.The name can be anything(original, other, etc.)
    //      It just represents the object we're copying data from.

    //? Inside the constructor, we copy the data from the original object into the new object being created like fullname, age

    {
        fullname = original.fullname; // Shallow copy
        age = original.age;           // Shallow copy
        height = original.height;     // Shallow copy
        country = new string;         // Allocate memory for a string
        *country = *original.country; //! Now, you are dereferencing the pointers. This means you are copying the actual value from ahmed.country into the newly allocated memory for country.
    }
};

int main()
{
    {
        jubayer obj1("jubayer Ahmed", 22, 5.7); // Parameterized constructor

        jubayer obj2(obj1); // Copy constructor

        // Use the getter to access fullname
        cout << obj2.fullname << endl;
        *obj2.country = "Germany"; // pointing country in object 2. and changing the value of obj2 country.
        cout << *obj2.country << endl;
        cout << *obj1.country << endl; // even after changing the value we get the same value.
        obj2.fullname = "Md Jubayer Ahmed.";
        cout << obj2.fullname << endl; //? Changed the value of obj1.
    }

    return 0;
}

/*?  yes, you're right in understanding that:

original is the existing object from which we copy the data.

We make sure not to modify original, hence the use of const.

Inside the constructor, we copy the data, using shallow copying for regular variables and deep copying for dynamically allocated memory like pointers.

//? The dot operator (.) is used to access members (variables or methods) of an object.

//! It tells the compiler that you're accessing a specific attribute or function inside the object. In this case, you're accessing the fullname attribute of the original object.



*/