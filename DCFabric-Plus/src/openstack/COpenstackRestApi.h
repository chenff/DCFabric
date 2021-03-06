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
*   File Name   : COpenstackRestApi.h                                         *
*   Author      : bnc xflu                                                    *
*   Create Date : 2016-8-31                                                   *
*   Version     : 1.0                                                         *
*   Function    : .                                                           *
*                                                                             *
******************************************************************************/
#ifndef _COPENSTACKRESTAPI_H
#define _COPENSTACKRESTAPI_H

#include "CRestApi.h"
/*
 * 用来定义Openstack相关的RestApi
 * 主要用来处理收到了Openstack服务器发来的Restful请求后的动作
 */
class COpenstackRestApi
{
public:
    static void api_neutron_default(CRestRequest* request, CRestResponse* response);

    static void api_neutron_networks_get(CRestRequest* request, CRestResponse* response);
    static void api_neutron_networks_put(CRestRequest* request, CRestResponse* response);
    static void api_neutron_networks_post(CRestRequest* request, CRestResponse* response);
    static void api_neutron_networks_delete(CRestRequest* request, CRestResponse* response);

    static void api_neutron_subnets_get(CRestRequest* request, CRestResponse* response);
    static void api_neutron_subnets_put(CRestRequest* request, CRestResponse* response);
    static void api_neutron_subnets_post(CRestRequest* request, CRestResponse* response);
    static void api_neutron_subnets_delete(CRestRequest* request, CRestResponse* response);

    static void api_neutron_ports_get(CRestRequest* request, CRestResponse* response);
    static void api_neutron_ports_put(CRestRequest* request, CRestResponse* response);
    static void api_neutron_ports_post(CRestRequest* request, CRestResponse* response);
    static void api_neutron_ports_delete(CRestRequest* request, CRestResponse* response);
};

#endif
