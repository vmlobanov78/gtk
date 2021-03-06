/* gtkquartz.h: Utility functions used by the Quartz port
 *
 * Copyright (C) 2006 Imendio AB
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GTK_QUARTZ_H__
#define __GTK_QUARTZ_H__

#import <Cocoa/Cocoa.h>
#include <gtk/gtkselection.h>

G_BEGIN_DECLS

NSSet   *_gtk_quartz_target_list_to_pasteboard_types    (GtkTargetList *target_list);
NSSet   *_gtk_quartz_target_entries_to_pasteboard_types (const GtkTargetEntry *targets,
							 guint                 n_targets);

GList   *_gtk_quartz_pasteboard_types_to_atom_list (NSArray  *array);

GtkSelectionData *_gtk_quartz_get_selection_data_from_pasteboard (NSPasteboard *pasteboard,
								  GdkAtom       target,
								  GdkAtom       selection);

void _gtk_quartz_set_selection_data_for_pasteboard (NSPasteboard *pasteboard,
						    GtkSelectionData *selection_data);

NSImage *_gtk_quartz_create_image_from_surface (cairo_surface_t *surface);
void _gtk_clipboard_handle_event (GdkEventOwnerChange *event);
void _gtk_clipboard_store_all (void);
const gchar * _gtk_get_datadir (void);
const gchar * _gtk_get_libdir (void);
const gchar * _gtk_get_localedir (void);
const gchar * _gtk_get_sysconfdir (void);
const gchar * _gtk_get_data_prefix (void);

G_END_DECLS

#endif /* __GTK_QUARTZ_H__ */
