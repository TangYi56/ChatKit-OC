//
//  LCCKImageManager.h
//  Kuber
//
//  Created by Kuber on 16/3/30.
//  v0.5.0 Copyright © 2016年 Huaxu Technology. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface LCCKImageManager : NSObject

+ (instancetype)defaultManager;

- (UIImage *)getImageWithName:(NSString *)name;
- (UIImage *)getImageWithName:(NSString *)name inBundle:(NSBundle *)bundle;

@end
