#include <iostream>
#include <string>
#include "Hash.h"


// class User {
// public:
// 	User() = default;
// 	User(std::string, std::string, std::string);

// 	void showUser();
// 	void showUserName();

// 	std::string user_name();
// 	std::string user_login();
// 	std::string user_password();

// 	void get_user_name(std::string);
// 	void get_user_login(std::string);
// 	void get_user_password(std::string);

// 	void clear_login();

// private:
// 	std::string _name;
// 	std::string _login;
// 	std::string _password;
//};
#pragma once
using namespace std;
#include <string>
class User
{
    const std::string login_;
    std::string password_;
    std::string name_;

public:
    User(const std::string &login, const std::string &password, const std::string &name) : login_(login), password_(password), name_(name) {}
    const std::string &get_user_login() const { return login_; }
    const std::string &get_user_password() const { return password_; }
    void setUserPassword(const std::string &password) { password_ = password; }
    const std::string &get_user_name() const { return name_; }
    void setUserName(const std::string &name) { name_ = name; }
};
