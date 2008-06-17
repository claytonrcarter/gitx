//
//  PBEasyPipe.h
//  GitX
//
//  Created by Pieter de Bie on 16-06-08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PBEasyPipe : NSObject {

}

+ (NSFileHandle*) handleForCommand: (NSString*) cmd withArgs: (NSArray*) args;
+ (NSFileHandle*) handleForCommand: (NSString*) cmd withArgs: (NSArray*) args inDir: (NSString*) dir;

+ (NSString*) outputForCommand: (NSString*) cmd withArgs: (NSArray*) args;
+ (NSString*) outputForCommand: (NSString*) cmd withArgs: (NSArray*) args inDir: (NSString*) dir;
@end