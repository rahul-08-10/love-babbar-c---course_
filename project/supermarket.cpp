#include <iostream>
#include <fstream> // it conatin the class which helps the user to create , read , write the file. it contain the ofstream , ifstream
using namespace std;
class super
{
private:
    int pcode;
    float price;
    float discount;
    string pname;

public:
    void menu()
    {
    m:
        int choice;
        string email;
        string passward;

        cout << " 1) ADMINISTER " << endl;
        cout << " 2) buyer  " << endl;
        cout << " 3) exit  " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter the login details" << endl;
            cout << "enter the email :- ";
            cin >> email;
            cout << "enter the password :- ";
            cin >> passward;
            if (email == "ram" && passward == "ram")
            {
                administer();
            }
            else
            {
                cout << "invalid entry";
            }
            break;
        case 2:
            buyer();
            break;
        case 3:
            exit(0);
            break;
        }
        goto m;
    };
    void administer()
    {
        m:
        int choice;
        cout << " 1) ADD PRODUCT  " << endl;
        cout << " 2) MODIFY PRODUCT  " << endl;
        cout << " 3) DELET PRODUCT " << endl;
        cout << " 4) MAIN MENU " << endl;

        cout << "enter your choice :- ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            edit();
            break;
        case 3:
            rem();
            break;
        case 4:
            menu();
            break;
        }
        goto m;
    };
    void buyer()
    {
        int choice;
        cout << "BUY" << endl;
        cout << "BUY PRODUCT " << endl;
        cout << "GO TO MAIN MENU" << endl;
        cout << "enter your choice :- ";
        switch (choice)
        {
        case 1:
            reciept();
            break;
        case 2:
            menu();
            break;
        }
    };
    void add()
    {
    m:
        fstream name;
        int c;
        float p, d;
        int token = 0;
        string n;
        cout << "ADD NEW PRODUCT " << endl;
        cout << "Name of the product:- ";
        cin >> pname;
        cout << "ENTER THE PCODE:- ";
        cin >> pcode;
        cout << "Enter the product price:- ";
        cin >> price;
        cout << "Enter the discount:- ";
        cin >> discount;

        // name.open("database.txt", ios::in);
        if (!name)
        {
            name.open("database.txt", ios::app | ios::out);
            name << " " << pcode << " " << pname << " " << price << " " << discount;
            name.close();
        }
        else
        {
            name >> c >> p >> d >> n;
            while (!name.eof())
            {
                if (c == pcode)
                {
                    token++;
                }
                name >> c >> p >> d >> n;
            }
            name.close();
            if (token == 1)
            {
                goto m;
            }
            else
            {
                name.open("database.txt", ios::app | ios::out);
                name << " " << pcode << " " << pname << " " << price << " " << discount;
                name.close();
            }
        }
    };
    void rem()
    {
        fstream data, data1;
        int pkey;
        int token;
        cout << "Delet the product" << endl;
        cout << "Product code" << endl;
        cin >> pkey;
        data.open("database.txt", ios::in);
        if (!data)
        {
            cout << "file doesn't exit";
        }
        else
        {
            data.open("database.txt", ios::app | ios::out);
            data >> pcode >> pname >> price >> discount;
            while (!data.eof())
            {
                if (pcode == pkey)
                {
                    cout << "product deleted successfully" << endl;
                    token++;
                }
                else
                {
                    data1 << " " << pcode << " " << pname << " " << price << " " << discount;
                }
                data >> pcode >> pname >> price >> discount;
            }
            data.close();
            data1.close();
            remove("database.txt");
            rename("database1.txt", "database.txt");
        }
    };
    void edit()
    {
        fstream data, data_1;
        int pkey;
        int token = 0;
        int c;
        float p, d;
        string n;
        cout << "MODIFY THE RECORED " << endl;
        cout << "Code of the product " << endl;
        cin >> pkey;
        data.open("database.txt", ios::in);
        if (!data)
        {
            cout << "file doesn't exist" << endl;
        }
        else
        {
            data_1.open("database1.txt ", ios::app | ios::out);
            data >> pcode >> pname >> discount;
            while (!data.eof())
            {
                if (pkey == pcode)
                {
                    cout << " new code of the product :- ";
                    cin >> c;
                    cout << "name of the product :- ";
                    cin >> n;
                    cout << "price:- ";
                    cin >> p;
                    cout << "discount:- ";
                    cin >> d;
                    data_1 << " " << c << n << p << d;
                    cout << "Record edited" << endl;
                    token++;
                }
                else
                {
                    data_1 << " " << pcode << " " << pname << " " << price << " " << discount;
                }
            }
            data.close();
            data_1.close();
        }
        remove("database.txt");
        rename("database1.txt", "database.txt");
        if (token == 0)
        {
            cout << "record not found";
        }
    };
    void reciept()
    {
    m:
        fstream data;
        int arrc[100];
        int arrq[100];
        char choice;
        int c = 0;
        float amount = 0;
        float discount = 0;
        float total = 0;

        cout << "RECEIPT";
        data.open("database.txt", ios::in);
        if (!data)
        {
            cout << "Empty database";
        }
        else
        {
            data.close();
            list();
            do
            {
                cout << "enter product data";
                cin >> arrc[c];
                cout << "enter the product quantltiy: ";
                cin >> arrq[c];
                for (int i = 0; i < c; i++)
                {
                    if (arrc[c] == arrc[i])
                    {
                        cout << "Dulicate product code , try again";
                        goto m;
                    }
                    c++;
                    cout << "Do you want to buy any other product if yes then press y else n";
                    cin >> choice;
                }
            } while (choice == 'y');
            cout << "product name \t  product quantity \t price \t amount \t amount wiht discount ";
            for (int i = 0; i < c; i++)
            {
                data.open("database.txt", ios::in);
                data >> pcode >> pname >> price >> discount;
                while (data.eof())
                {
                    if (pcode == arrc[i])
                    {
                        amount = price * arrq[i];
                        discount = amount - ((amount)*discount / 100);
                        cout << pcode << pname << arrq[i] << price;
                    }
                    data >> pcode >> pname >> price >> discount;
                }
            }
            data.close();
        }
        cout<<"total amount:- "<<total<<endl;
    };
    void list()
    {
        fstream data;
        data.open("database.txt", ios::in);
        cout << "productno."
             << " "
             << "name"
             << " "
             << "price";
        data >> pcode >> pname >> price >> discount;
        while (!data.eof())
        {
            cout << pcode << " " << pname << price;
            data >> pcode >> pname >> price >> discount;
        }
        data.close();
    };
};
int main()
{
    super s;
    s.menu();
}