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

#include <aws/ec2/model/NetworkInterfacePermissionStateCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace NetworkInterfacePermissionStateCodeMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int granted_HASH = HashingUtils::HashString("granted");
        static const int revoking_HASH = HashingUtils::HashString("revoking");
        static const int revoked_HASH = HashingUtils::HashString("revoked");


        NetworkInterfacePermissionStateCode GetNetworkInterfacePermissionStateCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return NetworkInterfacePermissionStateCode::pending;
          }
          else if (hashCode == granted_HASH)
          {
            return NetworkInterfacePermissionStateCode::granted;
          }
          else if (hashCode == revoking_HASH)
          {
            return NetworkInterfacePermissionStateCode::revoking;
          }
          else if (hashCode == revoked_HASH)
          {
            return NetworkInterfacePermissionStateCode::revoked;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfacePermissionStateCode>(hashCode);
          }

          return NetworkInterfacePermissionStateCode::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfacePermissionStateCode(NetworkInterfacePermissionStateCode enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfacePermissionStateCode::pending:
            return "pending";
          case NetworkInterfacePermissionStateCode::granted:
            return "granted";
          case NetworkInterfacePermissionStateCode::revoking:
            return "revoking";
          case NetworkInterfacePermissionStateCode::revoked:
            return "revoked";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace NetworkInterfacePermissionStateCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
