#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char choice;

    do {
        const int PRODUCTS = 5;
        const int SALESPERSONS = 4;

        double sales[PRODUCTS][SALESPERSONS] = {0};

        int sp, prod;
        double amount;
        char choice;

        // INPUT SALES
        do {
            cout << "\nEnter salesperson (1-4): ";
            cin >> sp;

            cout << "\nEnter product (1-5): ";
            cin >> prod;

            cout << "\nEnter amount: ";
            cin >> amount;

            sales[prod - 1][sp - 1] += amount;

            cout << "\nAdd another? (Y/N): ";
            cin >> choice;

        } while (choice == 'Y' || choice == 'N');

        // DISPLAY TABLE
        cout << "\n\tSalesperson\n";
        cout << "Product";

        for (int j = 0; j < SALESPERSONS; j++)
            cout << setw(10) << j + 1;

        cout << setw(10) << "Total\n";

        double grandTotal = 0;

        // ROW TOTALS
        for (int i = 0; i < PRODUCTS; i++) {
            double rowTotal = 0;
            cout << i + 1;

            for (int j = 0; j < SALESPERSONS; j++) {
                cout << setw(10) << fixed << setprecision(2) << sales[i][j];
                rowTotal += sales[i][j];
            }

            cout << setw(10) << rowTotal << endl;
            grandTotal += rowTotal;
        }

        // COLUMN TOTALS
        cout << "Total";
        for (int j = 0; j < SALESPERSONS; j++) {
            double colTotal = 0;

            for (int i = 0; i < PRODUCTS; i++) {
                colTotal += sales[i][j];
            }

            cout << setw(10) << colTotal;
        }

        cout << setw(10) << grandTotal << endl;

        cout << "\nRun again? (Y/N): ";
        cin >>choice;

    } while (choice == 'Y' ||choice == 'N');

    return 0;
}
