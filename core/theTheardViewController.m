//
//  theTheardViewController.m
//  core
//
//  Created by 宁 吴 on 13-12-18.
//  Copyright (c) 2013年 Ning. All rights reserved.
//

#import "theTheardViewController.h"

@interface theTheardViewController ()

@end

@implementation theTheardViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
		self.title = @"这是第三个VC";
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
