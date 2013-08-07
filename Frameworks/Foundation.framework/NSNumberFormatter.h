/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSRecursiveLock;

@interface NSNumberFormatter : NSFormatter  {
    NSMutableDictionary *_attributes;
    struct __CFNumberFormatter { } *_formatter;
    unsigned int _counter;
    unsigned int _behavior;
    NSRecursiveLock *_lock;
    void *_reserved[10];
}

+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned int)arg2;
+ (void)initialize;
+ (unsigned int)defaultFormatterBehavior;
+ (void)setDefaultFormatterBehavior:(unsigned int)arg1;
+ (id)gk_formatUnsignedInteger:(unsigned int)arg1 withGrouping:(BOOL)arg2;
+ (id)gkRankFormatter;
+ (id)gk_formatInteger:(int)arg1 withGrouping:(BOOL)arg2;
+ (id)mf_formatUnsignedInteger:(unsigned int)arg1 withGrouping:(BOOL)arg2;
+ (id)mf_formatInteger:(int)arg1 withGrouping:(BOOL)arg2;

- (void)setGeneratesDecimalNumbers:(BOOL)arg1;
- (id)negativeSuffix;
- (id)negativePrefix;
- (id)positiveSuffix;
- (id)positivePrefix;
- (void)setMinimumIntegerDigits:(unsigned int)arg1;
- (void)setAlwaysShowsDecimalSeparator:(BOOL)arg1;
- (id)init;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_reset;
- (void)setPartialStringValidationEnabled:(BOOL)arg1;
- (BOOL)isPartialStringValidationEnabled;
- (void)setMaximumSignificantDigits:(unsigned int)arg1;
- (unsigned int)maximumSignificantDigits;
- (void)setMinimumSignificantDigits:(unsigned int)arg1;
- (unsigned int)minimumSignificantDigits;
- (void)setUsesSignificantDigits:(BOOL)arg1;
- (BOOL)usesSignificantDigits;
- (void)setCurrencyGroupingSeparator:(id)arg1;
- (id)currencyGroupingSeparator;
- (void)setMaximum:(id)arg1;
- (id)maximum;
- (void)setMinimum:(id)arg1;
- (id)minimum;
- (void)setMaximumFractionDigits:(unsigned int)arg1;
- (unsigned int)maximumFractionDigits;
- (void)setMinimumFractionDigits:(unsigned int)arg1;
- (unsigned int)minimumFractionDigits;
- (void)setMaximumIntegerDigits:(unsigned int)arg1;
- (unsigned int)maximumIntegerDigits;
- (unsigned int)minimumIntegerDigits;
- (void)setRoundingIncrement:(id)arg1;
- (id)roundingIncrement;
- (void)setRoundingMode:(unsigned int)arg1;
- (void)setPaddingPosition:(unsigned int)arg1;
- (unsigned int)paddingPosition;
- (void)setPaddingCharacter:(id)arg1;
- (id)paddingCharacter;
- (void)setMultiplier:(id)arg1;
- (id)multiplier;
- (void)setFormatWidth:(unsigned int)arg1;
- (unsigned int)formatWidth;
- (void)setSecondaryGroupingSize:(unsigned int)arg1;
- (unsigned int)secondaryGroupingSize;
- (void)setGroupingSize:(unsigned int)arg1;
- (unsigned int)groupingSize;
- (void)setExponentSymbol:(id)arg1;
- (id)exponentSymbol;
- (void)setPlusSign:(id)arg1;
- (id)plusSign;
- (void)setMinusSign:(id)arg1;
- (id)minusSign;
- (void)setPerMillSymbol:(id)arg1;
- (id)perMillSymbol;
- (void)setPercentSymbol:(id)arg1;
- (id)percentSymbol;
- (BOOL)_hasSetInternationalCurrencySymbol;
- (void)setInternationalCurrencySymbol:(id)arg1;
- (id)internationalCurrencySymbol;
- (void)setCurrencySymbol:(id)arg1;
- (BOOL)_hasSetCurrencySymbol;
- (id)currencySymbol;
- (BOOL)_hasSetCurrencyCode;
- (void)setCurrencyCode:(id)arg1;
- (id)currencyCode;
- (void)setNegativeSuffix:(id)arg1;
- (void)setNegativePrefix:(id)arg1;
- (void)setPositiveSuffix:(id)arg1;
- (void)setPositivePrefix:(id)arg1;
- (void)setTextAttributesForNegativeInfinity:(id)arg1;
- (id)textAttributesForNegativeInfinity;
- (void)setTextAttributesForPositiveInfinity:(id)arg1;
- (id)textAttributesForPositiveInfinity;
- (void)setTextAttributesForNotANumber:(id)arg1;
- (id)textAttributesForNotANumber;
- (void)setNotANumberSymbol:(id)arg1;
- (void)setTextAttributesForNil:(id)arg1;
- (id)textAttributesForNil;
- (void)setTextAttributesForZero:(id)arg1;
- (id)textAttributesForZero;
- (void)setZeroSymbol:(id)arg1;
- (void)setGroupingSeparator:(id)arg1;
- (BOOL)usesGroupingSeparator;
- (void)setCurrencyDecimalSeparator:(id)arg1;
- (id)currencyDecimalSeparator;
- (BOOL)alwaysShowsDecimalSeparator;
- (void)setDecimalSeparator:(id)arg1;
- (BOOL)allowsFloats;
- (void)setTextAttributesForPositiveValues:(id)arg1;
- (id)textAttributesForPositiveValues;
- (void)setPositiveFormat:(id)arg1;
- (void)setTextAttributesForNegativeValues:(id)arg1;
- (id)textAttributesForNegativeValues;
- (void)setNegativeFormat:(id)arg1;
- (id)negativeFormat;
- (BOOL)generatesDecimalNumbers;
- (unsigned int)numberStyle;
- (id)numberFromString:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (void*)__Keynote_NOOP;
- (id)positiveFormat;
- (id)decimalSeparator;
- (id)groupingSeparator;
- (void)setUsesGroupingSeparator:(BOOL)arg1;
- (void)setNumberStyle:(unsigned int)arg1;
- (id)positiveInfinitySymbol;
- (id)negativeInfinitySymbol;
- (id)zeroSymbol;
- (id)notANumberSymbol;
- (id)nilSymbol;
- (void)setAllowsFloats:(BOOL)arg1;
- (void)setNegativeInfinitySymbol:(id)arg1;
- (void)setPositiveInfinitySymbol:(id)arg1;
- (void)setNilSymbol:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_usesCharacterDirection;
- (void)setLenient:(BOOL)arg1;
- (BOOL)isLenient;
- (unsigned int)formatterBehavior;
- (void)setFormatterBehavior:(unsigned int)arg1;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 error:(out id*)arg4;
- (void)_clearFormatter;
- (void)_regenerateFormatter;
- (unsigned int)roundingMode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end