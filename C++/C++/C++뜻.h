// C언어 ( 출력 : printf(), 입력 : scanf_s())
// C++언어 ( std::cout :  출력, std::cin : 입력 )

// 스트림이란?
// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름	

#pragma region 연산자
#pragma region 삽입 연산자
// << : 삽입연산자
// 자신이 참조한 값을 반환하는 연산자
#pragma endregion

#pragma region 주출 연산자
// >> : 주출 연산자
//버퍼에 저장한 다음 NULL 문자까지만 버퍼 안의 내용을 전달하는 연산자
#pragma endregion

#pragma region 범위 지정 연산자
//범위 지정 연산자
//여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자

//(범위 연산자) :: 
#pragma region 범위 지정 연산자 주의사항
//범위 지정 연산자는 전역변수와 같은 이름의 지역 변수가 선언되었을때
//가장 가까운 범위에 선언된 변수의 이름을 사용하는
//범위 규칙이 존재하므로 전역변수가 호출 되지 않음
#pragma endregion

#pragma endregion

#pragma endregion

#pragma region 주소
#pragma region 메모리 주소 할당
//          ptr                  동적할당한 메모리
// [ 4 byte 메모리 시작 주소 ] ------> [][][][] 
//int* ptr = new int;

// new 객체() 생성자 호출
#pragma endregion
#pragma endregion

#pragma region 참조자
//참조자
//어떤 변수의 메모리 공간에 또다른 이름
#pragma region 참조카운트
//참조하고 있는 스마트 포인터의 수를 참조 카운트하고 함
//참조 카운트(Reference Counting)
//해당 메모리가 참조하는 포인터가 몇개인지 나타내는 값
#pragma endregion

#pragma endregion

#pragma region 동적 할당
#pragma region C VS C++
// C언어
// malloc()
//free()

// C++
// new 메모리 할당
// delete 메모리 해제

// malloc() 생성자가 호출되지 않음

#pragma endregion

#pragma endregion

#pragma region namespace
#pragma region 이름공간이란?
//이름공간
// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역
#pragma endregion

#pragma region 이름공간 속성
// 속성
// -> 변수 

// 기능
// -> 함수
#pragma endregion
#pragma endregion

#pragma region auto
#pragma region auto란?
//auto (자료형 추론)
// 선언된 변수의 초기화 식을 사용하여 
//해당 형식을 추론하도록 컴파일러에게 지시하는 기능
#pragma endregion

#pragma region auto 사용법
//                       = new PlayFab( );  앞과 일치할때만
//auto는 매개변수로 사용할 수 없음
// auto를 사용할 때는 무조건 값을 넣어 주어야 함			
#pragma endregion
#pragma endregion

#pragma region class
#pragma region class란?
//클래스
// 사용자 정의 데이터 유형으로 속성과
//함수가 포함되엉 있으며, 클래스를 통해
//객체를 생성하여 접근하고 사용할 수 있는 집합체
#pragma endregion

#pragma region 접근 지정자
// 접근 지정자란?
// 클래스 내부의 포함되어 있는 속성에 접근 범위를
// 제한하는 지정자
#pragma endregion

#pragma region 공개
// 공개(public)
//클래스 외부에서 어디서든지 접근할 수 있는 접근 제한자
#pragma endregion

#pragma region 비공개
// 비공개(private)
//클래스 내부에서만 속성을 접근할 수 있으며, 
//클래스에 접근 지정자를 설정하지 않으면 비공개로 접근제한자가 설정됨
#pragma endregion

#pragma region 보호
// 보호(protected)
//클래스 내부와 자기가 상속하고 있는 클래스까지만
//클래스의 속성을 접근할 수 있는 접근 제한자
#pragma endregion

#pragma endregion

#pragma region Program
//SDK:임포트 설치
//API 함수(  )
//클래스 반환 PhotonManager( ), PlayFab( ) 30~40개
#pragma endregion

#pragma region for문
#pragma region for VS foreach
//for (초기값; 조건식; 증감식)\

//범위 기반 for문 (foreach)
#pragma endregion
#pragma endregion

#pragma region 생성자 & 소멸자
#pragma region 생성자
//생성자
// 클래스의 인스턴스가 생성되는 시점에서 
// 자동으로 호출되는 특수한 멤버 함수
#pragma endregion

#pragma region 생성자 주의
// 생성자의 경우 객체가 생성될 때 단 한번만 호출되며,
// 생성자는 반환형이 존재하지 않음

// 그러므로, 생성자가 호출되지 전에는 객체에 대한
// 메모리는 할당되지 않음

