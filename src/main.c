/*********************************************************************************************************************
Copyright 2025, Yamil Tolaba <yamiltolaba@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*********************************************************************************************************************/

/** @file main.c
 ** @brief Ejemplo del uso del patron estrategia con una calculadora
 **/

/* === Headers files inclusions
 * ====================================================================================
 */
#include "calculator.h"
#include <stdio.h>

/* === Macros definitions
 * ====================================================================== */

/* === Private data type declarations
 * ========================================================== */

/* === Private variable declarations
 * =========================================================== */

/* === Private function declarations
 * =========================================================== */

/* === Public variable definitions
 * ============================================================= */

/* === Private variable definitions
 * ============================================================ */

/* === Private function implementation
 * ========================================================= */

/* === Public function implementation
 * ========================================================= */

/**
 * @brief Operación de multiplicación para agregar a la calculadora
 * 
 * @param a Primer operando
 * @param b Segundo operando
 * @return int Resultado de la operación
 */
int OperationMuliply(int a, int b) { return a * b; }

/**
 * @brief Operación de división para agregar a la calculadora
 * 
 * @param a Primer operando
 * @param b Segundo operando
 * @return int Resultado de la operación (0 si b es 0)
 */
int OperationDivide(int a, int b) {
    if (b == 0) return 0; // Evitar división por cero
    return a / b;
}


int main(void) {
  static const char suma[] = "23+13"; 
  static const char resta[] = "23-10";   //declaracion abreviada de array, constante
  static const char producto[] = "2*4";

  int resultado;

  calculator_t calculadora = CalculatorCreate();
  CalculatorAddOperation(calculadora, '+', OperationAdd);
  CalculatorAddOperation(calculadora, '-', OperationSubstract);
  CalculatorAddOperation(calculadora, '*', OperationMuliply);

  printf("%s=%i\r\n", suma, CalculatorCalculate(calculadora, suma));
  printf("%s=%i\r\n", producto, CalculatorCalculate(calculadora, producto));

  return 0;
}

/* === End of documentation
 * ==================================================================== */