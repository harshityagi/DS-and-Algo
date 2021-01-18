#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool IsLoggedIn(){
	string username,password,un,pw;
	cout<<"Enter username: "; cin>>username;
	cout<<"Enter password: "; cin>>password;
	ifstream read("data\\" +username+".txt");
	getline(read,un);
	getline(read,pw);

	if(un==username && pw=password) return true;
	else return false;
}

int main(){
	int choice;
	cout<<"1: Register\n2: Login\nYour Choice: ";
	cin>>choice;
	if(choice==1){
		string username,password;
		cout<<"select a username: "; cin>>username;
		cout<<"select a password: "; cin>>password;
		ofstream file;
		file("data\\"+username+".txt");
		file<<username<<endl<<password;
		file.close();
	}
}