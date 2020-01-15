#pragma once



namespace xystagelib {
	class xystage
	{
	public:
		xystage();
		~xystage();
		virtual void serial_link(string com, int baud) {

		}
		virtual void write_function(cmd,x,y) {
			
		}
	private:
		float x = 0;
		float y = 0;
		char cmd;
	};

	xystage::xystage()
	{
	}

	xystage::~xystage()
	{
	}

}