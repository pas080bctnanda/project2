#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<unistd.h>

using namespace std ;

class login
{
private :
string userid ;
string password ;
public :
login():userid(""),password(""){}
login(string id,string pass):userid(id),password(pass){}

void setuserid(string i )
{
     userid = i ;
}

void setpassword(string p )
{
     password = p  ;
}
string getuserid()
{
    return  userid ;
}

string getpassword()
{
    return password ;
}
};
void registration(login log)
 {
    login  log;
    system("cls ");
    string id ,pw ;
    cout<<"Enter your id :\n ";
    cin >> id ;
    log.setuserid(id);
   
    start :
    cout<< " enter a strong password "<< endl ;
    cin >> pw ;
    if(pw.length() >= 8)
    {

    log.setpassword(pw);
    }
    else
    {
        cout<< " the password is to0 short ";
        goto start ;
    }

    ofstream outfile("D:/login.txt", ios::app);
    if(!outfile)
    {
        cout<< " file cannot open "<< endl ;
    }
    else
    {
      outfile<< log.getuserid()<< ":"<< log.getpassword()<< endl<<endl ;
      cout << " user registred sucessfully "<< endl ;
    }
    outfile.close();
    
    sleep(3000);
    
    }

void login()
{   system("cls ");
    string id , pw ;
    cout<< " enter the login id "<< endl ;
    cin >> id ;
    cout << " enter the password "<< endl ;
    cin >> pw ;
    ifstream infile("D:/login.txt");
    if(!infile )
    {
        cout<< " error opening the file "<< endl ;

    }
    else{
        string  line ;
        bool found = false ;
        while(getline(infile , line ))
        {
            stringstream ss ;
            ss << line ;
            string id1 , pw1 ;
            char delimiter ;
            ss >> id1 >> delimiter >> pw1 ;


            if(id == id1 && pw == pw1)
            {
                found = true ;
                cout<< "please wait "<< endl ;
                for(int j = 0; j<=3 ; j++)
                {
                    cout<<".";
                    sleep(800);
                }
                system("cls ");
                cout << " welcome to this page "<< endl ;

            }
            if(!found)
            {
                cout << " incorrect id or password "<< endl ;
            }
        }
    }
    
    infile.cose();
    sleep(5000);


    int val ;

}


int main()
{  
    login log ;
    bool exit = false ;
   while(!exit)
   
   {
     system("cls");
     
     int var ;
     cout << " welcome to registration forma and login form "<< endl ;
     cout << "************************************************"<< endl ;
     cout << "lear** 1. registration form "<< endl ;
     cout << "**2. login "<< endl ;
     cout << "** 3. exit "<< endl ;
     cout << "** enter choice "<< endl ;
     cin >> var ;
     if(var == 1 )
     {
      registration(log);
     }
     else if(var == 2 )
     {
      login();
     }
     else if(var == 3 )
     {   system("cls ");
        exit = true ;
        cout<<" good luck "<< endl ;
        sleep(3000);
     }

     sleep(3000);

    return 0;
}}