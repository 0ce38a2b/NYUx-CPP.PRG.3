#include"showticket.h"
#include<iostream>
#include<string>
using namespace std;

class SportTicket: public ShowTicket
{
   protected:
    bool beer;
    bool sold_status;

    public:
    SportTicket(){}
    SportTicket(string row, string seat):ShowTicket(row, seat)
    {
       this->sold_status = false;
       this->beer = false;
    }

    bool beer_sold();
    void sell_beer();
    string print_ticket() const;

};

//check if the beer has been sold
bool SportTicket::beer_sold()
{
    return this->beer;
}

void SportTicket::sell_beer()
{
   this->beer = true;
}

string SportTicket::print_ticket() const
{
  if(this->sold_status == true && this->beer == true)
        return row+" "+ seat+" "+"sold" + " beer";

 else if(this->sold_status == true && this->beer == false)
       return row+" "+ seat+" "+"sold" + " nobeer";

 else if(this->sold_status == false && this->beer == false)
       return row+" "+ seat+" "+"available" + " nobeer";

 else if(this->sold_status == false && this->beer == true)
       return row+" "+ seat+" "+"available" + " beer";

}

