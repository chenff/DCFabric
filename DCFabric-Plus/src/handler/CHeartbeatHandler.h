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
*   File Name   : CHeartbeatHandler.h                                         *
*   Author      : bnc bojiang                                                 *
*   Create Date : 2017-10-30                                                  *
*   Version     : 1.0                                                         *
*   Function    :                                                             *
*                                                                             *
******************************************************************************/
#ifndef _CHEARTBEATHANDLER_H
#define _CHEARTBEATHANDLER_H

#include "CMsgHandler.h"
#include "CTimer.h"

/*
 * heartbeat消息处理handler类
 *         负责heartbeat消息处理
 */
class CHeartbeatHandler: public CMsgHandler
{
public:
    static UINT4 m_heartbeatInterval;
    static UINT4 m_heartbeatTimes;

    static void heartbeat(void* param);

public:
    CHeartbeatHandler();
    ~CHeartbeatHandler();

    /*
     * 完整的消息路径注册
     *
     * ret: 成功 or 失败
     */
    INT4 onregister();

    /*
     * 完整的消息路径注册撤销
     *
     * ret: None
     */
    void deregister();

    /*
     * 获取handler名称
     * ret: 返回handler名称
     */
    const char* toString() {return "CHeartbeatHandler";}

private:
    /*
     * 初始化：启动定时器
     * ret: 成功 or 失败
     */
    INT4 init();

    /*
     * 消息处理接口
     * param: msg   待处理消息
     * ret: 成功 or 失败
     */
    INT4 handle(CSmartPtr<CMsgCommon> msg);
    
private:
    CTimer m_timer;
};


#endif
