@class OTMPColor;
#import "OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_ProgressBarTimeBased_did_start;
extern NSString* const t_ProgressBarTimeBased_did_finish;
extern NSString* const t_ProgressBarTimeBased_progressbar_did_tick;
//All triggers that are allowed by this component
extern NSString* const t_ProgressBarTimeBased_start;
extern NSString* const t_ProgressBarTimeBased_stop;
extern NSString* const t_ProgressBarTimeBased_restart;
extern NSString* const t_ProgressBarTimeBased_stop_and_reset;
extern NSString* const t_ProgressBarTimeBased_stop_and_fill;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_ProgressBarTimeBased_start_time;
extern NSString* const p_ProgressBarTimeBased_duration;
extern NSString* const p_ProgressBarTimeBased_tick_period;
extern NSString* const p_ProgressBarTimeBased_progress_color;
extern NSString* const p_ProgressBarTimeBased_ring_thickness;
extern NSString* const p_ProgressBarTimeBased_ring_bg_color;
extern NSString* const p_ProgressBarTimeBased_ring_internal_bg;

@interface OTMLProgressBarTimeBasedModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) NSInteger duration;


@property(nonatomic, assign) BOOL is_countdown;


@property(nonatomic, strong) OTMPColor* progress_color;


@property(nonatomic, assign) NSInteger start_time;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end