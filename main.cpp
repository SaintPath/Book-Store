#include "Database.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	Database &db = Database::getInstance();
	
	int choice = 0;
	while (choice != 99) {
		cout << "\n****************************************************************************\n*"
			 << " Welcome to your Book Store. Please choose one of the following:\t   *\n*\t\t\t\t\t\t\t\t\t   *\n"
			 << "* 1) Show All Books In Stock.\t\t\t\t\t\t   *\n* 2) Show Open Orders.\t\t\t\t\t\t\t   *\n"
			 << "* 3) Show All Clients.\t\t\t\t\t\t\t   *\n* 4) Show All Suppliers.\t\t\t\t\t\t   *\n"
			 << "* 5) Show All Deals Between Two Dates.\t\t\t\t\t   *\n* 6) Show All Books On Discount.\t\t\t\t\t   *\n* 7) Check If Book X Is In Stock.\t\t\t\t\t   *\n"
			 << "* 8) Show All Of A Book Suppliers.\t\t\t\t\t   *\n* 9) Show Number OF Copies Of A Book Sold Since A Given Date.\t\t   *\n* 10) Show How Many Books A Client Has Bought Since A Given Date.\t   *\n"
			 << "* 11) Show The Client Who Bought The Most Books Since A Given Date.\t   *\n* 12) Show The Supplier That Supplied The Most Books Since A Given Date.   *\n* 13) Show All Orders Between Two Given Dates.\t\t\t\t   *\n"
			 << "* 14) Show All Orders That Turned Into a Deal Between Two Dates.\t   *\n* 15) Show The Total Discount A Client Has Recieved Since A Given Date.    *\n* 16) Show Store's Profit In A Given Quarter.\t\t\t\t   *\n"
			 << "* 17) Show Clients That Joined After A Given Date.\t\t\t   *\n* 18) Show Total Of Purcheses From A Supplier Between Two Given Dates.     *\n"
			 << "* 19) Show A Worker's Sales Between Two Dates.\t\t\t\t   *\n* 20) Show Top 10 Most Sold Books Between Two Given Dates.\t\t   *\n* 99) End the program.\t\t\t\t\t\t\t   *\n"
			 << "****************************************************************************\nYour Choice:> ";
		cin >> choice;

		switch (choice) {

			case 99: {
				continue;
			}

			case 1: {
				db.allBooks();
				cin.clear();
				cin.ignore(10000, '\n');
				break;
			}

			case 2: {	
				db.openOrders();
				cin.clear();
				cin.ignore(10000, '\n');
				break;
			}

			case 3: {
				db.allClients();
				cin.clear();
				cin.ignore(10000, '\n');
				break;
			}

			case 4: {
				db.allSuppliers();
				cin.clear();
				cin.ignore(10000, '\n');
				break;
			}

			case 5: {
				db.dealsInDates();
				cin.clear();
				cin.ignore(10000, '\n');
				break;
			}

			case 6: {
				db.booksOnDiscount();
				cin.clear();
				cin.ignore(10000, '\n');
				break;
			}

			case 7: {
				db.checkStock();
				cin.clear();
				break;
			}

			case 8: {
				db.bookSupplier();
				cin.clear();
				break;
			}

			case 9: {
				db.bookSoldSince();
				cin.clear();
				break;
			}

			case 10: {
				db.booksClientBoughtSince();
				cin.clear();
				break;
			}

			case 11: {
				db.topClient();
				cin.clear();
				break;
			}
			case 12: {
				db.topSupplierOrder();
				cin.clear();
				break;
			}

			case 13: {
				db.ordersSince();
				cin.clear();
				break;
			}

			case 14: {
				db.ordeToDeal();
				cin.ignore(10000, '\n');
				break;
			}

			case 15: {
				db.totalDiscount();
				cin.clear();
				break;
			}

			case 16: {
				db.quarterProfit();
				cin.clear();
				break;
			}

			case 17: {
				db.clientsJoinedAfterDate();
				cin.clear();
				break;
			}
			case 18: {
				db.supplierPurchases();
				cin.clear();
				break;
			}

			case 19: {
				db.workersSales();
				cin.clear();
				break;
			}

			case 20: {
				db.top10Books();
				cin.clear();
				break;
			}

			default: {
				cout << "invalid choice, Returning to the Main Menu" << endl;
				choice = 42;
				cin.clear();
				cin.ignore(10000, '\n');
				break;
			}




		}

		cout << "\nPress 1 to Return To the Main Menu.\nYour Choice:> " << endl;
		choice = 0;
		while (choice != 1) {
			cin >> choice;
			cin.clear();
			cin.ignore(10000, '\n');
		}


	}


	cout << "Have a nice day!!\nGoodbye!" << endl;

    return 0;
}

