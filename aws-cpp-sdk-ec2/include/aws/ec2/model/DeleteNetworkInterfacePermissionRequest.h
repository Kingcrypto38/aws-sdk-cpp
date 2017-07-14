﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DeleteNetworkInterfacePermissionRequest : public EC2Request
  {
  public:
    DeleteNetworkInterfacePermissionRequest();
    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline const Aws::String& GetNetworkInterfacePermissionId() const{ return m_networkInterfacePermissionId; }

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline void SetNetworkInterfacePermissionId(const Aws::String& value) { m_networkInterfacePermissionIdHasBeenSet = true; m_networkInterfacePermissionId = value; }

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline void SetNetworkInterfacePermissionId(Aws::String&& value) { m_networkInterfacePermissionIdHasBeenSet = true; m_networkInterfacePermissionId = std::move(value); }

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline void SetNetworkInterfacePermissionId(const char* value) { m_networkInterfacePermissionIdHasBeenSet = true; m_networkInterfacePermissionId.assign(value); }

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline DeleteNetworkInterfacePermissionRequest& WithNetworkInterfacePermissionId(const Aws::String& value) { SetNetworkInterfacePermissionId(value); return *this;}

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline DeleteNetworkInterfacePermissionRequest& WithNetworkInterfacePermissionId(Aws::String&& value) { SetNetworkInterfacePermissionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface permission.</p>
     */
    inline DeleteNetworkInterfacePermissionRequest& WithNetworkInterfacePermissionId(const char* value) { SetNetworkInterfacePermissionId(value); return *this;}

    /**
     * <p>Specify <code>true</code> to remove the permission even if the network
     * interface is attached to an instance.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Specify <code>true</code> to remove the permission even if the network
     * interface is attached to an instance.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Specify <code>true</code> to remove the permission even if the network
     * interface is attached to an instance.</p>
     */
    inline DeleteNetworkInterfacePermissionRequest& WithForce(bool value) { SetForce(value); return *this;}

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DeleteNetworkInterfacePermissionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:
    Aws::String m_networkInterfacePermissionId;
    bool m_networkInterfacePermissionIdHasBeenSet;
    bool m_force;
    bool m_forceHasBeenSet;
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
