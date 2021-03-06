/* gtd-enums.h
 *
 * Copyright (C) 2015 Georges Basile Stavracas Neto <georges.stavracas@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GTD_ENUMS_H
#define GTD_ENUMS_H

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum
{
  GTD_WINDOW_MODE_NORMAL,
  GTD_WINDOW_MODE_SELECTION
} GtdWindowMode;

typedef enum
{
  GTD_LIST_SELECTOR_VIEW_GRID,
  GTD_LIST_SELECTOR_VIEW_LIST
} GtdListSelectorViewType;

G_END_DECLS

#endif /* GTD_ENUMS_H */