//public:  자동 호출로 무조건 써 줘야함
// default : 기본 생성자로 명시적으로 지정하는 키워드
#pragma endregion

#pragma region 복사 생성자
//복사 생성자
//같은 객체를 복사하여 생성시킬 때 호출되는 생성자
#pragma endregion

#pragma region 소멸자
// 소멸자 
// 객체가 소멸될 때 자동으로 실행되는 클래스의 멤보 함수
#pragma endregion

#pragma region 소멸자 주의
// 소멸자는 객체가 메모리에서 해제될 때
// 단 한번만 호출되며, 소멸자에게는 매개변수를
// 생성하며 사용 불가
#pragma endregion

#pragma region 가상 소멸자
//가상 소멸자
//객체가 소멸될때 현재 참조하고 있는 객체와
//상관 없이 모두 호출되는 소멸자
#pragma endregion

#pragma region 차례 소멸
// 상속된 객체가 해제될 때 하위 클래스의 소멸자가
// 먼저 실행되고 상위 클래스의 소멸자가 실행되어야 
// 하기 때문에 실행 시간에 메모리에 할당된
// 객체를 확인하고 차례대로 소멸시켜야 합니다.
#pragma endregion

#pragma endregion

#pragma region 매개변수
#pragma region 매개변수
//기본 매개변수
// 매개변수에 기본값을 선언하여 함수가 호출될 때
// 인수 없이 호출 될 수 있도록 설정하는 매개변수
#pragma endregion

#pragma region 매개변수 주의
//기본 매개변수를 선언할 떄는 오른쪽부터 정의함
#pragma endregion
#pragma endregion

#pragma region 복사
#pragma region 깊은 복사
//깊은 복사
// 객체를 복사할 떄 참조 값이 아닌 인스턴스 자체를
// 새로 복사하여 서로 다른 메모리를 사용하는 복사
#pragma endregion

#pragma region 얕은 복사
//얕은 복사
// 객체를 복사할 떄 주소값을 복사하여,
// 같은 메모리를 가리키는 복사
#pragma endregion

#pragma region 얕은 복사 주의
	//얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
	//참조하고 있기 떄문에 하나의 객체로 값을 변경하게 되면
	//서로 참조된 객체도 함께 영향을 받음
#pragma endregion
#pragma endregion

#pragma region 상속
#pragma region 상속
//상속
//상위 클래스의 속성을 하위 클래스가 
//사용할 수 있도록 설정해주는 기능
#pragma endregion

#pragma region 다중 상속
	//다중 상속
	//하나의 클래스가 여러개의 상위 클래스를 상속 받는 것
	//다중 상속은 여러 개의 상위 클래스에 중복되는
	//속성이 존재 할 수 있기 때문에 범위 지정 연산자를
	//통해서 상위 클래스의 이름을 선언하고 속성을 사용
#pragma endregion

#pragma region private 상속
//private로 상속 시 접근 할 수 있는 멤버 변수가 존재하지 않습니다.
#pragma endregion

#pragma region protected 상속
//protected로 상속 시 접근 할 수 있는 멤버 변수가 존재하지 않습니다.
#pragma endregion
#pragma endregion

#pragma region 포인터
#pragma region this 포인터
//this 포인터
//자기 자신을 가르키는 포인터

#pragma region this 포인터 주의
//this포인터는 호출된 객체를 가르키는 상수 포인터
//상수포인토 자료형이므로 포인터 자체가 다른것을
//가리키도록 할 수 없음
#pragma endregion
#pragma endregion

#pragma endregion

#pragma region 가상함수
#pragma region 순수 가상 함수
//순수 가상 함수
//하위 클래스에서 재정의 할 것으로 기대하는 멤버 함수
#pragma endregion
#pragma region 순수 가상함수(추상클래스)
//순수 가상함수
//추상 클래스
//하나의 순수	 가상 함수를 가지는 클래스는 추상 클래스로 정의
//추상 클래스의 경우 포인터 타입으로 사용가능
#pragma region 가상함수 주의
//가상함수는 1개 이상의 가상함수를 포하는 클래스가 있을때
//객체 주소에 가상함수 테이블을 추가
#pragma endregion
#pragma endregion
#pragma region 가상 소멸자
//가상 소멸자
//객체가 소멸될때 현재 참조하고 있는 객체와
//상관 없이 모두 호출되는 소멸자
#pragma endregion
#pragma endregion

#pragma region 다항성
//다항성
//여러개의 서로 다은 객체가 동일한 기능을
//서로 다른 방법으로 처리 할 수 있는 기능
#pragma endregion

