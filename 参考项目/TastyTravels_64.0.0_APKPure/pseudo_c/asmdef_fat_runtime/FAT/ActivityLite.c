/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityLite$$ReadyToCreate RVA 0x2b3b9a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4b9a8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_02b4bb0c + 0x2b4b9c8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4bb10 + 0x2b4b9e0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1d0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1d0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217dddc(&uStack_28,iVar1,param_2,param_3,param_4,param_5,0);
    goto LAB_02b4baf4;
  }
  if (param_3 < 2) {
    if (param_3 != 0) {
      if (param_3 != 1) {
LAB_02b4baa8:
        if (*(int *)(**(int **)(_UNK_02b4bb14 + 0x2b4bab4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02b4e6e0(&uStack_28,param_2,param_3,param_5);
        goto LAB_02b4baf4;
      }
LAB_02b4ba70:
      func_0x02b4e328(&uStack_28,param_2,param_3,param_4,param_5);
      goto LAB_02b4baf4;
    }
  }
  else {
    if (param_3 == 100) {
      func_0x02b4e5f0(&uStack_28,param_2,100,param_4,param_5);
      goto LAB_02b4baf4;
    }
    if (param_3 == 0xb) goto LAB_02b4ba70;
    if (param_3 != 10) goto LAB_02b4baa8;
  }
  func_0x02b4e1b4(&uStack_28,param_2,param_3,param_4,param_5);
LAB_02b4baf4:
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}



// ===== FAT.ActivityLite$$TryCreate RVA 0x2b3c2a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4c2a0(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_34;
  undefined3 uStack_30;
  undefined4 uStack_2c;
  undefined3 uStack_28;
  
  pcVar2 = (char *)(_UNK_02b4c4e8 + 0x2b4c2c0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4c4ec + 0x2b4c2d8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1dc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1dc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217e334(&uStack_40,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,0);
    *param_1 = uStack_40;
    param_1[1] = uStack_3c;
    return;
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x02b4e850(&uStack_40,param_2,0,param_4,param_5,param_7);
      goto LAB_02b4c448;
    }
    if (param_3 == 1) {
      func_0x02b4ea64(&uStack_40,param_2,1,param_4,param_5,param_7);
      goto LAB_02b4c448;
    }
  }
  else {
    if (param_3 == 10) {
      func_0x02b4ece4(&uStack_40,param_2,10,param_4,param_5,param_7);
      goto LAB_02b4c448;
    }
    if (param_3 == 0xb) {
      func_0x02b4eef0(&uStack_40,param_2,0xb,param_4,param_5,param_7);
      goto LAB_02b4c448;
    }
    if (param_3 == 100) {
      func_0x02b4f170(&uStack_40,param_2,100,param_4,param_5,param_6,param_7);
      goto LAB_02b4c448;
    }
  }
  if (*(int *)(**(int **)(_UNK_02b4c4f0 + 0x2b4c3d0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x02b4f2c0(&uStack_40,param_2,param_3,param_7);
LAB_02b4c448:
  uStack_34._0_3_ = (undefined3)(uStack_40 >> 8);
  uStack_34._3_1_ = (undefined1)uStack_3c;
  uStack_30 = (undefined3)(uStack_3c >> 8);
  uStack_28 = uStack_30;
  uStack_2c = uStack_34;
  if ((uStack_40 & 1) != 0) {
    uVar3 = *param_7;
    if (*(int *)(**(int **)(_UNK_02b4c4f4 + 0x2b4c494) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02b4f42c(&uStack_40,uVar3,param_6);
    uStack_34._0_3_ = (undefined3)(uStack_40 >> 8);
    uStack_34._3_1_ = (undefined1)uStack_3c;
    uStack_30 = (undefined3)(uStack_3c >> 8);
  }
  *(undefined4 *)((int)param_1 + 1) = uStack_34;
  *(undefined1 *)param_1 = (undefined1)uStack_40;
  param_1[1] = CONCAT31(uStack_30,uStack_34._3_1_);
  return;
}



// ===== FAT.ActivityLite$$get_Id2 RVA 0x2b3c924 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4c924(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02b4c9f0 + 0x2b4c940);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4c9f4 + 0x2b4c954));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1fb,0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_2 + 0xe0))(param_2,*(undefined4 *)(*param_2 + 0xe4));
    iVar1 = param_2[5];
    puVar3 = *(undefined4 **)(_UNK_02b4c9f8 + 0x2b4c9d8);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038fd264(param_1,uVar2,iVar1,*puVar3);
  }
  else {
    iVar1 = func_0x0229f13c(0x1fb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_18,iVar1,param_2,0);
    *param_1 = uStack_18;
    param_1[1] = uStack_14;
  }
  return;
}



// ===== FAT.ActivityLite$$get_Default RVA 0x2b3dd54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4dd54(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02b4ddac + 0x2b4dd64);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4ddb0 + 0x2b4dd78));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02b4ddb4 + 0x2b4dd8c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return **(undefined4 **)(iVar1 + 0x5c);
}



// ===== FAT.ActivityLite$$get_Id RVA 0x2b3ddb8 =====

undefined4 FUN_02b4ddb8(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.ActivityLite$$set_Id RVA 0x2b3ddc0 =====

void FUN_02b4ddc0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ActivityLite$$get_Type RVA 0x2b3ddc8 =====

undefined4 FUN_02b4ddc8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityLite$$set_Type RVA 0x2b3ddd0 =====

void FUN_02b4ddd0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.ActivityLite$$get_Param RVA 0x2b3ddd8 =====

undefined4 FUN_02b4ddd8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.ActivityLite$$set_Param RVA 0x2b3dde0 =====

void FUN_02b4dde0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.ActivityLite$$get_From RVA 0x2b3dde8 =====

undefined4 FUN_02b4dde8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityLite$$set_From RVA 0x2b3ddf0 =====

void FUN_02b4ddf0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.ActivityLite$$get_OpenCount RVA 0x2b3ddf8 =====

undefined4 FUN_02b4ddf8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.ActivityLite$$set_OpenCount RVA 0x2b3de00 =====

void FUN_02b4de00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== FAT.ActivityLite$$get_StartTS RVA 0x2b3de08 =====

undefined8 FUN_02b4de08(int param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ===== FAT.ActivityLite$$set_StartTS RVA 0x2b3de10 =====

void FUN_02b4de10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  return;
}



// ===== FAT.ActivityLite$$get_EndTS RVA 0x2b3de20 =====

undefined8 FUN_02b4de20(int param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ===== FAT.ActivityLite$$set_EndTS RVA 0x2b3de28 =====

void FUN_02b4de28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  return;
}



// ===== FAT.ActivityLite$$get_WillRecord RVA 0x2b3de38 =====

undefined1 FUN_02b4de38(int param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



// ===== FAT.ActivityLite$$set_WillRecord RVA 0x2b3de40 =====

void FUN_02b4de40(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== FAT.ActivityLite$$Exist RVA 0x2b3de48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b4de48(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02b4df50 + 0x2b4de60);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4df54 + 0x2b4de74));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x3251,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x3251,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_022094d8 + 0x22093e4);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022094dc + 0x22093f8),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = iStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    uStack_50 = param_1;
    iStack_4c = param_2;
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_022094e0 + 0x2209460),&uStack_50);
    func_0x01485288(&uStack_38,uVar1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar1 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar1,&uStack_38,uVar4,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (param_2 < 2) {
    if (param_2 != 0) {
      if (param_2 != 1) goto LAB_02b4df18;
      goto LAB_02b4dfc8;
    }
  }
  else {
    if (param_2 == 100) {
      return 1;
    }
    if (param_2 == 0xb) {
LAB_02b4dfc8:
      pcVar6 = (char *)(_UNK_02b4e098 + 0x2b4dfe0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b4e09c + 0x2b4dff4));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x3253,0);
      if (iVar3 == 0) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0xd0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x03d65140(iVar3,param_1,
                                *(undefined4 *)
                                 (*(int *)(*(int *)(**(int **)(_UNK_02b4e0a0 + 0x2b4e08c) + 0x10) +
                                          0x60) + 0x84));
        return ~uVar2 >> 0x1f;
      }
      iVar3 = func_0x0229f13c(0x3253,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto LAB_02198554;
    }
    if (param_2 != 10) {
LAB_02b4df18:
      if (*(int *)(**(int **)(_UNK_02b4df58 + 0x2b4df24) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02b4e0a4(param_1,param_2);
      return 0;
    }
  }
  iVar3 = func_0x0229f06c(0x3252,0);
  if (iVar3 == 0) {
    iVar3 = func_0x01825050(param_1,0);
    return (uint)(iVar3 != 0);
  }
  iVar3 = func_0x0229f13c(0x3252,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
LAB_02198554:
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = iStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485238(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar1 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar1,&uStack_38,uVar4,0,0);
  uVar2 = func_0x0245496c(&uStack_38,0,0);
  return uVar2;
}



// ===== FAT.ActivityLite$$<Exist>g__Unknown|44_0 RVA 0x2b3e0a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4e0a4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02b4e190 + 0x2b4e0c0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4e194 + 0x2b4e0d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b4e198 + 0x2b4e0e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b4e19c + 0x2b4e0ec));
    func_0x01384978(*(undefined4 *)(_UNK_02b4e1a0 + 0x2b4e0f8));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_02b4e1a4 + 0x2b4e110);
  uStack_14 = param_2;
  uVar1 = func_0x01384abc(*puVar4,&uStack_14);
  uStack_18 = param_1;
  uVar2 = func_0x01384abc(*puVar4,&uStack_18);
  uVar1 = func_0x0467277c(**(undefined4 **)(_UNK_02b4e1a8 + 0x2b4e140),
                          **(undefined4 **)(_UNK_02b4e1ac + 0x2b4e14c),uVar1,uVar2,0);
  if (*(int *)(**(int **)(_UNK_02b4e1b0 + 0x2b4e168) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar1,0);
  return 0;
}



