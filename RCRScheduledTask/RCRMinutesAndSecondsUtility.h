//
//  RCRMinutesAndSecondsUtility.h
//
//  Created by Rich Robinson on 04/09/2014.
//  Copyright (c) 2014 Rich Robinson. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSInteger const SecondsInAMinute;

@interface RCRMinutesAndSecondsUtility : NSObject

- (NSNumber *)currentMinute;

- (NSDate *)startOfNextMinute;

@end