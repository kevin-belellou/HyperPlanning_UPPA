#ifndef _PAGE_H_
#define _PAGE_H_

#include <FBase.h>
#include <FUi.h>

class Page : public Osp::Ui::Controls::Form,
		public Osp::Ui::IActionEventListener {

	// Construction
	public:
		Page(void);
		virtual ~Page(void);
		bool Initialize(void);

	// Implementation
	protected:
		static const int ID_BUTTON_OK = 101;
		Osp::Ui::Controls::Button *__pButtonOk;

	public:
		virtual result OnInitializing(void);
		virtual result OnTerminating(void);
		virtual void OnActionPerformed(const Osp::Ui::Control& source,
				int actionId);
};

#endif //_PAGE_H_
