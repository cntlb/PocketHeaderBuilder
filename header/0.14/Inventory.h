#pragma once

class Inventory {
public: 
	virtual ~Inventory();
	virtual void getContainerSize();
	virtual void add(ItemInstance &, bool);
	virtual void canAdd(ItemInstance const &);
	virtual void dropAll(bool);
	virtual void clearSlot(int);
	virtual void load(ListTag const &);
	virtual void doDrop(ItemInstance &, bool);
	virtual void getEmptySlotsCount();
	virtual void setContainerSize(int);
};