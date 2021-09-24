#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
 
    std::string hh, mm, ss;

    if (seconds > 3600){
        hh = std::to_string((int)(seconds / 3600));
        if (hh.length() < 2){
            hh = "0" + hh;
        }
    }
    else if (seconds < 3600){
        hh = "00";
    }

    seconds = seconds % 3600;

    if (seconds > 60){
        mm = std::to_string((int)(seconds / 60));
        if (mm.length() < 2){
            mm = "0" + mm;
        }
    }

    seconds = seconds % 60;

    ss = std::to_string(seconds);
    if (ss.length() <2){
        ss = "0" + ss;
    }
    
    std::string formatted = hh + ":" + mm + ":" + ss;

    return formatted; }