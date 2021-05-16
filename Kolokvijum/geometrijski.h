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
 * Sort - Funkcija koja sortira niz array du�ine array_length, na na�in odabran parametrom mode.
 * @param array - navedeni geometrijski niz
 * @param array_length - duzina geometrijskog niza
 * @param mode - Parametar mode mo�e imati vrednost konstanti UP
 * i DOWN definisanih pomo�u makroa. Ukoliko mode ima vrednost UP, sortira
 * niz od najve�eg do najmanjeg elementa, dok u slu�aju vrednosti DOWN sortira
 * niz od najmanjeg do najve�eg elementa.
 * @return - nema povratnu vrednost
 */
void Sort(int16_t *array, int16_t array_length, int8_t mode);

/**
 * Check - Funkcija koja vr�i proveru da li je uneti niz geometrijski
 * @return - vrednosti TRUE ili FALSE, definisane kao makro
 * konstante za vrednosti 1 i 0.
 */
int8_t Check(int16_t *array);

#endif /* GEOMETRIJSKI_H_ */
