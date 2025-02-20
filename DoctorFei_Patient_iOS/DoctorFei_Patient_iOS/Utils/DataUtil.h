//
//  DataUtil.h
//  DoctorFei_iOS
//
//  Created by GuJunjia on 14/12/2.
//
//

#import <Foundation/Foundation.h>
@class Friends;
@interface DataUtil : NSObject

+ (void)cleanUserDefault;
+ (void)cleanCoreData;
+ (NSDate *)dateaFromFormatedString : (NSString *)formatedString;
+ (NSAttributedString *)nameStringForFriend : (Friends *)currentFriend;
@end
