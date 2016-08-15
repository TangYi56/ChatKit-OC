//
//  NSMutableDictionary+LCCKWeakReference.h
//  Kuber
//
//  Created by Kuber on 16/4/29.
//  v0.5.0 Copyright © 2016年 Huaxu Technology. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (LCCKWeakReference)

- (void)lcck_weak_setObject:(id)anObject forKey:(NSString *)aKey;

- (void)lcck_weak_setObjectWithDictionary:(NSDictionary *)dic;

- (id)lcck_weak_getObjectForKey:(NSString *)key;

@end
