#include <dayOfYear.h>
#include <holiday.h>
#include <iostream>

namespace JungHyewon2693292
{
    class holidayGroup
    {
        const max=10;
        int n;
        std::string groupName;
        std::array holidayList;

        void addHoliday(const holiday& ) 
        {
            if (n>=max)
		{
			std::exit(1);
            n+=1
		}
        }

        void print() 
	    {
     
		std::cout << groupName;
        std::cout << holidayList;
		
	
	    }
    };
};