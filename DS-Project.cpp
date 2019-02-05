#include<iostream>              //               LAPTO-FINDER
#include<stdlib.h>              //      A SIMPLE LAPTOP FINDING PROGRAM
#include<string.h>              //      PROGRAMMED BY: MANAS VIVEK CHOUBAL
#include<fstream>               //      Github: https://github.com/manas9927


using namespace std;

    #define max 10

    int i=0, j=0, size=0, choice ;
    long int price_r[20];
    string lap_name[20], manf[20], os[20] ,processor[20] ,ram[20], video_card[20], scr_size[20]  ;

struct limited
{
    int front=0;
    int rear=-1;
    string lim_nam[max],lim_manf[max];
}s;

void logo()
{
    system("cls");
    //system("clear");
    cout<<"\n\n";
    cout<<"\n\t\t__________________________________________________________________";
    cout<<"\n\t\t|    __   ___   ___  __________      _________  _____  _______   |  ";
    cout<<"\n\t\t|   / /  / _ | / _ )/_  __/ __ )____/ __/  _/ |/ / _ )/ __/ _ \\  |  ";
    cout<<"\n\t\t|  / /__/ __ |/ ___/ / / / /_/ /___/ _/_/ //    / // / _// , _/  |  ";
    cout<<"\n\t\t| /____/_/ |_/_/    /_/  \\____/   /_/ /___/_/|_/____/___/_/|_|   |  ";
    cout<<"\n\t\t----------------------FIND YOUR PERFECT LAPTOP--------------------\n\n";
}

