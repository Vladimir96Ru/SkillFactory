//
//  Chat.h
//  Chat
//
//  Created by Vladimir on 05.04.2023.
//

#pragma once

#include <string>
#include <vector>
#include <exception>
#include <memory>
#include <iostream>
#include "Messege.h"

struct UserLoginExp : public std::exception
{
    const char* what() const noexcept override
    {
        return "ERROR: user login is bysy";
    }
};

struct UserNameExp : public std::exception
{
    const char* what() const noexcept override
    {
        return "ERROR: user name is bysy";
    }
};

class Chat
{
    bool isChatWork_ = false;
    std::vector<User> user_;
    std::vector<Message> message_;
    std::shared_ptr<User> currentUser_ = nullptr;
    
    void login();
    void signUp();
    void showChat() const;
    void showAllUsersName() const;
    void addMessage();
    std::vector<User>& getAllUsers()
    {
        return user_;
    }
    std::vector<Message>& getAllMessages()
    {
        return message_;
    }
    std::shared_ptr<User> getUserByLogin(const std::string& login) const;
    std::shared_ptr<User> getUserByName(const std::string& name) const;
    
public:
    void start();
    bool isChatWork() const
    {
        return isChatWork_;
    }
    std::shared_ptr<User> getCurrentUser() const
    {
        return currentUser_;
    }
    void showLoginMenu();
    void showUserMenu();
};
