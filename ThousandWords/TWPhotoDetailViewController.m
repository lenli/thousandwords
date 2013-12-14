//
//  TWPhotoDetailViewController.m
//  ThousandWords
//
//  Created by Len on 12/14/13.
//  Copyright (c) 2013 LL inc. All rights reserved.
//

#import "TWPhotoDetailViewController.h"
#import "Photo.h"

@interface TWPhotoDetailViewController ()

@end

@implementation TWPhotoDetailViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    self.imageView.image = self.photo.image;
    
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



- (IBAction)addFilterButtonPressed:(UIButton *)sender {
}

- (IBAction)deleteButtonPressed:(UIButton *)sender {
    [[self.photo managedObjectContext] deleteObject:self.photo];
    NSError *error = nil;
    [[self.photo managedObjectContext] save:&error];
    if (error) {
        NSLog(@"%@",error);
    }
    [self.navigationController popViewControllerAnimated:YES];
    
}



@end
