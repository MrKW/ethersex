/*
 *
 * Copyright (c) 2009 by Christian Dietrich <stettberger@dokucocde.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * For more information on the GPL, please go to:
 * http://www.gnu.org/copyleft/gpl.html
 */

#include "config.h"


enum {
  PAM_UNKOWN, // no auth request sent
  PAM_PENDING, // The Authentification state is pending
  PAM_DENIED, // The authentification failed
  PAM_SUCCESS, // The authentification was successfull
};

void pam_auth(char *username, char *password, uint8_t *auth_state);
