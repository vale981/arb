/*
    Copyright (C) 2016 Pascal Molin

    This file is part of Arb.

    Arb is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#include "dirichlet.h"

void
dirichlet_fullchar_mul(dirichlet_fullchar_t chi12, const dirichlet_group_t G, const dirichlet_fullchar_t chi1, const dirichlet_fullchar_t chi2)
{
    dirichlet_char_mul(chi12->x, G, chi1->x, chi2->x);
    dirichlet_fullchar_char(chi12, G, NULL);
}
