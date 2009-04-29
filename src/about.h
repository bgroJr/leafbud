/*
 *  Leafpad - GTK+ based simple text editor
 *  Copyright (C) 2004-2005 Tarot Osuji
 *  
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _ABOUT_H
#define _ABOUT_H

#if !GTK_CHECK_VERSION(2, 6, 0)
void add_about_stock(void);
GtkWidget *create_about_dialog(
	const gchar *name,
	const gchar *version,
	const gchar *copyright,
	const gchar *comments,
	const gchar **authors,
	const gchar **documenters,
	const gchar *translator_credits,
	GdkPixbuf *logo);
#endif

#endif /* _ABOUT_H */
