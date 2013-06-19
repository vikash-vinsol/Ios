//
//  persondetailsViewController.h
//  one
//
//  Created by Vikash Soni on 04/06/13.
//  Copyright (c) 2013 Vikash Soni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "person.h"

@interface persondetailsViewController : UIViewController


@property (nonatomic,strong)IBOutlet UILabel *fnamelabel;
@property (nonatomic,strong)IBOutlet UILabel *snamelabel;
@property (nonatomic,strong)IBOutlet UILabel *agelabel;
@property (strong) person *person;


@end
