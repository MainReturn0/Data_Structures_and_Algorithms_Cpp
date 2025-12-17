#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Facebook
{
private:
    int id;
    string password;

public:
    string username;

    // now we will make a constructor to take an input from main and put it in private.
    // In the constructor, you have access to the class's private members because it's a member function of the class itself.

    Facebook(int id)
    { // ? A  constructor, taking the input from main, even if we didnt call it. initialized automatically.
        this->id = id;
    }

    // getter

    string getPassword() //! A getter method is used to retrieve the value of a private member, so it must return the specific data type of that member.
    {
        return password; // we are using getter here so see the private data. only getter can do it.
    }
    // setter
    void setPassword(string password) //? setter method is used to set the value of a private member, and it usually doesn't return anything. So, the return type is often void.
    {
        this->password = password; //? our password is in private, so we use a setter method to store the data. cause a setter can modify a value.
    }
};

int main()
{
    //? must define jubayer.username, so it can understant okay the username belongs to the class facebook, doesnt matter in main or outside.
    // Creating the first user
    Facebook user1(101103);                        // Passing ID to the constructor
    user1.username = "jubayerhassan420@gmail.com"; // Setting username
    user1.setPassword("Ahmed");                    // Setting password

    // Creating the second user
    Facebook user2(202204);                     // Passing ID to the constructor
    user2.username = "anotheruser@example.com"; // Setting username
    user2.setPassword("Password123");           // Setting password

    // Displaying details of the first user
    cout << "User 1 Details 😗:" << endl;
    cout << "Username: 🤨  " << user1.username << endl;
    cout << "Password 🤐  : " << user1.getPassword() << endl;

    // Displaying details of the second user
    cout << "User 2 Details:" << endl;
    cout << "Username: " << user2.username << endl;
    cout << "Password: " << user2.getPassword() << endl;

    return 0;
}