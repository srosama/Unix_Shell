/*** 
2024 @srosamazaid
This is the main zaid shell file
######>> Terminal Mods
######>> Main while 
***/
#include <unistd.h>
#include <stdio.h>


int main(int argc, char** argv)
{
    if (isatty(STDIN_FILENO))
    {
        //*Shell is running in interactive mode
        
    }
    else
    {
        //! Shell is running in non-interactive mode
    }
}