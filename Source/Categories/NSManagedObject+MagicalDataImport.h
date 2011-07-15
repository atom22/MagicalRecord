//
//  NSManagedObject+MagicalDataImport.h
//  Magical Record
//
//  Created by Saul Mora on 7/15/11.
//  Copyright 2011 Magical Panda Software LLC. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObject (NSManagedObject_MagicalDataImport)

+ (NSManagedObject *) mr_importFromDictionary:(NSDictionary *)data;

@end
