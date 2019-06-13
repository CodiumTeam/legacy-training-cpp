#include <gtest/gtest.h>

#include "PrintDate.h"

TEST(PrintDateTest, Foo) {
    vector<Item> items;
    items.push_back(Item("Foo", 0, 0));
    PrintDate app(items);

    app.updateQuality();

    EXPECT_EQ("Foo", app.items[0].name);
}

