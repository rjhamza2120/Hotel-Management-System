#include<iostream>
#include<vector>
#include <fstream>

#define MAGENTA "\033[35m"
#define BLUE    "\033[94m"
#define YELLOW  "\033[33m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN    "\033[36m"
#define RESET "\033[0m"

using namespace std;

int main()
{
    
    int c1, c2, q, moye;
    char anotherPurchase;
    string customerName;
    ofstream file;

    int QJamon=0, QTortillaEspanola=0, QChurros=0;
    int QCroquetas=0, QAlbondigas=0, QItalianCuisine=0;
    int QLecheFrita=0, QGazpacho=0, QPizza=0;
    int QPasta=0, QBakedSpaghetti=0,QPizzaMargherita=0; 
    
    int SJamon=0, STortillaEspanola=0, SChurros=0;
    int SCroquetas=0, SAlbondigas=0, SItalianCuisine=0;
    int SLecheFrita=0, SGazpacho=0, SPizza=0;
    int SPasta=0, SBakedSpaghetti=0,SPizzaMargherita=0; 
    
    int Total_Jamon=0, Total_TortillaEspanola=0, Total_Churros=0;
    int Total_Croquetas=0, Total_Albondigas=0, Total_ItalianCuisine=0;
    int Total_LecheFrita=0, Total_Gazpacho=0, Total_Pizza=0;
    int Total_Pasta=0, Total_BakedSpaghetti=0,Total_PizzaMargherita=0; 

    int Qpressuite=0,Qexecsuite=0,Qjunsuite=0;
    int Qsingle=0,Qtwin=0,Qtriple=0,Qconnectrooms=0;
    int Qrooms=0;

    int Spressuite=0,Sexecsuite=0,Sjunsuite=0;
    int Ssingle=0,Stwin=0,Striple=0,Sconnectrooms=0;

    int Total_pressuite=0,Total_execsuite=0,Total_junsuite=0;
    int Total_single=0,Total_twin=0,Total_triple=0,Total_connectrooms=0;

    file.open("Hotel_Management.txt", ios::app);

    string adminCode[]={"qwerty","asdfgh","zxcvbn","dxzawedcvgtrd"};//Change Customer Passcode Here
    string memberType, customerType, adminPasscode, memberName;
    int a = 18243261,room,code;
    vector<int> existingMember;
    vector<string> custName;
    custName.push_back("Wajahat");
    existingMember.push_back(a);
    start:
    
    do{
        cout << CYAN <<"\t\t\t\t\t\t\t\t\t\t   ############################\n"; 
        cout << "\t\t\t\t\t\t\t\t\t\t   ##  Espero que este bien  ##\n";
        cout << "\t\t\t\t\t\t\t\t\t\t   ############################\n";
        cout << "How do you want to proceed(Administrator/Customer): " << RESET;
        cin >> memberType;
        if(memberType == "Esc" || memberType == "esc"){
            system("cls");
            break;
        }
        if(memberType == "Administrator" || memberType == "administrator" || memberType == "Admin" || memberType == "admin"){
            while(true)
            {
                bool found = false;
                cout << CYAN << "\n\t\t\tPlease, Enter your Passcode: "<< RESET;
                cin >> adminPasscode;
                if(adminPasscode == "Esc" || adminPasscode == "esc"){
                    break;
                }
                for(int i = 0; i < 4; ++i){  
                    if (adminPasscode == adminCode[i]){ 
                        found = true;
                        break;
                    }
                }
                if(found == true){
                    system("cls");
                    backward:
                    int nadmin;
                    cout << CYAN <<"\t\t\t\t\t\t\t #############################################################################################\n"; 
                    cout <<"\t\t\t\t\t\t\t ##                         Welcome sir to the ADMINISTRATION sector                        ##\n";
                    cout <<"\t\t\t\t\t\t\t #############################################################################################\n";
                    cout <<"\t\t\t\t\t\t\t #############################################################################################\n"; 
                    cout <<"\t\t\t\t\t\t\t ##" << RESET << "  1) Edit Quantity  " << CYAN << "##" << RESET << "  2) Information of Sales  " << CYAN << "##" << RESET <<  "  3) Exit  " << CYAN << "##" << RESET<< "  4) Shutdown the Hotel  " << CYAN << "##\n";
                    cout <<"\t\t\t\t\t\t\t #############################################################################################\n"; 

                    cout<<"\n\nEnter your choice: " << RESET;
                    cin>>nadmin;
                    switch(nadmin)
                    {
                        case 1:
                            ADMIN:
                            int editadmin;
                            cout << CYAN <<"\t\t\t\t\t\t\t\t ##############################################################################\n"; 
                            cout <<"\t\t\t\t\t\t\t\t ##                        Which thing you want to EDIT                      ##\n";
                            cout <<"\t\t\t\t\t\t\t\t ##############################################################################\n";
                            cout <<"\t\t\t\t\t\t\t\t ##" << RESET << "         1) Room        " << CYAN << "##" << RESET << "        2) Food        " << CYAN << "##" << RESET << "        3) Exit        " << CYAN << "##\n";
                            cout <<"\t\t\t\t\t\t\t\t ##############################################################################\n";
                            cout<<"\n\nEnter your choice: " << RESET;
                            cin>>editadmin;
                            switch(editadmin)
                            {
                                case 1:
                                    cout << MAGENTA << "\n\t\t\t\t#########################################\n";
                                    cout <<"\t\t\t\t##       Availability of Rooms:        ##\n";
                                    cout <<"\t\t\t\t#########################################\n";
                                    cout << "\n\n Presidential Suite: " << RESET;
                                    cin >> Qpressuite;
                                    cout << MAGENTA << "\n Executive Suite: " << RESET;
                                    cin >> Qexecsuite;
                                    cout << MAGENTA << "\n Junior Suite: " << RESET;
                                    cin >> Qjunsuite;
                                    cout << MAGENTA << "\n Single Bed: " << RESET;
                                    cin >> Qsingle;
                                    cout << MAGENTA << "\n Twin Bed: " << RESET;
                                    cin >> Qtwin;
                                    cout << MAGENTA << "\n Triple Bed: " << RESET;
                                    cin >> Qtriple;
                                    cout << MAGENTA << "\n Connecting Rooms: " << RESET;
                                    cin >> Qconnectrooms;
                                    Qrooms = Qpressuite + Qexecsuite + Qjunsuite + Qsingle + Qtwin + Qtriple + Qconnectrooms;
                                    goto ADMIN;

                                case 2:
                                    cout << MAGENTA <<  "\n\t\t\t\t#############################################\n";
                                    cout <<"\t\t\t\t##       Availability of Food Items:       ##\n";
                                    cout <<"\t\t\t\t#############################################\n";
                                    cout << "\n\n Jamon: " << RESET;
                                    cin >> QJamon;
                                    cout << MAGENTA << "\n Tortilla Espanola: " << RESET;
                                    cin >> QTortillaEspanola;
                                    cout << MAGENTA << "\n Churros: " << RESET;
                                    cin >> QChurros;
                                    cout << MAGENTA << "\n Croquetas: " << RESET;
                                    cin >> QCroquetas;
                                    cout << MAGENTA << "\n Albondigas: " << RESET;
                                    cin >> QAlbondigas;
                                    cout << MAGENTA << "\n Italian Cuisine: " << RESET;
                                    cin >> QItalianCuisine;
                                    cout << MAGENTA << "\n Leche Frita: " << RESET;
                                    cin >> QLecheFrita;
                                    cout << MAGENTA << "\n Gazpacho: " << RESET;
                                    cin >> QGazpacho;
                                    cout << MAGENTA << "\n Pizza: " << RESET;
                                    cin >> QPizza;
                                    cout << MAGENTA << "\n Pasta: " << RESET;
                                    cin >> QPasta;
                                    cout << MAGENTA << "\n Baked Spaghetti: " << RESET;
                                    cin >> QBakedSpaghetti;
                                    cout << MAGENTA << "\n Pizza Margherita: " << RESET ;
                                    cin >> QPizzaMargherita;
                                    goto ADMIN;
                                case 3:
                                    goto backward;    
                                
                                break;
                            }


                        case 2:
                            cout << "\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << MAGENTA << " INFORMATION & DETAIL " << RESET << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
                            cout << "\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << MAGENTA << " ROOMS " << RESET << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
                            cout << MAGENTA << "\n\n\t\t\t Number of Presidential Suites we had: " << YELLOW << Qpressuite;
                            cout << MAGENTA << "\n\t\t\t Number of Presidential Suites we gave for rent: " << YELLOW << Spressuite;
                            cout << MAGENTA << "\n\t\t\t Remaining Presidential Suites: " << YELLOW << Qpressuite - Spressuite;
                            cout << MAGENTA << "\n\n\t\t\tTotal Presidential Suites collection for the Day: " << YELLOW << Total_pressuite;

                            cout << MAGENTA << "\n\n\t\t\t Number of Executive Suites we had: " << YELLOW << Qexecsuite;
                            cout << MAGENTA << "\n\t\t\t Number of Executive Suites we sold: " << YELLOW << Sexecsuite;
                            cout << MAGENTA << "\n\t\t\t Remaining Executive Suites: " << YELLOW << Qexecsuite - Sexecsuite;
                            cout << MAGENTA << "\n\n \t\t\tTotal Executive SUites collection for the Day: " << YELLOW << Total_execsuite;

                            cout << MAGENTA << "\n\n\t\t\t Number of Junior Suites we had: " << YELLOW << Qjunsuite;
                            cout << MAGENTA << "\n\t\t\t Number of Junior Suites we sold: " << YELLOW << Sjunsuite;
                            cout << MAGENTA << "\n\t\t\t Remaining Junior Suites: " << YELLOW << Qjunsuite - Sjunsuite;
                            cout << MAGENTA << "\n\n\t\t\tTotal Junior Suites collection for the Day: " << YELLOW << Total_junsuite;

                            cout << MAGENTA << "\n\n\t\t\t Number of Single Rooms we had: " << YELLOW << Qsingle;
                            cout << MAGENTA << "\n\t\t\t Number of Single Rooms we sold: " << YELLOW << Ssingle;
                            cout << MAGENTA << "\n\t\t\t Remaining Single Rooms: " << YELLOW << Qsingle - Ssingle;
                            cout << MAGENTA << "\n\n\t\t\tTotal Single Rooms collection for the Day: " << YELLOW << Total_single;

                            cout << MAGENTA << "\n\n\t\t\t Number of Twin Rooms we had: " << YELLOW << Qtwin;
                            cout << MAGENTA << "\n\t\t\t Number of Twin Rooms we sold: " << YELLOW << Stwin;
                            cout << MAGENTA << "\n\t\t\t Remaining Twin ROoms: " << YELLOW << Qtwin - Stwin;
                            cout << MAGENTA << "\n\n \t\t\tTotal Twin Rooms collection for the Day: " << YELLOW << Total_twin;

                            cout << MAGENTA << "\n\n\t\t\t Number of Triple Rooms we had: " << YELLOW << Qtriple;
                            cout << MAGENTA << "\n\t\t\t Number of Triple Rooms we sold: " << YELLOW << Striple;
                            cout << MAGENTA << "\n\t\t\t Remaining Triple Rooms: " << YELLOW << Qtriple - Striple;
                            cout << MAGENTA << "\n\n\t\t\tTotal Triple Rooms collection for the Day: " << YELLOW << Total_triple;
                                                             
                            cout << MAGENTA << "\n\n\t\t\t Number of Connecting Rooms we had: " << YELLOW << Qconnectrooms;
                            cout << MAGENTA << "\n\t\t\t Number of COnnecting Rooms we sold: " << YELLOW << Sconnectrooms;
                            cout << MAGENTA << "\n\t\t\t Remaining Connecting Rooms: " << YELLOW << Qconnectrooms - Sconnectrooms;
                            cout << MAGENTA << "\n\n\t\t\tTotal Connecting Rooms collection for the Day: " << YELLOW << Total_connectrooms;

                            cout << MAGENTA << "\n\n\n\t\t\tTotal Rooms Collection for the day: " << YELLOW << Total_pressuite + Total_execsuite + Total_junsuite + Total_single + Total_twin + Total_triple + Total_connectrooms;


                            cout << RESET << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << MAGENTA << " FOOD ITEMS " << RESET << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
                            cout << MAGENTA << "\n\n\t\t\t Number of Jamons we had: " << YELLOW << QJamon;
                            cout << MAGENTA << "\n\t\t\t Number of Jamons we sold: " << YELLOW << SJamon;
                            cout << MAGENTA << "\n\t\t\t Remaining Jamons: " << YELLOW << QJamon - SJamon;
                            cout << MAGENTA << "\n\n \t\t\tTotal Jamon collection for the Day: " << YELLOW << Total_Jamon;

                            cout << MAGENTA << "\n\n \t\t\t Number of Tortilla Espanola we had: " << YELLOW << QTortillaEspanola;
                            cout << MAGENTA << "\n \t\t\t Number of Tortilla Espanola we sold: " << YELLOW << STortillaEspanola;
                            cout << MAGENTA << "\n \t\t\t Remaining TOrtilla Espanola: " << YELLOW << QTortillaEspanola - STortillaEspanola;
                            cout << MAGENTA << "\n\n \t\t\tTotal Tortilla Espanola collection for the Day: " << YELLOW << Total_TortillaEspanola;

                            cout << MAGENTA << "\n\n \t\t\t Number of Churros we had: " << YELLOW << QChurros;
                            cout << MAGENTA << "\n\t\t\t Number of Churros we sold: " << YELLOW << SChurros;
                            cout << MAGENTA << "\n \t\t\t Remaining Churros: " << YELLOW << QChurros - SChurros;
                            cout << MAGENTA << "\n\n \t\t\tTotal Churros collection for the Day: " << YELLOW << Total_Churros;

                            cout << MAGENTA << "\n\n\t\t\t Number of Croquetas we had: " << YELLOW << QCroquetas;
                            cout << MAGENTA << "\n\t\t\t Number of Croquetas we sold: " << YELLOW << SCroquetas;
                            cout << MAGENTA << "\n \t\t\t Remaining Croquetas: " << YELLOW << QCroquetas - SCroquetas;
                            cout << MAGENTA << "\n\n \t\t\tTotal Croquetas collection for the Day: " << YELLOW << Total_Croquetas;

                            cout << MAGENTA << "\n\n \t\t\t Number of Albondigas we had: " << YELLOW << QAlbondigas;
                            cout << MAGENTA << "\n \t\t\t Number of Albondigas we sold: " << YELLOW << SAlbondigas;
                            cout << MAGENTA << "\n \t\t\t Remaining Albondigas: " << YELLOW << QAlbondigas - SAlbondigas;
                            cout << MAGENTA << "\n\n \t\t\tTotal Albondigas collection for the Day: " << YELLOW << Total_Albondigas;

                            cout << MAGENTA << "\n\n\t\t\t Number of Italian Cuisine we had: " << YELLOW << QItalianCuisine;
                            cout << MAGENTA << "\n \t\t\t Number of Italian Cuisine we sold: " << YELLOW << SItalianCuisine;
                            cout << MAGENTA << "\n \t\t\t Remaining Italian CUisine: " << YELLOW << QItalianCuisine - SItalianCuisine;
                            cout << MAGENTA << "\n\n \t\t\tTotal Italian Cuisine collection for the Day: " << YELLOW << Total_ItalianCuisine;

                            cout << MAGENTA << "\n\n \t\t\t Number of Gazpacho we had: " << YELLOW << QGazpacho;
                            cout << MAGENTA << "\n\t\t\t Number of Gazpacho we sold: " << YELLOW << SGazpacho;
                            cout << MAGENTA << "\n \t\t\t Remaining Gazpacho: " << YELLOW << QGazpacho - SGazpacho;
                            cout << MAGENTA << "\n\n \t\t\tTotal Gazpacho collection for the Day: " << YELLOW << Total_Gazpacho; 
                            
                            cout << MAGENTA << "\n\n \t\t\t Number of Pizza we had: " << YELLOW << QPizza;
                            cout << MAGENTA << "\n \t\t\t Number of Pizza we sold: " << YELLOW << SPizza;
                            cout << MAGENTA << "\n \t\t\t Remaining Pizza: " << YELLOW << QPizza - SPizza;
                            cout << MAGENTA << "\n\n \t\t\tTotal Pizza collection for the Day: " << Total_Pizza;

                            cout << MAGENTA << "\n\n \t\t\t Number of Pasta we had: " << QPasta;
                            cout << MAGENTA << "\n \t\t\t Number of Pasta we sold: " << SPasta;
                            cout << MAGENTA << "\n \t\t\t Remaining Pasta: " << QPasta - SPasta;
                            cout << MAGENTA << "\n\n \t\t\tTotal Pasta collection for the Day: " << YELLOW << Total_Pasta;

                            cout << MAGENTA << "\n\n \t\t\t Number of Baked Spaghetti we had: " << YELLOW << QBakedSpaghetti;
                            cout << MAGENTA << "\n\t\t\t Number of Baked Spaghetti we sold: " << YELLOW << SBakedSpaghetti;
                            cout << MAGENTA << "\n \t\t\t Remaining Baked Spaghetti: " << YELLOW << QBakedSpaghetti - SBakedSpaghetti;
                            cout << MAGENTA << "\n\n \t\t\tTotal Baked Spaghetti collection for the Day: " << YELLOW << Total_BakedSpaghetti;

                            cout << MAGENTA << "\n\n \t\t\t Number of Pizza Margherita we had: " << YELLOW << QPizzaMargherita;
                            cout << MAGENTA << "\n \t\t\t Number of Pizza Margherita we sold: " << YELLOW << SPizzaMargherita;
                            cout << MAGENTA << "\n \t\t\t Remaining Pizza Margherita: " << YELLOW << QPizzaMargherita - SPizzaMargherita;
                            cout << MAGENTA << "\n\n \t\t\tTotal Pizza Margherita collection for the Day: " << YELLOW << Total_PizzaMargherita;

                            cout << MAGENTA << "\n\n\n \t\t\tTotal Food Collection for the day: " << YELLOW << Total_Jamon + Total_TortillaEspanola + Total_Churros + Total_Croquetas + Total_Albondigas + Total_ItalianCuisine + Total_LecheFrita + Total_Gazpacho + Total_Pizza + Total_Pasta + Total_BakedSpaghetti + Total_PizzaMargherita << "\n\n";
                            cout << RESET << "\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
                            goto backward;

    
                        case 3:
                            goto start;

                        case 4:
                            cout << GREEN << "\t\t\t\t\t\t\t\t\t\t###################################################\n";
                            cout << "\t\t\t\t\t\t\t\t\t\t###" << YELLOW << "          THE HOTEL IS SHUTTED DOWN          " << GREEN << "###\n";
                            cout << "\t\t\t\t\t\t\t\t\t\t###################################################\n" << RESET;
                            file.close();
                            exit(0);

    }
                    system("cls");
                    break;
            }

                else if(found == false){
                        cout << RED <<"\t\t\t\t\t\t\t\t##########################################\n"; 
                        cout << "\t\t\t\t\t\t\t\t##  Invalid Passcode, Please try again  ##\n";
                        cout << "\t\t\t\t\t\t\t\t##########################################\n"<< RESET;

                }
            }
        }
        else if (memberType == "Customer" || memberType == "customer"){
            middle:
            cout << CYAN << "\n\t\t\tAre you a (New/Old) Customer: " << RESET;
            cin >> customerType;
            if(customerType == "Esc" || customerType == "esc"){
                continue;
            }
            else if(customerType == "Old" || customerType == "old"){
                while(true){
                    cout << CYAN << "\n\t\t\tPlease, Enter your Passcode: " << RESET;
                    cin >> code;
                    bool found = false;
                    for(int i = 0; i <= Qrooms; ++i){
                        if(existingMember[i] == code){
                            moye = existingMember[i];
                            customerName = custName[i];
                            found = true;
                            break;
                        }
                    } 
                    if(found == true){
                        system("cls");
                         do {
                            cout << CYAN << "\t\t\t######################################################################################################################################################" << endl;
                            cout << "\t\t\t######################################################################################################################################################" << endl;
                            cout << "\t\t\t####                                                                                                                                              ####" << endl;
                            cout << "\t\t\t####                                                                    WELCOME TO                                                                ####" << endl;
                            cout << "\t\t\t####                                                                                                                                              ####" << endl;
                            cout << "\t\t\t######################################################################################################################################################" << endl;
                            cout << "\t\t\t######################################################################################################################################################" << endl;
                            cout << "\t\t\t####                                                                                                                                              ####" << endl;
                            cout << "\t\t\t####" << YELLOW << "                ##############  ####          ############                                                 ####                               " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "               ##############  ####          #############                                                                                    " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "              ####            ####          ####      ####   ###########    ### ########   ###########   ####   ###########    ########       " << CYAN << "####" << endl;  
                            cout << "\t\t\t####" << YELLOW << "             ####            ####          ####      ####   ############   ###########    ############  ####  ############   ##########       " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "            #########       ####          #############            ####   ####                   ####  ####  ####          #####  #####       " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "           #########       ####          ############      ###########   ####            ###########  ####  ###########   ####    ####        " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "          ####            ####          ####             ############   ####           ############  ####   ###########  ####    ####         " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "         ####            ####          ####            ####     ####   ####          ####     ####  ####          ####  #####  #####          " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "        ##############  #######       ####             ############   ####           ############  ####  ############   ##########            " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "       ##############   ######       ####              ###########   ####            ###########  ####  ###########     ########              " << CYAN << "####" << endl;
                            cout << "\t\t\t####                                                                                                                                              ####" << endl;
                            cout << "\t\t\t######################################################################################################################################################" << endl;
                            cout << "\t\t\t####                                                                                                                                              ####" << endl;
                            cout << "\t\t\t####" << YELLOW << "                 ##############                                                                    ####  ####          ####                   " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "                ##############                                                                    ####                ####                    " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "               ####             ###########     ###########    ########    ### ######      ##########  ####    ##########    ########         " << CYAN << "####" << endl;                
                            cout << "\t\t\t####" << YELLOW << "              ####            ############    ############   ##########   ###########    ###########  ####   ###########   ##########         " << CYAN << "####" << endl;         
                            cout << "\t\t\t####" << YELLOW << "             #########      ####            #####          #####  #####  ####    ####  #####   ####  ####  ####    ####  #####  #####         " << CYAN << "####" << endl;
                            cout << "\t\t\t####" << YELLOW << "            #########       ###########    ####           ####    ####  ####    ####  ####    ####  ####  ####    ####  ####    ####          " << CYAN << "####" << endl;    
                            cout << "\t\t\t####" << YELLOW << "           ####             ###########   ####           ####    ####  ####    ####  ####    ####  ####  ####    ####  ####    ####           " << CYAN << "####" << endl;  
                            cout << "\t\t\t####" << YELLOW << "          ####                     ####  #####          #####  #####  ####    ####  #####   ####  ####  ####    ####  #####  #####            " << CYAN << "####" << endl;       
                            cout << "\t\t\t####" << YELLOW << "         ##############  ############    ############   ##########   ####    ####   ###########  ####   ###########   ##########              " << CYAN << "####" << endl;                            
                            cout << "\t\t\t####" << YELLOW << "        ##############  ###########      ###########    ########    ####    ####    ##########  ####    ##########    ########                " << CYAN << "####" << endl;                     
                            cout << "\t\t\t####                                                                                                                                              ####" << endl;
                            cout << "\t\t\t######################################################################################################################################################" << endl;
                            cout << "\t\t\t######################################################################################################################################################" << RESET << endl;
                            cout  << GREEN << "\n\n\t\t\t\t\t\t\t\t==> Your Name: "  << RESET << customerName;
                            cout << GREEN << "\t\t\t==> Your PassCode: " << RESET << moye << "\n\n";

                            int cust_pressuite=0,cust_execsuite=0,cust_junsuite=0;
                            int cust_single=0,cust_twin=0,cust_triple=0,cust_connectrooms=0;

                            int cust_Jamon=0, cust_TortillaEspanola=0, cust_Churros=0;
                            int cust_Croquetas=0, cust_Albondigas=0, cust_ItalianCuisine=0;
                            int cust_LecheFrita=0, cust_Gazpacho=0, cust_Pizza=0;
                            int cust_Pasta=0, cust_BakedSpaghetti=0, cust_PizzaMargherita=0;

                            int cust_total=0;
                            while (true) {

                                cout << BLUE << "\t\t\t\t#########################################\n";
                                cout << "\t\t\t\t###         What do you want:         ### \n";
                                cout << "\t\t\t\t#########################################\n";
                                cout << "\t\t\t\t##" << RESET << "     1) Room     " << BLUE << "##" << RESET << "      2) Food     " << BLUE << "##\n";
                                cout << "\t\t\t\t#########################################\n";
                        
                                cout << "\nWhat is your desire: " << RESET ;
                                cin >> c1;
                                cout << endl;
                                switch(c1)
                                {
                                    case 1:
                                    {
                                        cout << BLUE << "\t\t\t\t#########################################\n";
                                        cout << "\t\t\t\t###            Rooms Menu:            ###\n";
                                        cout << "\t\t\t\t#########################################\n";
                                        cout << "\t\t\t\t##" << RESET << "        1) Presidential Suite        " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        2) Executive Suite           " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        3) Junior Suite              " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        4) Single Rooms              " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        5) Twin Rooms                " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        6) Triple Rooms              " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        7) Connecting Rooms          " << BLUE << "##\n";
                                        cout << "\t\t\t\t#########################################\n";
                                        cout << "\n\nEnter your choice: " << RESET ;
                                        cin >> c2;
                                        system("cls");
                        
                                        switch (c2) 
                                        {
                                            case 1:
                                                cout << "\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "2200 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n"; 
                                                cout << BLUE << "\nEnter how many Presidential Suites you want: "<< RESET;
                                                cin >> q;
                                                if (Qpressuite - Spressuite >= q) {
                                                    Spressuite += q;
                                                    Total_pressuite += (q * 2200);
                                                    cust_pressuite += q;
                                                    cust_total += (q * 2200);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW  << q << "  Presidential Suites have been allotted!  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Presidential Suites: " << q << " @ 2200 Euros each. Total: " << q * 2200 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << Qpressuite - Spressuite << RED << " Presidential Suites Remaining in hotel"<< RESET ;
                                                }
                                                break;

                                            case 2:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "1600 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how many Executive Suites you want: " << RESET;
                                                cin >> q;
                                                if (Qexecsuite - Sexecsuite >= q) {
                                                    Sexecsuite += q;
                                                    Total_execsuite += (q * 1600);
                                                    cust_execsuite += q;
                                                    cust_total += (q * 1600);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW  << q << "  Executive Suites have been allotted!  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Executive Suites: " << q << " @ 1600 Euros each. Total: " << q * 1600 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\n\t\tOnly " << RESET << Qexecsuite - Sexecsuite << RED << " Executive Suites Remaining in hotel"<< RESET ;
                                                }
                                                break;

                                            case 3:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "1200 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << "\nEnter how many Junior Suites you want: ";
                                                cin >> q;
                                                if (Qjunsuite - Sjunsuite >= q) {
                                                    Sjunsuite += q;
                                                    Total_junsuite += q * 1200;
                                                    cust_junsuite += q;
                                                    cust_total += q * 1200;
                                                    cout <<"\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW  << q << " Junior Suites have been allotted  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Junior Suites: " << q << " @ 1200 Euros each. Total: " << q * 1200 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << Qjunsuite - Sjunsuite << RED << " Junior Suites Remaining in hotel"<< RESET ;
                                                }
                                                break;

                                            case 4:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "350 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how many Single Rooms you want: " << RESET;
                                                cin >> q;
                                                if (Qsingle - Ssingle >= q) {
                                                    Ssingle += q;
                                                    Total_single += (q * 350);
                                                    cust_single += q;
                                                    cust_total += (q * 350);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Single Rooms have been allotted!  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Single Rooms: " << q << " @ 350 Euros each. Total: " << q * 350 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << Qsingle - Ssingle << RED << " Single Rooms remaining in hotel"<< RESET ;
                                                }
                                                break;

                                            case 5:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "720 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how many Twin Rooms you want: " << RESET;
                                                cin >> q;
                                                if (Qtwin - Stwin >= q) {
                                                    Stwin += q;
                                                    Total_twin += (q * 720);
                                                    cust_twin += q;
                                                    cust_total += (q * 720);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Twin Rooms have been allotted  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Twin Rooms: " << q << " @ 720 Euros each. Total: " << q * 720 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << Qtwin - Stwin << RED << " Twin Rooms remaining in hotel"<< RESET ;
                                                }
                                                break;

                                            case 6:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "1000 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how many Triple Rooms you want: " << RESET;
                                                cin >> q;
                                                if (Qtriple - Striple >= q) {
                                                    Striple += q;
                                                    Total_triple += (q * 1000);
                                                    cust_triple += q;
                                                    cust_total += (q * 1000);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Triple Rooms have been allotted  "<< RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Triple Rooms: " << q << " @ 1000 Euros each. Total: " << q * 1000 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << Qtriple - Striple << RED << " Triple Rooms remaining in hotel"<< RESET ;
                                                }
                                                break;

                                            case 7:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "1100 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how many Connecting Rooms you want: " << RESET;
                                                cin >> q;
                                                if (Qconnectrooms - Sconnectrooms >= q) {
                                                    Sconnectrooms += q;
                                                    Total_connectrooms += (q * 1100);
                                                    cust_connectrooms += q;
                                                    cust_total += (q * 1100);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Connecting Rooms have been allotted  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Connecting Rooms: " << q << " @ 1100 Euros each. Total: " << q * 1100 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << Qconnectrooms - Sconnectrooms << RED << " Connecting Rooms remaining in hotel"<< RESET ;
                                                }
                                                break;
                                        }
                                        break;
                                    }
                                    case 2:
                                    {
                                        cout << BLUE << "\t\t\t\t########################################\n";
                                        cout << "\t\t\t\t###             Food Menu            ###\n";
                                        cout << "\t\t\t\t########################################\n";
                                        cout << "\t\t\t\t##" << RESET << "        1) Jamon                    " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        2) Tortilla Espanola        " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        3) Churros                  " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        4) Croquetas                " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        5) Albondigas               " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        6) Italian Cuisine          " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        7) Leche Frita              " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        8) Gazpacho                 " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "        9) Pizza                    " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "       10) Pasta                    " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "       11) Baked Spaghetti          " << BLUE << "##\n";
                                        cout << "\t\t\t\t##" << RESET << "       12) Pizza Margherita         " << BLUE << "##\n";
                                        cout << "\t\t\t\t########################################\n" << RESET;
                                
                                        cout << BLUE << "\n\n Please enter Your Choice: " << RESET;
                                        cin >> c2;
                                        system("cls");

                                        switch (c2) {
                                            case 1:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "30 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Jamon you want: " << RESET;
                                                cin >> q;
                                                if (QJamon - SJamon >= q) {
                                                    SJamon += q;
                                                    Total_Jamon += (q * 30);
                                                    cust_Jamon += q;
                                                    cust_total += (q * 30);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Jamon is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QJamon - SJamon << RED << " Jamon remaining in stock" << RESET;
                                                }
                                                break;

                                            case 2:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "15 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Tortilla Espanola you want: " << RESET;
                                                cin >> q;

                                                if (QTortillaEspanola - STortillaEspanola >= q) {
                                                    STortillaEspanola += q;
                                                    Total_TortillaEspanola += (q * 15);
                                                    cust_TortillaEspanola += q;
                                                    cust_total += (q * 15);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Tortilla Espanola is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Tortilla Espanola: " << q << " @ 15 Euros each. Total: " << q * 15 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QTortillaEspanola - STortillaEspanola << RED << " Tortilla Espanola remaining in stock" << RESET;
                                                }
                                                break;

                                            case 3:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "8 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Churros you want: " << RESET;
                                                cin >> q;

                                                if (QChurros - SChurros >= q) {
                                                    SChurros += q;
                                                    Total_Churros += (q * 8);
                                                    cust_Churros += q;
                                                    cust_total += (q * 8);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Churros is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Churros: " << q << " @ 8 Euros each. Total: " << q * 8 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QChurros - SChurros << RED << " Churros remaining in stock" << RESET;
                                                }
                                                break;
                                            case 4:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "16 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Croquetas you want: " << RESET;
                                                cin >> q;

                                                if (QCroquetas - SCroquetas >= q) {
                                                    SCroquetas += q;
                                                    Total_Croquetas += (q * 16);
                                                    cust_Croquetas += q;
                                                    cust_total += (q * 16);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Croquetas is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Croquetas: " << q << " @ 16 Euros each. Total: " << q * 16 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QCroquetas - SCroquetas << RED << " Croquetas remaining in stock" << RESET;
                                                }
                                                break;
                                            case 5:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "18 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Albondigas you want: " << RESET;
                                                cin >> q;

                                                if (QAlbondigas - SAlbondigas >= q) {
                                                    SAlbondigas += q;
                                                    Total_Albondigas += (q * 18);
                                                    cust_Albondigas += q;
                                                    cust_total += (q * 18);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Albondigas is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Albondigas: " << q << " @ 18 Euros each. Total: " << q * 18 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QAlbondigas - SAlbondigas << RED << " Albondigas remaining in stock" << RESET;
                                                }
                                                break;
                                            case 6:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "12 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Italian Cuisine you want: " << RESET;
                                                cin >> q;

                                                if (QItalianCuisine - SItalianCuisine >= q) {
                                                    SItalianCuisine += q;
                                                    Total_ItalianCuisine += (q * 12);
                                                    cust_ItalianCuisine += q;
                                                    cust_total += (q * 12);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Italian Cuisine is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Italian Cuisine: " << q << " @ 12 Euros each. Total: " << q * 12 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QItalianCuisine - SItalianCuisine << RED << " Italian Cuisine remaining in stock" << RESET;
                                                }
                                                break;
                                            case 7:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "15 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Leche Frita you want: " << RESET;
                                                cin >> q;
                                            
                                                if (QLecheFrita - SLecheFrita >= q) {
                                                    SLecheFrita += q;
                                                    Total_LecheFrita += (q * 15);
                                                    cust_LecheFrita += q;
                                                    cust_total += (q * 15);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Leche Frita is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Leche Frita: " << q << " @ 15 Euros each. Total: " << q * 15 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QLecheFrita - SLecheFrita << RED << " Leche Frita remaining in stock" << RESET;
                                                }
                                                break;

                                            case 8:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "13 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Gazpacho you want: " << RESET;
                                                cin >> q;

                                                if (QGazpacho - SGazpacho >= q) {
                                                    SGazpacho += q;
                                                    Total_Gazpacho += (q * 13);
                                                    cust_Gazpacho += q;
                                                    cust_total += (q * 13);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Gazpacho is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Gazpacho: " << q << " @ 13 Euros each. Total: " << q * 13 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QGazpacho - SGazpacho << RED << " Gazpacho remaining in stock" << RESET;
                                                }
                                                break;

                                            case 9:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "5 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Pizza you want: " << RESET;
                                                cin >> q;

                                                if (QPizza - SPizza >= q) {
                                                    SPizza += q;
                                                    Total_Pizza += (q * 5);
                                                    cust_Pizza += q;
                                                    cust_total += (q * 5);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Pizza is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Pizza: " << q << " @ 5 Euros each. Total: " << q * 5 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QPizza - SPizza << RED << " Pizza remaining in stock" << RESET;
                                                }
                                                break;

                                            case 10:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "7 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Pasta you want: " << RESET;
                                                cin >> q;

                                                if (QPasta - SPasta >= q) {
                                                    SPasta += q;
                                                    Total_Pasta += (q * 7);
                                                    cust_Pasta += q;
                                                    cust_total += (q * 7);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Pasta is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Pasta: " << q << " @ 7 Euros each. Total: " << q * 7 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QPasta - SPasta << RED << " Pasta remaining in stock" << RESET;
                                                }
                                                break;

                                            case 11:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "9 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Baked Spaghetti you want: " << RESET;
                                                cin >> q;
                                            
                                                if (QBakedSpaghetti - SBakedSpaghetti >= q) {
                                                    SBakedSpaghetti += q;
                                                    Total_BakedSpaghetti += (q * 9);
                                                    cust_BakedSpaghetti += q;
                                                    cust_total += (q * 9);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Baked Spaghetti is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Baked Spaghetti: " << q << " @ 9 Euros each. Total: " << q * 9 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QBakedSpaghetti - SBakedSpaghetti << RED << " Baked Spaghetti remaining in stock" << RESET;
                                                }
                                                break;

                                            case 12:
                                                cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  Price: " << YELLOW << "8 Euros  " << RESET << "<<<<<<<<<<<<<<<<<<<<\n";
                                                cout << BLUE << "\nEnter how much quantity of Pizza Margherita you want: " << RESET;
                                                cin >> q;

                                                if (QPizzaMargherita - SPizzaMargherita >= q) {
                                                    SPizzaMargherita += q;
                                                    Total_PizzaMargherita += (q * 8);
                                                    cust_PizzaMargherita += q;
                                                    cust_total += (q * 8);
                                                    cout << "\n\n\t\t>>>>>>>>>>>>>>>>>>>>  " << YELLOW << q << " Pizza Margherita is the order  " << RESET << "<<<<<<<<<<<<<<<<<<<<";
                                                    file << customerName << " - Pizza Margherita: " << q << " @ 8 Euros each. Total: " << q * 8 << " Euros\n";
                                                } else {
                                                    cout << RED << "\n\tOnly " << RESET << QPizzaMargherita - SPizzaMargherita << RED << " Pizza Margherita remaining in stock" << RESET;
                                                }
                                                break;

                                            }
                                            break;        
                                        }

                                        default:
                                            cout << RED << "\t\t\t\t\t\t\t\t  #################################################################\n";
                                            cout << "\t\t\t\t\t\t\t\t  ##       Please select from the numbers mentioned above!       ##\n";
                                            cout << "\t\t\t\t\t\t\t\t  #################################################################\n" << RESET;
                                }

                                cout << CYAN << "\n\n\t\t\tDo you want to buy something else (Y/N)? "<< RESET;
                                cin >> anotherPurchase;
                                if (anotherPurchase == 'N' || anotherPurchase == 'n') {
                                	system("cls");
                                    cout << BLUE << "###############################################################\n";
                                    cout << "###                   *El Paraiso Escondido*                ###\n";
                                    cout << "###############################################################\n";
                                    cout << "###                 Receipt of Your Purchase                ###\n";
                                    cout << "###############################################################\n";
                                    cout << "\n\nName: " << CYAN << customerName  << RESET << endl;
                                    cout << "\nItem Name:            Quantity:        Amount: " << GREEN << endl;
                                    if (cust_pressuite > 0) cout << "\nPresidential Suite        " << cust_pressuite << "            " << cust_pressuite * 2200<<" Euros";
                                    if (cust_execsuite > 0) cout << "\nExecutive Suite           " << cust_execsuite << "            " << cust_execsuite * 1600<<" Euros";
                                    if (cust_junsuite > 0) cout << "\nJunior Suite              " << cust_junsuite << "            " << cust_junsuite * 1200<<" Euros";
                                    if (cust_single > 0) cout << "\nSingle Room               " << cust_single << "            " << cust_single * 350<<" Euros";
                                    if (cust_twin > 0) cout << "\nTwin Room                 " << cust_twin << "            " << cust_twin * 720<<" Euros";
                                    if (cust_triple > 0) cout << "\nTriple Room               " << cust_triple << "            " << cust_triple * 1000<<" Euros";
                                    if (cust_connectrooms > 0) cout << "\nConnecting Room           " << cust_connectrooms << "            " << cust_connectrooms * 1100<<"Euros";
                                    if (cust_Jamon > 0) cout << "\nJamon               " << cust_Jamon << "            " << cust_Jamon * 30<<"Euros";
                                    if (cust_TortillaEspanola > 0) cout << "\nTortilla Espanola         " << cust_TortillaEspanola << "            " << cust_TortillaEspanola * 15<<"Euros";
                                    if (cust_Churros > 0) cout << "\nChurros                   " << cust_Churros << "            " << cust_Churros * 8<<"Euros";
                                    if (cust_Croquetas > 0) cout << "\nCroquetas                " << cust_Croquetas << "            " << cust_Croquetas * 16<<"Euros";
                                    if (cust_Albondigas > 0) cout << "\nAlbondigas          " << cust_Albondigas << "            " << cust_Albondigas * 18<<"Euros";
                                    if (cust_ItalianCuisine > 0) cout << "\nItalian Cuisine          " << cust_ItalianCuisine << "            " << cust_ItalianCuisine * 12<<"Euros";
                                    if (cust_LecheFrita > 0) cout << "\nLeche Frita              " << cust_LecheFrita << "            " << cust_LecheFrita * 15<<"Euros";
                                    if (cust_Gazpacho > 0) cout << "\nGazpacho                 " << cust_Gazpacho << "            " << cust_Gazpacho * 13<<"Euros";
                                    if (cust_Pizza > 0) cout << "\nPizza                    " << cust_Pizza << "            " << cust_Pizza * 5<<"Euros";
                                    if (cust_Pasta > 0) cout << "\nPasta                    " << cust_Pasta << "            " << cust_Pasta * 7<<"Euros";
                                    if (cust_BakedSpaghetti > 0) cout << "\nBaked Spaghetti          " << cust_BakedSpaghetti << "            " << cust_BakedSpaghetti * 9<<"Euros";
                                    if (cust_PizzaMargherita > 0) cout << "\nPizza Magherita         " << cust_PizzaMargherita << "            " << cust_PizzaMargherita * 8<<"Euros";
                                    

                                    cout  << CYAN << "\n\n\t\tTotal Amount: "  << YELLOW << cust_total << " Euros" << endl;
	                        		cout<<"\n\n";  
                                    while(true){
                                        string n;
                                        cout<< MAGENTA <<"\n\nKindly pay the bill and reply \"Paid/P\" to proceed next: "<< RESET;
                                        cin>>n;
                                        cout<<endl;

                                        if(n=="Paid" || n=="P" || n=="p" || n=="paid")
                                            
                                            break;
                                        
                                        else
                                            continue;
                                        }       
                                    goto start;
                                } 
                                    cout << BLUE << "\t\t\t\t#############################################################\n";
                                    cout << "\t\t\t\t###            Thank you for using the services           ###\n";
                                    cout << "\t\t\t\t###                at El Paraiso Escondido!               ###\n";
                                    cout << "\t\t\t\t#############################################################\n\n" << RESET;
                            }
                        }
                        while(true);
                        break;
                    }
                    else{
                        cout << RED <<"\t\t\t\t\t\t\t\t  ###################################################################\n";
                        cout << "\t\t\t\t\t\t\t\t  ##  Please Enter a valid Passcode or continue as a New Customer  ##\n" ;
                        cout << "\t\t\t\t\t\t\t\t  ###################################################################\n" << RESET;
                    }
                }
            }
            else if (customerType == "New" || customerType == "new"){
                    above:
                    cout << CYAN << "\n\t\t\tEnter your name: "<< RESET;
                    cin >> memberName;
                    
                    bool custFound = false;
                    for(int k = 0; k <= 10; ++k){
                        
                        if(custName[k] != memberName){
                            custFound = true;
                            
                        }
                        else{
                            cout << GREEN <<"\t\t\t\t\t\t\t\t\t############################################\n";
                            cout << "\t\t\t\t\t\t\t\t\t##  Member already exist with same name.  ##" <<  endl;
                            cout << "\t\t\t\t\t\t\t\t\t##        Try some other Keyword.         ##" <<  endl; 
                            cout << "\t\t\t\t\t\t\t\t\t############################################\n" << RESET ;
                            goto above;
                        }
                    }
                    if(custFound == true && custName.size() != Qrooms){
                        custName.push_back(memberName);
                        goto further;
                    }
                    
                    further:
                    bool found = false;
                    for(int j = 0; j <= existingMember.size(); ++j){
                        if(existingMember[j] != a){
                            found = true;
                        }
                        else{
                            a += 11836232;
                        }
                    } 
                    if(found == true && existingMember.size() != Qrooms){
                        cout <<"\n\t\t>>>>>>>>>>>>>>>>>>>>" << GREEN << "  This is your code: " << YELLOW << a << "  " << RESET << "<<<<<<<<<<<<<<<<<<<<" << endl;
                        existingMember.push_back(a);  
                    }
                    else{
                        cout << GREEN <<"\t\t\t\t\t\t\t\t\t####################################################\n"; 
                        cout << "\t\t\t\t\t\t\t\t\t##  Sorry! We canot register you as we are full.  ##\n";
                        cout << "\t\t\t\t\t\t\t\t\t####################################################\n"<< RESET;
                        break;
                    } 
                    // for(int i = 0; i < existingMember.size(); ++i ){
                        // cout << existingMember[i] << endl;
                        // 
                    // }
                    goto middle;
            }
           

        }
        else {
            
        
            cout << RED <<"\t\t\t\t\t\t\t\t  ################################################################\n"; 
            cout << "\t\t\t\t\t\t\t\t  ##  Kindly enter the right information about your existence.  ##\n";
            cout << "\t\t\t\t\t\t\t\t  ################################################################\n" << RESET; 
            
        }
    } while(true);
    return 0;
}