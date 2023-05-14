//
//  main.cpp
//  Chat
//
//  Created by Vladimir on 05.04.2023.
//

#include <iostream>
#include "Chat.h"

int main(int argc, const char * argv[])

{
    setlocale(LC_ALL, "");
    
    Chat chat;
    
    chat.start();
    
    while (chat.isChatWork())
    {
        chat.showLoginMenu();
        
        while (chat.getCurrentUser())
        {
            chat.showUserMenu();
        }
    }
    
    return 0;
}
