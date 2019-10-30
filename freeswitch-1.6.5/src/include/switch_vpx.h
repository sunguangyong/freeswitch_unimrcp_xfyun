/*
 * FreeSWITCH Modular Media Switching Software Library / Soft-Switch Application
 * Copyright (C) 2005-2014, Anthony Minessale II <anthm@freeswitch.org>
 *
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is FreeSWITCH Modular Media Switching Software Library / Soft-Switch Application
 *
 * The Initial Developer of the Original Code is
 * Seven Du <dujinfang@gmail.com>
 * Portions created by the Initial Developer are Copyright (C)
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 *
 * switch_vpx.h -- vpx resources
 *
 */
/*! \file switch_vpx.h
	\brief vpx resources

	The things powered by libvpx are renamed into the switch_ namespace to provide a cleaner
	look to things and helps me to document what parts of video I am using I'd like to take this
	opportunity to thank libvpx for all the awesome stuff it does and for making my life much easier.

*/

#ifndef SWITCH_VPX_H
#define SWITCH_VPX_H

#include <switch.h>
#include <switch_image.h>

SWITCH_BEGIN_EXTERN_C

#define SWITCH_IMG_FMT_PLANAR    VPX_IMG_FMT_PLANAR
#define SWITCH_IMG_FMT_UV_FLIP   VPX_IMG_FMT_UV_FLIP
#define SWITCH_IMG_FMT_HAS_ALPHA VPX_IMG_FMT_HAS_ALPHA


#define SWITCH_PLANE_PACKED VPX_PLANE_PACKED
#define SWITCH_PLANE_Y      VPX_PLANE_Y
#define SWITCH_PLANE_U      VPX_PLANE_U
#define SWITCH_PLANE_V      VPX_PLANE_V
#define SWITCH_PLANE_ALPHA  VPX_PLANE_ALPHA

#ifndef VPX_IMG_FMT_HIGH         /* not available in libvpx 1.3.0 (see commit hash e97aea28) */
#define VPX_IMG_FMT_HIGH         0x800  /**< Image uses 16bit framebuffer */
#endif

#define SWITCH_IMG_FMT_HIGH      VPX_IMG_FMT_HIGH
#define SWITCH_IMG_FMT_I420	     VPX_IMG_FMT_I420
#define SWITCH_IMG_FMT_ARGB	     VPX_IMG_FMT_ARGB
#define SWITCH_IMG_FMT_GD	     VPX_IMG_FMT_NONE

typedef vpx_img_fmt_t switch_img_fmt_t;

typedef vpx_image_t switch_image_t;


SWITCH_END_EXTERN_C
#endif

/* For Emacs:
 * Local Variables:
 * mode:c
 * indent-tabs-mode:t
 * tab-width:4
 * c-basic-offset:4
 * End:
 * For VIM:
 * vim:set softtabstop=4 shiftwidth=4 tabstop=4 noet:
 */
