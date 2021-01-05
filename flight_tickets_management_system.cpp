#include <iostream>//header file for standard input-output stream (cin,cout)
#include<fstream>//header file to create files, write information to files, and read information from files.
#include<string.h>//header file for taking many string as input and for file handling
using namespace std;

int b=0; //to keep track of no of ticket
int g=0;

class d_booking //class  for domestic booking
{
protected:
    int a;//for keeping the ticket number
    char f_d[100],toja[100],tojd[100]; //to journey Departure and Arrival and f_d is to copying Flight name domestic
   string doj;// date of  journey
    int choice,src,dest; // scr= Source and dest is destination
public:
    void d_a(){
       b++;
       a=b;
    }

    int j_detail() {// function declaration and definition for domestic journey
        cout << "\nEnter DateOfJourney(DD-MM-YYYY). " <<  endl;
        cin >> doj;//date of journey
        cout << "1.Rajkot(1) \t2.Delhi(2) \t3.Ahmedabad(3) " << endl << endl;
        cout << "\tEnter Source (From ) in number EX:1 for Rajkot " << endl;
        cin >> src;
        cout << "\tEnter destination(TO)" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1)) {
            cout << "\t \t \tThree Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Indigo\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.Air India\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.Vistara\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }  else if((src==1 && dest==3) || (src==3 && dest==1)){
            cout << "\t \t \tThree Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Indigo\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.Air India\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.Vistara\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        } else if((src==2 && dest==3) || (src==3 && dest==2)){
            cout << "\t \t \tThree Flights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Indigo\t08:00\t\t11:05\t\tRs.5400\t\tRefundable\n";
            cout << "2.Air India\t14:00\t\t17:05\t\tRs.2500\t\tRefundable\n";
            cout << "3.Vistara\t19:00\t\t22:05\t\tRs.2890\t\tRefundable\n";
        } else if(src==dest){
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        } else {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }
    }

    int  select_flight() {   //function declaration and definition for selecting flight
      cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice){
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "Indigo"<<endl;
                strcpy(f_d,"Indigo");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "Air India"<<endl;
                strcpy(f_d,"Air India");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "Vistara" << endl;
                strcpy(f_d,"Vistara");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

class i_booking//class for international booking
{
protected:
    int ai;
    char f_i[10],tojai[10],tojdi[10];//f_i to copying,tojdi is to journey Departure time,to journey Arrival time
    string doji;//date of journey
    int srci,desti,choicei;
public:
    void i_a(){
        g++;// to keep track for international ticket no
        ai=g;
    }

    int j_detaili(){// function declaration and definition for journey details
        cout << "Enter Date Of Journey(DD-MM-YYYY)."  << endl;;
        cin >> doji;
        cout << "1.Thailand   2.Dubai   3.Russia " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination" ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))
        {   cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t$25000\tRefundable\n";
            cout << "2.Cathay Pacific  14:00\t\t18:05\t\t$21500\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t$24000\\ttRefundable\n";
        }
        else if((srci==1 && desti==2) || (srci==2 && desti==1))
        {   cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t$25000\tRefundable\n";
            cout << "2.Cathay Pacific   14:00\t\t18:05\t\t$21500\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t$24000\t\tRefundable\n";
        }
        else if((srci==2 && desti==3) || (srci==3 && desti==2))
        {   cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara\t10:00\t\t14:05\t\t$17800\t\tRefundable\n";
            cout << "2.Cathay Pacific   14:00\t\t18:05\t\t$14900\tRefundable\n";
            cout << "3.Emirates\t18:00\t\t22:05\t\t$18700\t\tRefundable\n";
        } else if(srci==desti) {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        } else{
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
            }
    }

    int select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei) {
        case 1:
            cout << "\nFlight selected:" <<endl;
            cout << "Vistara" << endl;
            strcpy(f_i,"Vistara");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\nFlight selected:" << endl;
               cout << "Cathay Pacific" << endl;
               strcpy(f_i,"Cathay Pacific");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nFlight selected:" << endl;
            cout << "Emirates" << endl;
            strcpy(f_i,"Emirates");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};

class passenger: public d_booking,public i_booking//class passenger publicly inherited from class d_booking and i_booking
{
protected:
    char f_name[50],l_name[50],email[50];
    int age,gender;
    long int c;//for Contact no
public:
    void p_detail(int x) {
        if(x==1)
        { //if else for domestic and international booking selection
            j_detail();
          select_flight();
         } 
           else  {
              j_detaili();
             select_flighti();
          }
          //else
          //{
          //    cout<<"no there is no such non-international and non-domestic "<<endl;
         // }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }

    int gender_check(){//to check gender input
        cout << "\nGender:\nFor Male-press(1):\nFemale-press(2):\n";
        cin >> gender;
        if(gender>2){
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();// if it goes invalid it will re ask for gender_check
        }
    }
       void more_details()//to take more details of the passenger
       {cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no:";
        cin >> c;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c << endl;
    }

   inline  int geta(){//function to get Ticket no for domestic booking so that we would know the number of Ticket and passenger Ticket .
            return a;   // also the use of inline function .
        }

   inline int getai(){//function to get Ticket no for international booking
         return ai;
     }

     void disp() //Flight details  for domestic Flight only
     {   cout<<"Ticket no:" << a << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Passenger Name:" << f_name << " " << l_name << endl;
         cout<<"Date Of Journey:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void dispi()// Flight details for international Flight only
     {   cout<<"Ticket no:" << ai << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Passenger Name:" << f_name << " " << l_name << endl;
         cout<<"Date Of Journey:" << doji << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
};

class payment
{
protected:
    long
    int choice1,bank,card,cvv,user_id;
    string date;
    char password[50];
public:
    void pay_detail()//function for payment method
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n1.Debit Card \n2.Credit Card \n3.Net Banking";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nEnter card no:";
            cin >> card;
            cout << "\nEnter expiry date(DD-MM-YYYY):";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2:
            cout << "\nEnter card no:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3:
            cout << "Banks Available:  1.Nabil Bank  2.Standard Chartered Bank 3.Swiss Bank ";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default:
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }
};

void createfile(passenger p)//Create txt file for  domestic passenger
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}

void createfilei(passenger p)//opening a file for international booking
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}

void cancelticket(int x)//function call to cancel ticket
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);//for reading file
   ofstream fin("domestic1.txt",ios::binary|ios::app);//for writing to a new file
   fout.read((char *)&p,sizeof(p));
   while(fout) {
     if(p.geta()!=x)//checking ticket no
      fin.write((char *)&p,sizeof(p));
      else {
         p.disp();
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: Rs 1000\n";
         f++;}
     fout.read((char *)&p,sizeof(p));//reading another record from file
   }
   if(f==0)
    cout<<"Ticket not found\n";
   fout.close();
   fin.close();
   remove("domestic.txt");//deleting old file
   rename("domestic1.txt","domestic.txt");//renaming new file and copying to another
}

