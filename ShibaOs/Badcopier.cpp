#include <filesystem>
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <ctime>
#include <random>
using namespace std;

//SHIBE-DOS. An Open-Sourced dumb app i made. Made to emulate DOS but with shibe. TEST APP. This is in no way a emulator (Like dos-box) It is just a dumb app i made for the sake of shiba inus..
/* 
Alpha 0.6.0.pre (Pre-Release of alpha 0.6)
-Added flip command.
-files like write can now read all in one line. Example write shiba.txt
Alpha 0.5
-Improved the check command dramaticaly. Its now readible!
-Added new program (2 actually)
-improved some error handlers.
-Fixed some other stuff i prob forgot about.
Alpha 0.4.0.1F (Alpha 0.5 pre-release)
-read now works!
-More stable code or unstable code.
-Should consume less memory or not.
-Big fix. No longer will one of the text for reading a line be an int. Its now bool so it should not use any cpu.
Alpha 0.4.0.1
-Fixed small bug so now cls will work
Version Alpha 0.4.0
-4 New Applications
-Fixed a bug where if you typed more than 1 word it would read 1 word per 1 space
-Fixed a bug that the first word you typed it would write that in each sentance (Write)
Version Alpha 0.3
-Added infinite lines for writing app.
Alpha 0.2
-Re-worked the write program. So far it has 5 lines max.
*/
//The default libbary of applications that can be runned made by me. Offical Apps.

namespace custom
{
    //add your own code (WIP)
}

namespace tools
{

    void randmath()
    {

        srand(time(NULL));
        int num1 = rand() % 10;
        int num2 = rand() % 10;
        int answer = num1 * num2;
        int choose;
        cout << num1 << " * " << num2 << " = ";
        cin >> choose;
        if (!isdigit(choose)) {
            cout << "Error invalid number";
            return;
        }
        if (choose == answer) cout << "Correct" << endl;
        if (choose != answer) cout << "Wrong its " << answer << endl;
        cout << "S:/>";

    }
    void flip()
    {
        srand(time(NULL));
        int choose = rand() % 2;
        if (choose == 1) cout << "You flipped heads" << endl;
        if (choose == 0) cout << "You flipped tails" << endl;
        cout << "S:/>";
    }
}

namespace osshit //A shitty os
{ 
//Utility area
string filen;
//Writes to file app
 void wrifile(string& ree)
 {
    ofstream ost{ ree };
    if (!ost) 
     { 
     cout << "FILE " << ree << " Does not exist or was removed";
     cout << "CRITICAL CRASH";
     exit(0);
     }
    if (!ost)
    { 
    if (ost.bad()) {
        cout << "EMERGENCY EXIT --- CRASHING APP NOW";
        exit(1);
    }
    }
    cout << "Type ; to kill this Write: " << endl;
    string sent;
    cin >> sent;
    string firstworld = sent;
    bool i = false;
for (; ; ) //Lazy fuckin' loop
 { 
 getline(cin, sent, '\n');
 if (!i)
 {
     ost << firstworld << sent << endl;
     sent = "";
     firstworld = string{};
     i = true;
 }

 if (i)
   { 
      ost << sent << endl;
      if (sent == ";") exit(1);
   }

   }   
 }
 //WIP read
 void newfile(string& ree)
 {
     cout << endl << "creating file " << endl;
     ofstream ost{ ree };
     ost << "";
     cout << "File created";
     cout << endl;
     cout << "S:/>";
 }


 void read(string& ree)
 {
     ifstream ist{ ree };
     if (!ist) {
         string pref = ree;
         if (ist.fail())
         {
             cin.clear();
             ist.clear();
             ofstream ost{ "error.txt" };
             ost << pref <<  " does not exist";
             cout << " Error encountered. Read error.txt for more info" << endl;
             cout << "S:/>";
             return;
         }
     }
     for (string reader; ist >> reader;)
     {
    string firstline = reader;
    getline(ist, reader);
    cout << firstline << reader << endl;
    }
 }

 void defaultv()
 {
    cout << "COMING SOON" << endl;
 }

 void help()
 {
    cout << "HELP" << endl << "write -- Writes to file " << endl << "help -- runs this command" << endl << "WOOFLINE --special area + NF -- NEW FILE (THE CODE IS AN ANOMALY IT DOESN'T APPLY TO THE RULES)" << endl << "exit - i think you know what it does" << endl << "cls -- clears screen" << endl << "read -- reads file line by line" << endl << "rand_math -random math problem (multiply)" << endl << "changelog --list of changes" << endl << "flip -- flips a coin";
    cout << endl << "S:/>";
 }
 void changelog()
 {
     cout << "CHANGELOG:" << endl;
     cout << "ALPHA 0.4.0.1" << endl;
     cout << "-Fixed small bug so now cls will work" << endl;
     cout << "Version Alpha 0.4.0" << endl;
     cout << "- 4 New Applications" << endl;
     cout << "- Fixed a bug where if you typed more than 1 word it would read 1 word per 1 space" << endl;
     cout << "- Fixed a bug that the first word you typed it would write that in each sentance(Write)" << endl;
     cout << " Version Alpha 0.3" << endl;
     cout << "  - Added infinite lines for writing app." << endl;
     cout << "   Alpha 0.2" << endl;
     cout << "- Re - worked the write program.So far it has 5 lines max." << endl;
     cout << "S:/>";
 }
 void clear()
 {
     system("cls");
 }

