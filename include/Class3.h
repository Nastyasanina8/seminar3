#pragma once

#include <iostream>
#include <string>

namespace log {

    void printMessage(const std::string& msg);
        
    void printTest(const std::string& className, const std::string& methodName);
        
    void printResult(const std::string& desc, double value);
    void printResult(const std::string& desc, const std::string& value);
    void printResult(const std::string& desc, int value);
    void printResult(const std::string& desc, bool value);
        
    void printSuccess(const std::string& msg);
        
    void printError(const std::string& msg);
        
    void printLine();
  
} 