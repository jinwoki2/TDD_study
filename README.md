# TDD Study in C

**학습 상태:** $\color{royalblue}{\text{진행 중 (Step 1: 환경 설정)}}$ 🔵

## 도서 정보
- **도서명**: 임베디드 C를 위한 TDD (Test-Driven Development for Embedded C)
- **저자**: 제임스 W. 그레닝 (James W Greening)
- **역자**: 신제용, 한주영
- **출판사**: (주)도서출판 인사이트(insight)

---

### 권장 선수 지식
- OOP in C

### 학습 내용
- Test Harness (Framework) 활용 방법 - (Unity, CppUTest)
- TDD in C
- TDD in Embedded C
- OOP in C
- SOLID in C

---

## 환경 설정 (Setup)

### Unity 프레임워크 추가
`git submodule`을 통해 Unity를 프로젝트에 추가합니다. 
$\color{red}{\text{주의: 경로 설정을 정확히 해야 합니다.}}$

```bash
git submodule add <저장소_URL> <경로>
# 예시: 
git submodule add git@github.com:ThrowTheSwitch/Unity.git external/Unity
```

### Makefile 작성 가이드
책의 예제를 따라갈 때는 도구들이 자동화되어 있지만, 직접 `make`를 실행하려면 `Makefile`에 Unity 소스 경로와 헤더 경로를 명시해야 합니다.

```makefile
NAME        = test
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror

UNITY_ROOT  = ./external/Unity

INCLUDES    = -I. \
              -I$(UNITY_ROOT)/src \
              -I$(UNITY_ROOT)/extras/fixture/src \
              -I$(UNITY_ROOT)/extras/memory/src

UNITY_SRCS  = $(UNITY_ROOT)/src/unity.c \
              $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
              $(UNITY_ROOT)/extras/memory/src/unity_memory.c

MAIN_SRCS   = 
SRCS        = $(UNITY_SRCS) $(MAIN_SRCS)
```
```