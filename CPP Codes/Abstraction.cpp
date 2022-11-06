#include <iostream>
using namespace std;

// Abstract Class
class mobileUser
{
public:
    //  1. Simple Function
    void call()
    {
        cout << "This is a simple function!" << endl;
    }

    // 2. Constructor- [ Must have declared & Called in Parent Classes ]
    mobileUser(string msg1)
    {
        cout << "This is a message from Constructor= " << msg1 << endl;
    }

    // 3. Pure Virtual function OR, Abstract Function- [ Must have declared & Called in Parent Classes ]
    virtual void sendMessage() = 0; // You must need to use this function in the all Child Classes!
};

// Child class- 01
class Rahim : public mobileUser
{
public:
    // Declaring Constructor
    Rahim(string msg1) : mobileUser(msg1)
    {
    }

    // Abstract Function
    virtual void sendMessage()
    {
        cout << "Rahim sends meassage!" << endl;
    }
};

// Child CLass- 02
class Karim : public mobileUser
{
public:
    // Declaring Constructor
    Karim(string msg1) : mobileUser(msg1)
    {
    }

    // Abstract Function
    virtual void sendMessage()
    {
        cout << "Karim sends message!" << endl;
    }
};

// Main Function
int main()
{
    //  You can not create an object of Parent class because here, it is an abstract class!
    Rahim R1("Hi! This is Rahim.");
    R1.sendMessage();

    Karim K1("Hi! This is Karim.");
    K1.sendMessage();
}