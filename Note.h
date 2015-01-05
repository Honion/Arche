#ifndef __Note_H__
#define __Note_H__


class Note{
      public:
             Note(int n);
			 ~Note();
             void setNote(int n);
             int getNote();
      protected:
              int note;
};

#endif
