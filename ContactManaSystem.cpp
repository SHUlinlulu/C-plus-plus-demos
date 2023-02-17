#include<iostream>
#include<string>
#define MAXSiZE 100
using namespace std;
/*
*Target:To develop a "Contact Management System"with previously learned knowledge
* Requirements:
* 1.Have a visual and simple interface with beautiful meau
* 2.Complete functional handling,e.g:"Create","Add","Delete","Inquire","Clear","Modify","Exit"
* 3.Clear screen operation after each sub-function is completed
* Description:
* 1.personInfo:"name","phone","Tag"(family,colleage,classmate,leader,relative,stranger...)
* 2.Contacts:personInfo[MAXSIZE];size
* Steps:
* 1.Write a visual menu
* 2.wirte a "switch structure"
* 3.define the Statistics Structure
* 4.Realize concrete functions
* 5.unit testing
* 6.integrity testing
* 7.submission
*/
//define Statistics Structure
typedef struct {
	string name;//name of contact
	long phone=0;//telephone of contact
	string tag;//tag of contact,e.g	family	||	colleage	||	relative...||stranger
}personInfo;
typedef struct {
	personInfo pinfo[MAXSiZE];
	int size=0;
};
//Statements of functions 
void showMenu();
void createContacts();
//main function
int main(int argc, char* argv[]) {
	int selectOper = 0;//定义用户的操作码
	//1.Provide a virual menu
	while (true) {
		showMenu();
		//2.switch 
		cout << "Please select the operation code:" << endl;
		cin >> selectOper;
		switch (selectOper) {
			//Create a Contacts
		case 1: {
			createContacts();//Create a Contacts,mainly to initial the Contacts
		}
		{
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Add
		case 2:
		{
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Delete
		case 3:
		{
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Inquire
		case 4:
		{
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Modify
		case 5:
		{
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Clear
		case 6:
		{
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Exit
		case 0: {
			cout << "Exit Success!Welcome use again!!" << endl;
			system("pause");
			system("cls");
			//system("pause");//Press any key to continue
			return 0;
		}
		default: {
			cout << "Operation Failure!Please input proper operation code!!!" << endl;
			system("pause");
			system("cls");
		}
		}
	}
}


//define function "showMenu"
void showMenu() {
	cout << "**************************************************************" << endl;;
	cout << "*******\t1.Create Contacts*******************************" << endl;
	cout << "*******\t2.Add a contact into Contacts*******************" << endl;
	cout << "*******\t3.Delete a contact from Contacts ***************" << endl;
	cout << "*******\t4.Inquire a contact within Contacts*************" << endl;
	cout << "*******\t5.Modify a contact within Contacts *************" << endl;
	cout << "*******\t6.Clear the Contacts	************************" << endl;
	cout << "*******\t0.Exit the Contact Management System************" << endl;
	cout << "**************************************************************" <<endl;
}

//define function "createContacts"
void createContacts() {

}