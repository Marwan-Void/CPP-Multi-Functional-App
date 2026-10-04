#include <iostream>
#include <string>
#include <string.h>
#include <array>
#include <vector>
#include <cmath>
#include <cctype>
#include <algorithm>
using namespace std;

char lower(char c){return char(tolower(c));}
char upper(char c){return char(toupper(c));}

string allLower(string inp){
    string result = "";
    for(int i = 0; i < inp.size(); i++){
        result += lower(inp[i]);
    } return result;
}

string allUpper(string inp){
    string result = "";
    for(int i = 0; i < inp.size(); i++){
        result += upper(inp[i]);
    } return result;
}

string msgInputStr(string msg){
    string inp;
    cout << "enter the " << msg << ": ";
    getline(cin >> ws, inp);
    return inp;
}

string trim(string txt){
    string result;
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] != ' ') result += txt[i];
    } return result;
}

int msgInput(string msg){
    int inp;
    cout << "enter the " << msg << ": ";
    cin >> inp;
    return inp;
}

int maxElementArray(vector<int> nums){
    int num = nums.at(0);
    for(int i = 1; i < nums.size(); i++){
        if(nums.at(i) > num){
            num = nums.at(i);
        }
    } return num;
}

bool checkAgain(){
    bool status;
    while(true){
        cout << "\n";
        string again = msgInputStr("choice if u wanna try again (y/n)");
        if(again == "y"){
            status = true;
            break;
        } else if(again == "n"){
            status = false;
            break;
        } else {
            cout << "invalid choice\n-----------\n";
            continue;
        }
    } return status;
}

void divideCalc(int num1, int num2, string op){
    if(num2 != 0){
        if(op == "/"){
            cout << num1 / num2;
        } else if(op == "%"){
            cout << num1 % num2;
        } else {
            cout << "undefined";
        }
    } else {
        cout << "undefined";
    }
}

void printAllNums(vector<int> nums, string separator = "", bool br = false){
    for(int i = 0; i < nums.size(); i++){
        cout << nums.at(i) << separator << br ? "\n" : "";
    }
}
void welcome(string appName = ""){cout << "\nwelcome to our " << appName << " app...\n";}

void mathsApps();
void stringApps();
void other();
void calculator();
void evenOrOdd();
void primeNumberChecker();
void rootCalculator();
void swapCase();
void countRepeated();
void repeatTxt();
void zFill();
void stringReverse();
void maxOrMinNum();
void sumOfNumbers();
void parseInt();
void isNaN();
void trim();
int main(){
    vector<string> apps = {
        "break that loop (not an app)",
        "maths",
        "string functions",
        "other"
    };

    welcome("multi-functional");
    while(true){
        bool again = true;
        cout << "choose and app of them:\n";
        for(int i = 0; i < apps.size(); i++){
            cout << "[" << i << "] " << apps.at(i) << "\n";
        }
        int app = msgInput("number of your choice");
        switch(app){
            case 0: again = false; break;
            case 1: mathsApps(); continue;
            case 2: stringApps(); continue;
            case 3: other(); continue;
            default: cout << "invalid choice\n--------------\n"; continue;
        }

        if(again){continue;} else {
            cout << "k thx for joining us...";
            break;
        }
    } return 0;
}

void mathsApps(){
    vector<string> apps = {
        "break that loop (not an app)",
        "calculator",
        "even or odd",
        "prime number checker",
        "root calculator",
        "max or min number",
        "sum of the numbers",
        "parse integer"
    };

    welcome("maths");
    while(true){
        bool again = true;
        cout << "choose and app of them:\n";
        for(int i = 0; i < apps.size(); i++){
            cout << "[" << i << "] " << apps.at(i) << "\n";
        }
        int app = msgInput("number of your choice");
        switch(app){
            case 0: again = false; break;
            case 1: calculator(); continue;
            case 2: evenOrOdd(); continue;
            case 3: primeNumberChecker(); continue;
            case 4: rootCalculator(); continue;
            case 5: maxOrMinNum(); continue;
            case 6: sumOfNumbers(); continue;
            case 7: parseInt(); continue;
            default: cout << "invalid choice\n--------------\n"; continue;
        }

        if(again){continue;} else {
            cout << "k thx for joining us...";
            break;
        }
    }
}

