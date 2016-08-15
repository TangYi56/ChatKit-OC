//
//  LCCKWeakReference.m
//  Kuber
//
//  Created by Kuber on 16/4/29.
//  v0.5.0 Copyright © 2016年 Huaxu Technology. All rights reserved.
//

#import "LCCKWeakReference.h"

LCCKWeakReference makeLCCKWeakReference(id object) {
    __weak id weakref = object;
    return ^{
        return weakref;
    };
}

id weakReferenceNonretainedObjectValue(LCCKWeakReference ref) {
	return ref ? ref() : nil;
}
