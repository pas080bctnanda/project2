#include<iostream>
#include<fstream>
#include<string.h>
#include<algorithm>
using namespace std ;


class temp 
{
    private:
    string id , name , author ;
    fstream file ;
    public :
    void addbook();
    void showall();
    void extractbook();

};


int main()
{   char choice ;
    cout<< " --------------------------"<<endl ;
    cout<< " 1.show all books "<< endl ;
    cout<< " 2.extract books "<< endl ;
    cout << "3.add books "<< endl ;
    cout<< " 4.exit"<< endl ;
    cout<<" enter your choice "<< endl;
    cin >> choice ;


    switch(choice){
        case '1 ':
        break ;

         case '2 ':
        break ;

         case '3 ':
        break ;

         case '4 ':
        break ;
        
        default:
        cout<< " invalid choice "<< endl ;
    }
    return 0 ;
}

void temp::addbook()
{
    cout<< " enter boook id of the "<< endl ;
    getline(cin , id );
    cout << " enter the name of the book "<< endl ;
    getline(cin , name );
    cout<< " enter the authors name "<< endl ;
    getline(cin , author );

    file.open("bookData.txt", ios::out | ios :: app);
    file<<id << "*" << name << "*"<<author << endl ;
    file.close();

}

void temp :: showall()
{
    file.open(" bookData,txt", ios::in);
    getline(file,id,"*");
    getline(file,name ,"*");
    getline(file,author,"*");
        cout<<"\n\n";
        cout<<"Book id \t\t Book name \t\t Authors name "<<endl ;    
    while(!file.eof())
    {
        cout<< id <<" \t\t\t"<< name << "\t\t\t"<< author<<endl ;

    }
    file.close();
}

void temp :: extractbook()
{
    showall();
    cout<< " enter the id of the book you want to search  "<< endl ;
    getline(cin, search);
    file.open("bookData.txt", ios::in);
    getline(file , id , "*");
    getline(file , name , "*");
    getline(file , author , "*");
     cout<<"\n\n";
        cout<<"Book id \t\t Book name \t\t Authors name "<<endl ;   
     while(!file.eof())
     {
        if(search-- id )
        {
         cout<< id <<" \t\t\t"<< name << "\t\t\t"<< author<<endl ;
         cout<<" Book extracted sucefully"<< endl ;
        } 
    getline(file , id , "*");
    getline(file , name , "*");
    getline(file , author , "*");
     }

}