void stringApps(){
    vector<string> apps = {
        "break that loop (not an app)",
        "swap case",
        "count repeated letter",
        "repeat text",
        "zfill",
        "string reverse",
        "isNaN",
        "trim"
    };
    welcome("maths");
    while(true){
        bool again = true;
        cout << "choose and app of them:\n";
        for(int i = 0; i < apps.size(); i++){
            cout << "[" << i << "] " << apps.at(i) << "\n";
        }
        int app = msgInput("number of your choice");
        switch(app){
            case 0: again = false; break;
            case 1: swapCase(); continue;
            case 2: countRepeated(); continue;
            case 3: repeatTxt(); continue;
            case 4: zFill(); continue;
            case 5: stringReverse(); continue;
            case 6: isNaN(); continue;
            case 7: trim(); continue;
            default: cout << "invalid choice\n--------------\n"; continue;
        }

        if(again){continue;} else {
            cout << "k thx for joining us...";
            break;
        }
    }
}

void other(){
    vector<string> apps = {
        "break that loop (not an app)"
    };
    welcome("other random");
    while(true){
        bool again = true;
        cout << "choose and app of them:\n";
        for(int i = 0; i < apps.size(); i++){
            cout << "[" << i << "] " << apps.at(i) << "\n";
        }
        int app = msgInput("number of your choice");
        switch(app){
            case 0: again = false; break;
            default: cout << "invalid choice\n--------------\n"; continue;
        }

        if(again){continue;} else {
            cout << "k thx for joining us...";
            break;
        }
    }
}

