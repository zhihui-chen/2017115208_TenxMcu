#ifndef __keys_h
#define __keys_h
// Hal: exp: #define P_key P10 -----------------
#define P_key1 P1_0        //�����˿�
// Const: exp: #define D_data 1 ----------------
#define D_keyNull 0
#define D_keyValue1 1

// Globle Var -----------------------------------------
#ifdef __keys_c
uint8_t keyValue;
#else
extern uint8_t keyValue;
#endif

// Action Macro: exp: #define F_getData() ------

// Function ------------------------------------
void GetKeys();
#endif