 //Strange area
 void woof(int timeline) //Uses timeline to save up time so each function doesn't have to exist.
 {
     if (timeline == 1)
     { 
     cout << "SHIBE-OS.exe has stopped borfing." << endl;
     cout << "A wild shibe apeared but ran away before you had the time to pet him" << endl;
     }
     if (timeline == 2)
     {
         cout << "USE FULLSCREEN" << endl;
         cout << "The Shiba Inu (CANNOT USE BECAUSE OF FORIGN TEXT) is a Japanese breed of hunting dog. A small-to-medium breed, it is the smallest of the six original and distinct spitz breeds of dog native to Japan" << endl;
         cout << "A small, agile dog that copes very well with mountainous terrain and hiking trails, the Shiba Inu was originally bred for hunting.[1][2] It looks similar to and is often mistaken for other Japanese dog breeds like the Akita Inu or" << endl;
         cout << "Hokkaido, but the Shiba Inu is a different breed with a distinct blood line, temperament, and smaller size than other Japanese dog breeds.[3][4][5]" << endl;
         cout << "Etymology" << endl;
         cout << "Inu is the Japanese word for dog, but the origin of the prefix 'Shiba' is less clear. The word shiba means 'brushwood' in Japanese, and refers to a type of tree or shrub whose leaves turn red in the fall.[6] This leads some to" << endl;
         cout << "believe that the Shiba was named with this in mind, either because the dogs were used to hunt in wild shrubs, or because the most common color of the Shiba Inu is a red color similar to that of the shrubs. However, in an old" << endl;
         cout << "Nagano dialect, the word shiba also had the meaning of 'small', thus this might be a reference to the dog's diminutive stature.[6] Therefore, the Shiba Inu is sometimes translated as 'Little Brushwood Dog'.[1]" << endl;
     }
 }

 void check(string& cho1, string& cho) //obsolete. Newer more easier to read code created.
 {
     if (cho1 != "help" && cho1 != "write.iaf" && cho1 != "read" && cho1 != "WOOFLINE" && cho1 != "NF" && cho1 != "exit" && cho1 != "cls")
     {
         cout << endl << cho1 << cho << " Is an invalid command. For help type help" << endl;
         cout << "S:/>";
     }
 }

}

using namespace osshit;

//Finds what command it should run
void choose(string& cho, string& cho1, string& ree)
{

    bool valid = false;
    bool& say = valid;
    //OS-Built in stuff here
    if (cho1 == "NF")
    {
        if (ree == "false") {
            cout << "ERROR. CANNOT FIND 2ND WORD IN NF";
            say = true;
        }
        if (ree != "false")
        {
            newfile(ree);
            say = true;
        }
    }
    if (cho1 == "tes")
    {
        cout << ree;
        say = true;
    }
    if (cho1 == "read")
    {
        //checks if there are more than one word

        //if there is one word
        if (ree == "false") {
            cout << "ERROR. CANNOT FIND 2ND WORD INR READF";
            say = true;
        }
        //If there is more
        if (ree != "false")
        {
            read(ree);
            say = true;
        }
    }
    if (cho1 == "changelog")
    {
        say = true;
        changelog();
    }
    if (cho1 == "write")
    {
        if (ree == "false") {
            cout << "ERROR. CANNOT FIND 2ND WORD IN WRITE";
            say = true;
        }
        //If there is more
        if (ree != "false")
        {
            wrifile(ree);
            say = true;
        }
    }
    if (cho1 == "help")
    {
        help();
        say = true;
    }
    if (cho1 == "WOOFLINE")
    {
        say = true;
        int wooflin;
        cout << "Enter what you would like to view. 1: Stupid text. 2: A Wikipedia article about shiba inus";
        cin >> wooflin;
        if (wooflin < 3) woof(wooflin);
    }
    if (cho1 == "exit")
    {
        say = true;
        //Exit
        exit(1);
    }
    if (cho1 == "cls")
    {
        say = true;
        clear();
        cout << "S:/>";
    }
    //Tools here
    if (cho1 == "rand_math")
    {
        say = true;
        tools::randmath();
    }
    if (cho1 == "flip")
    {
        say = true;
        tools::flip();
    }
    if (!valid) { //Simplier from the other one. 
        cout << cho1 << cho << " is an invalid command. For the entire list of commands type help" << endl;
        cout << "S:/>";
    }
}


//Runs the terminal
void os_handle()
{
    string cho;
    while (cin)
    {
        bool fk = false;
        cin >> cho;
        string cho1 = cho;
        getline(cin, cho, '\n');
       char read = cho[0];
        if (read == NULL)
        {
            fk = true;
        }
        if (fk == false)
        {
            string ree = cho.substr(1);
            choose(cho, cho1, ree);
        }
        if (fk == true)
        {
            string ree = "false";
            choose(cho, cho1, ree);
        }
    }
}

int main()
{

bool launch = true;
bool debug = true;
 cout << "SHIBEDOS V-TEST-BUILD" << endl;
 cout << "Loading file critical-sys.iaf" << endl;
 ifstream ist{ "shib32/critical-sys.iaf" };
 //critical error!

 if (!ist && !debug)
 {
     cout << "Critical system component removed.. Failed to boot. Please re-install to continue";
     launch = false;
     int doge;
     cin >> doge;
 }

 if (launch == true || debug == true)
 { 
 cout << "Launching app_handler" << endl;
 ifstream ist{ "shib32/app_handle.iaf" };
 if (!ist && !debug)
 {
     cout << "Failed to launch because the system cannot launch system apps. Please re-install to continue";
     launch = false;
     int doge;
     cin >> doge;

 }
 if (launch == true || debug == true)
 { 
 cout << "S:/>";
 os_handle();
 }
 }
}



