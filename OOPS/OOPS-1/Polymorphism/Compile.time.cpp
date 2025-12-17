#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class compile
{

private:
    string FullName;
    int age;
    string Phone;
    string Country;

public:
    int money;
    string currency;
    compile(string FullName, string country)
    {
        this->FullName = FullName;
        Country = country;
    }

    void setPhone(string phone)
    {
        Phone = phone;
    }
    void setage(int age)
    {                    //? setage is the function name.
        this->age = age; // setting age value
    }

    void getPrivate()
    {
        cout << "Name: " << FullName << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << Phone << ", " << "Country: " << Country << endl;
    }

    int overloading(int money)
    {
        this->money = money;
        return 0;
    }
    string overloading(string currency)
    {
        this->currency = currency;
        return currency; // Return the string value
    }
};

int main()
{

    compile Jubayer("Md Jubayer Ahmed", "Bangladesh");
    Jubayer.setPhone("iPhone");
    Jubayer.setage(22);
    Jubayer.getPrivate();
    cout << "Money: " << Jubayer.overloading(1000) << ", " << "Currency: " << Jubayer.overloading("Euro") << "." << endl;
    return 0;
}