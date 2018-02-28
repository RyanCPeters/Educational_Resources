```C
#include <iostream>
#include <string>

using namespace std;


class Command
{
public:
    string data;
    Command()  {};
    Command(string data) {} ;
    virtual void execute() = 0;
    static Command* create(string type, string data);
};


class BorrowCommand : public Command
{
public:
    BorrowCommand(string data)  { this->data = data; }
    void execute() override
    {
        cout << "Borrow: " << data << endl;
    }
};
class ReturnCommand : public Command
{
public:
    int value;
    ReturnCommand(string data, int value)  {
        this->data = data;
        this->value = value;
        }
    void execute() override
    {
        cout << "Return: " << data << " value " << value << endl;
    }
};

Command* Command::create(string type, string data)
{
    if (type == "B")
        return new BorrowCommand(data);
    else
        return new ReturnCommand(data, 7);
}

int main()
{
    Command* c1 = Command::create("B", "Java");
    Command* c2 = Command::create("R", "C++");
    c1->execute();
    c2->execute();
    return 0;
}


```
