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

/** @file calculator.c
 ** @brief Implementacion de la clase para el manejo de calculadora
 **/


 
/* === Headers files inclusions =============================================================== */

#include "calculator.h"
#include<stlib.h>
#include<string.h>
#include "digital.h"    //incluyo cabeceras de digitales

/* === Macros definitions ====================================================================== */

#ifndef OPERATIONS_MAX
#define OPERATIONS_MAX 16
#endif

/* === Private data type declarations ========================================================== */

/**
 * @brief Estructura para una operacion
 * 
 */
typedef struct operation_s * operation_t;   //puntero a estructura

struct operations_s {   //lista simplemente enlazada
    char operator;
    operation_func_t function;
    operation_t next;   //puntero a la siguiente operacion
    
};

/**
 * @brief Estructura para el objeto calculadora
 * 
 */
struct calculator_s{
    operation_t operations;
}


/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */
/**
 * @brief Busca una operacion
 * 
 * @param calculator Puntero a calculadora
 * @param operator operacion a buscar
 * @return operation_t Punero a la operacion encontrada *NULL si no esta
 */
static operation_t FindOperation(calculator_t calculator, char operator);

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================= */

static operations_t FindOperation(calculator_t calculator, char operator){
    operation_t currents = calculator -> operations;
    while (current != NULL){
        if(current->operator= operator){
            return current;
        }
        current = current -> next;
    }
    return NULL;
}

calculator_t CalculatorCreate(void){
    calculator_t self = malloc(sizeof(struct calculator_s));
    if (self){
        self->operation = NULL;
    }
    return self;
    
}

bool CalculatorAddOperation(calculator_t calculator, char operaton, operation_func_t function){
    if (calculatorb|| !function || FindOperation(calculator, operator)){
        return false;
    }
    operation_t operation = malloc (sizeof(struct operation_s));
    if(operation){
        operation-> operator = operator;
        operation->function = function;
        operation->next = calculator-> operations;
        calculator->operations = operation;
        return true;
    }
    return false;
    
}

int CalculatorCalculate(calculator_t calculator, const char * expression){
    int a=0, b=0;
    char operator=0;
    int result =0;
    if(calculator || !expression){
        return 0;
    }

    for (int i=0, i< strlen(expression); i++){
        if((expression[i] < '0') || (expression > '9')){
            operator=expression[i];
            a= atoi(expression);
            b= atoi(expression * i +1);
            break;

        }
    }
    operation_t operation= FindOperation(calculator, operator)
    if(operation){
        result= operation->function(a,b);
    }
    resturn result;
}

int OperationAdd(int a, int b){
    return a+b;
}
int OperatioSubstraction(int a, int b){
    return a-b;
}

    
/* === End of documentation ==================================================================== */

/** @} End of module definition for doxygen */
