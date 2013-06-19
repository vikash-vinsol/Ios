//
//  person.m
//  one
//
//  Created by Vikash Soni on 04/06/13.
//  Copyright (c) 2013 Vikash Soni. All rights reserved.
//

#import "person.h"

@implementation person 
@synthesize fname, Sname, favoritecolor,age;
-(id)initWithfname:(NSString *)afname sname :(NSString *)aSname color :(UIColor *)col age :(int)aAge

{
    self = [super init];
    if(self)
    {
        self.fname = afname;
        self.sname = aSname;
        self.age = aAge;
        self.favoritecolor = col;
        
    }
    return self;
}

@end
