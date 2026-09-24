ItemType = {
  PaperBox = "pb",
  Cobweb = "cw",
  Bubble = "bb",
  MapBlocker = "mb",
  Rune = "rune",
  Sand = "sand",
  Portal = "portal",
  Ice = "ice",
  Gray = "ph",
  Joker = "jk_1",
  Energy01 = "energy_1",
  Energy02 = "energy_2",
  Energy03 = "energy_3",
  Energy04 = "energy_4",
  Energy05 = "energy_5",
  Coin01 = "gold_1",
  Coin02 = "gold_2",
  Coin03 = "gold_3",
  Coin04 = "gold_4",
  Coin05 = "gold_5",
  Gem01 = "gem_1",
  Gem02 = "gem_2",
  Gem03 = "gem_3",
  Gem04 = "gem_4",
  Gem05 = "gem_5",
  ToolBox01 = "tbox1_1",
  ToolBox02 = "tbox2_1",
  HugeToolBox01 = "htbox1_1",
  HugeToolBox02 = "htbox2_1",
  EnergyBox = "ebox_1",
  EnergyBoxT1 = "eboxt1_1",
  EnergyBoxT2 = "eboxt2_1",
  ItemBox01 = "ibox1_1",
  ItemBox02 = "ibox2_1",
  ItemBoxSunshine = "ibox_sunshine_1",
  ItemBoxSunshinePro = "ibox_sunshinePro_1",
  ItemBoxMin1 = "iboxmin1_1",
  ItemPickBox1 = "pickBox1_1",
  ItemPickBox2 = "pickBox2_1",
  Battery01 = "battery1_1",
  Battery02 = "battery2_1",
  Battery03 = "battery3_1",
  Cbox01 = "cbox1_1",
  Cbox02 = "cbox2_1",
  Cbox03 = "cbox3_1",
  Cbox04 = "cbox4_1",
  CNewbox01 = "cnewbox1_1",
  CNewbox02 = "cnewbox2_1",
  CNewbox03 = "cnewbox3_1",
  CNewbox04 = "cnewbox4_1",
  Scissors01 = "scissors_1",
  Scissors02 = "scissors_2",
  Scissors03 = "scissors_3",
  Scissors04 = "scissors_4",
  Scissors05 = "scissors_5",
  ScissorsSp = "scissorssp_1",
  RefreshOrder = "order_change_1",
  LuckyStar = "luckystar",
  SunshineBoost = "sunshine_1",
  SunshineBoostPro = "sunshinePro_1",
  Lotion1_1 = "lotion1_1",
  Lotion1_2 = "lotion1_2",
  Lotion1_3 = "lotion1_3",
  Lotion1_4 = "lotion1_4",
  Lotion1_5 = "lotion1_5",
  Crucible1_1 = "crucible1_1",
  Crucible2_1 = "crucible2_1",
  Crucible3_1 = "crucible3_1",
  FreeFallBoss = "ff_boss_1",
  HuntMineTransform = "huntMineTransform",
  Turnbox7 = "turnbox_7"
}
ItemRewardBoxType = {
  ItemType.ItemBox01,
  ItemType.ItemBox02,
  ItemType.ItemBoxMin1,
  ItemType.SunshineBoost,
  ItemType.SunshineBoostPro,
  ItemType.ItemBoxSunshine,
  ItemType.ItemBoxSunshinePro,
  ItemType.ItemPickBox1,
  ItemType.ItemPickBox2
}
ItemEnergyBoxType = {
  ItemType.EnergyBox,
  ItemType.EnergyBoxT1,
  ItemType.EnergyBoxT2
}
ToolCode = {
  tl1 = "tl1_5",
  tl2 = "tl2_5",
  tl3 = "tl3_5",
  tl4 = "tl4_5"
}
AdaptiveTool = {
  tl_1 = 1,
  tl_2 = 2,
  tl_3 = 3,
  tl_4 = 4,
  tl_5 = 5
}
ItemCodePrefix = {
  PaperBox = "pb#",
  Cobweb = "c#",
  Bubble = "b#",
  MapBlocker = "mb_[0-9]+#",
  MainGenerator = "pd_",
  Tool = "tl[0-9]_",
  Energy = "energy_",
  Gold = "gold_",
  Gem = "gem_",
  Coin = "gold_",
  GoldBox = "pbox_",
  Scissors = "scissors_",
  MainItem = "it[0-9]+_",
  Blind = "blind",
  Hunt = "hunt_",
  HuntX = "huntx_",
  Portal = "portal",
  Band = "band_",
  Rune = "r_[0-9]+#",
  Sand = "s_[0-9]+#",
  LuckyStar = "luckystar",
  ScoreItem = "score",
  DailyChallengeBoxItem = "dailytask_box",
  DailyChallengeItem = "dailytask_item",
  Turnbox = "turnbox",
  Battery = "battery",
  Ice = "ice#",
  Temp = "temp#",
  ToolBox = "tbox",
  HugeToolBox = "htbox",
  Crucible = "crucible",
  Spokesperson = "spokesperson",
  CloudsDash = "cloudsdash",
  ScissorsSp = "scissorssp_",
  Gray = "ph#",
  BPBox = "bpbox",
  TimeSkip = "time_skip_",
  Sbox = "sbox_",
  HuntMap = "huntMap",
  Dailyprogress = "dailyprogress_",
  LuckyBag = "luckybag"
}
ItemInnerCodeStartIndex = {
  PaperBox = string.len(ItemCodePrefix.PaperBox) + 1,
  Cobweb = string.len(ItemCodePrefix.Cobweb) + 1,
  Bubble = string.len(ItemCodePrefix.Bubble) + 1,
  MainGenerator = string.len(ItemCodePrefix.MainGenerator) + 1,
  Ice = string.len(ItemCodePrefix.Ice) + 1,
  Temp = string.len(ItemCodePrefix.Temp) + 1,
  Gray = string.len(ItemCodePrefix.Gray) + 1
}
PaperBoxSprite = {
  "mb_1",
  "mb_2",
  "mb_3",
  "mb_4"
}
ItemChain = {
  Lollipop = "sword",
  Cake = "cake",
  Macaron = "maca",
  MacaronBox1 = "mabox1",
  MacaronBox2 = "mabox2",
  MacaronBox3 = "mabox3",
  MacaronBox4 = "mabox4",
  DailyTaskItem1 = "dailytask_item1",
  DailyTaskBox1 = "dailytask_box1",
  DailyTaskItem2 = "dailytask_item2",
  DailyTaskBox2 = "dailytask_box2",
  DailyTaskItem3 = "dailytask_item3",
  DailyTaskBox3 = "dailytask_box3",
  Sakura = "sakura",
  HoneyPd1 = "honeypd_1",
  HoneyPd2 = "honeypd_2",
  HoneyPd3 = "honeypd_3",
  HoneyPd4 = "honeypd_4",
  Honey1 = "honey1_1",
  Honey2 = "honey1_2",
  Honey3 = "honey1_3",
  Honey4 = "honey1_4",
  Honey5 = "honey1_5",
  DBox1 = "dbox1",
  FourthBox1 = "fourthbox1",
  MonopolyDice = "monopoly1",
  Bear = "bear",
  Dove1 = "dove1_1",
  Dove2 = "dove1_2",
  Dove3 = "dove1_3",
  Dove4 = "dove1_4",
  Dove5 = "dove1_5",
  Crucible1 = "crucible1",
  Crucible2 = "crucible2",
  Crucible3 = "crucible3",
  Lotion1 = "lotion1",
  Hunt = "hunt",
  sunshine = "sunshine",
  sunshinePro = "sunshinePro",
  DailyprogressCube1 = "dailyprogress_cube_1",
  DailyprogressCube2 = "dailyprogress_cube_2",
  DailyprogressCube3 = "dailyprogress_cube_3",
  DailyprogressCube4 = "dailyprogress_cube_4"
}
ItemNameDefinition = setmetatable({}, {
  __index = function(table, key)
    if ItemBoxSimilarUtility.IsBoxSimilarItem(key) then
      key = ItemBoxSimilarUtility.GetItemIcon(key)
    elseif StringUtil.StartWith(key, ItemCodePrefix.Blind) then
      key = GM.ItemDataModel:GetSpriteName(key)
    end
    if StringUtil.StartWith(key, ItemCodePrefix.Sbox) then
      local itemName = key:sub(1, StringUtil.rFindChar(key, "_") - 1) .. "_name"
      table[key] = itemName
      return table[key]
    end
    local itemName = key .. "_name"
    if ItemChangeHelper.IsItemChanged(key) then
      local changeName = itemName .. "_change"
      if GM.GameTextModel:HasText(changeName) then
        table[key] = changeName
      else
        table[key] = itemName
      end
    else
      table[key] = itemName
    end
    return table[key]
  end
})
ItemChargeImageConfig = {
  pd_14_1 = {
    pos = Vector3(0, -20.16, 0.5),
    scale = 0.77
  },
  pd_14_2 = {
    pos = Vector3(0, -20.3, 0.5),
    scale = 0.77
  },
  pd_14_3 = {
    pos = Vector3(0, -27, 0.5),
    scale = 0.74
  },
  pd_14_4 = {
    pos = Vector3(0, -22.5, 0.5),
    scale = 0.71
  },
  pd_14_5 = {
    pos = Vector3(0, -27, 0.5),
    scale = 0.715
  },
  pd_14_6 = {
    pos = Vector3(0, -29.5, 0.5),
    scale = 0.7
  },
  pd_14_7 = {
    pos = Vector3(0, -24, 0.5),
    scale = 0.72
  },
  pd_14_1_1 = {
    pos = Vector3(0, 12, 0),
    delta = 14
  },
  pd_14_1_2 = {
    pos = Vector3(2, 23.5, 0),
    delta = 8
  },
  pd_14_1_3 = {
    pos = Vector3(2, 24.6, 0),
    delta = 5
  },
  pd_14_1_4 = {
    pos = Vector3(2, 27.1, 0),
    delta = 2
  },
  pd_14_1_5 = {
    pos = Vector3(0, 29.4, 0)
  },
  pd_14_2_1 = {
    pos = Vector3(0, 21.2, 0),
    delta = 7
  },
  pd_14_2_2 = {
    pos = Vector3(3, 23.8, 0),
    delta = 3
  },
  pd_14_2_3 = {
    pos = Vector3(-2, 28.6, 0)
  },
  pd_14_2_4 = {
    pos = Vector3(-5, 29.3, 0)
  },
  pd_14_2_5 = {
    pos = Vector3(-2, 31.2, 0)
  }
}
ItemLotionCollectNum = {
  [ItemType.Lotion1_1] = 1,
  [ItemType.Lotion1_2] = 3,
  [ItemType.Lotion1_3] = 8,
  [ItemType.Lotion1_4] = 20,
  [ItemType.Lotion1_5] = 50
}
EItemMode = {
  Current = "current",
  SuperRewards = "SuperRewards"
}
ItemDailyProgressCode = {
  Cube1 = "dailyprogress_cube_1_1",
  Cube2 = "dailyprogress_cube_2_1",
  Cube3 = "dailyprogress_cube_3_1",
  Cube4 = "dailyprogress_cube_4_1",
  Full1 = "dailyprogress_cubefull_1_1",
  Full2 = "dailyprogress_cubefull_2_1",
  Full3 = "dailyprogress_cubefull_3_1",
  Full4 = "dailyprogress_cubefull_4_1",
  Flower1 = "dailyprogress_cubeflower_1_1",
  Flower2 = "dailyprogress_cubeflower_2_1",
  Flower3 = "dailyprogress_cubeflower_3_1",
  Flower4 = "dailyprogress_cubeflower_4_1"
}
