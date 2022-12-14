#include "Tech.h"
#include "Pretech.h"
#include "Nintendo.h"
int main()
{
    ITech* grocery[5];

    grocery[0] = new Fridge(15000, string("White"));
    grocery[1] = new TV(50000, 225);
    grocery[2] = new Mobile(4000, string("Huawei"));
    grocery[3] = new Phones(1500, 20);
    grocery[4] = new NintendoSwitch(25000, 1500);

    bool open = true;
    while (open)
    {
        cout << "Choose your device: 1 Fridge, 2 TV, 3 Mobile, 4 Phones, 5 Nintendo, 0 Exit." << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            grocery[0]->Show();
            break;

        case 2:
            grocery[1]->Show();
            break;

        case 3:
            grocery[2]->Show();
            break;

        case 4:
            grocery[3]->Show();
            break;

        case 5:
            grocery[4]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "take your choise 1 or 5. If you wanna quit chose 0." << endl;
            break;
        }
    }
    delete grocery[0];
    delete grocery[1];
    delete grocery[2];
    delete grocery[3];
    delete grocery[4];

    return 0;
}