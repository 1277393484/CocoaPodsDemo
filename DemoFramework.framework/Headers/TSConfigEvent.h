//
//  TSConfigEvent.h
//  DemoFramework
//
//  Created by ryan on 2021/1/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TSConfigEvent : NSObject
/// 事件名称
@property (nonatomic, copy) NSString *event_name;
/// JsonString 事件属性，可自定义，值为key-value的键值对字 符串
@property (nonatomic, copy) NSString *event_param;

@end

NS_ASSUME_NONNULL_END
