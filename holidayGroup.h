#pragma once
#include "holiday.h"
#include <array>

namespace JungHyewon2693292
{
	const int max{10};
    class holidayGroup
    {
       
     
        std::string groupName;
        std::array<holiday,max> holidayList;
		int n;
	public:
		holidayGroup(std::string&n="no name yet"):groupName{n}, n{0}{}

        void addHoliday(const holiday& h) 
        {
            if (n>=max)
		{
			std::exit(1);
        
		}
		holidayList[n]=h; n+=1;
        }

        void print() const
	    {
     
		std::cout << groupName<<std::endl;
		for(int i=0; i<n; ++i)
			std::cout << holidayList[i];
		std::cout <<std::endl;
		
	
	    }
		const std::string& getGroupName() const{return groupName;}
		void setGroupName(const std::string&n){groupName=n;}
    };
};
