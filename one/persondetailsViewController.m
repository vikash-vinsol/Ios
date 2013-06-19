//
//  persondetailsViewController.m
//  one
//
//  Created by Vikash Soni on 04/06/13.
//  Copyright (c) 2013 Vikash Soni. All rights reserved.
//

#import "persondetailsViewController.h"

@interface persondetailsViewController ()

@end


@implementation persondetailsViewController

@synthesize fnamelabel,snamelabel,agelabel,person;



- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self)
    {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    
    self.fnamelabel.text = self.person.fname;
    self.snamelabel.text = self.person.Sname;
    self.agelabel.text = [NSString stringWithFormat:@"%d", self.person.age];
    
    [self.view setBackgroundColor:self.person.favoritecolor];
    
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
