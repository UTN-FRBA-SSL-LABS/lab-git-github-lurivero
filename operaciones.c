#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

<<<<<<< HEAD
int sumar(const int a, const int b) {
=======
int sumar(int a, int b) {
>>>>>>> origin/feature/conflicto-demo
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

<<<<<<< HEAD
/* funcion de multiplicacion */
int multiplicar(int a, int b) 
{
    return a * b;

=======
int multiplicar(int a, int b) {
    (void)a; (void)b;
    return 0; /* TODO: implementar */
>>>>>>> origin/feature/conflicto-demo
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
<<<<<<< HEAD
    return (n % 2) == 0; /* version main */
=======
    return (n & 1) == 0;
>>>>>>> origin/feature/conflicto-demo
}
