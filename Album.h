//
//  Album.h
//  ThousandWords
//
//  Created by Len on 12/13/13.
//  Copyright (c) 2013 LL inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Album : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * date;

@end
