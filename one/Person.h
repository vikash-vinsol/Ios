//
//  person.h
//  one
//
//  Created by Vikash Soni on 04/06/13.
//  Copyright (c) 2013 Vikash Soni. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject


@property(strong) NSString *fName;
@property(strong) NSString *sName;
@property(strong) UIColor *favoriteColor;
@property int age;


-(id)initWithfname:(NSString *)aFName sName :(NSString *)aSName color :(UIColor *)col age :(int)aAge;

@end
