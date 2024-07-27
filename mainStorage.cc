#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <map>


using namespace std;

/*

bool distinctNumber(int year) {
    string years = to_string(year);
    unordered_set<char> digits;

    for(char digit : years) {
        if(digits.count(digit) > 0) {
            return false;
        } else {
            digits.insert(digit);
        }
    }

    return true;

}



void number1(string currMessage, map<char, int> &instruction) {
    char name = currMessage[2];
    int value = currMessage[4] - '0';
    instruction.insert(std::make_pair(name, value));
}   

void number2(string currMessage,  map<char, int> &instruction) {
    char namefinder = currMessage[2];
    cout << instruction[namefinder] << endl;
}

void number3(string currMessage,  map<char, int> &instruction) {
    char A = currMessage[2];
    char B = currMessage[4];
    instruction[A] = instruction[A] + instruction[B];
}

void number4(string currMessage,  map<char, int> &instruction) {
    char A = currMessage[2];
    char B = currMessage[4];
    instruction[A] = instruction[A] * instruction[B];
}

void number5(string currMessage,  map<char, int> &instruction) {
    char A = currMessage[2];
    char B = currMessage[4];
    instruction[A] = instruction[A] - instruction[B];
}

void number6(string currMessage,  map<char, int> &instruction) {
    char A = currMessage[2];
    char B = currMessage[4];
    instruction[A] = trunc(instruction[A] / instruction[B]);
}


*/


