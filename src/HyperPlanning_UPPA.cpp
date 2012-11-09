/**
 * Name        : HyperPlanning_UPPA
 * Version     : 0.0.1
 * Vendor      : gund38
 * Description : 
 */

#include "HyperPlanning_UPPA.h"
#include "Page.h"

using namespace Osp::App;
using namespace Osp::Base;
using namespace Osp::System;
using namespace Osp::Ui;
using namespace Osp::Ui::Controls;

HyperPlanning_UPPA::HyperPlanning_UPPA() {
}

HyperPlanning_UPPA::~HyperPlanning_UPPA() {
}

Application* HyperPlanning_UPPA::CreateInstance(void) {
	// Create the instance through the constructor.
	return new HyperPlanning_UPPA();
}

bool HyperPlanning_UPPA::OnAppInitializing(AppRegistry& appRegistry) {
	// TODO:
	// Initialize UI resources and application specific data.
	// The application's permanent data and context can be obtained from the appRegistry.
	//
	// If this method is successful, return true; otherwise, return false.
	// If this method returns false, the application will be terminated.

	// Uncomment the following statement to listen to the screen on/off events.
	//PowerManager::SetScreenEventListener(*this);

	// Create a form
	Page *pPage = new Page();
	pPage->Initialize();

	// Add the form to the frame
	Frame *pFrame = GetAppFrame()->GetFrame();
	pFrame->AddControl(*pPage);

	// Set the current form
	pFrame->SetCurrentForm(*pPage);

	// Draw and Show the form
	pPage->Draw();
	pPage->Show();

	return true;
}

bool HyperPlanning_UPPA::OnAppTerminating(AppRegistry& appRegistry,
		bool forcedTermination) {
	// TODO:
	// Deallocate resources allocated by this application for termination.
	// The application's permanent data and context can be saved via appRegistry.
	return true;
}

void HyperPlanning_UPPA::OnForeground(void) {
	// TODO:
	// Start or resume drawing when the application is moved to the foreground.
}

void HyperPlanning_UPPA::OnBackground(void) {
	// TODO:
	// Stop drawing when the application is moved to the background.
}

void HyperPlanning_UPPA::OnLowMemory(void) {
	// TODO:
	// Free unused resources or close the application.
}

void HyperPlanning_UPPA::OnBatteryLevelChanged(BatteryLevel batteryLevel) {
	// TODO:
	// Handle any changes in battery level here.
	// Stop using multimedia features(camera, mp3 etc.) if the battery level is CRITICAL.
}

void HyperPlanning_UPPA::OnScreenOn(void) {
	// TODO:
	// Get the released resources or resume the operations that were paused or stopped in OnScreenOff().
}

void HyperPlanning_UPPA::OnScreenOff(void) {
	// TODO:
	//  Unless there is a strong reason to do otherwise, release resources (such as 3D, media, and sensors) to allow the device to enter the sleep mode to save the battery.
	// Invoking a lengthy asynchronous method within this listener method can be risky, because it is not guaranteed to invoke a callback before the device enters the sleep mode.
	// Similarly, do not perform lengthy operations in this listener method. Any operation must be a quick one.
}
