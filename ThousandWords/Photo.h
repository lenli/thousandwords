//
//  Photo.h
//  ThousandWords
//
//  Created by Len on 12/14/13.
//  Copyright (c) 2013 LL inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Album;

@interface Photo : NSManagedObject

@property (nonatomic, retain) id image;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) Album *albumBook;

@end
