#ifndef STOREITEM_H
#define STOREITEM_H

class StoreItem {
   public:
      void SetWeightOunces(int ounces);
      void Print() const;
   private:
      int weightOunces;
};

#endif