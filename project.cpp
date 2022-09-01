#include<bits/stdc++.h>
using namespace std;

class billing
{
    int item_no = 0;
    int product_code;
    int quantity;
    float MRP;
    string product_name;
    float total = 0;
    double remaining_amount;
    double item_total;
    float discountP;
    double discount;
    float cgst, sgst;
    double CGST, SGST;
    int ch1;
    double cash_recieved, change;
    char stat1, stat2, stat3;

public:
    void getdata2()
    {
        do
        {
            item_no++;
            cout << "ITEM NO : " << item_no << endl;
            cout << "\n    PRODUCT CODE : ";
            cin >> product_code;
            if (product_code != 0 && product_code <= 50 && product_code >= 1)
            {
                inventory(product_code);
                cout << "                      ITEM NAME : " << product_name << endl;
                cout << "                      MRP : " << MRP << " Rupees" << endl;
                cout << "\n    QUANTITY : ";
                cin >> quantity;
                item_total = MRP * quantity;
                total = total + item_total;

                cout << "                      TOTAL AMOUNT : " <<item_total << endl;
            }
            else
            {
                showdata1();
            }
        } while (product_code != 0);
    }

    void inventory(int product_code) // test inventory
    {

        switch (product_code)
        {
        case 1:
            product_name = "Butter (500 gm)";
            MRP = 109;
            break;
        case 2:
            product_name = "cheese (500 gm)";
            MRP = 259;
            break;
        case 3:
            product_name = "Bread loaf (small)";
            MRP = 29;
            break;
        case 4:
            product_name = "Bread loaf (medium)";
            MRP = 39;
            break;
        case 5:
            product_name = "Bread loaf (large)";
            MRP = 49;
            break;
        case 6:
            product_name = "mayonnaise ";
            MRP = 89;
            break;
        case 7:
            product_name = "Soap bar";
            MRP = 19;
            break;
        case 8:
            product_name = "Shampoo";
            MRP = 65;
            break;
        case 9:
            product_name = "conditioner";
            MRP = 80;
            break;
        case 10:
            product_name = "Body wash";
            MRP = 99;
            break;
        case 11:
            product_name = "Face wash";
            MRP = 59;
            break;
        case 12:
            product_name = "Face scrub";
            MRP = 79;
            break;
        case 13:
            product_name = "Deodorant";
            MRP = 199;
            break;
        case 14:
            product_name = "Powder";
            MRP = 250;
            break;
        case 15:
            product_name = "Toothbrush (set of 6)";
            MRP = 49;
            break;
        case 16:
            product_name = "Toothpaste (120 gm)";
            MRP = 110;
            break;
        case 17:
            product_name = "Dishwash bar";
            MRP = 29;
            break;
        case 18:
            product_name = "Detergent (Top load)";
            MRP = 289;
            break;
        case 19:
            product_name = "Detergent (Front load)";
            MRP = 299;
            break;
        case 20:
            product_name = "Handwash liquid";
            MRP = 52;
            break;
        case 21:
            product_name = "Frozen peas(200 gm)";
            MRP = 169;
            break;
        case 22:
            product_name = "Frozen peas (400 gm)";
            MRP = 329;
            break;
        case 23:
            product_name = "Yogurt";
            MRP = 56;
            break;
        case 24:
            product_name = "Tetra Milk (500 ml)";
            MRP = 39;
            break;
        case 25:
            product_name = "Tetra Milk (1 L)";
            MRP = 79;
            break;
        case 26:
            product_name = "Tetra fruit juice (1 L)";
            MRP = 99;
            break;
        case 27:
            product_name = "Tetra soya milk (1 L)";
            MRP = 99;
            break;
        case 28:
            product_name = "cottage cheese (200 gm)";
            MRP = 79;
            break;
        case 29:
            product_name = "cottage cheese (400 gm)";
            MRP = 159;
            break;
        case 30:
            product_name = "peanut butter";
            MRP = 186;
            break;
        case 31:
            product_name = "Honey";
            MRP = 154;
            break;
        case 32:
            product_name = "Fruit Jam";
            MRP = 188;
            break;
        case 33:
            product_name = "Coffee";
            MRP = 89;
            break;
        case 34:
            product_name = "Tea";
            MRP = 129;
            break;
        case 35:
            product_name = "Chocolate powder";
            MRP = 176;
            break;
        case 36:
            product_name = "Oil (1 L)";
            MRP = 80;
            break;
        case 37:
            product_name = "Butter cookies";
            MRP = 129;
            break;
        case 38:
            product_name = "chocolate chip cookies";
            MRP = 150;
            break;
        case 39:
            product_name = "Oats (400 gm)";
            MRP = 170;
            break;
        case 40:
            product_name = "Oats (1 Kg)";
            MRP = 350;
            break;
        case 41:
            product_name = "American almonds (100 gm)";
            MRP = 199;
            break;
        case 42:
            product_name = "Cashew nuts (100 gm)";
            MRP = 189;
            break;
        case 43:
            product_name = "walnuts (100 gm)";
            MRP = 179;
            break;
        case 44:
            product_name = "Potatoes (1 Kg)";
            MRP = 39;
            break;
        case 45:
            product_name = "Vanilla Ice cream (1 L)";
            MRP = 79;
            break;
        case 46:
            product_name = "chocolate Ice cream (1 L)";
            MRP = 99;
            break;
        case 47:
            product_name = "Sugar (1 kg)";
            MRP = 49;
            break;
        case 48:
            product_name = "Rice (1 kg)";
            MRP = 90;
            break;
        case 49:
            product_name = "Wheat flour (10 kg)";
            MRP = 179;
            break;
        case 50:
            product_name = "Corn flakes";
            MRP = 129;
            break;
        default:
            cout << "--------ERROR (ITEM NOT FOUND)--------";
        }
    }

