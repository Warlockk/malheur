/*
 * MALHEUR - Automatic Malware Analysis on Steroids
 * Copyright (c) 2009 Konrad Rieck (rieck@cs.tu-berlin.de)
 * Berlin Institute of Technology (TU Berlin).
 * --
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.  This program is distributed without any
 * warranty. See the GNU General Public License for more details. 
 * --
 */

#ifndef PROTO_H
#define PROTO_H

#include "farray.h"
#include "class.h"

/* Function declarations */
farray_t *proto_extract(farray_t *, assign_t **);
assign_t *proto_assign(farray_t *, farray_t *);

#endif                          /* PROTO_H */
