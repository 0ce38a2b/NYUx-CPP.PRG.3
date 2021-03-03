#include "sportticket.h"
#include<iostream>
#include<string>
using namespace std;


// c++ polymorphism : base class 要用 virtual print_ticket(), 不然sportticket 调用的print_ticket() 还是base class中的
class TicketSales{
   public:

     TicketSales(){};

     string print_ticket(ShowTicket *myticket)
     {
        return myticket->print_ticket();
     }

};

