/*********************************************************************************************************************
Copyright 2025, Yamil Tolaba <yamiltolaba@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
documentation files (the "Software"), to deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit
persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*********************************************************************************************************************/

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

/** @file calculator.h
 ** @brief Declaraciones del modulo para la gestion de una calculadora
 **/

/* === Headers files inclusions ==================================================================================== */

#include <stdint.h>
#include <stdbool.h>
/* === Header for C++ compatibility ================================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =================================================================================== */

/* === Public data type declarations =============================================================================== */


//! Estructura que representa un objeto calculadora
typedef struct calculator_s * calculator_t;

//! Tipo de dato para las funciones de operaciones
typedef int (* operation_func_t)(int , int);

/* === Public variable declarations ================================================================================ */

/* === Public function declarations ================================================================================ */

/**
 * @brief Crea un objeto tipo calculadora
 * 
 * @return calculator_t Puntero que se devuelve a ese objeto
 */

 calculator_t CalculatorCreate(void);

/**
 * @brief Operacion que agrega una operacion un objeto calculadora
 * 
 * @param calculator puntero a un objeto calculadora
 * @param function Operacion que se agrega
 * @return true 
 * @return false 
 */
bool CalculatorAddOperation(calculator_t calculator, char operator, operation_func_t function);

/**
 * @brief 
 * 
 * @param calculator Puntero a una calculadora
 * @param expresion Cadena con la expresion a calcular
 * @return int Resultado de la operacion
 */
int CalculatorCalculate (calculator_t calculator, const char * expresion);
/**
 * @brief Operacion de suma para agregar a la calculadora
 * 
 * @param a Primer operando
 * @param b Segundo operando
 * @return int Resultado de la operacion
 */
int OperationAdd(int a, int b);

/**
 * @brief Operacion de resta para agregar a la calculadora
 * 
 * @param a Primer operando
 * @param b Segundo operando
 * @return int Resultado
 */
 int OperationSubstract(int a, int b);

/* === End of conditional blocks =================================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* CALCULATOR_H_ */
