#include "head.h"
extern void print_string(string row);
extern int move(int point, vector<action>& rules, int i);
extern string do_s(vector<action>& rules, string main_row, int i, int point);
void RUN(vector<action>& rules, int end, string main_row, int point)
{
    int i = 0;
    string current_state = rules[0].state;
    while (current_state != "##")
    {
	if (current_state == rules[i].state && main_row[point] == rules[i].exp_symbol[0)
	{
        	main_row = do_s(rules, main_row, i, point);
        	print_string(main_row);
        	point = move(point, rules, i);
		i = 0;
	}else
	    {
		i++;
	    }
    }
}
