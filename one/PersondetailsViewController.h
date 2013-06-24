//
//  persondetailsViewController.h
//  one
//
//  Created by Vikash Soni on 04/06/13.
//  Copyright (c) 2013 Vikash Soni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Person.h"

@interface PersonDetailsViewController : UIViewController


@property (nonatomic,strong)IBOutlet UILabel *fNameLabel;
@property (nonatomic,strong)IBOutlet UILabel *sNameLabel;
@property (nonatomic,strong)IBOutlet UILabel *ageLabel;
@property (strong) Person *person;


@end
