# CPP_module 작업 기록

> 이 파일은 Claude 세션 간 컨텍스트 유지용입니다.
> **새 세션 시작 시 이 파일부터 읽으면 코드 전체를 다시 읽지 않아도 됩니다.**

## 노션 페이지

- 상위: [CPP Modules 복습 정리 (42 Seoul)](https://app.notion.com/p/3c0b5f428bfd81c19fc2e2b3d850c286)
  - `3c0b5f42-8bfd-81c1-9fc2-e2b3d850c286`

| 하위 페이지 | ID |
| --- | --- |
| cpp00 — 클래스 기초, static 멤버, 입출력 스트림 | `3c0b5f42-8bfd-81b5-9ed1-e7656b842236` |
| cpp01 — 메모리 할당, 포인터 vs 참조, 멤버 함수 포인터 | `3c0b5f42-8bfd-8156-80d0-e0e5b77b70a7` |
| cpp02 — OCF, 연산자 오버로딩, 고정소수점 | `3c0b5f42-8bfd-81ee-b237-d606533a6190` |
| cpp03 — 상속, 생성/소멸 순서, 다이아몬드 상속 | `3c0b5f42-8bfd-81d8-b2f7-cb89f3f0aad7` |
| cpp04 — 다형성, 추상 클래스, 깊은 복사 | `3c0b5f42-8bfd-814d-8b0e-f1c8369adb5b` |
| cpp05 — 예외 처리, 중첩 클래스, const 멤버 | `3c0b5f42-8bfd-8126-8005-e2fa425d1d3f` |
| cpp06 — 형변환 4종 세트 | `3c0b5f42-8bfd-8115-9d77-eada2f16dfe8` |
| cpp07 — [예습] 템플릿 | `3c0b5f42-8bfd-815c-9712-c7a68c04174f` |
| cpp08 — [예습] 컨테이너/이터레이터/알고리즘 | `3c0b5f42-8bfd-8131-8c2d-fc86896e3084` |
| cpp09 — [예습] STL 실전 | `3c0b5f42-8bfd-81ee-a81e-d68383a69157` |

## 리포 현황

- 완료: cpp00 ~ cpp06 (총 ~4,900줄)
- 다음 과제: **cpp07 (템플릿)**
- 빌드 기준: `c++ -Wall -Wextra -Werror -std=c++98`

```
cpp00  ex00 MegaPhone / ex01 PhoneBook,Contact / ex02 Account
cpp01  ex00 Zombie / ex01 zombieHorde / ex02 포인터vs참조 / ex03 HumanA,HumanB,Weapon
       ex04 sed 흉내(파일스트림) / ex05 Harl / ex06 Harl 필터(멤버함수포인터)
cpp02  ex00~ex02 Fixed (고정소수점, 연산자 오버로딩)
cpp03  ex00 ClapTrap / ex01 ScavTrap / ex02 FragTrap / ex03 DiamondTrap(가상상속)
cpp04  ex00 Animal/WrongAnimal / ex01 Brain(깊은복사) / ex02 추상 Animal
cpp05  ex00 Bureaucrat / ex01 Form / ex02 AForm+3종 / ex03 Intern
cpp06  ex00 ScalarConvert / ex01 Serializer / ex02 dynamic_cast identify
```

## 코드 리뷰 중 발견한 이슈 (수정 안 함, 참고용)

| 위치 | 내용 |
| --- | --- |
| `cpp04/ex02/Cat.cpp`, `Dog.cpp` | 이름 받는 생성자(`Cat(const std::string&)` / `Dog(const std::string&)`)에서 `_Brain` 미초기화 → 소멸자의 `delete _Brain`이 쓰레기값 해제. **둘 다 확인됨** |
| `cpp01/ex00/Zombie.hpp` | 헤더 가드 오타: `#ifndef ZOMBIE_HPP` / `#define ZOBIE_HPP` (중복 include 방지 실패) |
| `cpp01/ex04/main.cpp` | `int s2_len = s1.length();` — s2여야 함 (s1/s2 길이 다르면 버그) |
| `cpp06/ex02/main.cpp` | `generate()`가 반환한 포인터를 `delete` 안 함 (누수) |
| `cpp05/ex02,03` `AForm.cpp` | `operator<<`가 내부에서 `std::endl`을 출력 → 호출부에서 개행 중복 가능 |

## 작업 로그

### 2026-08-18
- CPP_module 전체 소스 리딩 (cpp00~cpp06)
- 노션에 상위 1 + 하위 10 페이지 생성 (cpp00~09)
- 정리 방침: 핵심 개념 + 실제 과제 코드에서 뽑은 스니펫 + "자주 틀리는 포인트"
- 이 PROGRESS.md 생성

## 다음에 할 수 있는 것

- [ ] 위 이슈 표의 버그 실제 수정
- [ ] cpp07 ex00~ex02 실제 구현 시작
- [ ] 모듈별 셀프 퀴즈 페이지 추가

## 검증 완료 (2026-08-18)

- 노션 cpp07/08/09 예습 페이지의 모든 코드 스니펫(Array 템플릿, iter, easyfind,
  MutantStack, map::lower_bound, clock 측정)을
  `c++ -Wall -Wextra -Werror -std=c++98 -pedantic` 로 실제 컴파일 및 실행 확인 — 통과
- 위 이슈 표 5건 전부 소스에서 직접 확인
- Makefile 28개 존재 (ex 디렉토리마다 있음)
