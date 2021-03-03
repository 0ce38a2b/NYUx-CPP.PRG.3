
#include<iostream>
#include<string>
using namespace std;

class ShowTickets{
    protected:
    string row_num_;
    string seat_num_;
    bool sell_seat;
    int ticket_num;  // 追踪创建对象的个数 --> static

    public:
    // constructor
    ShowTickets()
    {
      sell_seat = false;
      ticket_num += 1;
    }

    // constructor
    ShowTickets(string row_num, string seat_num)
    {
        row_num_ = row_num;
        seat_num_ = seat_num;
        sell_seat = false;
        ticket_num += 1;
    }
    // check whether the ticket is sold
    bool is_sold(string row, string seat)
    {
      if(row == row_num_ && seat == seat_num_)
        return true;
      else
        return false;
    }

  // sell the ticket
    void sell_seat(string row, string seat)
    {
      this->row_num_ = row;
      this->seat_num_ = seat;
    }

    string print_ticket(string row, string seat)
    {
    bool check_status = is_sold(row,seat);
    if(check_status)
        return row+" "+ seat+" "+"sold";
    else
       return row+" "+ seat+" "+"available";
    }
};