//
//  WMScale.h
//  WesternMusicElements
//
//  Created by Cormier Frederic on 05/03/12.
//  Copyright (c) 2012 International MicrOondes. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "WMPool.h"

@interface WMScale : NSObject


- (id)initWithRootNote:(WMNote *)note forScaleMode:(NSString *)aMode;

- (NSArray *)notes;

// return an NSString which is the concatenation of all note's shortnames
- (NSString *)notesShortNames;

- (WMScale *)transpose:(WMInterval)semitones;

@end