void cancelticketi(int y)//function call to cancel ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);
   ofstream fin("international1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout) {
     if(p.getai()!=y)//checking ticket
      fin.write((char *)&p,sizeof(p));
      else {
         p.dispi();//display details
         cout<<"Your Above ticket is being deleted:\n"<<"Amount refunded: Rs 1000\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"\nTicket not found\n";
   fout.close();
   fin.close();
   remove("international.txt");
   rename("international1.txt","international.txt");
}



void checkticket(int x)//function to check  ticket
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.geta()==x)//checking ticket
     {p.disp();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the same file
   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;
}


void checkticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout) {
     if(p.getai()==x)
     {  p.dispi();
        cout<<"\nYour ticket"<<endl;
        f++;
        break;
     }
     fout.read((char *)&p,sizeof(p));
   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;
}







int main()
{   class d_booking d1;
    class i_booking i1;
    class passenger pass;
    class payment pay;
    int ch,ch1,n;
    char input;

    do
    {
    cout << "\n\n \t\tWelcome To Hawai(Flight) ticket Reservation System" << endl << endl;
    cout <<"\t   -----------------------------------------------------------\n";
    cout << "\t\tOur program offers Flight for more than 2 countries\n" << endl;
    cout << "\t\t             Grab 50% off on first Flight\n" << endl;
    cout << "\t\t\t1.Book Flight \n\t\t\t2.Cancel Fight \n\t\t\t3.Check Ticket \n\t\t\t4.Exit" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch) {
              case 1:
              cout << "\n\n1.Domestic Fights \n2.International Flights" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1) {
                   case 1:
                        pass.d_a();//increament flight
                        pass.p_detail(1);
                        pass.gender_check();
                        pass.more_details();
                        pay.pay_detail();
                        pass.disp();
                        createfile(pass);
                        break;
                   case 2:
                           
                           pass.i_a();
                           pass.p_detail(2);
                           pass.gender_check();
                           pass.more_details();
                           pay.pay_detail();
                           pass.dispi();
                           createfilei(pass);
                           break;
                   default:
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:
              cout << "1.Domestic Fights \n2.International Flights" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1) {
                   cout << "Please enter your ticket no.:" << endl;
                   cin>>n;
                   cancelticket(n);//function call for domestic booking cancellation
                } else if(ch1==2) {
                    cout << "Please enter your ticket no.:" << endl;
                  cin>>n;
                  cancelticketi(n);//function call for international cancellation
               }else{
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3:
                  cout << "1.Domestic Fights \n2.International Flights" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  if(ch1==1){
                     cout << "Please enter your ticket no.:" << endl;
                  cin>>n;
                  checkticket(n);
                  } else if(ch1==2) { //function call to display domestic ticket details
                      cout << "Please enter your ticket no.:" << endl;
                     cin>>n;
                     checkticketi(n);//function call to display domestic ticket details
                  }else {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
                    return 0;
                 default:
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nGo to the main page:(press Y or y)" << endl;
    cin >> input;
  }while(input=='Y'|| input=='y');
  return 0;
}
