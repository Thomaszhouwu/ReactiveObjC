//
//  NSObject+RACPropertyObserving.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 3/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#define RACKVO(property) ((void)(NO && ((void)property, NO)), @#property)

@class RACSequence;
@class RACValue;


@interface NSObject (RACPropertyObserving)

// Create a sequence from the value at the given keypath.
- (RACSequence *)RACSequenceForKeyPath:(NSString *)keyPath;

// Create a value from the value at the given keypath.
- (RACValue *)RACValueForKeyPath:(NSString *)keyPath;

// Bind the given binding to the value.
- (void)bind:(NSString *)binding toValue:(RACValue *)value;

@end
