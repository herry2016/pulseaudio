#ifndef foomodargshfoo
#define foomodargshfoo

/* $Id$ */

/***
  This file is part of polypaudio.
 
  polypaudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published
  by the Free Software Foundation; either version 2 of the License,
  or (at your option) any later version.
 
  polypaudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.
 
  You should have received a copy of the GNU General Public License
  along with polypaudio; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

#include <inttypes.h>
#include "sample.h"
#include "core.h"

struct pa_modargs;

struct pa_modargs *pa_modargs_new(const char *args, const char* const* keys);
void pa_modargs_free(struct pa_modargs*ma);

const char *pa_modargs_get_value(struct pa_modargs *ma, const char *key, const char *def);
int pa_modargs_get_value_u32(struct pa_modargs *ma, const char *key, uint32_t *value);

int pa_modargs_get_sample_spec(struct pa_modargs *ma, struct pa_sample_spec *ss);

#endif
