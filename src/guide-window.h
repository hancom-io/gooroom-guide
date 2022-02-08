/*
 * Copyright (C) 2019 Gooroom <gooroom@gooroom.kr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.

 */

#pragma
#include <gtk/gtk.h>
#include "guide-application.h"

G_BEGIN_DECLS

#define GUIDE_WINDOW_TYPE (guide_window_get_type ())
G_DECLARE_FINAL_TYPE (GuideWindow, guide_window, GUIDE, WINDOW, GtkApplicationWindow)

GuideWindow *guide_window_new (GtkApplication *application);

void         guide_window_activate (GuideWindow *self);
void         guide_window_open (GuideWindow *self);
void         guide_window_activate (GuideWindow *self);

G_END_DECLS
