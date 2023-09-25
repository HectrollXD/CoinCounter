#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED



class Counter {
	private:
		unsigned int oneMXNCounter;
		unsigned int twoMXNCounter;
		unsigned int fiveMXNCounter;
		unsigned int tenMXNCounter;

	protected: 
		// Methods
		void beepSound();

	public:
		// Constructors.
		Counter();
		// Getters.
		unsigned int getOneMXNCounter() const;
		unsigned int getTwoMXNCounter() const;
		unsigned int getFiveMXNCounter() const;
		unsigned int getTenMXNCounter() const;
		// Setters.
		void setOneMXNCounter(const unsigned int &oneMXNCounter);
		void setTwoMXNCounter(const unsigned int &twoMXNCounter);
		void setFiveMXNCounter(const unsigned int &fiveMXNCounter);
		void setTenMXNCounter(const unsigned int &tenMXNCounter);
		// Methods
		unsigned int getTotal() const;
		unsigned int getCoinCounter() const;
		void appendOneMXN();
		void appendTwoMXN();
		void appendFiveMXN();
		void appendTenMXN();
};



#endif //COUNTER_H_INCLUDED
