#include <windows.h>
#include <iostream>
#include "driver.h"
#include "functions.h"


auto main() -> int {

    if ( ! auth ( ) )
    {
        exit(1);
    }

    :: printf ( "Copyright(C) 2024 Skar Disk Edit Utility. All Rights Reserved. \n " ) ;

    :: text_util->log_print("setting up communications... " ) ;

    if (Memory->setup( ) ) {

        text_util->log_print(    "communications setup successfully.") ;

        ::  std::string newDisk = "1151-3736-SKAR";
        ::  text_util->log_print(   "new disk serial ->" + newDisk);


        :: Memory->changeDisk ( newDisk ) ;
        :: text_util->log_print(    "randomizing bios" ) ;
        :: text_util->log_print(    "randomizing baseboard" ) ;
        :: text_util->log_print(    "randomizing uuid" ) ;
        :: text_util->log_print(    "done.");
        :: Sleep(1000);
        :: system("pause");
    }
    else {

        :: text_util->log_print( "setup failed, make sure u run as admin." ) ;
    }

    :: delete Memory;
    return 0;
}