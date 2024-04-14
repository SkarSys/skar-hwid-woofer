#include <windows.h>
#include <iostream>
#include "utils.h"
#include "auth.hpp"
#include "sk.h"

using namespace KeyAuth;

auto name = skCrypt("skar_woofer");
auto ownerid = skCrypt("GGAGT74CFa");
auto secret = skCrypt("fa794c5650bf96282daddf0973cfd610c81d9d384ee91c651429c61130cba188");
auto version = skCrypt("1.0");
auto url = skCrypt("https://keyauth.win/api/1.2/"); // change if you're self-hosting

api KeyAuthApp(name.decrypt(), ownerid.decrypt(), secret.decrypt(), version.decrypt(), url.decrypt());



auto auth() -> bool {

    KeyAuthApp.init();
    std::cout << "\n\n [ Connecting ]...";
    std::string key; 
    std::cout << ("\n [ Key ] -> ");
    std::cin >> key;
    KeyAuthApp.license(key);

    if (!KeyAuthApp.response.success)
    {
        std::cout << ("\n Status: ") << KeyAuthApp.response.message;
        Sleep(1500);
        exit(1);
    }

    return true;
}