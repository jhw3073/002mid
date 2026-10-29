#include <dayOfYear.h>
#include <holidayGroup.h>
#include <iostream>

const int daysInMonth[13]{0,31,28,31,30,31,30,31,31,30,31,30,31};  

void main(){

    addHoliday();
    addHoliday();
    addHoliday();
};

// 다음은 실습시간에 다룬 dayOfYear, holiday 클래스입니다. 

// 1. dayOfYear.h파일에 dayOfYear class를 인라인으로 구현하려고 합니다. 다음을 확인하여 위 코드를 변경하여 dayOfYear.h파일을 완성해보세요. 
// 1-1. 헤더가드, 전처리지시자를 넣으세요.
// 1-2. 본인이름학번의 네임스페이스안에 dayOfYear class를 정의하세요.
// 1-3. updateDay함수는 한달안의 day만 고려하고 있습니다. 만약 100일 등 한달보다 큰 day일 경우도 이 함수를 사용할 수 있게 수정해보세요. 
// 1-4. 전위증가연산자, 후위증가연산자를 this를 이용해서 구현하세요. 리턴형식도 참조가 필요하면 참조로 리턴하게 변경하세요. 
// 1-5. 복합할당연산자 +=를 구현하세요. 매개변수는 int, day에 매개변수를 더해줍니다. this를 이용하세요.  
// 1-6. 프렌드함수로 구현되어 있는 이항연산자 +는 날짜계산이 아니라 있는 그대로를 더했는데 이를 삭제하고 멤버함수로 이항연산자 +를 구현해봅시다. 매개변수는 int, 1-5에서 구현한 복합할당연산자+=와 this를 이용하세요. 

// 2. holiday.h파일에 holiday class를 인라인으로 구현하려고 합니다. 다음을 확인하여 holiday.h파일을 완성해보세요.  
// 2-1. 헤더가드, 전처리지시자를 넣으세요.
// 2-2. 본인이름학번의 네임스페이스안에 holiday class를 정의하세요.

// 3. holidayGroup.h파일에 holidayGroup class를 인라인으로 구현하려고 합니다. 다음을 확인하여 holidayGroup.h파일을 완성해보세요.  
// 3-1. 헤더가드, 전처리지시자를 넣으세요.
// 3-2. 본인이름학번의 네임스페이스안에 holidayGroup class를 정의하세요.
// 3-3. 상수 max를 10으로 선언합니다. 
// 3-4. 멤버변수는 3개: std::string형의 groupName, holiday형의 max개의 std::array형 holidayList, int형의 n
// 3-5. 생성자: 매개변수 1개, groupName 초기화, n은 0으로 초기화
// 3-6. addHoliday멤버함수(매개변수는 const holiday&형): n이 max보다 크거나 같으면 프로그램종료, holidayList의 n 인덱스변수에 매개변수 할당, n값은 +1
// 3-7. print멤버함수: 표준스트림으로 groupName과 holidayList를 출력, 이때 holidayList는 holiday형 n개 출력해야 합니다.
// 3-8. getGroupName, setGroupName 함수를 참조를 이용하여 정의하세요.  
// 3-9. const 멤버함수가 필요한 경우 const 멤버함수로 정의하세요. 

// 4. main.cpp파일에 테스트 코드를 작성합니다. 다음을 확인하여 테스트 코드를 완성해보세요. 
// 4-1. 전처리지시자를 넣으세요. 
// 4-2. main을 작성합니다. 
// 4-2-1. holiday형 객체3개를 선언하고 원하는 값으로 초기화합니다. 
// 4-2-2. holidayGroup형을 가리키는 포인터변수를 선언하고 원하는 값으로 초기화하여 동적으로 할당합니다.  
// 4-2-3. holidayGroup형을 가리키는 포인터변수에서 addHoliday멤버함수를 호출하는데 인자를 4-2-1에서 선언한 객체를 넣습니다. 즉, addholiday멤버함수를 3번 호출합니다. 
// 4-2-4. holidayGroup형을 가리키는 포인터변수에서 print멤버함수를 호출합니다. 
// 4-2-5. holidayGroup형을 가리키는 포인터변수에서 동적으로 할당한 메모리를 해제합니다. 
