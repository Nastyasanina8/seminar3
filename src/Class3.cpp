#include "Class3.h"
#include <iomanip>
#include <iostream>

namespace log {

    void printMessage(const std::string& msg) {
        std::cout << msg  << ": "<< std::endl;
    }
        
    void printTest(const std::string& className, const std::string& methodName) {
        std::cout << "\n Тестирование " << className << "::" << methodName << "():\n";
    }
        
    void printResult(const std::string& desc, double value) {
        std::cout << " ~ " << desc << ": " << std::fixed << std::setprecision(2) << value << std::endl;
        }
        
    void printResult(const std::string& desc, const std::string& value) {
        std::cout << " ~ " << desc << ": " << value << std::endl;
    }
        
    void printResult(const std::string& desc, int value) {
        std::cout << " ~ " << desc << ": " << value << std::endl;
    }
        
    void printResult(const std::string& desc, bool value) {
        std::cout << " ~ " << desc << ": " << (value ? "Да" : "Нет") << std::endl;
    }
        
    void printSuccess(const std::string& msg) {
        std::cout << "!!!" << msg << "!!!" << std::endl;
    }
        
    void printError(const std::string& msg) {
        std::cout << "ERROR: " << msg << std::endl;
    }

    void printLine() {
        std::cout << "  --/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\--\n";
    }
        
    void printIndent(int level) {
        for (int i = 0; i < level; i++) {
            std::cout << "  ";
        }
    }

}