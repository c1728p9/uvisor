/***************************************************************
 * This confidential and  proprietary  software may be used only
 * as authorised  by  a licensing  agreement  from  ARM  Limited
 *
 *             (C) COPYRIGHT 2013-2014 ARM Limited
 *                      ALL RIGHTS RESERVED
 *
 *  The entire notice above must be reproduced on all authorised
 *  copies and copies  may only be made to the  extent permitted
 *  by a licensing agreement from ARM Limited.
 *
 ***************************************************************/
#ifndef __VMPU_MEM_H__
#define __VMPU_MEM_H__

#ifndef UVISOR_MAX_ACLS
#define UVISOR_MAX_ACLS 16
#endif/*UVISOR_MAX_ACLS*/

extern int vmpu_mem_add(uint8_t box_id, void* start, uint32_t size, UvisorBoxAcl acl);
extern int vmpu_mem_switch(uint8_t src_box, uint8_t dst_box);
extern void vmpu_mem_init(void);

#endif/*__VMPU_APIS_H__*/