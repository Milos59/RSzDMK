/**
 * @file	geometrijski.h
 * @brief	Funkcije za sortiranje geomtrijskog niza
 * @author	Milos Kolovic
 * @date	16-05-2021
 */

#ifndef GEOMETRIJSKI_H_
#define GEOMETRIJSKI_H_

#include <stdint.h>

/**
 * Sort - Funkcija koja sortira niz array dužine array_length, na naèin odabran parametrom mode.
 * @param array - navedeni geometrijski niz
 * @param array_length - duzina geometrijskog niza
 * @param mode - Parametar mode može imati vrednost konstanti UP
 * i DOWN definisanih pomoæu makroa. Ukoliko mode ima vrednost UP, sortira
 * niz od najveæeg do najmanjeg elementa, dok u sluèaju vrednosti DOWN sortira
 * niz od najmanjeg do najveæeg elementa.
 * @return - nema povratnu vrednost
 */
void Sort(int16_t *array, int16_t array_length, int8_t mode);

/**
 * Check - Funkcija koja vrši proveru da li je uneti niz geometrijski
 * @return - vrednosti TRUE ili FALSE, definisane kao makro
 * konstante za vrednosti 1 i 0.
 */
int8_t Check(int16_t *array);

#endif /* GEOMETRIJSKI_H_ */
