/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUPair : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    id  mFirst;
    id  mSecond;
}

+ (id)pair;
+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
+ (id)pairWithPair:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)first;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)initWithPair:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)p_SetFirst:(id)arg1;
- (void)p_SetSecond:(id)arg1;
- (id)second;

@end