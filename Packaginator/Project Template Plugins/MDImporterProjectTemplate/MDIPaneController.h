#import "PBProjectAssistantPaneController.h"

@interface MDIPaneController : PBProjectAssistantPaneController
{
    IBOutlet id IBarray_;
    
    IBOutlet id IBremoveButton_;
    
    IBOutlet id IBpath_;
    
    NSMutableArray * pathsArray_;
}

- (IBAction) add:(id) sender;

- (void) addOpenPanelDidEnd:(NSOpenPanel *)sheet returnCode:(int)returnCode contextInfo:(void  *)contextInfo;

- (IBAction) remove:(id) sender;

@end
