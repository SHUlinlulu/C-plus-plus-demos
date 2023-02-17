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
/*
* Improvements:
* 1.Coding in different type files e.g ".h" & ".cpp";
* 2.Increase prompt message;
* 3.Incease Exception handling operations
* 4.Refine the problem solving
*/
//define Statistics Structure
typedef struct personInfo{
	string name;//name of contact
	long long phone=0;//telephone of contact
	string tag;//tag of contact,e.g	family	||	colleage	||	relative...||stranger
}personInfo;
typedef struct Contacts{
	personInfo pinfo[MAXSiZE];
	int size=0;
}Contacts;
//define the contacts as the global variable
Contacts contacts;
//Statements of functions 
void showMenu();
void createContacts();
void addContact(personInfo* newContact);
void deleteContact(string temp_name);
void inquireContact(string temp_name);
void modifyContact(personInfo* modContactPrt);
void clearContacts();
void showContacts();
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
			createContacts();//Create a Contacts,mainly to initial the Contacts，and Contact is static
		}
		{
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Add
		case 2: {
			personInfo newContact;
			cout << "Please input the Name of new contact：";
			cin >> newContact.name;
			addContact(&newContact);//Add a piece of personInfo into the Contacts
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Delete
		case 3:{
			personInfo delContact;
			cout << "Please input the Name of  contact deleted：";
			cin >> delContact.name;
			deleteContact(delContact.name);
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Inquire
		case 4:{
			personInfo inqContact;
			cout << "Please input the Name of  contact inquiring：";
			cin >> inqContact.name;
			inquireContact(inqContact.name);
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Modify
		case 5:{
			personInfo modContact;
			cout << "Please input the Name of  contact modifying：";
			cin >> modContact.name;
			modifyContact(&modContact);
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Clear
		case 6:
		{
			clearContacts();
			cout << "Operation Success!" << endl;
			system("pause");
			system("cls");
		}
		break;
		//Show
		case 7: {
			showContacts();
		}
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
	cout << "*******\t7.Show the Contacts*****************************" << endl;
	cout << "*******\t0.Exit the Contact Management System************" << endl;
	cout << "**************************************************************" <<endl;
}

//define function "createContacts"
void createContacts() {
	//static Contacts contacts;//can's solve problem "local variable"
	contacts.size = 0;
}
//Statement of "int isExistContact(string temp_name)"
int isExistContact(string temp_name);
//define function "addContact"
void addContact(personInfo* newContactPtr) {
	int index = isExistContact(newContactPtr->name);
	int tag = 0;
	if (index == -1) {
		contacts.pinfo[contacts.size].name=newContactPtr->name;
		cout << "Please input the Telephone of the new contact：";
		cin >> contacts.pinfo[contacts.size].phone;
		/*cout << "1.Family   2.Classmate   3.Colleage   4.Relative   5.Leader  6.Stranger" << endl;*/
		cout << "Please select the tag of the new contact" << endl;
		cout << "1.Family   2.Classmate   3.Colleage   4.Relative   5.Leader  6.Stranger" << endl;
		cin >> tag;
		switch (tag) {
		case 1: {
			contacts.pinfo[contacts.size].tag = "Family";
		}
			break;
		case 2: {
			contacts.pinfo[contacts.size].tag = "Classmate";
		}
			break;
		case 3: {
			contacts.pinfo[contacts.size].tag = "Colleage";
		}
			break;
		case 4: {
			contacts.pinfo[contacts.size].tag = "Relative";
		}
			break;
		case 5: {
			contacts.pinfo[contacts.size].tag = "Leader";
		}
			break;
		case 6: {
			contacts.pinfo[contacts.size].tag = "Stranger";
		}
			break;
		default: {
			contacts.pinfo[contacts.size].tag = "Block";
		}
		}
		contacts.size++;//contact+1
	}
}
//define function "deleteContact"
void deleteContact(string temp_name) {
	int index = isExistContact(temp_name);
	if (index == -1) {
		cout << "The contact you want to delete is not exist!!!" << endl;
	}
	else {//Forward data coverage
		for (int i = index + 1; i < contacts.size; i++) {
			contacts.pinfo[index] = contacts.pinfo[index + 1];
		}
		contacts.size--;
	}
}
//define function "inquireContact"
void inquireContact(string temp_name) {
	int index = isExistContact(temp_name);
	if (index == -1) {
		cout << "There is not such contact!!!" << endl;
	}
}
//define function "isExistContact(string temp_name)"
int isExistContact(string temp_name) {/*
	*1.return -1 represents that there is not the contact in the Contacts
	* 2.return position(int) represents that the contact is exist,and its position is "return position" 
	*/
	if (contacts.size != 0) {
		for (int i = 0; i < contacts.size; i++) {
			if (contacts.pinfo[i].name == temp_name) {
				cout << "The contact is exist!" << "Following is its infomation：" << endl;
				cout << "Name:" << contacts.pinfo[i].name<<"\tTelephone:"<<contacts.pinfo[i].phone<<"\tTag:"<<contacts.pinfo[i].tag<<endl;
				/*int choose = 0;
				cout << "Do you want to modify it?"<<endl;
				cout << "1：Yes\t" << "2：No" << endl;
				cin >> choose;
				if (choose == 1) {
					modifyContact(temp_name);
				}*/
				return i;
			}
		}
	}
	//this sentence includes two situations:one is size=0,while the other is that there is not this contact in contacts
	return -1;
}

//define function "modifyContact"
void modifyContact(personInfo* modContactPtr) {
	int index = isExistContact(modContactPtr->name);
	int tag = 0;
	if (index != -1) {
		contacts.pinfo[index].name = modContactPtr->name;
		cout << "Please input the new Telephone of the  contact：";
		cin >> contacts.pinfo[index].phone;
		/*cout << "1.Family   2.Classmate   3.Colleage   4.Relative   5.Leader  6.Stranger" << endl;*/
		cout << "Please select the new tag of the  contact" << endl;
		cout << "1.Family   2.Classmate   3.Colleage   4.Relative   5.Leader  6.Stranger" << endl;
		cin >> tag;
		switch (tag) {
		case 1: {
			contacts.pinfo[index].tag = "Family";
		}
			  break;
		case 2: {
			contacts.pinfo[index].tag = "Classmate";
		}
			  break;
		case 3: {
			contacts.pinfo[index].tag = "Colleage";
		}
			  break;
		case 4: {
			contacts.pinfo[index].tag = "Relative";
		}
			  break;
		case 5: {
			contacts.pinfo[index].tag = "Leader";
		}
			  break;
		case 6: {
			contacts.pinfo[index].tag = "Stranger";
		}
			  break;
		default: {
			contacts.pinfo[index].tag = "Block";
		}
		}
	}
	else {
		cout << "The contact you input is not exist in this Contacts!!!" << endl;
	}
}
//define function "showContacts"
void showContacts() {
	cout << "The Contacts is following" << endl;
	for (int i = 0; i < contacts.size; i++) {
		cout << "Name:" << contacts.pinfo[i].name << "\tTelephone:" << contacts.pinfo[i].phone << "\tTag:" << contacts.pinfo[i].tag << endl;
	}
}
//define function "clearContacts"
void clearContacts(){
	contacts.size = 0;//Logic Clear
}