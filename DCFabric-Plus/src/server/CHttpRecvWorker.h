/*
 * BNC SDN Controller GPL Source Code
 * Copyright (C) 2016, BNC <DCFabric-admin@bnc.org.cn>
 *
 * This file is part of the BNC SDN Controller. BNC SDN
 * Controller is a free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, , see <http://www.gnu.org/licenses/>.
 */

/******************************************************************************
*                                                                             *
*   File Name   : CHttpRecvWorker.h                                           *
*   Author      : bnc bojiang                                                 *
*   Create Date : 2017-10-30                                                  *
*   Version     : 1.0                                                         *
*   Function    :                                                             *
*                                                                             *
******************************************************************************/
#ifndef __CHTTPRECVWORKER__H
#define __CHTTPRECVWORKER__H

#include "CRecvWorker.h"

/**
 * http worker类
 * 负责接收来自http监听端口的消息
 */
class CHttpRecvWorker : public CRecvWorker
{
public:
	/*
	 * 默认构造函数
	 */
    CHttpRecvWorker();

    /*
     * 默认析构函数
     */
    virtual ~CHttpRecvWorker();

    /*
     * 处理收到消息
     * 继承自基类
     *
     * @param: sockfd           socket描述符
     * @param: buffer           消息指针
     * @param: len              消息长度
     *
     * @return: None
     */
    virtual INT4 process(INT4 sockfd, INT1* buffer, UINT4 len);

    /*
     * 获取RecvWorker名称
     * ret: 返回RecvWorker名称
     */
    virtual const char* toString() {return "CHttpRecvWorker";}
};




#endif