int full()
{
    if(s.rear==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int empty()
{
    if(s.rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void enqueue(string lim_nam1, string lim_manf1)
{
    if(!full())
    {
        s.lim_nam[++s.rear]=lim_nam1;
        s.lim_manf[s.rear]=lim_manf1;
    }
    else
    {
        cout<<"\n\n\t\t\t No more space for Limited Editions\n";
    }
}

string dequeue()
{
    if(empty())
    {
        return (s.lim_nam[++s.front]);
        return (s.lim_manf[++s.front]); 
    }
    else
    {
        cout<<"\n\n\t\t\t No limited Editions at present";
        return 0;
    }
}

int authenticate()
{
    string username, pass;
    logo();
    cout<<"\n\t\t-----------------PLEASE ENTER THE CREDENTIALS---------------------\n\n";
    cout<<"\n\t\t\t Username : ";
    cin>>username;
    cout<<"\n\t\t\t Password : ";
    cin>>pass;
    if (username=="admin" && pass=="1234")
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void insert()
{
    int man, pro, os_c, ram_c, v_card, scr_c;
    
    logo();
    cout<<"\n\t\t-----------------------LOGIN SUCCESSFULL--------------------------\n\n";
    cout<<"\n\n\t\tPlease enter the number of laptops you want to add to database : ";
        cin>>size;
        for(i=0;i<size;i++)
        {
            
            cout<<"\n\t\tEnter the Manufacturer of Laptop "<<i+1<<" :";
            cout<<"\n\t\t 1) Apple \n\t\t 2) Dell \n\t\t 3) HP\n\t\t\t\t=> ";
            cin>>man;
            switch(man)
            {
                case 1:
                    manf[i]="Apple";
                break;
                
                case 2:
                    manf[i]="Dell";
                break;

                case 3:
                    manf[i]="HP";
                break;

                default:
                    cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                system("pause");
                return;
            }
            cout<<"\n\n\t\tEnter the name of the laptop "<<i+1<<" : ";
            cin>>lap_name[i];
            cout<<"\n\n\t\tEnter the Processor :";
            cout<<"\n\t\t\t 1) Intel Core i3 \n\t\t\t 2) Intel Core i5 \n\t\t\t 3) Intel Core i7\n\t\t\t\t => ";
            cin>>pro;
            switch(pro)
            {
                case 1:
                    processor[i]="i3";
                break;

                case 2:
                    processor[i]="i5";
                break;

                case 3:
                    processor[i]="i7";
                break;

                default:
                    cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                system("pause");
                return;
            }
            cout<<"\n\n\t\t Price : ";
            cin>> price_r[i];

            cout<<"\n\n\t\tEnter the Operating System";
            cout<<"\n\t\t\t 1) macOS \n\t\t\t 2) Linux \n\t\t\t 3) Windows\n\t\t\t\t => ";
            cin>>os_c;
            switch(os_c)
            {
                case 1:
                    os[i]="macOS";
                break;

                case 2:
                    os[i]="Linux";
                break;

                case 3:
                    os[i]="Windows";
                break;

                default:
                    cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                system("pause");
                return;
            }
            cout<<"\n\n\t\tEnter the RAM : ";
            cout<<"\n\t\t\t 1) 2GB \n\t\t\t 2) 4GB \n\t\t\t 3) 8GB \n\t\t\t 4) 16GB\n\t\t\t\t => ";
            cin>>ram_c;
            switch(ram_c)
            {
                case 1:
                    ram[i]="2GB";
                break;

                case 2:
                    ram[i]="4GB";
                break;

                case 3:
                    ram[i]="8GB";
                break;

                case 4:
                    ram[i]="16GB";
                break;

                default:
                    cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                system("pause");
                return;
            }
            cout<<"\n\n\t\t Enter the memory of Video Card (If Any) : ";
            cout<<"\n\t\t\t 1) No Video Card \n\t\t\t 2) 2 GB \n\t\t\t 3) 4 GB \n\t\t\t 4) 6 GB \n\t\t\t 5) 8 GB\n\t\t\t => ";
            cin>>v_card;
            switch(v_card)
            {
                case 1:
                    video_card[i]="N/A";
                break;

                case 2:
                    video_card[i]="2GB";
                break;

                case 3:
                    video_card[i]="4GB";
                break;

                case 4:
                    video_card[i]="6GB";
                break;

                case 5:
                    video_card[i]="8GB";
                break;

                default:
                    cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                system("pause");
                return;
            }
            cout<<"\n\n\t\t Enter the Screen Size : ";
            cout<<"\n\t\t\t 1) 13 Inch \n\t\t\t 2) 15 Inch \n\t\t\t 3) 17 Inch \n\t\t\t\t=> ";
            cin>>scr_c;
            switch(scr_c)
            {
                case 1:
                    scr_size[i]="13";
                break;

                case 2:
                    scr_size[i]="15";
                break;

                case 3:
                    scr_size[i]="17";
                break;

                default:
                    cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                system("pause");
                return;
            }
        }
        system("pause");
}
 void search()
 {
    int os_c1,price_c1, scr_c1, proc_c1, ram_c1, v_card_c1, ch3  ;
    string os_c2, price_c2 ,scr_c2, proc_c2,ram_c2, v_card_c2 ;
    logo();
    cout<<"\n\t\t-------PLEASE ENTER YOUR DESIRED CONFIGURATION STEP BY STEP-------\n\n";
    cout<<"\n\t\t Operating System :\n";
    cout<<"\n\t\t\t1) macOS\n\t\t\t2) Linux\n\t\t\t3) Windows\n\t\t\t\t=>";
    cin>>os_c1;
    switch(os_c1)
    {
        case 1:
            os_c2="macOS";
        break;

        case 2:
            os_c2="Linux";
        break;

        case 3:
            os_c2="Windows";
        break;

        default:
            cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
        system("pause");
        return;
    }
    logo();
    cout<<"\n\t\t-------PLEASE ENTER YOUR DESIRED CONFIGURATION STEP BY STEP-------\n\n";
    cout<<"\n\t\t Selected Operating System : "<<os_c2<<"\n";

    cout<<"\n\t\tScreen Size :\n";
    cout<<"\n\t\t\t1) 13 Inch\n\t\t\t2) 15 Inch\n\t\t\t3) 17 Inch\n\t\t\t\t=>";
    cin>>scr_c1;
    switch(scr_c1)
    {
        case 1:
            scr_c2="13";
        break;

        case 2:
            scr_c2="15";
        break;

        case 3:
            scr_c2="17";
        break;
        
        default:
            cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
        system("pause");
        return;
    }
    logo();
    cout<<"\n\t\t-------PLEASE ENTER YOUR DESIRED CONFIGURATION STEP BY STEP-------\n\n";
    cout<<"\n\t\t Selected Operating System : "<<os_c2<<"\n";
    cout<<"\n\t\t Selected Screen Size      : "<<scr_c2<<" Inch\n\n";

    cout<<"\n\t\t Processor :\n";
    cout<<"\n\t\t\t1) Intel Core i3\n\t\t\t2) Intel Core i5\n\t\t\t3) Intel Core i7\n\t\t\t\t=>";
    cin>>proc_c1;
    switch(proc_c1)
    {
        case 1:
            proc_c2="i3";
        break;

        case 2:
            proc_c2="i5";
        break;

        case 3:
            proc_c2="i7";
        break;

        default:
            cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
        system("pause");
        return;
    }
    logo();
    cout<<"\n\t\t-------PLEASE ENTER YOUR DESIRED CONFIGURATION STEP BY STEP-------\n\n";
    cout<<"\n\t\t Selected Operating System : "<<os_c2<<"\n";
    cout<<"\n\t\t Selected Screen Size      : "<<scr_c2<<" Inch\n";
    cout<<"\n\t\t Selected Processor        : Intel Core "<<proc_c2<<"\n\n";

    cout<<"\n\t\t Choose RAM Requirement :\n";
    cout<<"\n\t\t\t1) 2 GB\n\t\t\t2) 4 GB\n\t\t\t3) 8 GB\n\t\t\t4) 16 GB\n\t\t\t\t=>";
    cin>>ram_c1;
    switch(ram_c1)
    {
        case 1:
            ram_c2="2GB";
        break;

        case 2:
            ram_c2="4GB";
        break;

        case 3:
            ram_c2="8GB";
        break;

        case 4:
            ram_c2="16GB";
        break;

        default:
            cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
        system("pause");
        return;
    }
    logo();
    cout<<"\n\t\t-------PLEASE ENTER YOUR DESIRED CONFIGURATION STEP BY STEP-------\n\n";
    cout<<"\n\t\t Selected Operating System : "<<os_c2<<"\n";
    cout<<"\n\t\t Selected Screen Size      : "<<scr_c2<<" Inch\n";
    cout<<"\n\t\t Selected Processor        : Intel Core "<<proc_c2<<"\n";
    cout<<"\n\t\t Selected RAM (Memory)     : "<<ram_c2<<"\n\n";

    cout<<"\n\t\t Video Card reqiurement :\n";
    cout<<"\n\t\t\t 1) No Video Card \n\t\t\t 2) 2 GB \n\t\t\t 3) 4 GB \n\t\t\t 4) 6 GB \n\t\t\t 5) 8 GB\n\t\t\t => ";
    cin>>v_card_c1;
    switch(v_card_c1)
    {
        case 1:
            v_card_c2="N/A";
        break;

        case 2:
            v_card_c2="2GB";
        break;

        case 3:
            v_card_c2="4GB";
        break;

        case 4:
            v_card_c2="6GB";
        break;

        case 5:
            v_card_c2="8GB";
        break;

        default:
            cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
        system("pause");
        return;        
    }
    logo();
    cout<<"\n\t\t-------------------CONFIGURATION ENTER BY YOU IS------------------\n\n";
    cout<<"\n\t\t Selected Operating System : "<<os_c2<<"\n";
    cout<<"\n\t\t Selected Screen Size      : "<<scr_c2<<" Inch\n";
    cout<<"\n\t\t Selected Processor        : Intel Core "<<proc_c2<<"\n";
    cout<<"\n\t\t Selected RAM (Memory)     : "<<ram_c2<<"\n";
    cout<<"\n\t\t Video Card Requirement    : "<<v_card_c2<<"\n\n";
    cout<<"\n\t\t\t 1) Search Laptop";
    cout<<"\n\t\t\t 2) Go Back to Menu\n\t\t\t\t=>";
    cin>>ch3;
    switch(ch3)
    {
    case 1:

    for(i=0;i<size;i++)
    {
        if(os[i]==os_c2 && processor[i]==proc_c2 && scr_size[i]==scr_c2 && ram[i]==ram_c2 && video_card[i]==v_card_c2)
        {
            logo();
            cout<<"\n\t\t------------------------LAPTO-FINDER RESULTS----------------------\n\n";
            cout<<"\n\n\t\t Manufacturer : "<<manf[i];
            cout<<"\n\n\t\t Laptop Name  : "<<lap_name[i];
            cout<<"\n\n\t\t Price        : "<<price_r[i];
            cout<<"\n\n\t\t OS           : "<<os[i];
            cout<<"\n\n\t\t Processor    : "<<processor[i];
            cout<<"\n\n\t\t RAM (Memory) : "<<ram[i];
            cout<<"\n\n\t\t Screen Size  : "<<scr_size[i];
            cout<<"\n\n\t\t Video Card   : "<<video_card[i]<<"\n\n";
            system("pause");
        }
        else
        {
            logo();
            cout<<"\n\t\t---------------NO LAPTOPS FOUND OF THIS CONFIGURATION-------------\n\n";
            system("pause");            
        }
        
    }
    break;

    case 2:
        cout<<"\n\t\t-----------------------------BACK TO MENU-------------------------\n\n";
        system("pause");
        return;
    break;

    default:
        cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
        system("pause");
        return;

    }       //SWITCH CH3
    cout<<"\n\n\t\t Limited Editions Available";

 }

void update()
{
        int upd_u, pro1, ram_u, v_card_u;
        string lap_n1;
        logo();
        cout<<"\n\t\t------------------------DATABASE FOR REFERENCE--------------------\n\n";
        for(i=0;i<size;i++)
        {
            cout<<"\n\t\t----------------------------- LAPTOP "<<i+1<<" ---------------------------\n\n";
            cout<<"\n\n\t\t Manufacturer : "<<manf[i];
            cout<<"\n\n\t\t Laptop Name  : "<<lap_name[i];
            cout<<"\n\n\t\t Price        : "<<price_r[i];
            cout<<"\n\n\t\t OS           : "<<os[i];
            cout<<"\n\n\t\t Processor    : "<<processor[i];
            cout<<"\n\n\t\t RAM (Memory) : "<<ram[i];
            cout<<"\n\n\t\t Screen Size  : "<<scr_size[i];
            cout<<"\n\n\t\t Video Card   : "<<video_card[i]<<"\n\n";
            
        }
        system("pause");
        logo();
        cout<<"\n\t\t----------------------------DATA UPDATION-------------------------\n\n";
        cout<<"\n\t\t Enter the name of the Laptop whose details you want to update : ";
        cin>>lap_n1;
        cout<<"\n\t\t Select Which Detail you want to update :\n";
        cout<<"\n\t\t 1) Price";
        cout<<"\n\t\t 2) RAM (Memory)";
        cout<<"\n\t\t 3) Processor";
        cout<<"\n\t\t 4) Video Card\n\t\t\t=>";
        cin>>upd_u;
        switch(upd_u)
        {
            case 1:
                for(i=0;i<size;i++)
                {
                    if(lap_name[i]==lap_n1)
                    {
                        cout<<"\n\n\t\t\t Enter the new Price for "<<lap_name[i]<<" : ";
                        cin>>price_r[i];
                    }
                }
            break;

            case 2:
                for(i=0;i<size;i++)
                {
                    if(lap_name[i]==lap_n1)
                    {
                        cout<<"\n\n\t\t\t Enter the new RAM for "<<lap_name[i]<<" : ";
                        cout<<"\n\t\t\t 1) 2GB \n\t\t\t 2) 4GB \n\t\t\t 3) 8GB \n\t\t\t 4) 16GB\n\t\t\t\t => ";
                        cin>>ram_u;
                        switch(ram_u)
                        {
                            case 1:
                                ram[i]="2GB";
                            break;

                            case 2:
                                ram[i]="4GB";
                            break;

                            case 3:
                                ram[i]="8GB";
                            break;

                            case 4:
                                ram[i]="16GB";
                            break;

                            default:
                                cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                                system("pause");
                            return;
                        }
                    }
                }
            break;

            case 3:
                for(i=0;i<size;i++)
                {
                    if(lap_name[i]==lap_n1)
                    {
                        cout<<"\n\n\t\t\t Enter the new Processor for "<<lap_name[i]<<" : ";
                        cout<<"\n\t\t\t 1) Intel Core i3 \n\t\t\t 2) Intel Core i5 \n\t\t\t 3) Intel Core i7\n\t\t\t\t => ";
                        cin>>pro1;
                        switch(pro1)
                        {
                            case 1:
                                processor[i]="i3";
                            break;

                            case 2:
                                processor[i]="i5";
                            break;

                            case 3:
                                processor[i]="i7";
                            break;

                            default:
                                cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                                system("pause");
                            return;
                        }
                    }
                }
            break;

            case 4:
                for(i=0;i<size;i++)
                {
                    if(lap_name[i]==lap_n1)
                    {
                        cout<<"\n\n\t\t\t Enter the new Video Card for "<<lap_name[i]<<" : ";
                        cout<<"\n\t\t\t 1) No Video Card \n\t\t\t 2) 2 GB \n\t\t\t 3) 4 GB \n\t\t\t 4) 6 GB \n\t\t\t 5) 8 GB\n\t\t\t => ";
                        cin>>v_card_u;
                        switch(v_card_u)
                        {
                            case 1:
                                video_card[i]="N/A";
                            break;

                            case 2:
                                video_card[i]="2GB";
                            break;

                            case 3:
                                video_card[i]="4GB";
                            break;

                            case 4:
                                video_card[i]="6GB";
                            break;

                            case 5:
                                video_card[i]="8GB";
                            break;

                            default:
                                cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                                system("pause");
                            return;
                        }
                    }
                }
            break;

            default:
                cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                system("pause");
            return;
        }
}

void delet()
{
        int lap_n2;
        logo();
        cout<<"\n\t\t------------------------DATABASE FOR REFERENCE--------------------\n\n";
        for(i=0;i<size;i++)
        {
            cout<<"\n\t\t----------------------------- LAPTOP "<<i<<" ---------------------------\n\n";
            cout<<"\n\n\t\t Manufacturer : "<<manf[i];
            cout<<"\n\n\t\t Laptop Name  : "<<lap_name[i];
            cout<<"\n\n\t\t Price        : "<<price_r[i];
            cout<<"\n\n\t\t OS           : "<<os[i];
            cout<<"\n\n\t\t Processor    : "<<processor[i];
            cout<<"\n\n\t\t RAM (Memory) : "<<ram[i];
            cout<<"\n\n\t\t Screen Size  : "<<scr_size[i];
            cout<<"\n\n\t\t Video Card   : "<<video_card[i]<<"\n\n";
            
        }
        system("pause");
        logo();
        cout<<"\n\t\t----------------------------DATA DELETION-------------------------\n\n";
        cout<<"\n\t\t Enter the serial number of the Laptop whose data you want to Delete : ";
        cin>>lap_n2;
        cout<<"\n\t\t "<<lap_name[lap_n2]<<" will be deleted from the Database ?";
        system("pause");
        for(i=lap_n2;i<size;i++)
        {
            manf[i]=manf[i+1];
            lap_name[i]=lap_name[i+1];
            price_r[i]=price_r[i+1];
            os[i]=os[i+1];
            processor[i]=processor[i+1];
            ram[i]=ram[i+1];
            scr_size[i]=scr_size[i+1];
            video_card[i]=video_card[i+1];
        }
        size--;
        cout<<"\n\n\t\t\tLaptop Deleted";
}

void lim_ed()
{
        int man2;
        string lim_nam3,lim_manf3,lim_os3,lim_processor3,lim_ram3,lim_v_card3,lim_scr_size3;
        logo();
        cout<<"\n\t\t--------------------------LIMITED EDITION-------------------------\n\n"; 
        cout<<"\n\t\t Enter Name : ";
        cin>>lim_nam3;
        cout<<"\n\t\t Enter Manufacturer Name : ";
         cout<<"\n\t\t 1) Apple \n\t\t 2) Dell \n\t\t 3) HP\n\t\t\t\t=> ";
            cin>>man2;
            switch(man2)
            {
                case 1:
                    lim_manf3="Apple";
                break;
                
                case 2:
                   lim_manf3="Dell";
                break;

                case 3:
                    lim_manf3="HP";
                break;

                default:
                    cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                system("pause");
                return;
            }
        enqueue(lim_nam3,lim_manf3/*,lim_os3,lim_processor3,lim_ram3,lim_v_card3,lim_scr_size3*/);
        system("pause");
}

void lim_ed_show()
{
        logo();
        cout<<"\n\t\t--------------------------LIMITED EDITION-------------------------\n\n";
        for(i=0;i<s.rear;i++)
        {
            cout<<"\n\t\t----------------------------- LAPTOP "<<i+1<<" ---------------------------\n\n";
            cout<<"\n\t\t Laptop Name  : "<<s.lim_nam[i];
            cout<<"\n\t\t Manufacturer : "<<s.lim_manf[i+1]<<"\n\n";
        }
        system("pause");
}

void lim_del()
{
    dequeue();
}
int main()
{
    int ch1;
    bool prog=true;
    
    while(prog)
    {
        logo();
        cout<<"\n\t\t----------------------PLEASE ENTER YOUR CHOICE--------------------\n\n";
        cout<<"\n\t\t\t 1) Search Laptops with your required configuration";
        cout<<"\n\t\t\t 2) Browse Limited Edition Laptops";
        cout<<"\n\t\t\t 3) Admin Login";
        cout<<"\n\t\t\t 0) Exit Lapto-Finder \n\n\t\t\t\t\t => ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                search();        
            break;

            case 2:
                lim_ed_show();
            break;
        
        
            case 3:
                if (authenticate())
                {
                    logo();
                    cout<<"\n\t\t---------------WELCOME ADMIN PLEASE ENTER YOUR CHOICE-------------\n\n";
                    cout<<"\n\n\t\t 1) Insert new Laptop to the Database ";
                    cout<<"\n\n\t\t 2) Update details of an existing Laptop";
                    cout<<"\n\n\t\t 3) Delete an Existing Laptop from Database";
                    cout<<"\n\n\t\t 4) Insert a Limited Edition Laptop";
                    cout<<"\n\n\t\t 5) Delete Limited Edition Laptop\n\n\t\t\t\t=>";
                    cin>>ch1;
                    switch(ch1)
                    {
                        case 1:
                            insert();
                        break;

                        case 2:
                            update();
                        break;

                        case 3:
                            delet();
                        break;

                        case 4:
                            lim_ed();
                        break;
                        
                        case 5:
                            lim_del();
                        break;

                        default:
                            cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                            system("pause");
                        break;
                    }
                }
                else
                {
                    cout<<"\n\n\t\t\t --------WRONG USERNAME/PASSWORD--------   \n\n ";
                    system("pause");
                }
            break;

            case 0:
                prog=false;
            break;

            default:
                cout<<"\n\n\t\t\t\t PLEASE ENTER A VALID OPTION\n\n";
                system("pause");
            break;
        
        }

    cout<<"\n\n\n\t\t--------------------------PROGRAM TERMINATED--------------------------\n\n";
    }
    return 0;
}