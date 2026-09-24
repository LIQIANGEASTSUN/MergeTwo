/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.GirdReward$$.ctor RVA 0x20ff814 =====

void FUN_0210f814(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.Merge.GirdReward$$CanRefreshGirdReward RVA 0x20ff83c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210f83c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_0210f8ec + 0x210f850);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210f8f0 + 0x210f864));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x164d,0);
  if (iVar1 == 0) {
    bVar6 = *(char *)(param_1 + 0xc) != '\0';
    iVar1 = 0;
    if (bVar6) {
      iVar1 = *(int *)(param_1 + 0x14);
    }
    if (bVar6 && iVar1 != 0) {
      iVar1 = func_0x03e70e60(iVar1,**(undefined4 **)(_UNK_0210f8f4 + 0x210f8d4));
      uVar4 = 0;
      if (0 < iVar1) {
        uVar4 = 1;
      }
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x164d,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.Merge.GirdReward$$IsWaitAnim RVA 0x20ff8f8 =====

uint FUN_0210f8f8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x164f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x164f,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)*(byte *)(param_1 + 0x18);
}



// ===== FAT.Merge.GirdReward$$EndWaitAnim RVA 0x20ff94c =====

void FUN_0210f94c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa031,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa031,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



// ===== FAT.Merge.GirdReward$$TryGetGirdRewardData RVA 0x20ff9a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0210f9a4(int param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_0210fac8 + 0x210f9c4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210facc + 0x210f9d8));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x164c,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    iVar1 = FUN_0210f83c(param_1);
    if (param_2 != 0 && iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_0210cd7c(&uStack_20,param_2);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03e73154(iVar1,uStack_20,uStack_1c,param_3,
                              **(undefined4 **)(_UNK_0210fad0 + 0x210fa94));
      if (iVar1 != 0) {
        iVar1 = *param_3;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = (uint)(*(char *)(iVar1 + 0x18) == '\0');
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x164c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021d0cec(iVar1,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.Merge.GirdReward$$TryConsumeWhenEnterBoard RVA 0x20ffad4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210fad4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
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
  
  pcVar7 = (char *)(_UNK_02110038 + 0x210faec);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211003c + 0x210fb00));
    func_0x01384978(*(undefined4 *)(_UNK_02110040 + 0x210fb0c));
    func_0x01384978(*(undefined4 *)(_UNK_02110044 + 0x210fb18));
    func_0x01384978(*(undefined4 *)(_UNK_02110048 + 0x210fb24));
    func_0x01384978(*(undefined4 *)(_UNK_0211004c + 0x210fb30));
    func_0x01384978(*(undefined4 *)(_UNK_02110050 + 0x210fb3c));
    func_0x01384978(*(undefined4 *)(_UNK_02110054 + 0x210fb48));
    func_0x01384978(*(undefined4 *)(_UNK_02110058 + 0x210fb54));
    func_0x01384978(*(undefined4 *)(_UNK_0211005c + 0x210fb60));
    func_0x01384978(*(undefined4 *)(_UNK_02110060 + 0x210fb6c));
    func_0x01384978(*(undefined4 *)(_UNK_02110064 + 0x210fb78));
    func_0x01384978(*(undefined4 *)(_UNK_02110068 + 0x210fb84));
    func_0x01384978(*(undefined4 *)(_UNK_0211006c + 0x210fb90));
    func_0x01384978(*(undefined4 *)(_UNK_02110070 + 0x210fb9c));
    *pcVar7 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar8 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iVar2 = func_0x0229f06c(0xa02a,0);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x60);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar8 = 0;
      iVar2 = func_0x01cc0100(iVar2,0x91,0);
      if (iVar2 != 0) {
        iVar3 = func_0x021100b4(param_1);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = *(int *)(param_1 + 8);
        }
        if (iVar3 != 0 && iVar2 != 0) {
          uVar8 = 0;
          iVar2 = func_0x02139cf4(iVar2,0);
          if (iVar2 != 0) {
            if ((*(int *)(param_1 + 0x14) != 0) &&
               (iVar3 = func_0x03e70e60(*(int *)(param_1 + 0x14),
                                        **(undefined4 **)(_UNK_02110074 + 0x210fcb8)), 0 < iVar3)) {
              iVar3 = *(int *)(param_1 + 0x14);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x03e70e70(iVar3,**(undefined4 **)(_UNK_02110078 + 0x210fce0));
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              func_0x024548e0(&uStack_68,iVar3,**(undefined4 **)(_UNK_0211007c + 0x210fd0c));
              uStack_28 = uStack_58;
              uStack_38 = uStack_68;
              uStack_34 = uStack_64;
              uStack_30 = uStack_60;
              uStack_2c = uStack_5c;
              iStack_6c = 0;
              while (iVar3 = func_0x03fef520(&uStack_38,**(undefined4 **)(_UNK_0211008c + 0x210fd44)
                                            ), uVar1 = uStack_28, uVar8 = uStack_2c, iVar3 != 0) {
                iVar3 = FUN_020e81ec(iVar2,uStack_2c,uStack_28,0);
                if ((iVar3 == 0) || (iVar3 = func_0x0211015c(), iVar3 == 0)) {
                  if (iStack_6c == 0) {
                    iStack_6c = func_0x01384be4(**(undefined4 **)(_UNK_02110080 + 0x210fd94));
                    func_0x032fd658(iStack_6c,**(undefined4 **)(_UNK_02110084 + 0x210fda8));
                    if (iStack_6c == 0) {
                      iStack_6c = 0;
                      func_0x01384bf0();
                    }
                  }
                  uVar4 = *(uint *)(iStack_6c + 0xc);
                  iVar3 = *(int *)(iStack_6c + 8);
                  piVar5 = *(int **)(_UNK_02110088 + 0x210fdf0);
                  *(int *)(iStack_6c + 0x10) = *(int *)(iStack_6c + 0x10) + 1;
                  iVar6 = *piVar5;
                  if (iVar3 == 0) {
                    func_0x01384bf0();
                  }
                  if (uVar4 < *(uint *)(iVar3 + 0xc)) {
                    *(uint *)(iStack_6c + 0xc) = uVar4 + 1;
                    iVar3 = iVar3 + uVar4 * 8;
                    *(undefined4 *)(iVar3 + 0x10) = uVar8;
                    *(undefined4 *)(iVar3 + 0x14) = uVar1;
                  }
                  else {
                    func_0x032fdee4(iStack_6c,uVar8,uVar1,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                }
              }
              func_0x03fef51c(&uStack_38,**(undefined4 **)(_UNK_02110090 + 0x210fe58));
              if (iStack_6c != 0) {
                func_0x032fec64(&uStack_68,iStack_6c,**(undefined4 **)(_UNK_02110098 + 0x210fe7c));
                uStack_40 = uStack_58;
                uStack_50 = uStack_68;
                uStack_4c = uStack_64;
                uStack_48 = uStack_60;
                uStack_44 = uStack_5c;
                puVar9 = *(undefined4 **)(_UNK_0211009c + 0x210fea8);
                puVar10 = *(undefined4 **)(_UNK_021100a0 + 0x210feb0);
                while (iVar2 = func_0x03f69644(&uStack_50,*puVar9), uVar1 = uStack_40,
                      uVar8 = uStack_44, iVar2 != 0) {
                  iVar2 = *(int *)(param_1 + 0x14);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x03e729dc(iVar2,uVar8,uVar1,*puVar10);
                }
                func_0x03f69640(&uStack_50,**(undefined4 **)(_UNK_021100a8 + 0x210fef8));
              }
            }
            uVar8 = 1;
            *(undefined1 *)(param_1 + 0x18) = 1;
            *(undefined1 *)(param_1 + 0xc) = 1;
            func_0x019a27f8(0);
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa02a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x021742f8(iVar2,param_1,0);
  }
  return uVar8;
}



// ===== FAT.Merge.GirdReward$$_IsLevelUnlock RVA 0x21000b4 =====

undefined4 FUN_021100b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x9d52,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d52,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if (-1 < *(int *)(param_1 + 0x10)) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar1 = func_0x01dd2c04(iVar1,0);
    if (*(int *)(param_1 + 0x10) <= iVar1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.Merge.GirdReward$$OnExecuteAnim RVA 0x21001b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021101b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02110774 + 0x21101cc);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02110778 + 0x21101e0));
    func_0x01384978(*(undefined4 *)(_UNK_0211077c + 0x21101ec));
    func_0x01384978(*(undefined4 *)(_UNK_02110780 + 0x21101f8));
    func_0x01384978(*(undefined4 *)(_UNK_02110784 + 0x2110204));
    func_0x01384978(*(undefined4 *)(_UNK_02110788 + 0x2110210));
    func_0x01384978(*(undefined4 *)(_UNK_0211078c + 0x211021c));
    func_0x01384978(*(undefined4 *)(_UNK_02110790 + 0x2110228));
    func_0x01384978(*(undefined4 *)(_UNK_02110794 + 0x2110234));
    func_0x01384978(*(undefined4 *)(_UNK_02110798 + 0x2110240));
    func_0x01384978(*(undefined4 *)(_UNK_0211079c + 0x211024c));
    func_0x01384978(*(undefined4 *)(_UNK_021107a0 + 0x2110258));
    func_0x01384978(*(undefined4 *)(_UNK_021107a4 + 0x2110264));
    func_0x01384978(*(undefined4 *)(_UNK_021107a8 + 0x2110270));
    func_0x01384978(*(undefined4 *)(_UNK_021107ac + 0x211027c));
    func_0x01384978(*(undefined4 *)(_UNK_021107b0 + 0x2110288));
    func_0x01384978(*(undefined4 *)(_UNK_021107b4 + 0x2110294));
    func_0x01384978(*(undefined4 *)(_UNK_021107b8 + 0x21102a0));
    *pcVar9 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xa02c,0);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(param_1 + 8),0), iVar1 != 0)) {
      if (*(int *)(param_1 + 0x14) == 0) {
        uStack_39 = *(undefined1 *)(param_1 + 0xc);
        puVar10 = *(undefined4 **)(_UNK_021107bc + 0x2110634);
        uVar4 = func_0x01384abc(*puVar10,&uStack_39);
        uStack_50 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_021107c0 + 0x2110654),&uStack_50);
        uStack_3a = *(undefined1 *)(param_1 + 0x18);
        uVar6 = func_0x01384abc(*puVar10,&uStack_3a);
        uVar4 = func_0x02450228(**(undefined4 **)(_UNK_021107c4 + 0x2110690),uVar4,uVar5,uVar6,0);
        if (*(int *)(**(int **)(_UNK_021107c8 + 0x21106ac) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2944(uVar4,0);
      }
      else {
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_021107cc + 0x2110344));
        func_0x0328e950(iVar2,**(undefined4 **)(_UNK_021107d0 + 0x2110358));
        iVar8 = *(int *)(param_1 + 0x14);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x03e70e70(iVar8,**(undefined4 **)(_UNK_021107d4 + 0x211037c));
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x024548e0(&uStack_50,iVar8,**(undefined4 **)(_UNK_021107d8 + 0x21103a8));
        uStack_28 = uStack_40;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        while (iVar8 = func_0x03fef520(&uStack_38,**(undefined4 **)(_UNK_021107e8 + 0x21103d4)),
              iVar8 != 0) {
          iVar8 = FUN_020e81ec(iVar1,uStack_2c,uStack_28,0);
          iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_021107dc + 0x2110404));
          if (iVar8 == 0) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = FUN_0210e5f4(iVar8);
          }
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x01de25b0(iVar3,uVar4,0);
          if (*(int *)(**(int **)(_UNK_021107e0 + 0x2110454) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x0244fb8c(iVar8,0,0);
          if (iVar3 == 0) {
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            func_0x022a010c(iVar8,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar2 + 8);
            uVar11 = *(uint *)(iVar2 + 0xc);
            piVar7 = *(int **)(_UNK_021107e4 + 0x21104c0);
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
            iVar12 = *piVar7;
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            if (uVar11 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar2 + 0xc) = uVar11 + 1;
              *(int *)(iVar3 + uVar11 * 4 + 0x10) = iVar8;
            }
            else {
              func_0x0328f170(iVar2,iVar8,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
        }
        func_0x03fef51c(&uStack_38,**(undefined4 **)(_UNK_021107ec + 0x2110514));
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_021107f4 + 0x2110528));
        piVar7 = *(int **)(_UNK_021107f8 + 0x211053c);
        iVar8 = *piVar7;
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x01384ab4();
          iVar8 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x40);
        piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_021107fc + 0x2110564),2);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar2 != 0) &&
           (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar8 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if (piVar7[3] == 0) {
          func_0x01384bf4();
        }
        piVar7[4] = iVar2;
        if ((param_2 != 0) &&
           (iVar2 = func_0x01384ab8(param_2,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if ((uint)piVar7[3] < 2) {
          func_0x01384bf4();
        }
        piVar7[5] = param_2;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee858c(iVar1,uVar4,piVar7,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa02c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.GirdReward$$Serialize RVA 0x2100804 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02110b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02110804(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined1 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar9 = (char *)(_UNK_02110b34 + 0x2110820);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02110b38 + 0x2110834));
    func_0x01384978(*(undefined4 *)(_UNK_02110b3c + 0x2110840));
    func_0x01384978(*(undefined4 *)(_UNK_02110b40 + 0x211084c));
    func_0x01384978(*(undefined4 *)(_UNK_02110b44 + 0x2110858));
    func_0x01384978(*(undefined4 *)(_UNK_02110b48 + 0x2110864));
    func_0x01384978(*(undefined4 *)(_UNK_02110b4c + 0x2110870));
    func_0x01384978(*(undefined4 *)(_UNK_02110b50 + 0x211087c));
    func_0x01384978(*(undefined4 *)(_UNK_02110b54 + 0x2110888));
    func_0x01384978(*(undefined4 *)(_UNK_02110b58 + 0x2110894));
    *pcVar9 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x5c74,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c74,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x74);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02110b5c + 0x211091c));
    func_0x0179a608(iVar1,0);
    uVar10 = *(undefined1 *)(param_1 + 0xc);
    *(int *)(param_2 + 0x74) = iVar1;
    if (iVar1 != 0) goto LAB_0211093c;
    func_0x01384bf0();
    iVar1 = *(int *)(param_2 + 0x74);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uRam0000000c = uVar10;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_2 + 0x74);
      uRam00000010 = uVar8;
      if (iVar1 == 0) {
        uVar14 = func_0x01384bf0();
        if ((int)((ulonglong)uVar14 >> 0x20) != 1) {
          func_0x03fef708(&uStack_38,**(undefined4 **)(_UNK_02110b80 + 0x2110b10));
          func_0x01459844((int)uVar14);
          func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        piVar5 = (int *)func_0x0145b008((int)uVar14);
        iVar1 = *piVar5;
        func_0x0145b0f8();
        func_0x03fef708(&uStack_38,**(undefined4 **)(_UNK_02110b7c + 0x2110adc));
        if (iVar1 == 0) {
          return;
        }
        func_0x01384bec(iVar1);
        return;
      }
      goto LAB_02110948;
    }
  }
  else {
    uVar10 = *(undefined1 *)(param_1 + 0xc);
LAB_0211093c:
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)(iVar1 + 0xc) = uVar10;
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar8;
LAB_02110948:
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03652bb8(iVar1,**(undefined4 **)(_UNK_02110b60 + 0x2110964));
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = func_0x03e70f90(*(int *)(param_1 + 0x14),**(undefined4 **)(_UNK_02110b64 + 0x2110984));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03849b14(&uStack_38,iVar2,**(undefined4 **)(_UNK_02110b68 + 0x21109ac));
    puVar13 = *(undefined4 **)(_UNK_02110b6c + 0x21109c0);
    puVar11 = *(undefined4 **)(_UNK_02110b70 + 0x21109c8);
    puVar12 = *(undefined4 **)(_UNK_02110b74 + 0x21109d0);
    while (iVar3 = func_0x03fef70c(&uStack_38,*puVar13), iVar2 = iStack_2c, iVar3 != 0) {
      iVar3 = func_0x01384be4(*puVar11);
      func_0x0179a0f0(iVar3,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar8 = *(undefined4 *)(iVar2 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined1 *)(iVar2 + 0x18);
      uVar4 = *(undefined4 *)(iVar2 + 0xc);
      uVar6 = *(undefined4 *)(iVar2 + 0x10);
      uVar7 = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(iVar3 + 0xc) = uVar8;
      *(undefined4 *)(iVar3 + 0x10) = uVar4;
      *(undefined4 *)(iVar3 + 0x14) = uVar6;
      *(undefined4 *)(iVar3 + 0x18) = uVar7;
      *(undefined1 *)(iVar3 + 0x1c) = uVar10;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,iVar3,*puVar12);
    }
    func_0x03fef708(&uStack_38,**(undefined4 **)(_UNK_02110b78 + 0x2110a5c));
  }
  return;
}



