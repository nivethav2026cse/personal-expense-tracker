#include <iostream>
using namespace std;
int main()
{
    int amount[100], n = 0;
    int choice, total = 0, budget;
    cout << "Enter your monthly budget: ";
    cin >> budget;
    do
    {
        cout << "\n===== EXPENSE TRACKER =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Calculate Total\n";
        cout << "4. Check Remaining Budget\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                if (n < 100)
                {
                    cout << "Enter expense amount: ";
                    cin >> amount[n];
                    if (amount[n] > 0)
                    {
                        n++;
                        cout << "Expense added successfully!\n";
                    }
                    else
                    {
                        cout << "Invalid amount!\n";
                    }
                }
                else
                {
                    cout << "Expense limit reached!\n";
                }
                break;
            case 2:
                if (n == 0)
                {
                    cout << "No expenses available!\n";
                }
                else
                {
                    cout << "\nYour Expenses:\n";

                    for (int i = 0; i < n; i++)
                    {
                        cout << amount[i] << endl;
                    }
                }
                break;

            case 3:
                total = 0;

                for (int i = 0; i < n; i++)
                {
                    total = total + amount[i];
                }

                cout << "Total Expenses: " << total << endl;
                break;

            case 4:
                total = 0;

                for (int i = 0; i < n; i++)
                {
                    total = total + amount[i];
                }

                cout << "Remaining Budget: "
                     << budget - total << endl;
                break;

            case 5:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}

