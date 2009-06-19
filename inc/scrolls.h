/*
 * scrolls.h
 * Copyright (C) Joachim de Groot 2009 <jdegroot@web.de>
 *
 * NLarn is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * NLarn is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SCROLLS_H_
#define __SCROLLS_H_

typedef struct magic_scroll_data {
	int	id;
	char *name;
	int	effect_type; 	/* if this scroll causes an effect */
	int price;
} magic_scroll_data;

typedef struct magic_scroll {	/* name scroll conflicts with curses function */
	int	type;
} magic_scroll;

enum scroll_types {
	ST_NONE,
	ST_ENCH_ARMOUR,
	ST_ENCH_WEAPON,
	ST_ENLIGHTENMENT,
	ST_BLANK,
	ST_CREATE_MONSTER,
	ST_CREATE_ARTIFACT,
	ST_AGGRAVATE_MONSTER,
	ST_TIMEWARP,
	ST_TELEPORT,
	ST_AWARENESS,
	ST_HASTE_MONSTER,
	ST_HEAL_MONSTER,
	ST_SPIRIT_PROTECTION,
	ST_UNDEAD_PROTECTION,
	ST_STEALTH,
	ST_MAPPING,
	ST_HOLD_MONSTER,
	ST_GEM_PERFECTION,
	ST_SPELL_EXTENSION,
	ST_IDENTIFY,
	ST_REMOVE_CURSE,
	ST_ANNIHILATION,
	ST_PULVERIZATION,
	ST_LIFE_PROTECTION,
	ST_MAX
};

/* function declarations */

void scroll_desc_shuffle();
magic_scroll *scroll_new(int scroll_type);
void scroll_destroy(magic_scroll *s);

inline char *scroll_get_name(magic_scroll *s);
inline char *scroll_get_desc(magic_scroll *s);
inline int scroll_get_effect(magic_scroll *s);
inline int scroll_get_price(magic_scroll *s);

#endif