    void showdata1()
    {
        cout << "--------------------------------BILL END--------------------------------" << endl;
        cout << "SUB TOTAL : " << total << endl;
        cout << "------------------------------------------------------------------------" << endl;
        CGST = cgst / 100 * total;
        SGST = sgst / 100 * total;
        cout << "CGST(" << cgst << "%) : " << CGST << endl;
        cout << "SGST(" << sgst << "%) : " << SGST << endl;
        total = total + CGST + SGST;
        discount = discountP / 100 * total;
        cout << "TOTAL SAVINGS(" << discountP << "%):" << fixed << setprecision(2) << discount << endl;
        total = total - discount;
        cout << "------------------------------------------------------------------------" << endl;
        cout << "TOTAL AMOUNT PAYABLE : " << fixed << setprecision(2) << total << " RUPEES ONLY" << endl;

        item_no = item_no - 1;
        cout << "ITEMS BOUGHT : " << item_no << endl;
    }

    void getdata1()
    {
        cout << "                                -INITIATION-                               " << endl;
        cout << "CGST(%) : ";
        cin >> cgst;
        cout << "SGST(%) : ";
        cin >> sgst;
        cout << "DISCOUNT(%) : ";
        cin >> discountP;
        cout << "-------------------------------------------------------------------------" << endl;
    }
    void payment()
    {
        cout << "----------------------------------------------------------------------------------------------------PAYMENT----------------------------------------------------------------------------------------------------" << endl;
        cout << "\n-PAYMENT METHOD-" << endl;
        cout << "1)CASH\n2)CREDIT/DEBIT CARD\n3)ONLINE BANKING\n4)PAYTM/PHONEPE/MOBIKWIK/GOOGLE PAY AND UPI" << endl;
        cout << "\nCHOICE : ";
        cin >> ch1;
        cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        int flag=0;
        switch (ch1)
        { 
        case 1:
            cout << "\nCASH AMOUNT : " << fixed << setprecision(0) << total << " RUPEES" << endl;
            cout << "CASH RECIEVED : ";
            cin >> cash_recieved;
            if (cash_recieved > total)
            {
                change = cash_recieved - total;
                cout << "CHANGE TO BE RETURNED: " << change << " RUPEES" << endl;
            }
            else
            {
                remaining_amount = total - cash_recieved;
                cout << "REMAINING AMOUNT: " << remaining_amount << " RUPEES" << endl;
            }
            cout << "\n********TRANSACTION COMPLETE********" << endl;
            cout << "********PRINTING BILL********" << endl;
            break;
        case 2:
            cout << "\nUSE SWIPE MACHINE FOR PAYMENT OF " << total << " RUPEES" << endl;
            cout << "DO YOU WANT COPY OF RECIEPT?(Y/N) : ";
            cin >> stat1;
            if (stat1 == 'Y' || stat1 == 'y')
            {
                cout << "--------------------------------PRINTING COPY--------------------------------" << endl;
                cout << "\nTRANSACTION COMPLETE" << endl;
                cout << "********PRINTING BILL********" << endl;
            }
            else if (stat1 == 'N' || stat1 == 'n')
            {
                cout << "--------------------------------PRINTING ONE RECIPT--------------------------------" << endl;
                cout << "TRANSACTION COMPLETE" << endl;
                cout << "********PRINTING BILL********" << endl;
            }
            else
            {
                cout << "INVALID INPUT" << endl;
            }
            break;
        case 3:
            cout << "----------------ONLINE BANKING PROCEDURE TO BE COMMENCED----------------" << endl;
            cout << "ACC NO. 102901019985" << endl;
            cout << "AMOUNT RECIEVED?(PRESS ANY KEY TO CONFIRM) : ";
            cin >> stat2;
            if (stat2 == 'Y' || stat2 == 'y')
            {
                cout << "\nTRANSACTION COMPLETE" << endl;
                cout << "********PRINTING BILL********" << endl;
                flag=1;
            }
            else
            {
                cout << "\nTRANSACTION INCOMPLETE" << endl;
            }
            break;
        case 4:
            cout << "----------------PAYMENT BY UPI----------------" << endl;
            cout << "PAYMENT RECIEVED?(PRESS ANY KEY TO CONFIRM) : ";
            cin >> stat3;
            if (stat3 == 'Y' || stat3 == 'y')
            {
                cout << "\nTRANSACTION COMPLETE" << endl;
                cout << "********PRINTING BILL********" << endl;
                flag=1;
            }
            else
            {
                cout << "\nTRANSACTION INCOMPLETE" << endl;
            }
            break;
        default:
            cout << "----------------INVALID INPUT----------------";
            cout<< "----------------PLEASE TRY AGAIN----------------";
        }
        if(flag==1)
        {
        int luckyNo;
        cout << "\nDo you feel lucky today?  If so, enter your  lucky numbers between 0 and 9:\n";
        
        cin>>luckyNo;
        int ans=int(total);
        if((ans)%9==luckyNo)
        {
           cout << "Congratulations you are the Grand Prize Winner!!!\n";
        }
        else
        {
             cout << "Sorry you did not pick the winning numbers, please try again.\n";
        } 
        } 
    }
};

int main()
{
    char deci1;
    do
    {

        cout << "\n----------------------------------------------------------------------------------------------------NEW BILL-------------------------------------------------------------------------------------------------" << endl;
        cout << "BILL NO: " << rand() << endl;
        billing obj;
        obj.getdata1();
        obj.getdata2();
        obj.payment();
        cout << "START NEW BILL?(Y/N) : ";
        cin >> deci1;

    } while (deci1 == 'Y' || deci1 == 'y');
    cout << "PLEASE EXIT PROGRAM";

    return 0;
}