int main() {
    /*

    int N; cin >> N;
    vector<string> decoder;

    cin.ignore();
    while (N--) {
        string message;
        getline(cin, message);


        // Find the position of the space
        size_t spacePos = message.find(' ');


        // Extract the amount and symbol
        string amountStr = message.substr(0, spacePos);
        char symbol = message[spacePos + 1];


        // Convert the amount to an integer
        int amount = stoi(amountStr);


        // Generate the decoded message
        string decodedMessage(amount, symbol);


        // Store the decoded message in the vector
        decoder.push_back(decodedMessage);
    }


    // Print out all the decoded messages
    for (string msg : decoder) {
        cout << msg << endl;
    }

    cout << decoder[0] << endl;

    string numbers = "";
   string direction = "";
   string prevdirection = "";
   map<string, int> directionSteps;




   // directionSteps.insert({ direction, numbers[3,4,5]});  


   while(cin >> numbers) {


        string subNumbers = numbers.substr(2);
        int result = stoi(subNumbers);


        if ((numbers[0] + numbers[1]) % 2 == 0 && ((numbers[0] + numbers[1]) / 2) != 0 && numbers != "99999") {
            direction = "right";
            prevdirection = direction;
        }
        else if ((numbers[0] + numbers[1]) % 2 != 0 && numbers != "99999") {
            direction = "left";
            prevdirection = direction;
        }


        if (numbers[0] + numbers[1] == 0) {
            direction = prevdirection;
        }


        directionSteps.insert(pair(direction, result));  
       
    };


    for(auto it = directionSteps.begin(); it != directionSteps.end(); it++){
        cout << it->second;
        cout << it->first;


    }


   
   
    string instruction, last3, prevdir;


    while (true) {
        last3 = "";
        cin >> instruction;


        last3.push_back(instruction[2]);
        last3.push_back(instruction[3]);
        last3.push_back(instruction[4]);


        int first, second, sum;
        first = instruction[0] - '0';
        second = instruction[1] - '0';
        sum = first+second;


        if (instruction == "99999") {
            break;
        }


        else if (sum%2==0 && sum != 0) {
            cout << "right " + last3 << endl;
            prevdir = "right ";
        }
        else if (sum == 0) {
            cout << prevdir + last3 << endl;
        }
        else if (sum%2!=0 && sum != 0) {
            cout << "left " + last3 << endl;
            prevdir = "left ";
        }
    }
   
    int N;
    cin >> N;


    // Initialize smallest and biggest drops with extreme values
    int smallestDropA = 100;
    int biggestDropA = 1;
    int smallestDropB = 100;
    int biggestDropB = 1;


   


    while (N--) {
        string currentDrop;
        getline(cin, currentDrop);


        // Extract first and last numbers from the currentDrop string
        string firstNum = currentDrop.substr(0, 2);
        string lastNum = currentDrop.substr(4, 2);


        // Convert extracted strings to integers
        int firstNumInt = stoi(firstNum);
        int lastNumInt = stoi(lastNum);


        // Update smallest and biggest drops for A and B
        smallestDropA = min(smallestDropA, firstNumInt);
        biggestDropA = max(biggestDropA, firstNumInt);
        smallestDropB = min(smallestDropB, lastNumInt);
        biggestDropB = max(biggestDropB, lastNumInt);
    }


    cout << smallestDropA - 1 << ',' << smallestDropB - 1 << endl;
    cout << biggestDropA + 1 << ',' << biggestDropB + 1 << endl;


    return 0;

    
    
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        char first = s[0];
        int c=1;
        while (s.length()>0) {
                s.erase(0, 1);
                if (s[0]==first) {
                    c++;
                }
                else {
                    cout << c << " " << first << " ";
                    first=s[0];
                    c=1;
                }
        }
        cout << endl;
    }
    
    string message;
    cin >> message;  // Use getline to read the entire line of input
    string sad = ":-(";
    string happy = ":-)";
    int happyCount = 0;
    int sadCount = 0;

    for (size_t i = 0; i < message.length() - 3; i++) {  // Ensure there's enough room for a 3-char substring
        if (message.substr(i, 3) == sad) {
            sadCount++;
        } else if (message.substr(i, 3) == happy) {
            happyCount++;
        }
    }

    if (happyCount == 0 && sadCount == 0) {
        cout << "none" << endl;
    } else if (happyCount == sadCount) {
        cout << "unsure" << endl;
    } else if (happyCount > sadCount) {
        cout << "happy" << endl;
    } else {
        cout << "sad" << endl;
    }

    cout << happyCount << endl;
    cout << sadCount;

    return 0;
}

     int N; cin >> N;
    int antonioScore = 100;
    int davidScore = 100;

    while (N--) {
        int antonioRoll; cin >> antonioRoll;
        int davidRoll; cin >> davidRoll;


        if(antonioRoll == davidRoll) {
            continue;
        } else if (antonioRoll > davidRoll) {
            davidScore -= antonioRoll;
        } else if (antonioRoll < davidRoll) {
            antonioScore -= davidRoll;
        }

    }

    cout << antonioScore << endl;
    cout << davidScore << endl;




    
    int year; cin >> year; 

   for(int i = 1; ; i++) {
    if(distinctNumber(year + i)) {
        cout << year + i;
        break;
    }
   }

    return 0;




    int k;
    cin >> k;

    // The original 3x3 icon
    vector<string> icon = {
        "*x*",
        "xx ",
        "* *"
    };

    // Scale each line of the icon
    for (const string &line : icon) {
        scaleLine(line, k);
    }

    return 0;

    void scaleLine(const string &line, int k) {
    for (int i = 0; i < k; ++i) {
        for (char ch : line) {
            for (int j = 0; j < k; ++j) {
                cout << ch;
            }
        }
        cout << endl;
    }
}





    int firstNum; cin >> firstNum;
    int secondNum; cin >> secondNum;
    int count = 2;

    int num = firstNum - secondNum;

    while((firstNum - secondNum) > 0) {
            firstNum = secondNum;
            secondNum = num;
            num = firstNum - secondNum;
            count++;
    }
    
    cout << count << endl;


    
    map<char, int> instruction;
    string currMessage = "";
    
    
    while (getline(cin, currMessage)) {
        char exit = currMessage[0];

        if(exit == '1') {
            number1(currMessage, instruction);
        }

        if(exit == '2') {
            number2(currMessage, instruction);
        }

        if(exit == '3') {
            number3(currMessage, instruction);
        }

        if (exit == '4') {
            number4(currMessage, instruction);
        }

        if (exit == '5') {
            number5(currMessage, instruction);
        }

        if (exit == '6') {
            number6(currMessage, instruction);
        }


        if(exit == '7') {
            break;
        }

    }

    string words; cin >> words;
    int count = 0;
    
   char alphabet[5][6] = { 
   {'A', 'B', 'C', 'D', 'E', 'F'}, // E is [0][4] and N is [2][1]
   {'G', 'H', 'I', 'J', 'K', 'L'}, 
   {'M', 'N', 'O', 'P', 'Q', 'R'}, 
   {'S', 'T', 'U', 'V', 'W', 'X'}, 
   {'Y', 'Z', ' ', '-', '.', '='} 
   };
   int u = 0; 
   int h = 0;


   for(size_t p = 0; p < words.length(); p++) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 6; j++) {
            if(alphabet[i][j] == words[p]) {

                count += (abs(i - u) + abs(j - h));
                u = i;
                h = j;
                i = 0;
                j = 0;
                
            }
        }
    }
   }

   cout << count << endl;
   

   

    string words;
    getline(cin, words);

    int count = 0;
    char alphabet[5][6] = { 
        {'A', 'B', 'C', 'D', 'E', 'F'}, 
        {'G', 'H', 'I', 'J', 'K', 'L'}, 
        {'M', 'N', 'O', 'P', 'Q', 'R'}, 
        {'S', 'T', 'U', 'V', 'W', 'X'}, 
        {'Y', 'Z', ' ', '-', '.', '='} 
    };
    int u = 0; // Current row position, starts at 'A'
    int h = 0; // Current column position, starts at 'A'

    // Process each character in the input string
    for(size_t p = 0; p < words.length(); p++) {
        bool found = false;
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 6; j++) {
                if(alphabet[i][j] == words[p]) {
                    // Calculate the Manhattan distance to the new character
                    count += (abs(i - u) + abs(j - h));
                    u = i; // Update current row position
                    h = j; // Update current column position
                    found = true;
                    break; // Exit the inner loop
                }
            }
            if(found) break; // Exit the outer loop if found
        }
    }

    // Final movement to 'enter' position
    count += (abs(4 - u) + abs(5 - h));

    cout << count << endl;

    return 0;
    

     int N; cin >> N;
    int count = 0;
    map<int, int> Briefcases = {{1, 100}, {2, 500}, {3, 1000}, {4, 5000}, {5, 10000}, {6, 25000}, {7, 50000}, {8, 100000}, {9, 500000}, {10, 1000000}};

    for (int i = 0; i < N; i++) {
        int caseNum; cin >> caseNum;
        Briefcases.erase(caseNum);
    }
    
    int offer; cin >> offer;

    for (const auto& pair : Briefcases) {
        count += pair.second;
    }

    int average = count / Briefcases.size();

    if(average > offer) {
        cout << "no deal";
    } else {
        cout << "deal";
    }


    
   map<char, pair<char, int>> keypad = {
        {'a', {'2', 1}}, {'b', {'2', 2}}, {'c', {'2', 3}},
        {'d', {'3', 1}}, {'e', {'3', 2}}, {'f', {'3', 3}},
        {'g', {'4', 1}}, {'h', {'4', 2}}, {'i', {'4', 3}},
        {'j', {'5', 1}}, {'k', {'5', 2}}, {'l', {'5', 3}},
        {'m', {'6', 1}}, {'n', {'6', 2}}, {'o', {'6', 3}},
        {'p', {'7', 1}}, {'q', {'7', 2}}, {'r', {'7', 3}}, {'s', {'7', 4}},
        {'t', {'8', 1}}, {'u', {'8', 2}}, {'v', {'8', 3}},
        {'w', {'9', 1}}, {'x', {'9', 2}}, {'y', {'9', 3}}, {'z', {'9', 4}}
    };

    string word;

    // Read each word until "halt" is encountered
    while (cin >> word && word != "halt") {
        int total_time = 0;
        char last_key = ' '; // Initialize to no key

        // Iterate over each character in the word
        for (char c : word) {
            char current_key = keypad[c].first;
            int presses = keypad[c].second;

            // Add a pause time if the current key is the same as the last key
            if (current_key == last_key) {
                total_time += 2; // Pause time
            }

            total_time += presses; // Time for key presses
            last_key = current_key; // Update the last key
        }

        cout << total_time << endl; // Print the total time for the current word
    }

    return 0;

    
    char direction = ' ';
    string street = "";
    string dir = "";

    string homeDir = " "; cin >> homeDir;

    map<string, char> streets; 
    while(cin >> street && cin >> direction) {
        if(street == "SCHOOL") {
            break;
        } else {
        cin >> street;
        cin >> direction;
        
        streets.emplace(street, direction);
        }
    }

    for (auto it = streets.rbegin(); it != streets.rend(); ++it) {
        if (it->second == 'R') {
            dir = "LEFT";
        } else {
            dir = "RIGHT";
        }

        cout << "Turn " << dir << " onto " << it-> first << " street." << endl;
    }
    
    if(homeDir == "R") {
        homeDir = "LEFT";
    } else {
        homeDir = "RIGHT";
    }

    cout << "Turn " << homeDir << " into your home" << endl;
    



   std::string street;
    char direction;
    std::string homeDir;

    // Read the first direction
    std::cin >> homeDir;

    // Vector for storing directions and streets
    std::vector<std::pair<std::string, char>> streets;

    // Read directions and street names
    while (std::cin >> direction) {
        std::cin >> street;
        if (street == "SCHOOL") {
            break; // Stop input when reaching SCHOOL
        }
        streets.emplace_back(street, direction);
    }

    // Reverse iteration over directions and streets
    for (int i = streets.size(); i > 0; i--) {
        std::string dir = (streets[i]->second == 'R') ? "LEFT" : "RIGHT";
        std::cout << "Turn " << dir << " onto " << it->first << " street." << std::endl;
    }
    
    // Determine final turn into home
    homeDir = (homeDir == "R") ? "LEFT" : "RIGHT";
    std::cout << "Turn " << homeDir << " into your HOME." << std::endl;

    

    int numOfAdjectives = 0; cin >> numOfAdjectives;
    int numOfNouns = 0; cin >> numOfNouns;

    vector<string> adjectivesVEC;
    vector<string> nounsVEC;

    while(numOfAdjectives--) {
        string adjective; cin >> adjective;
        adjectivesVEC.push_back(adjective);
    }


    while(numOfNouns--) {
        string noun; cin >> noun;
        nounsVEC.push_back(noun);
    }

    for(auto &adj : adjectivesVEC) {
        for(auto &nou : nounsVEC) {
            cout << adj << " as " << nou << endl;
        }
    }


     int currSpace = 1;
    

    while(currSpace != 100) {
        cout << "Enter sum of dice:"  << endl;
        int diceRoll; cin >> diceRoll;

        currSpace += diceRoll;

        if(currSpace == 9) {
            currSpace = 34;
        } else if (currSpace == 40) {
            currSpace = 64;
        } else if (currSpace == 67) {
            currSpace = 86;
        }

        if(currSpace == 54) {
            currSpace = 19;
        } else if (currSpace == 90) {
            currSpace = 48;
        } else if (currSpace == 99) {
            currSpace = 77;
        }

        if(currSpace > 100) {
            currSpace -= diceRoll;
        }

        cout << "You are now on square " << currSpace << endl;

    
        
    }

    cout << "You win!" << endl;
    
    */
   
}