// ===== FAT.ActivityLite$$<ReadyToCreate>g__Unknown|45_0 RVA 0x2b3e6e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4e6e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02b4e81c + 0x2b4e700);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4e820 + 0x2b4e718));
    func_0x01384978(*(undefined4 *)(_UNK_02b4e824 + 0x2b4e724));
    func_0x01384978(*(undefined4 *)(_UNK_02b4e828 + 0x2b4e730));
    func_0x01384978(*(undefined4 *)(_UNK_02b4e82c + 0x2b4e73c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4e830 + 0x2b4e748));
    func_0x01384978(*(undefined4 *)(_UNK_02b4e834 + 0x2b4e754));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_02b4e838 + 0x2b4e76c);
  uStack_1c = param_3;
  uVar1 = func_0x01384abc(*puVar4,&uStack_1c);
  uStack_20 = param_2;
  uVar2 = func_0x01384abc(*puVar4,&uStack_20);
  uVar1 = func_0x0467277c(**(undefined4 **)(_UNK_02b4e83c + 0x2b4e7a0),
                          **(undefined4 **)(_UNK_02b4e840 + 0x2b4e7ac),uVar1,uVar2,0);
  if (*(int *)(**(int **)(_UNK_02b4e844 + 0x2b4e7c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar1,0);
  *param_4 = 0;
  param_4[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_4[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_4[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar1 = **(undefined4 **)(_UNK_02b4e848 + 0x2b4e7f8);
  puVar4 = *(undefined4 **)(_UNK_02b4e84c + 0x2b4e804);
  *param_1 = 0;
  param_1[1] = 0;
  func_0x038f3b0c(param_1,0,uVar1,*puVar4);
  return;
}



// ===== FAT.ActivityLite$$<TryCreate>g__Unknown|46_0 RVA 0x2b3f2c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4f2c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02b4f3f8 + 0x2b4f2e0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4f3fc + 0x2b4f2f8));
    func_0x01384978(*(undefined4 *)(_UNK_02b4f400 + 0x2b4f304));
    func_0x01384978(*(undefined4 *)(_UNK_02b4f404 + 0x2b4f310));
    func_0x01384978(*(undefined4 *)(_UNK_02b4f408 + 0x2b4f31c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4f40c + 0x2b4f328));
    func_0x01384978(*(undefined4 *)(_UNK_02b4f410 + 0x2b4f334));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_02b4f414 + 0x2b4f34c);
  uStack_1c = param_3;
  uVar1 = func_0x01384abc(*puVar4,&uStack_1c);
  uStack_20 = param_2;
  uVar2 = func_0x01384abc(*puVar4,&uStack_20);
  uVar1 = func_0x0467277c(**(undefined4 **)(_UNK_02b4f418 + 0x2b4f380),
                          **(undefined4 **)(_UNK_02b4f41c + 0x2b4f38c),uVar1,uVar2,0);
  if (*(int *)(**(int **)(_UNK_02b4f420 + 0x2b4f3a4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar1,0);
  *param_4 = 0;
  uVar1 = **(undefined4 **)(_UNK_02b4f424 + 0x2b4f3d4);
  puVar4 = *(undefined4 **)(_UNK_02b4f428 + 0x2b4f3e0);
  *param_1 = 0;
  param_1[1] = 0;
  func_0x038f3b0c(param_1,0,uVar1,*puVar4);
  return;
}



// ===== FAT.ActivityLite$$CheckType RVA 0x2b3f42c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4f42c(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_02b4f5b8 + 0x2b4f44c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4f5bc + 0x2b4f460));
    func_0x01384978(*(undefined4 *)(_UNK_02b4f5c0 + 0x2b4f46c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4f5c4 + 0x2b4f478));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1eb,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*param_2 + 0xf0))(param_2,*(undefined4 *)(*param_2 + 0xf4));
    if (iVar1 != param_3) {
      puVar5 = *(undefined4 **)(_UNK_02b4f5c8 + 0x2b4f538);
      iStack_20 = param_3;
      uVar2 = func_0x01384abc(*puVar5,&iStack_20);
      uStack_24 = (**(code **)(*param_2 + 0xf0))(param_2,*(undefined4 *)(*param_2 + 0xf4));
      uVar3 = func_0x01384abc(*puVar5,&uStack_24);
      uVar2 = func_0x0467272c(**(undefined4 **)(_UNK_02b4f5cc + 0x2b4f588),uVar2,uVar3,0);
      puVar5 = *(undefined4 **)(_UNK_02b4f5d0 + 0x2b4f5a0);
      *param_1 = 0;
      param_1[1] = 0;
      uVar3 = *puVar5;
    }
    else {
      uVar2 = 0;
      uVar3 = **(undefined4 **)(_UNK_02b4f5d4 + 0x2b4f518);
      *param_1 = 0;
      param_1[1] = 0;
    }
    func_0x038f3b0c(param_1,iVar1 == param_3,uVar2,uVar3);
  }
  else {
    iVar1 = func_0x0229f13c(0x1eb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217e4fc(&iStack_20,iVar1,param_2,param_3,0);
    *param_1 = iStack_20;
    param_1[1] = iStack_1c;
  }
  return;
}



// ===== FAT.ActivityLite$$TrySetup RVA 0x2b3f5d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02b4f5d8(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  pcVar8 = (char *)(_UNK_02b4fcc4 + 0x2b4f5f8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcc8 + 0x2b4f610));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fccc + 0x2b4f61c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcd0 + 0x2b4f628));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcd4 + 0x2b4f634));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcd8 + 0x2b4f640));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcdc + 0x2b4f64c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fce0 + 0x2b4f658));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fce4 + 0x2b4f664));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fce8 + 0x2b4f670));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcec + 0x2b4f67c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcf0 + 0x2b4f688));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcf4 + 0x2b4f694));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcf8 + 0x2b4f6a0));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fcfc + 0x2b4f6ac));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fd00 + 0x2b4f6b8));
    *pcVar8 = '\x01';
  }
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  iVar1 = func_0x0229f06c(0x245a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x245a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x021f9280(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0)
    ;
    return piVar2;
  }
  piVar2 = param_1;
  if (param_1 == (int *)0x0) goto LAB_02b4f924;
  iVar1 = *param_1;
  uVar3 = (uint)*(byte *)(iVar1 + 0xb8);
  uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b4fd04 + 0x2b4f750) + 0xb8);
  if ((uVar3 < uVar7) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_02b4fd04 + 0x2b4f750))) {
    uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b4fd08 + 0x2b4f784) + 0xb8);
    if ((uVar3 < uVar7) ||
       (iVar6 = *(int *)(iVar1 + 100),
       *(int *)(iVar6 + uVar7 * 4 + -4) != **(int **)(_UNK_02b4fd08 + 0x2b4f784))) {
      uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b4fd18 + 0x2b4f7b0) + 0xb8);
      if ((uVar3 < uVar7) ||
         (iVar6 = *(int *)(iVar1 + 100),
         *(int *)(iVar6 + uVar7 * 4 + -4) != **(int **)(_UNK_02b4fd18 + 0x2b4f7b0))) {
        uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b4fd28 + 0x2b4f7dc) + 0xb8);
        if ((uVar7 <= uVar3) &&
           ((param_3 == 100 &&
            (*(int *)(*(int *)(iVar1 + 100) + uVar7 * 4 + -4) ==
             **(int **)(_UNK_02b4fd28 + 0x2b4f7dc))))) goto LAB_02b4f8cc;
      }
      else {
        if (param_3 == 1) {
LAB_02b4f8cc:
          if (*(int *)(**(int **)(_UNK_02b4fd10 + 0x2b4f8dc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          FUN_02b4f42c(&uStack_38,param_1,param_6);
          uVar5 = **(undefined4 **)(_UNK_02b4fd14 + 0x2b4f914);
          uVar3 = uStack_38;
          iVar1 = iStack_34;
          goto LAB_02b4fa08;
        }
        iVar1 = **(int **)(_UNK_02b4fd1c + 0x2b4f8a8);
        uVar7 = (uint)*(byte *)(iVar1 + 0xb8);
        if ((uVar7 <= uVar3) && (param_3 == 0xb)) goto LAB_02b4f8bc;
      }
    }
    else {
      if (param_3 == 0) goto LAB_02b4f8cc;
      iVar1 = **(int **)(_UNK_02b4fd0c + 0x2b4f87c);
      uVar7 = (uint)*(byte *)(iVar1 + 0xb8);
      if ((uVar7 <= uVar3) && (param_3 == 10)) {
LAB_02b4f8bc:
        if (*(int *)(iVar6 + uVar7 * 4 + -4) == iVar1) goto LAB_02b4f8cc;
      }
    }
LAB_02b4f924:
    if (param_7 == 0) {
      uStack_3c = 0;
      uStack_40 = 0;
      func_0x038f3b0c(&uStack_40,0,**(undefined4 **)(_UNK_02b4fd34 + 0x2b4f9c0),
                      **(undefined4 **)(_UNK_02b4fd38 + 0x2b4f9cc));
      uVar5 = **(undefined4 **)(_UNK_02b4fd3c + 0x2b4f9f0);
      uVar3 = uStack_40;
      iVar1 = uStack_3c;
      goto LAB_02b4fa08;
    }
    if (*(int *)(**(int **)(_UNK_02b4fd20 + 0x2b4f938) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_02b4c2a0(&uStack_38,param_2,param_3,param_4,param_5,param_6,&piStack_2c);
    puVar4 = *(undefined4 **)(_UNK_02b4fd24 + 0x2b4f988);
    piVar2 = piStack_2c;
  }
  else {
    if (*(int *)(**(int **)(_UNK_02b4fd2c + 0x2b4f814) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_02b4c2a0(&uStack_38,param_2,param_3,param_4,param_5,param_6,&piStack_28);
    puVar4 = *(undefined4 **)(_UNK_02b4fd30 + 0x2b4f864);
    piVar2 = piStack_28;
  }
  uVar5 = *puVar4;
  uVar3 = uStack_38;
  iVar1 = iStack_34;
LAB_02b4fa08:
  piStack_30 = (int *)0x0;
  iStack_34 = 0;
  uStack_38 = 0;
  func_0x0385a8d8(&uStack_38,uVar3,iVar1,piVar2,uVar5);
  piVar2 = piStack_30;
  iVar1 = iStack_34;
  if ((uStack_38 & 1) == 0) {
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b4fd40 + 0x2b4fa30),6);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar9 = *(int **)(_UNK_02b4fd44 + 0x2b4fa50);
    iVar6 = *piVar9;
    if ((iVar6 != 0) && (iVar6 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar2 + 0x20)), iVar6 == 0)
       ) {
      uVar5 = func_0x01384c10();
      func_0x01384aa0(uVar5,0);
    }
    iVar6 = *piVar9;
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar6;
    if ((iVar1 != 0) && (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar6 == 0)
       ) {
      uVar5 = func_0x01384c10();
      func_0x01384aa0(uVar5,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    piVar2[5] = iVar1;
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0487582c(param_1,0);
    if ((iVar1 != 0) && (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar6 == 0)
       ) {
      uVar5 = func_0x01384c10();
      func_0x01384aa0(uVar5,0);
    }
    if ((uint)piVar2[3] < 3) {
      func_0x01384bf4();
    }
    piVar2[6] = iVar1;
    puVar4 = *(undefined4 **)(_UNK_02b4fd48 + 0x2b4fb3c);
    uStack_38 = param_3;
    iVar1 = func_0x01384abc(*puVar4,&uStack_38);
    if ((iVar1 != 0) && (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar6 == 0)
       ) {
      uVar5 = func_0x01384c10();
      func_0x01384aa0(uVar5,0);
    }
    if ((uint)piVar2[3] < 4) {
      func_0x01384bf4();
    }
    piVar2[7] = iVar1;
    uStack_40 = param_2;
    iVar1 = func_0x01384abc(*puVar4,&uStack_40);
    if ((iVar1 != 0) && (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar6 == 0)
       ) {
      uVar5 = func_0x01384c10();
      func_0x01384aa0(uVar5,0);
    }
    if ((uint)piVar2[3] < 5) {
      func_0x01384bf4();
    }
    piVar2[8] = iVar1;
    uStack_44 = param_4;
    iVar1 = func_0x01384abc(*puVar4,&uStack_44);
    if ((iVar1 != 0) && (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar6 == 0)
       ) {
      uVar5 = func_0x01384c10();
      func_0x01384aa0(uVar5,0);
    }
    if ((uint)piVar2[3] < 6) {
      func_0x01384bf4();
    }
    piVar2[9] = iVar1;
    uVar5 = func_0x046727d0(**(undefined4 **)(_UNK_02b4fd4c + 0x2b4fc44),piVar2,0);
    if (*(int *)(**(int **)(_UNK_02b4fd50 + 0x2b4fc58) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar5,0);
    piVar2 = param_1;
  }
  else {
    if (piStack_30 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0x150))
              (piVar2,param_2,param_3,param_4,param_5,param_6,*(undefined4 *)(*piVar2 + 0x154));
  }
  return piVar2;
}



// ===== FAT.ActivityLite$$IdCompact RVA 0x2b3fd54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4fd54(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_02b4fee8 + 0x2b4fd68);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b4feec + 0x2b4fd7c));
    func_0x01384978(*(undefined4 *)(_UNK_02b4fef0 + 0x2b4fd88));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2770,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2770,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_1;
  piVar10 = *(int **)(_UNK_02b4fef4 + 0x2b4fdf0);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar7 = *piVar10;
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar7) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_02b4fe38;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar7,0);
LAB_02b4fe38:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar7 = *param_1;
  iVar3 = *piVar10;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar7 + *piVar10 * 8 + 200);
        goto LAB_02b4fea8;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,iVar3,1);
