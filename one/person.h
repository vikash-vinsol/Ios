//
//  person.h
//  one
//
//  Created by Vikash Soni on 04/06/13.
//  Copyright (c) 2013 Vikash Soni. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface person : NSObject


@property(strong) NSString *fname;
@property(strong) NSString *Sname;
@property(strong) UIColor *favoritecolor;
@property int age;


-(id)initWithfname:(NSString *)afname sname :(NSString *)aSname color :(UIColor *)col age :(int)aAge;

@end
