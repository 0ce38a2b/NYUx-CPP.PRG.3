#include<iostream>
#include<string>
using namespace std;

class ShowTicket{
    protected:
    string row;
    string seat;
    bool sold_status;

    public:
    ShowTicket(){}
    ShowTicket(string row_num, string seat_num)
    {
        row = row_num;
        seat = seat_num;
        sold_status = false;
    }
    bool is_sold(){ return sold_status;}
    void sell_seat(){sold_status = true; }
    bool get_sold_status(){return sold_status;}
    string get_row(){return row;}
    string get_seat(){return seat;}



    virtual string print_ticket() const
    {
    if(sold_status == true)
        return row+" "+ seat+" "+"sold";
    else
       return row+" "+ seat+" "+"available";
    }
};