LAB_02b4fea8:
  iVar7 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (*(int *)(**(int **)(_UNK_02b4fef8 + 0x2b4fec8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0229f06c(0x2771,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x2771,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485238(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,iVar7,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  return iVar7 * 100000000 + iVar1;
}



// ===== FAT.ActivityLite$$IdCompact RVA 0x2b3fefc =====

int FUN_02b4fefc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x2771,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2771,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  return param_2 * 100000000 + param_1;
}



// ===== FAT.ActivityLite$$IdUnwrap RVA 0x2b3ff60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4ff60(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02b50030 + 0x2b4ff7c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b50034 + 0x2b4ff90));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x324e,0);
  if (iVar1 == 0) {
    puVar2 = *(undefined4 **)(_UNK_02b50038 + 0x2b50004);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038fd264(param_1,param_2 % 100000000,param_2 / 100000000,*puVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0x324e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022091a0(&uStack_18,iVar1,param_2,0);
    *param_1 = uStack_18;
    param_1[1] = uStack_14;
  }
  return;
}



// ===== FAT.ActivityLite$$InfoCompact RVA 0x2b4003c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b5003c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02b50304 + 0x2b50054);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b50308 + 0x2b50068));
    func_0x01384978(*(undefined4 *)(_UNK_02b5030c + 0x2b50074));
    func_0x01384978(*(undefined4 *)(_UNK_02b50310 + 0x2b50080));
    func_0x01384978(*(undefined4 *)(_UNK_02b50314 + 0x2b5008c));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x276e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x276e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar8 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5,0,0);
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *param_1;
  piVar9 = *(int **)(_UNK_02b50318 + 0x2b500f8);
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar7 = *piVar9;
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar7) {
        puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
        goto LAB_02b50140;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,iVar7,0);
LAB_02b50140:
  uStack_28 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *param_1;
  iVar7 = *piVar9;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar7) {
        puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 200);
        goto LAB_02b501b0;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_1,iVar7,1);
