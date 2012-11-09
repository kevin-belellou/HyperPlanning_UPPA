#include "Page.h"

using namespace Osp::Base;
using namespace Osp::Ui;
using namespace Osp::Ui::Controls;

Page::Page(void) {
}

Page::~Page(void) {
}

bool Page::Initialize() {
	// Construct an XML form
	Construct(L"IDF_PAGE");

	return true;
}

result Page::OnInitializing(void) {
	result r = E_SUCCESS;

	// TODO: Add your initialization code here

	// Get a button via resource ID
	__pButtonOk = static_cast<Button *> (GetControl(L"IDC_BUTTON_OK"));
	if (__pButtonOk != null) {
		__pButtonOk->SetActionId(ID_BUTTON_OK);
		__pButtonOk->AddActionEventListener(*this);
	}

	return r;
}

result Page::OnTerminating(void) {
	result r = E_SUCCESS;

	// TODO: Add your termination code here

	return r;
}

void Page::OnActionPerformed(const Osp::Ui::Control& source, int actionId) {
	switch (actionId) {
		case ID_BUTTON_OK : {
			AppLog("OK Button is clicked! \n");
		}
			break;
		default :
			break;
	}
}