// ===== FAT.Merge.GirdReward$$TryDeserialize RVA 0x2100b84 =====

/* WARNING: Removing unreachable block (ram,0x02110c60) */
/* WARNING: Removing unreachable block (ram,0x02110c74) */
/* WARNING: Removing unreachable block (ram,0x02110c78) */
/* WARNING: Removing unreachable block (ram,0x02110c84) */
/* WARNING: Removing unreachable block (ram,0x02110c88) */
/* WARNING: Removing unreachable block (ram,0x02110ca0) */
/* WARNING: Removing unreachable block (ram,0x02110cb4) */
/* WARNING: Removing unreachable block (ram,0x02110cb8) */
/* WARNING: Removing unreachable block (ram,0x02110cc4) */
/* WARNING: Removing unreachable block (ram,0x02110cc8) */
/* WARNING: Removing unreachable block (ram,0x02110ce0) */
/* WARNING: Removing unreachable block (ram,0x02110d14) */
/* WARNING: Removing unreachable block (ram,0x02110cec) */
/* WARNING: Removing unreachable block (ram,0x02110cf8) */
/* WARNING: Removing unreachable block (ram,0x02110d30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02110b84(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_02110d44 + 0x2110ba0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02110d48 + 0x2110bb4));
    func_0x01384978(*(undefined4 *)(_UNK_02110d4c + 0x2110bc0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d4e,0);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(param_1 + 8),0), iVar1 != 0)) {
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 8),
                      **(undefined4 **)(_UNK_02110d50 + 0x2110c40));
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x9d4e,0);
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
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.Merge.GirdReward$$_InitGirdRewardDataByConf RVA 0x2100d54 =====

/* WARNING: Removing unreachable block (ram,0x0211110c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02110d54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_021111f4 + 0x2110d70);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021111f8 + 0x2110d84));
    func_0x01384978(*(undefined4 *)(_UNK_021111fc + 0x2110d90));
    func_0x01384978(*(undefined4 *)(_UNK_02111200 + 0x2110d9c));
    func_0x01384978(*(undefined4 *)(_UNK_02111204 + 0x2110da8));
    func_0x01384978(*(undefined4 *)(_UNK_02111208 + 0x2110db4));
    func_0x01384978(*(undefined4 *)(_UNK_0211120c + 0x2110dc0));
    func_0x01384978(*(undefined4 *)(_UNK_02111210 + 0x2110dcc));
    func_0x01384978(*(undefined4 *)(_UNK_02111214 + 0x2110dd8));
    func_0x01384978(*(undefined4 *)(_UNK_02111218 + 0x2110de4));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9d4f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9d4f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&iStack_38,uVar7,0,0);
    return;
  }
  if ((*(int *)(param_1 + 8) != 0) &&
     (iStack_38 = func_0x02139cf4(*(int *)(param_1 + 8),0), iStack_38 != 0)) {
    uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_0211121c + 0x2110e64));
    func_0x03e706fc(uVar10,**(undefined4 **)(_UNK_02111220 + 0x2110e78));
    *(undefined4 *)(param_1 + 0x14) = uVar10;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0x18);
    iStack_3c = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_02111224 + 0x2110eb0));
    piVar11 = *(int **)(_UNK_02111228 + 0x2110ec8);
LAB_02110ec4:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar4 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
          goto LAB_02110f20;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar11,0);
LAB_02110f20:
    iVar9 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar9 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_0211122c + 0x2110f54)) {
            puVar4 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
            goto LAB_02110f9c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0211122c + 0x2110f54),0);
LAB_02110f9c:
      uVar10 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (*(int *)(**(int **)(_UNK_02111230 + 0x2110fbc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566190(&uStack_34,uVar10,0);
      iVar1 = iStack_2c;
      uVar7 = uStack_30;
      uVar10 = uStack_34;
      iVar9 = iStack_2c;
      if (0 < iStack_2c) {
        iVar9 = iStack_28;
        iVar2 = iStack_28;
      }
      if (((0 < iVar9) && (iVar9 = FUN_020e81ec(iStack_38,uStack_34,uStack_30,0), iVar9 != 0)) &&
         (iVar9 = FUN_0211015c(), iVar9 != 0)) {
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_02111234 + 0x211102c));
        func_0x0244f5a0(iVar9,0);
        *(undefined4 *)(iVar9 + 0xc) = uVar7;
        *(undefined1 *)(iVar9 + 0x18) = 0;
        *(undefined4 *)(iVar9 + 8) = uVar10;
        *(int *)(iVar9 + 0x14) = iVar2;
        iVar12 = *(int *)(iStack_3c + 0x14);
        *(int *)(iVar9 + 0x10) = iVar1;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        uStack_40 = **(undefined4 **)(_UNK_02111238 + 0x2111074);
        func_0x03e71178(iVar12,uVar10,uVar7,iVar9);
      }
      goto LAB_02110ec4;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_0211123c + 0x21110ac)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
            goto LAB_021110f4;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0211123c + 0x21110ac),0);
LAB_021110f4:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
  }
  return;
}



// ===== FAT.Merge.GirdReward$$_InitGirdRewardDataByArchive RVA 0x2101244 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02111244(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int unaff_r9;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_021116d8 + 0x2111260);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021116dc + 0x2111274));
    func_0x01384978(*(undefined4 *)(_UNK_021116e0 + 0x2111280));
    func_0x01384978(*(undefined4 *)(_UNK_021116e4 + 0x211128c));
    func_0x01384978(*(undefined4 *)(_UNK_021116e8 + 0x2111298));
    func_0x01384978(*(undefined4 *)(_UNK_021116ec + 0x21112a4));
    func_0x01384978(*(undefined4 *)(_UNK_021116f0 + 0x21112b0));
    func_0x01384978(*(undefined4 *)(_UNK_021116f4 + 0x21112bc));
    func_0x01384978(*(undefined4 *)(_UNK_021116f8 + 0x21112c8));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9d50,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9d50,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    iVar2 = func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
    return iVar2;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = func_0x02139cf4(*(int *)(param_1 + 8),0);
    if (param_2 != 0) {
      unaff_r9 = iVar2;
    }
    if (param_2 != 0 && iVar2 != 0) {
      uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_021116fc + 0x2111354));
      func_0x03e706fc(uVar11,**(undefined4 **)(_UNK_02111700 + 0x2111368));
      iVar2 = *(int *)(param_2 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = uVar11;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_02111704 + 0x2111390));
      piVar10 = *(int **)(_UNK_02111708 + 0x21113a8);
      piVar13 = *(int **)(_UNK_0211170c + 0x21113b0);
      iStack_30 = unaff_r9;
LAB_021113b0:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_0211140c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0);
LAB_0211140c:
      iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar2 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar13) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_02111480;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_02111480:
        iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar2 + 0x14);
        if (0 < iVar9) {
          iVar9 = *(int *)(iVar2 + 0x18);
        }
        if (((0 < iVar9) &&
            (iVar9 = FUN_020e81ec(unaff_r9,*(undefined4 *)(iVar2 + 0xc),
                                  *(undefined4 *)(iVar2 + 0x10),0), iVar9 != 0)) &&
           (iVar9 = FUN_0211015c(), iVar9 != 0)) {
          uVar7 = *(undefined4 *)(iVar2 + 0xc);
          uVar14 = *(undefined4 *)(iVar2 + 0x10);
          uVar12 = *(undefined4 *)(iVar2 + 0x14);
          uVar11 = *(undefined4 *)(iVar2 + 0x18);
          uVar1 = *(undefined1 *)(iVar2 + 0x1c);
          iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02111710 + 0x21114fc));
          func_0x0244f5a0(iVar2,0);
          unaff_r9 = iStack_30;
          *(undefined4 *)(iVar2 + 0xc) = uVar14;
          *(undefined4 *)(iVar2 + 0x10) = uVar12;
          *(undefined4 *)(iVar2 + 8) = uVar7;
          *(undefined4 *)(iVar2 + 0x14) = uVar11;
          *(undefined1 *)(iVar2 + 0x18) = uVar1;
          iVar9 = *(int *)(param_1 + 0x14);
          piVar10 = *(int **)(_UNK_02111714 + 0x2111540);
          piVar13 = *(int **)(_UNK_02111718 + 0x2111548);
          uStack_2c = uVar7;
          uStack_28 = uVar14;
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          uStack_38 = **(undefined4 **)(_UNK_0211171c + 0x2111558);
          func_0x03e71178(iVar9,uStack_2c,uStack_28,iVar2);
        }
        goto LAB_021113b0;
      }
      iVar2 = 0;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_02111720 + 0x2111590)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
              goto LAB_021115d8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02111720 + 0x2111590),0);
LAB_021115d8:
        iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
    }
  }
  return iVar2;
}



// ===== FAT.Merge.GirdReward$$_TryConsumeWhenLogin RVA 0x2101728 =====

void FUN_02111728(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x9d51,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d51,0);
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
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
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
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cc0100(iVar1,0x91,0);
  if (param_2 == 0 || iVar1 == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0x14) == '\0') && (iVar1 = FUN_021100b4(param_1), iVar1 == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    func_0x019a27f8(0);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}