LAB_02b501b0:
  uVar10 = (*(code *)*puVar3)(param_1,puVar3[1]);
  uVar11 = 0;
  uVar5 = 0;
  if (param_1 != (int *)0x0) {
    uVar5 = 0;
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_02b5031c + 0x2b501e4) + 0xb8);
    if ((uVar4 <= *(byte *)(*param_1 + 0xb8)) &&
       (uVar5 = 0,
       *(int *)(*(int *)(*param_1 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_02b5031c + 0x2b501e4))
       ) {
      uVar5 = FUN_02b3c4a4(param_1);
    }
  }
  piVar6 = *(int **)(_UNK_02b50320 + 0x2b5022c);
  piVar9 = (int *)func_0x01384ab8(param_1,*piVar6);
  uVar1 = uStack_28;
  if (piVar9 != (int *)0x0) {
    iVar2 = *piVar9;
    iVar7 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar7) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 200);
          goto LAB_02b502b8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar9,iVar7,1);
LAB_02b502b8:
    uVar11 = (*(code *)*puVar3)(piVar9,puVar3[1]);
  }
  if (*(int *)(**(int **)(_UNK_02b50324 + 0x2b502d8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x02b50328(uVar1,uVar10,uVar5,uVar11);
  return;
}



// ===== FAT.ActivityLite$$InfoCompact RVA 0x2b40328 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b50328(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02b5055c + 0x2b50348);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b50560 + 0x2b50360));
    func_0x01384978(*(undefined4 *)(_UNK_02b50564 + 0x2b5036c));
    func_0x01384978(*(undefined4 *)(_UNK_02b50568 + 0x2b50378));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x276f,0);
  if (iVar1 == 0) {
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b5056c + 0x2b503e4),4);
    puVar6 = *(undefined4 **)(_UNK_02b50570 + 0x2b503fc);
    uStack_24 = param_1;
    iVar1 = func_0x01384abc(*puVar6,&uStack_24);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    uStack_28 = param_2;
    iVar1 = func_0x01384abc(*puVar6,&uStack_28);
    if ((iVar1 != 0) && (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    piVar2[5] = iVar1;
    uStack_2c = param_3;
    iVar1 = func_0x01384abc(*puVar6,&uStack_2c);
    if ((iVar1 != 0) && (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar2[3] < 3) {
      func_0x01384bf4();
    }
    piVar2[6] = iVar1;
    if ((param_4 != 0) &&
       (iVar1 = func_0x01384ab8(param_4,*(undefined4 *)(*piVar2 + 0x20)), iVar1 == 0)) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar2[3] < 4) {
      func_0x01384bf4();
    }
    piVar2[7] = param_4;
    func_0x046727d0(**(undefined4 **)(_UNK_02b50574 + 0x2b50550),piVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x276f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021fce78(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityLite$$InfoUnwrap RVA 0x2b40578 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b50578(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_02b50aa4 + 0x2b50594);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b50aa8 + 0x2b505a8));
    func_0x01384978(*(undefined4 *)(_UNK_02b50aac + 0x2b505b4));
    func_0x01384978(*(undefined4 *)(_UNK_02b50ab0 + 0x2b505c0));
    func_0x01384978(*(undefined4 *)(_UNK_02b50ab4 + 0x2b505cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b50ab8 + 0x2b505d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b50abc + 0x2b505e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b50ac0 + 0x2b505f0));
    *pcVar7 = '\x01';
  }
  iStack_2c = 0;
  iStack_30 = 0;
  iVar1 = func_0x0229f06c(0x27c5,0);
  if (iVar1 == 0) {
    pcVar7 = (char *)(_UNK_02b50ac4 + 0x2b50668);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b50ac8 + 0x2b5067c));
      *pcVar7 = '\x01';
    }
    if (param_2 == 0) {
      uVar8 = 0;
      iVar1 = 0;
    }
    else {
      iVar1 = func_0x0466f590(param_2,0);
      uVar8 = *(uint *)(param_2 + 8);
    }
    puVar11 = *(undefined4 **)(_UNK_02b50acc + 0x2b506b8);
    uVar2 = func_0x01adfe1c(iVar1,uVar8,0x5f,*puVar11);
    piVar10 = *(int **)(_UNK_02b50ad0 + 0x2b506dc);
    iVar9 = *piVar10;
    if (uVar8 < uVar2) {
      func_0x0484bb74(0);
    }
    if ((*(ushort *)(*(int *)(iVar9 + 0x10) + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    uVar3 = func_0x048221ac(iVar1,uVar2,7,0,0);
    iVar9 = *piVar10;
    uVar2 = uVar2 + 1;
    if (uVar8 < uVar2) {
      func_0x0484bb74(0);
    }
    if ((*(ushort *)(*(int *)(iVar9 + 0x10) + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    uVar8 = uVar8 - uVar2;
    iVar1 = iVar1 + uVar2 * 2;
    uVar2 = func_0x01adfe1c(iVar1,uVar8,0x5f,*puVar11);
    iVar9 = *piVar10;
    if (uVar8 < uVar2) {
      func_0x0484bb74(0);
    }
    if ((*(ushort *)(*(int *)(iVar9 + 0x10) + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    uVar4 = func_0x048221ac(iVar1,uVar2,7,0,0);
    iVar9 = *piVar10;
    uVar2 = uVar2 + 1;
    if (uVar8 < uVar2) {
      func_0x0484bb74(0);
    }
    if ((*(ushort *)(*(int *)(iVar9 + 0x10) + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    uVar8 = uVar8 - uVar2;
    iVar1 = iVar1 + uVar2 * 2;
    uVar2 = func_0x01adfe1c(iVar1,uVar8,0x5f,*puVar11);
    if ((int)uVar2 < 0) {
      uVar5 = func_0x048221ac(iVar1,uVar8,7,0,0);
      uStack_5c = 0;
      uStack_60 = 0;
      func_0x038ff104(&uStack_60,uVar5,
                      **(undefined4 **)(**(int **)(_UNK_02b50ad4 + 0x2b508f4) + 0x5c),
                      **(undefined4 **)(_UNK_02b50ad8 + 0x2b50904));
    }
    else {
      iVar9 = *piVar10;
      if (uVar8 < uVar2) {
        func_0x0484bb74(0);
      }
      if ((*(ushort *)(*(int *)(iVar9 + 0x10) + 0xbd) & 1) == 0) {
        func_0x014001f0();
      }
      uVar5 = func_0x048221ac(iVar1,uVar2,7,0,0);
      iVar9 = *piVar10;
      if (uVar8 <= uVar2) {
        func_0x0484bb74(0);
      }
      if ((*(ushort *)(*(int *)(iVar9 + 0x10) + 0xbd) & 1) == 0) {
        func_0x014001f0();
      }
      iStack_2c = uVar8 - (uVar2 + 1);
      iStack_30 = iVar1 + (uVar2 + 1) * 2;
      uVar6 = func_0x0362c518(&iStack_30,**(undefined4 **)(_UNK_02b50adc + 0x2b5088c));
      uStack_5c = 0;
      uStack_60 = 0;
      func_0x038ff104(&uStack_60,uVar5,uVar6,**(undefined4 **)(_UNK_02b50ae0 + 0x2b508ac));
    }
    uVar6 = uStack_5c;
    uVar5 = uStack_60;
    uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    uStack_50 = 0;
    func_0x0395b740(&uStack_60,1,uVar3,uVar4,uVar5,uVar6,
                    **(undefined4 **)(_UNK_02b50ae4 + 0x2b5093c));
  }
  else {
    iVar1 = func_0x0229f13c(0x27c5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021fdd60(&uStack_60,iVar1,param_2,0);
  }
  *param_1 = uStack_60;
  param_1[1] = uStack_5c;
  param_1[2] = uStack_58;
  param_1[3] = uStack_54;
  param_1[4] = uStack_50;
  return;
}



// ===== FAT.ActivityLite$$ToInfo RVA 0x2b40af8 =====

void FUN_02b50af8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x24a4,0);
  if (iVar1 == 0) {
    uStack_28 = 0;
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  else {
    iVar1 = func_0x0229f13c(0x24a4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021f9ed0(&uStack_28,iVar1,param_2,0);
  }
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  return;
}



// ===== FAT.ActivityLite$$Match RVA 0x2b40b68 =====

undefined4
FUN_02b50b68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x2458,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x2458,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021f8fe0(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar2;
}



// ===== FAT.ActivityLite$$.ctor RVA 0x2b40be0 =====

void FUN_02b50be0(void)

{
  return;
}



// ===== FAT.ActivityLite$$.cctor RVA 0x2b40be8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b50be8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02b50c50 + 0x2b50bf8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b50c54 + 0x2b50c0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b50c58 + 0x2b50c18));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b50c5c + 0x2b50c2c));
  func_0x02b50c64();
  **(undefined4 **)(**(int **)(_UNK_02b50c60 + 0x2b50c44) + 0x5c) = uVar1;
  return;
}


