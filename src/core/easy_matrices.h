/*
 *  This file is a part of the PARUS project.
 *  Copyright (C) 2006  Alexey N. Salnikov (salnikov@cmc.msu.ru)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */
#ifndef __EASY_MATRICES_H__
#define __EASY_MATRICES_H__

typedef struct
{
	double *body;
	int sizey;	
} Easy_matrix;


#define MATRIX_GET_ELEMENT(matrix,y) matrix.body[y]

#define MATRIX_FILL_ELEMENT(matrix,y,elm)  matrix.body[y] = elm

#ifdef __cplusplus
extern "C"
{
#endif

extern int easy_mtr_create(Easy_matrix *m, int y);

#ifdef __cplusplus
}
#endif

#endif /* __EASY_MATRICES_H__ */

