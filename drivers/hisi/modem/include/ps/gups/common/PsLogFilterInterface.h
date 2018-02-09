/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may
 * *    be used to endorse or promote products derived from this software
 * *    without specific prior written permission.
 *
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __PSLOGFILTERINTERFACE_H__
#define __PSLOGFILTERINTERFACE_H__


/******************************************************************************
  1 其他头文件包含
******************************************************************************/
#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)


/******************************************************************************
  2 宏定义
******************************************************************************/

/******************************************************************************
  3 枚举定义
******************************************************************************/


/******************************************************************************
  4 全局变量声明
******************************************************************************/


/******************************************************************************
  5 消息头定义
******************************************************************************/


/******************************************************************************
  6 消息定义
******************************************************************************/


/******************************************************************************
  7 STRUCT定义
******************************************************************************/


/*****************************************************************************
 结构名    : PS_OM_LAYER_MSG_REPLACE_CB
 协议表格  :
 ASN.1描述 :
 结构说明  : 层间消息匹配过滤回调函数指针
             此回调函数实现必须满足如下规则:
             1. 返回值与入参相同，对输入消息不进行匹配过滤，勾取原始输入消息
             2. 返回值为VOS_NULL，对输入消息进行屏蔽处理，不再勾取出来
             3. 返回值与入参不同，对输入消息进行替换处理，将返回内存中的内容勾取出来，
             返回的内存消息必须使用VOS_MemAlloc进行动态申请(ucPtNo取DYNAMIC_MEM_PT)
             由底软统一进行释放

*****************************************************************************/
typedef VOS_VOID * (*PS_OM_LAYER_MSG_REPLACE_CB)(MsgBlock *pMsg);




/******************************************************************************
  8 UNION定义
******************************************************************************/


/******************************************************************************
  9 OTHERS定义
******************************************************************************/


/*****************************************************************************
 函 数 名  : PS_OM_LayerMsgReplaceCBReg
 功能描述  : A\C核注册层间消息匹配过滤回调接口，建议由消息发送方统一使用发送PID
             进行匹配过滤接口注册，原则上一个发送PID只允许注册一个匹配过滤接口，
             但是对跨核消息，透传转发消息等特殊场景，允许发送方或接收方使用
             发送PID注册多个匹配过滤接口
 输入参数  : VOS_UINT32                        ulSendPid,
             PS_OM_LAYER_MSG_REPLACE_CB        pFunc,
 输出参数  : 无
 返 回 值  : VOS_VOID

 修改历史      :
  1.日    期   : 2017年3月18日
    作    者   : c00368566
    修改内容   : 新生成函数

*****************************************************************************/
 VOS_UINT32 PS_OM_LayerMsgReplaceCBReg
(
    VOS_UINT32                                    ulSendPid,
    PS_OM_LAYER_MSG_REPLACE_CB                    pFunc
);

#pragma pack()


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* PsLogFilterInterface.h */


