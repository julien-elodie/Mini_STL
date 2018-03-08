#include <iostream>
#include <curses.h>
#include "STL.h"

using namespace philous;

int STL::count = 0;

Configuration configuration = {
    "0.0.0",
    "philous"};

STL::STL(bool verbose) : config(configuration)
{
    verbose = verbose;
    if (verbose) {
        alert("[STL]: STL has been created.");
        if (!count)
        {
            alertConfig();
            count++;
        }
    }
}

STL::~STL()
{
    if(verbose){
        alert("[STL]: STL has been deleted.");
    }
}

void STL::enableVerbose() {
    verbose = TRUE;
}

void STL::disableVerbose() {
    verbose = FALSE;
}

void STL::alert(std::string info)
{
    std::cout << info << std::endl;
}

void STL::alertConfig()
{
    alert();
    alert("[STL]:|Basic info");
    alert("[STL]:|Version: " + config.version);
    alert("      |author: " + config.author);
    alert();
}