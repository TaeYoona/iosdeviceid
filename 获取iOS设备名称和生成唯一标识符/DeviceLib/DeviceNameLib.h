//
//  DeviceNameLib.h
//  DeviceNameLib
//
//  Created by zhangcong on 2017/10/12.
//  Copyright © 2017年 zhangcong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeviceNameLib : NSObject

/**
 本地生成的设备唯一标识
 */
+ (NSString *)deviceId;

/**
 保存服务器生成的deviceId
 */
+ (void)saveServerDeviceId:(NSString *)deviceId;

/**
 服务器生成的设备唯一标识 默认nil
 */
+ (NSString *)serverDeviceId;

/**
 删除本地生成的deviceId
 */
+ (void)removeLocalDeviceId;

/**
 删除存起来的server deviceId
 */
+ (void)removeServerDeviceId;

/**
 设备名称
 */
+ (NSString *)deviceName;

/**
 设备系统版本号
 */
+ (NSString *)deviceVersion;


@end