void calculator(){
    welcome("calculator");
    while(true){
        int num1 = msgInput("first number");
        string op = msgInputStr("operator");
        int num2 = msgInput("second number");

        cout << num1 << " " << op << " " << num2 << " = ";
        if(op == "+"){
            cout << num1 + num2;
        } else if(op == "-"){
            cout << num1 - num2;
        } else if(op == "*"){
            cout << num1 * num2;
        } else if(op == "/"){
            divideCalc(num1, num2, op);
        } else if(op == "**" || op == "^" || op == "pow"){
            cout << pow(num1, num2);
        } else if(op == "%"){
            divideCalc(num1, num2, op);
        } else {
            cout << "invalid operator";
        }
        cout << "\n";

        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void evenOrOdd(){
    welcome("even or odd");
    while(true){
        int num = msgInput("number");
        if(num % 2 == 0){
            cout << num << " is an even number\n";
        } else {
            cout << num << " is an odd number\n";
        }

        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void primeNumberChecker(){
    welcome("prime number checker");
    while(true){
        int num = msgInput("number");
        bool prime = true;
        for(int i = 2; i < 11; i++){
            if(num % i == 0){
                prime = false;
                break;
            }
        }

        if(prime){
            cout << num << " is a prime number\n";
        } else {
            cout << num << "isn't a prime number\n";
        }

        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void rootCalculator(){
    welcome("root calculator");
    while(true){
        int num = msgInput("number"), rootNum = msgInput("root number");
        cout << "the " << rootNum << "th root of " << num << " is " 
        << pow(num, (1 / rootNum)) << "\n";

        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
};

void swapCase(){
    welcome("swap case");
    while(true){
        string inp = msgInputStr("text"), result;
        for(int i = 0; i < inp.size(); i++){
            if(isupper(inp[i])){
                result += lower(inp[i]);
            } else {
                result += upper(inp[i]);
            }
        }
        cout << "the result: " << result << "\n";

        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void countRepeated(){
    welcome("count repeated letter");
    while(true){
        char c;
        cout << "enter the character:";
        cin >> c;

        string txt = msgInputStr("text");
        int countNum;
        for(int i = 0; i < txt.size(); i++){
            if(txt[i] == c) countNum++;
        }

        cout << "\'" << c << "\' is repeated " << countNum << " times\n";
        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void repeatTxt(){
    welcome("repeat text");
    while(true){
        int count = msgInput("repeat count");
        string result, 
            txt = msgInputStr("text"), separator = msgInputStr("separator"),
            showSepEndTxt = msgInputStr("ability of putting the last separator(y/n)");
        bool showSepEnd = showSepEndTxt == "y" ? true : false;
        
        if(count <= 0) count = 2;
        if(separator.empty()) separator = "";
        for(int i = 0; i < count; i++){
            result += txt;
            if(i < count - 1) result += separator;
        }
        if(showSepEnd) result += separator;

        cout << "the result is: " << result << "\n";
        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void zFill(){
    welcome("zfill");
    while(true){
        string txt = msgInputStr("text");
        int count = msgInput("count of fills");
        string fill = msgInputStr("fill text"), position = msgInputStr("position of filling(a/b)");

        if(count < 0){
            count = 0;
            cout << "text after fill: " << txt << "\n";
        }
        if(fill.empty()) fill = "0";
        if(position.empty()) position = "b";

        for(int i = 0; i < count; i++){
            if(position == "b") txt = fill + txt;
            else txt += fill;
        }

        cout << "text after fill: " << txt << "\n";
        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void stringReverse(){
    welcome("string reverse");
    while(true){
        string txt = msgInputStr("text");
        string result;
        for(int i = txt.length() - 1; i >= 0; i--) result += txt[i];
        
        cout << "text after reverse: " << result << "\n";
        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void maxOrMinNum(){
    welcome("max or min number");
    while(true){
        string checkType = msgInputStr("type of checking(max/min)");
        if(checkType.empty() || checkType != "min" || checkType != "max") checkType = "min";

        vector<int> nums;
        while(true){
            string num = msgInputStr("num (no if ended)");
            if(num.empty() || num == "no") break;
            nums.emplace_back(stoi(num));
        }
        if(nums.size() < 2){
            cout << "--------------------\n";
            continue;
        }
        
        int num = nums.at(0);
        for(int i = 1; i < nums.size(); i++){
            if(checkType == "min"){
                if(num > nums.at(i)) num = nums.at(i);
            } else {
                if(num < nums.at(i)) num = nums.at(i);
            }
        }

        cout << "the " << checkType << " number is: " << num << "\n";
        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void sumOfNumbers(){
    welcome("sum of numbers");
    while(true){
        vector<int> nums = {};
        while(true){
            try {
                int num = msgInput("number");
                nums.push_back(num);
            } catch (string err){
                break;
            }
        }

        string operationType = msgInputStr("operator");
        if(operationType.empty() || operationType.length() > 1) operationType = "+";
        
        printAllNums(nums, (" " + operationType + " "));
        int result = nums.at(0);
        if(operationType == "+"){
            for(int i = 1; i < nums.size(); i++) result += nums.at(i);
        } else if(operationType == "-"){
            for(int i = 1; i < nums.size(); i++) result -= nums.at(i);
        } else if(operationType == "*"){
            for(int i = 1; i < nums.size(); i++) result *= nums.at(i);
        } else if(operationType == "/"){
            if(find(nums.begin(), nums.end(), 0) != nums.end()){
                cout << "you can't divide by zero\n";
                continue;
            } else for(int i = 1; i < nums.size(); i++) result /= nums.at(i);
        } else if(operationType == "^"){
            for(int i = 0; i < nums.size(); i++) result = pow(result, nums.at(i));
        } else if(operationType == "%"){
            for(int i = 0; i < nums.size(); i++) result %= nums.at(i);
        } else {
            cout << "invalid operator!";
            continue;
        }
        cout << " = " << result << "\n";

        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void parseInt(){
    welcome("parse integer");
    while(true){
        string txt = msgInputStr("text to parse"), result;
        for(int i = 0; i < txt.length(); i++){
            if(txt[i] >= '0' && txt[i] <= '9') result += txt[i];
        }
        cout << "text after parse: " << result << "\n";

        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void isNaN(){
    welcome("isNaN");
    while(true){
        string txt = msgInputStr("text to check"), result = "Number";
        for(int i = 0; i < txt.length(); i++){
            if(txt[i] >= '0' && txt[i] <= '9') continue;
            else {
                result = "NaN";
                break;
            }
        }
        cout << "the result: " << result << "\n";

        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}

void trim(){
    welcome("trim");
    while(true){
        string txt = msgInputStr("text to trim");
        for(int i = 0; i < txt.length(); i++){
            if(txt[i] == ' ') txt.erase(i, 1);
            else break;
        }
        for(int i = txt.length(); i > 0; i--){
            if(txt[i] == ' ') txt.erase(i, 1);
            else break;
        }
        cout << "the result: \"" << txt << "\"\n";
        // ! be careful there's a bug here

        bool status = checkAgain();
        if(status){
            cout << "--------------------\n";
            continue;
        } else {
            cout << "k thx for using our app...\n\n";
            break;
        }
    }
}