#pragma region 오버로딩
#pragma region 함수의 오버로딩
//함수의 오버로딩
// 같은 이름의 함수를 매개변수의 자료형과 매개변수의
// 수로 구분하여 여러 개를 선언할 수 있는 기능
#pragma region 함수의 오버로딩 주의
//함수의 오버로딩의 경우 함수의 매개변수에 전달하는 인수의 형태로 보고
//호출하므로, 반환형으로 함수의 오버로딩 생성X
#pragma endregion
#pragma endregion

#pragma endregion

#pragma region Casting
#pragma region UP-Casting
//UP - Casting
//하위 클래스의 정보를 담을 수 있는 객체에 상위클래스의
//자료형을 부여해서, 상위클래스처럼 사용하는 것
#pragma endregion
#pragma endregion

#pragma region 포인터
#pragma region 스마트 포인터
#pragma region 스마트 포인터
//스마트 포인터
// 포인터처럼 동작하는 클래스 템플릿으로
// 사용이 끝난 메모리를 자동으로 해제하는 포인터입니다.
#pragma region unique_ptr 포인터
//unique_ptr 포인터
// 하나의 메모리 공간만 가리킬 수 있는 포인터입니다.
#pragma region 초기화
//ex 2)
//std::unique_ptr<int> uniquePtr = std::make_unique<int>(new int(5));
#pragma endregion
#pragma endregion

#pragma region shared_ptr 포인터
//shared_ptr 포인터
//어떤 하나의 객체를 참조하는 스마트 포인터의 갯수를 참조하는 포인터
#pragma region 초기화
//첫 번째 초기화 방법
//shared_ptr<int> shared_ptr(new int(999));

//두 번째 초기화 방법
//shared_ptr<Item> shared_ptr1 = std::make_shared<Item>();
//shared_ptr<Item> shared_ptr1(new Item);
#pragma endregion
#pragma endregion

#pragma region weak_ptr 포인터
//weak_ptr 포인터
//하나이상의 shared_ptr 인스턴스가 소유하는 객체에
//대한 접근을 제공하지만, 참조 카운트에 포함되지 않는
//스마트 포인터
#pragma endregion

#pragma region 참조카운트
//참조하고 있는 스마트 포인터의 수를 참조 카운트하고 함
//참조 카운트(Reference Counting)
//해당 메모리가 참조하는 포인터가 몇개인지 나타내는 값
#pragma endregion
#pragma endregion
#pragma endregion
#pragma endregion

#pragma region 템플릿
#pragma region 템플릿
//템플릿
// 함수나 크래스를 다시 작성하지 않아도
// 수 많은 자료형에서 동작할 수 있도록 해주는 기능입니다.
#pragma endregion

#pragma region 템플릿의 특수화 
//템플릿의 특수화
// 템플릿 함수를 사용하지만, 특정 매개변수에 대해서는
// 별도 처리를 하기 위해 사용하는 기능입니다.
#pragma endregion
#pragma endregion

#pragma region Final
//final
//클래스나 가상 함수를 하위 클래스에서 제정의할 수  없도록 설정하는 기능
#pragma endregion

#pragma region Friend
//Friend
//수평적인 관계의 클래스간의 멤버 변수를
//공유할 수 있도록 설정하는 기능
#pragma endregion

#pragma region 컨테이너
#pragma region 컨테이너 어댑터
//컨테이너 어댑터
//기존 컨테이너의 인터페이스를 제한하여 만든 기능이
//제한되거나 변형된 컨테이너
#pragma endregion

#pragma region 컨테이너 어댑터 주의
//컨테이너에 데이터가 없을 때 pop()을 시도하면 런타임 에러
#pragma endregion

#pragma region 연관 컨테이너
//연관 컨테이너
//Key와 Value처럼 관련있는 데이터를 하나의 쌍으로 저장하는 컨테이너
#pragma endregion

#pragma region Clear
//clear() : 모든 원소를 삭제하는 함수
//set.clear();
#pragma endregion

#pragma region Set
//set은 자동으로 정렬이 일어납니다.
#pragma endregion

#pragma region empty
//empty() : 컨테이너가 비었는지 확인하는 함수
//비었다면 (true) 1을 반환
//비어있지 않으면 (false) 0을 반환
#pragma endregion

#pragma endregion

#pragma region STL 표준 템플릿 라이브러리
//STL 표준 템플릿 라이브러리
// C++에서 사용할 수 있는 컨테이너 class와 알고리즘을
// 일반화 시켜서 사용할 수 있는 자료구조를 포함하는 라이브러리입니다.
#pragma endregion