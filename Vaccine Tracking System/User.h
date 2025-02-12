#pragma once
#include <string>
#include <unordered_map>
using namespace std;

class User
{
private:
	static string NAtIDTextBox_Text;
	static bool del_user_found;
	static bool volume_on;
public:
	//= true;
	string name, id, gender, age, Country, Governorate, password, status;
	bool correct_NatId, correct_pass;
	string NameText;//"Hello " + NameText (in userform)
public:
	User() {};
	User(string name, string id, string gender, string age, string Country, string Governorate, string password, string status) {
		this->name = name;
		this->id = id;
		this->gender = gender;
		this->age = age;
		this->Country = Country;
		this->Governorate = Governorate;
		this->password = password;
		this->status = status;
	};
	bool check_id(string );
	void read_data(unordered_map<string, User>& users);
	void update_files(unordered_map<string, User>& users);
	void login(string, string);
	void registration(string FullName, string NatID, string Pass, string Genderr, string Agee, string Countryy, string Gov, string Statuss);

	string static getNAtIDTextBox_Text();
	void static setNAtIDTextBox_Text(string val);
	void getUserName(unordered_map<string, User>& users);
	bool static getdel_user_found();
	void static setdel_user_found(bool val);
	bool getvol_on();
	void editId(string id, unordered_map<string, User>& users);
	void setvol_on(bool val);
	void editName(string name, unordered_map<string, User>& users);
	void editGender(string gender, unordered_map<string, User>& users);
	void editAge(string age, unordered_map<string, User>& users);
	void editCountry(string Country, unordered_map<string, User>& users);
	void editGov(string gov, unordered_map<string, User>& users);
	void editPassword(string password, unordered_map<string, User>& users);
	void editStatus(string age, unordered_map<string, User>& users);
};
