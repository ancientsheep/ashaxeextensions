#ifndef __IN_APP_PURCHASE
#define __IN_APP_PURCHASE


namespace asiap
{
        void initInAppPurchase();
        bool canPurchase();
        void purchaseProduct(const char *inProductID);
        void releaseInAppPurchase();
        void restoreTransaction();
        void displayMessage(const char *title, const char *message);
}


#endif

