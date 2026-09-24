/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBItemEffect$$SetData RVA 0x1e065ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e165ec(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01e16798 + 0x1e16608);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1679c + 0x1e1661c));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar2 = func_0x0229f06c(0x1649,0);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x26) = 0;
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(int *)(param_1 + 0x1c) = param_2;
    func_0x01e167a4(param_1);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02116ae0(iVar2,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_2 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02116990(iVar2,0);
      cVar1 = '\0';
      if (iVar2 != 0) {
        cVar1 = *(char *)(iVar2 + 0x46);
      }
      if (((iVar2 != 0 && cVar1 != '\0') || (iVar2 = func_0x01e16994(param_1), iVar2 != 0)) ||
         (iVar2 = func_0x01e16a94(param_1), iVar2 != 0)) {
        func_0x01e16b94(param_1);
      }
      iVar2 = *(int *)(param_2 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02feb690(iVar2,&iStack_14,0,**(undefined4 **)(_UNK_01e167a0 + 0x1e16730));
      iVar2 = iStack_14;
      if (iVar3 == 0) {
        func_0x01e16c4c(param_1);
        func_0x01e16d7c(param_1);
        func_0x01e1700c(param_1);
      }
      else {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x021326c4(iVar2,0);
        if (iVar2 != 0) {
          func_0x01e16bf0(param_1);
        }
      }
      func_0x01e17228(param_1);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1649,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$TryAddGirdRewardPrefab RVA 0x1e067a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e167a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01e16978 + 0x1e167bc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1697c + 0x1e167d0));
    func_0x01384978(*(undefined4 *)(_UNK_01e16980 + 0x1e167dc));
    func_0x01384978(*(undefined4 *)(_UNK_01e16984 + 0x1e167e8));
    *pcVar6 = '\x01';
  }
  uStack_1c = 0;
  iStack_20 = 0;
  iVar2 = func_0x0229f06c(0x164a,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x30);
    if ((((iVar2 != 0) && (iVar3 = func_0x0210cd28(iVar2,0), iVar3 != 0)) &&
        (iVar3 = func_0x020d83c8(iVar3,0), iVar3 != 0)) &&
       ((iVar3 = func_0x02141a78(iVar3,0), iVar3 != 0 &&
        (iVar2 = func_0x0210f9a4(iVar3,iVar2,&uStack_1c,0), iVar2 != 0)))) {
      func_0x01e1805c(param_1,0x1f);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x03dd1078(iVar2,0x1f,&iStack_20,**(undefined4 **)(_UNK_01e16988 + 0x1e168dc));
      iVar2 = iStack_20;
      if (iVar4 != 0) {
        if (iStack_20 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02fe27b8(iVar2,**(undefined4 **)(_UNK_01e1698c + 0x1e16908));
        if (*(int *)(**(int **)(_UNK_01e16990 + 0x1e16920) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x0244fb8c(iVar2,0,0);
        uVar1 = uStack_1c;
        if (iVar4 == 0) {
          uVar5 = *(undefined4 *)(param_1 + 0x1c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01e18e58(iVar2,iVar3,uVar5,uVar1);
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x164a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$NeedShowToolFragmentTopEffect RVA 0x1e06994 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e16994(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  iVar1 = func_0x0229f06c(0x1652,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1652,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cc0100(iVar1,0x98,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0210e2d4(iVar1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01c94768 + 0x1c946d0);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c9476c + 0x1c946e4),uVar7,0);
      *pcVar6 = '\x01';
    }
    iVar4 = func_0x0229f06c(0x564,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x564,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar7,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar4 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar1,0);
      func_0x01485238(&uStack_38,uVar7,0);
      iVar5 = *(int *)(iVar4 + 8);
      uVar7 = *(undefined4 *)(iVar4 + 0xc);
      iVar1 = *(int *)(iVar4 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
      uVar2 = func_0x0245496c(&uStack_38,0,0);
      return uVar2;
    }
    iVar1 = func_0x01867980(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = **(int **)(_UNK_01c94770 + 0x1c9475c);
    pcVar6 = (char *)(_UNK_03464ce0 + 0x3464c78);
    if (*pcVar6 == '\0') {
      func_0x02457d54(*(undefined4 *)(_UNK_03464ce4 + 0x3464c8c));
      *pcVar6 = '\x01';
    }
    func_0x03031db0(uVar7,**(undefined4 **)(_UNK_03464ce8 + 0x3464ca8),
                    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x60));
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    uVar2 = func_0x03d65140(iVar1,uVar7,
                            *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) +
                                                        0x68) + 0x10) + 0x60) + 0x84));
    return ~uVar2 >> 0x1f;
  }
  return 0;
}



// ===== FAT.MBItemEffect$$NeedShowToolSourceTopEffect RVA 0x1e06a94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e16a94(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  iVar1 = func_0x0229f06c(0x1653,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1653,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cc0100(iVar1,0x98,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0210e2d4(iVar1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01ca501c + 0x1ca4f84);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ca5020 + 0x1ca4f98),uVar7,0);
      *pcVar6 = '\x01';
    }
    iVar4 = func_0x0229f06c(0x1654,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x1654,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar7,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar4 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar1,0);
      func_0x01485238(&uStack_38,uVar7,0);
      iVar5 = *(int *)(iVar4 + 8);
      uVar7 = *(undefined4 *)(iVar4 + 0xc);
      iVar1 = *(int *)(iVar4 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
      uVar2 = func_0x0245496c(&uStack_38,0,0);
      return uVar2;
    }
    iVar1 = func_0x017c4cdc(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = **(int **)(_UNK_01ca5024 + 0x1ca5010);
    pcVar6 = (char *)(_UNK_03464ce0 + 0x3464c78);
    if (*pcVar6 == '\0') {
      func_0x02457d54(*(undefined4 *)(_UNK_03464ce4 + 0x3464c8c));
      *pcVar6 = '\x01';
    }
    func_0x03031db0(uVar7,**(undefined4 **)(_UNK_03464ce8 + 0x3464ca8),
                    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x60));
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    uVar2 = func_0x03d65140(iVar1,uVar7,
                            *(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) +
                                                        0x68) + 0x10) + 0x60) + 0x84));
    return ~uVar2 >> 0x1f;
  }
  return 0;
}



// ===== FAT.MBItemEffect$$AddTopLevelEffect RVA 0x1e06b94 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e16b94(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x1655,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1655,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4);
    return;
  }
  pcVar5 = (char *)(_UNK_01e1882c + 0x1e18078);
  uStack_24 = unaff_r4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1636,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dcf4b4(iVar1,2,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
    if (iVar1 == 0) {
      iVar1 = func_0x01e1a508(param_1,2);
      pcVar5 = (char *)(_UNK_01e1884c + 0x1e1816c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar1,0);
      uVar9 = *(undefined4 *)(param_1 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x024505b4(iVar7,uVar9,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = param_1;
      iVar7 = func_0x024504c0(iVar1,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
        *pcVar5 = '\x01';
      }
      piVar10 = *(int **)(_UNK_01e18874 + 0x1e18470);
      puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = puVar2[2];
      uVar4 = *puVar2;
      uVar8 = puVar2[1];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x0245068c(iVar7,uVar4,uVar8,uVar9);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar1,0);
      pcVar6 = (char *)(_UNK_01e18878 + 0x1e184c8);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
        *pcVar6 = '\x01';
      }
      iVar3 = *(int *)(*piVar10 + 0x5c);
      uVar9 = *(undefined4 *)(iVar3 + 0xc);
      uVar4 = *(undefined4 *)(iVar3 + 0x10);
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x024503a4(iVar7,uVar9,uVar4,uVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar1,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
        *pcVar5 = '\x01';
      }
      puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = *puVar2;
      uVar4 = puVar2[1];
      uVar8 = puVar2[2];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x02450c24(iVar7,uVar9,uVar4,uVar8);
      iVar7 = *(int *)(iStack_34 + 0x20);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf268(iVar7,2,iVar1,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x1636,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_24;
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,2,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,2,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBItemEffect$$_TryRefreshTimeScaleSourceEffect RVA 0x1e06bf0 =====

/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e182c8) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Removing unreachable block (ram,0x01e1841c) */
/* WARNING: Removing unreachable block (ram,0x01e18424) */
/* WARNING: Removing unreachable block (ram,0x01e18428) */
/* WARNING: Removing unreachable block (ram,0x01e18448) */
/* WARNING: Removing unreachable block (ram,0x01e1845c) */
/* WARNING: Removing unreachable block (ram,0x01e18480) */
/* WARNING: Removing unreachable block (ram,0x01e18484) */
/* WARNING: Removing unreachable block (ram,0x01e184a8) */
/* WARNING: Removing unreachable block (ram,0x01e184ac) */
/* WARNING: Removing unreachable block (ram,0x01e184d0) */
/* WARNING: Removing unreachable block (ram,0x01e184e4) */
/* WARNING: Removing unreachable block (ram,0x01e184fc) */
/* WARNING: Removing unreachable block (ram,0x01e18500) */
/* WARNING: Removing unreachable block (ram,0x01e18524) */
/* WARNING: Removing unreachable block (ram,0x01e18528) */
/* WARNING: Removing unreachable block (ram,0x01e18544) */
/* WARNING: Removing unreachable block (ram,0x01e18558) */
/* WARNING: Removing unreachable block (ram,0x01e1856c) */
/* WARNING: Removing unreachable block (ram,0x01e18570) */
/* WARNING: Removing unreachable block (ram,0x01e1859c) */
/* WARNING: Removing unreachable block (ram,0x01e185a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e16bf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x1658,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1658,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
    return;
  }
  pcVar3 = (char *)(_UNK_01e1882c + 0x1e18078);
  uStack_24 = unaff_r4;
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1636,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dcf4b4(iVar1,0x24,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
    if (iVar1 == 0) {
      func_0x01e1a508(param_1,0x24);
                    /* WARNING: Could not recover jumptable at 0x01e18180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_01e18184 + _UNK_01e181c0))();
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x1636,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_24;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0x24,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,0x24,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MBItemEffect$$TryRefreshOpenChestTip RVA 0x1e06c4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e16c4c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e16d70 + 0x1e16c64);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e16d74 + 0x1e16c78));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x1659,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(iVar1,&iStack_14,0,**(undefined4 **)(_UNK_01e16d78 + 0x1e16d00));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0211fcd4(iVar1,0);
      if (iVar1 != 0) {
        func_0x01e18c50(param_1);
      }
      iVar1 = iStack_14;
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0211f8ec(iVar1,0);
      func_0x01e19e28(param_1,iVar1 != 0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1659,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$TryRefreshJumpCDState RVA 0x1e06d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e16d7c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e16ff0 + 0x1e16d94);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e16ff4 + 0x1e16da8));
    func_0x01384978(*(undefined4 *)(_UNK_01e16ff8 + 0x1e16db4));
    func_0x01384978(*(undefined4 *)(_UNK_01e16ffc + 0x1e16dc0));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iVar1 = func_0x0229f06c(0x165d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x165d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  puVar4 = *(undefined4 **)(_UNK_01e17000 + 0x1e16e24);
  iVar1 = func_0x03668dfc(*puVar4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0214197c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139a28(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(iVar1,&iStack_14,0,**(undefined4 **)(_UNK_01e17004 + 0x1e16eac));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02123058(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar1 + 0x31) != '\0') goto LAB_01e16fcc;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(iVar1,&iStack_18,0,**(undefined4 **)(_UNK_01e17008 + 0x1e16f28));
    iVar1 = iStack_18;
    if (iVar2 != 0) {
      if (iStack_18 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02123568(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0210e5f4(iVar1,0);
      iVar2 = func_0x03668dfc(*puVar4);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x78);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0214197c(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x021399d4(iVar2,0);
      if (iVar1 == iVar2) {
LAB_01e16fcc:
        func_0x01e1805c(param_1,0x10);
        return;
      }
    }
  }
  func_0x01e188e4(param_1,0x10);
  return;
}



// ===== FAT.MBItemEffect$$TryRefreshTokenMultiState RVA 0x1e0700c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1700c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01e17214 + 0x1e17024);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e17218 + 0x1e17038));
    func_0x01384978(*(undefined4 *)(_UNK_01e1721c + 0x1e17044));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x165f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(iVar1,&iStack_1c,0,**(undefined4 **)(_UNK_01e17220 + 0x1e170cc));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02137ae4(iVar1,0);
      puVar5 = *(undefined4 **)(_UNK_01e17224 + 0x1e17108);
      iVar1 = func_0x03668dfc(*puVar5);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x78);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x021419d0(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0215e684(iVar1,0);
      iVar1 = iStack_1c;
      if (iVar2 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02123568(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0210e5f4(iVar1,0);
        iVar2 = func_0x03668dfc(*puVar5);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x78);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x021419d0(iVar2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0215e630(iVar2,0);
        if (iVar1 == iVar2) {
          func_0x01e1805c(param_1,uVar3);
          return;
        }
      }
      func_0x01e188e4(param_1,uVar3);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x165f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$_RefreshTimeScaleBuffUsability RVA 0x1e07228 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e17228(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iStack_14;
  
  pcVar5 = (char *)(_UNK_01e1744c + 0x1e17240);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e17450 + 0x1e17254));
    *pcVar5 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x1661,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1661,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar2 = func_0x0210e250(0,2,0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar2 = func_0x0210e250(0,1,0,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
        iVar2 = func_0x0210e250(0,7,0,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
          iVar2 = func_0x0210e250(0,0xd,0,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
            goto LAB_01e173bc;
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0210e250(iVar1,2,0,0);
    if ((((iVar2 == 0) && (iVar2 = func_0x0210e250(iVar1,1,0,0), iVar2 == 0)) &&
        (iVar2 = func_0x0210e250(iVar1,7,0,0), iVar2 == 0)) &&
       (iVar2 = func_0x0210e250(iVar1,0xd,0,0), iVar2 == 0)) {
LAB_01e173bc:
      iVar3 = func_0x02feb690(iVar1,&iStack_14,0,**(undefined4 **)(_UNK_01e17454 + 0x1e173d0));
      iVar2 = iStack_14;
      if (iVar3 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0211f8ec(iVar2,0);
        if (iVar2 != 0) goto LAB_01e1742c;
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0210e250(iVar1,6,0,0);
      if (iVar1 == 0) {
        uVar4 = 0;
        goto LAB_01e17434;
      }
    }
  }
LAB_01e1742c:
  uVar4 = 1;
LAB_01e17434:
  func_0x01e19e28(param_1,uVar4);
  return;
}



// ===== FAT.MBItemEffect$$ClearData RVA 0x1e07458 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e17458(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  
  iVar1 = func_0x0229f06c(0x5d9b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d9b,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  func_0x01e17544(param_1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  func_0x01e176b0(param_1);
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar3 = (char *)(_UNK_01e17538 + 0x1e174d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1753c + 0x1e174e8));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(**(int **)(_UNK_01e17540 + 0x1e17500) + 0x5c);
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  uVar2 = *(undefined4 *)(iVar4 + 0x10);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x024503a4(iVar1,uVar5,uVar2,uVar6);
  return;
}



// ===== FAT.MBItemEffect$$TryRemoveGirdRewardPrefab RVA 0x1e07544 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e17544(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e17694 + 0x1e1755c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e17698 + 0x1e17570));
    func_0x01384978(*(undefined4 *)(_UNK_01e1769c + 0x1e1757c));
    func_0x01384978(*(undefined4 *)(_UNK_01e176a0 + 0x1e17588));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5d9c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03dd1078(iVar1,0x1f,&iStack_14,**(undefined4 **)(_UNK_01e176a4 + 0x1e17600));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01e176a8 + 0x1e1762c));
      if (*(int *)(**(int **)(_UNK_01e176ac + 0x1e17644) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(iVar1,0,0);
      if (iVar2 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e196b4(iVar1);
      }
      func_0x01e188e4(param_1,0x1f);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5d9c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$_ClearAllEffect RVA 0x1e076b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e176b0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01e178f0 + 0x1e176c8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e178f4 + 0x1e176dc));
    func_0x01384978(*(undefined4 *)(_UNK_01e178f8 + 0x1e176e8));
    func_0x01384978(*(undefined4 *)(_UNK_01e178fc + 0x1e176f4));
    func_0x01384978(*(undefined4 *)(_UNK_01e17900 + 0x1e17700));
    func_0x01384978(*(undefined4 *)(_UNK_01e17904 + 0x1e1770c));
    func_0x01384978(*(undefined4 *)(_UNK_01e17908 + 0x1e17718));
    func_0x01384978(*(undefined4 *)(_UNK_01e1790c + 0x1e17724));
    func_0x01384978(*(undefined4 *)(_UNK_01e17910 + 0x1e17730));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5da0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(&uStack_30,iVar1,**(undefined4 **)(_UNK_01e17914 + 0x1e177bc));
    puVar4 = *(undefined4 **)(_UNK_01e17918 + 0x1e177d4);
    while (iVar1 = func_0x014768f8(&uStack_30,*puVar4), iVar1 != 0) {
      func_0x01e1a604(param_1,uStack_24,uStack_20);
    }
    func_0x02451938(&uStack_30,**(undefined4 **)(_UNK_01e1791c + 0x1e17800));
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf444(iVar1,**(undefined4 **)(_UNK_01e17924 + 0x1e17824));
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(**(int **)(_UNK_01e17928 + 0x1e17838) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dda984(uVar3,0);
    func_0x01dda984(*(undefined4 *)(param_1 + 0x14),0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5da0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$UpdateEx RVA 0x1e07930 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e17930(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar9;
  int *piVar10;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  pcVar12 = (char *)(_UNK_01e17a44 + 0x1e17944);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e17a48 + 0x1e17958));
    *pcVar12 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa09c,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x30);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02116ae0(iVar3,0);
    if (iVar3 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x24);
    uVar6 = func_0x01e17a50(param_1);
    if (bVar1 != uVar6) {
      func_0x01e17ae8(param_1);
      iVar3 = *(int *)(param_1 + 0x20);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x03dcf4b4(iVar3,0x25,**(undefined4 **)(_UNK_01e17a4c + 0x1e17a14));
      *(undefined1 *)(param_1 + 0x24) = uVar2;
    }
    if (*(char *)(param_1 + 0x26) == '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x26) = 0;
    pcVar12 = (char *)(_UNK_01e17c90 + 0x1e17b78);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e17c94 + 0x1e17b8c));
      func_0x01384978(*(undefined4 *)(_UNK_01e17c98 + 0x1e17b98));
      *pcVar12 = '\x01';
    }
    iVar3 = func_0x0229f06c(0xa0a0,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0xa0a0,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
    if (*(int *)(**(int **)(_UNK_01e17c9c + 0x1e17bf0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x020843f8(0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar3 + 0x30);
    if (*(int *)(**(int **)(_UNK_01e17ca0 + 0x1e17c2c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x01dec8c8(uVar16,0);
    if (iVar3 == 1) {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x022a040c(iVar3,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f06c(0xa0a2,0);
        if (iVar3 != 0) {
          iVar3 = func_0x0229f13c(0xa0a2,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
        pcVar12 = (char *)(_UNK_01e1882c + 0x1e18078);
        if (*pcVar12 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
          func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
          func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
          func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
          func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
          *pcVar12 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x1636,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x20);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x03dcf4b4(iVar3,0x11,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
          if (uVar6 == 0) {
            iVar3 = func_0x01e1a508(param_1,0x11);
            pcVar12 = (char *)(_UNK_01e1884c + 0x1e1816c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar13 = func_0x024504c0(iVar3,0);
            uVar16 = *(undefined4 *)(param_1 + 0x14);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            func_0x024505b4(iVar13,uVar16,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar13 = func_0x024504c0(iVar3,0);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            iVar13 = func_0x02450158(iVar13,0,0);
            if (*pcVar12 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18850 + 0x1e18370));
              *pcVar12 = '\x01';
            }
            puVar4 = *(undefined4 **)(**(int **)(_UNK_01e18854 + 0x1e18388) + 0x5c);
            uVar9 = puVar4[2];
            uVar16 = *puVar4;
            uVar15 = puVar4[1];
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x024503a4(iVar13,uVar16,uVar15,uVar9);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = param_1;
            iVar13 = func_0x024504c0(iVar3,0);
            if (*pcVar12 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
              *pcVar12 = '\x01';
            }
            piVar18 = *(int **)(_UNK_01e18874 + 0x1e18470);
            puVar4 = *(undefined4 **)(*piVar18 + 0x5c);
            uVar16 = puVar4[2];
            uVar9 = *puVar4;
            uVar15 = puVar4[1];
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x0245068c(iVar13,uVar9,uVar15,uVar16);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar13 = func_0x024504c0(iVar3,0);
            pcVar11 = (char *)(_UNK_01e18878 + 0x1e184c8);
            if (*pcVar11 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
              *pcVar11 = '\x01';
            }
            iVar5 = *(int *)(*piVar18 + 0x5c);
            uVar16 = *(undefined4 *)(iVar5 + 0xc);
            uVar9 = *(undefined4 *)(iVar5 + 0x10);
            uVar15 = *(undefined4 *)(iVar5 + 0x14);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x024503a4(iVar13,uVar16,uVar9,uVar15);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar13 = func_0x024504c0(iVar3,0);
            if (*pcVar12 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
              *pcVar12 = '\x01';
            }
            puVar4 = *(undefined4 **)(*piVar18 + 0x5c);
            uVar16 = *puVar4;
            uVar9 = puVar4[1];
            uVar15 = puVar4[2];
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x02450c24(iVar13,uVar16,uVar9,uVar15);
            iVar13 = *(int *)(iStack_34 + 0x20);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            uVar6 = func_0x03dcf268(iVar13,0x11,iVar3,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
          }
          return uVar6;
        }
        iVar3 = func_0x0229f13c(0x1636,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto LAB_021d0928;
      }
    }
    iVar3 = func_0x0229f06c(0xa0a3,0);
    if (iVar3 == 0) {
      pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
        *pcVar12 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x163d,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x20);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03dcf4b4(iVar3,0x11,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(int *)(param_1 + 0x20);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar16 = func_0x03dcf1b0(iVar3,0x11,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
        func_0x01e1a604(param_1,0x11,uVar16);
        iVar3 = *(int *)(param_1 + 0x20);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
        uStack_28 = 0x11;
        if (*(int *)(iVar3 + 8) != 0) {
          piVar18 = *(int **)(iVar3 + 0x20);
          iStack_30 = iVar3;
          if (piVar18 == (int *)0x0) {
            uVar6 = func_0x04821a00(&uStack_28,0);
          }
          else {
            iVar3 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
              iVar3 = func_0x02457d84(iVar3);
            }
            iVar13 = *piVar18;
            uVar6 = (uint)*(ushort *)(iVar13 + 0xb6);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(int *)(iVar13 + 0x58) + 4);
              do {
                if (piVar10[-1] == iVar3) {
                  puVar4 = (undefined4 *)(iVar13 + *piVar10 * 8 + 200);
                  goto LAB_03dd0a60;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar18,iVar3,1);
LAB_03dd0a60:
            uVar6 = (*(code *)*puVar4)(piVar18,0x11,puVar4[1]);
            iVar3 = iStack_30;
          }
          uVar17 = *(uint *)(iVar3 + 8);
          uVar14 = uVar17;
          if (uVar17 == 0) {
            func_0x02457d50();
            uVar14 = *(uint *)(iStack_30 + 8);
            if (uVar14 == 0) {
              uVar19 = func_0x02457d50();
              uVar16 = (undefined4)((ulonglong)uVar19 >> 0x20);
              iVar3 = (int)uVar19;
              uStack_54 = 0;
              if (*(int *)(iVar3 + 8) != 0) {
                piVar18 = *(int **)(iVar3 + 0x20);
                uStack_60 = uVar16;
                uStack_5c = uVar6;
                uStack_58 = uVar14;
                uStack_50 = uVar17;
                if (piVar18 == (int *)0x0) {
                  uVar6 = func_0x04821a00(&uStack_60,0);
                }
                else {
                  iVar13 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
                    iVar13 = func_0x02457d84(iVar13);
                  }
                  iVar5 = *piVar18;
                  uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
                  if (uVar6 != 0) {
                    piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                    do {
                      if (piVar10[-1] == iVar13) {
                        puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 200);
                        goto LAB_03dd0dc4;
                      }
                      uVar6 = uVar6 - 1;
                      piVar10 = piVar10 + 2;
                    } while (uVar6 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar18,iVar13,1);
LAB_03dd0dc4:
                  uVar6 = (*(code *)*puVar4)(piVar18,uVar16,puVar4[1]);
                }
                iVar5 = *(int *)(iVar3 + 8);
                iVar13 = iVar5;
                if (iVar5 == 0) {
                  func_0x02457d50();
                  iVar13 = *(int *)(iVar3 + 8);
                  if (iVar13 == 0) {
                    uVar19 = func_0x02457d50();
                    uVar6 = func_0x03dcfa64((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                             0x84));
                    if ((int)uVar6 < 0) {
                      uVar16 = 0;
                    }
                    else {
                      iVar3 = *(int *)((int)uVar19 + 0xc);
                      if (iVar3 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar3 + 0xc) <= uVar6) {
                        func_0x02457d5c();
                      }
                      uVar16 = *(undefined4 *)(iVar3 + uVar6 * 0x10 + 0x1c);
                    }
                    *extraout_r2_00 = uVar16;
                    return ~uVar6 >> 0x1f;
                  }
                }
                func_0x02457e94(uVar6 & 0x7fffffff,*(undefined4 *)(iVar5 + 0xc));
                if (*(uint *)(iVar13 + 0xc) <= extraout_r1_00) {
                  func_0x02457d5c();
                }
                uVar14 = *(int *)(iVar13 + extraout_r1_00 * 4 + 0x10) - 1;
                if (-1 < (int)uVar14) {
                  uVar17 = 0xffffffff;
                  do {
                    uVar7 = uVar14;
                    iVar13 = *(int *)(iVar3 + 0xc);
                    if (iVar13 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar13 + 0xc) <= uVar7) {
                      func_0x02457d5c();
                    }
                    uVar16 = uStack_60;
                    iVar13 = iVar13 + uVar7 * 0x10;
                    if (*(uint *)(iVar13 + 0x10) == (uVar6 & 0x7fffffff)) {
                      piVar18 = *(int **)(iVar3 + 0x20);
                      if (piVar18 == (int *)0x0) {
                        piVar18 = (int *)func_0x02ecb070(*(undefined4 *)
                                                          (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                   0x60) + 0xc));
                        uVar16 = uStack_60;
                        uVar9 = *(undefined4 *)(iVar13 + 0x18);
                        if (piVar18 == (int *)0x0) {
                          func_0x02457d50(0,uVar9);
                        }
                        iVar5 = (**(code **)(*piVar18 + 0x100))
                                          (piVar18,uVar9,uVar16,*(undefined4 *)(*piVar18 + 0x104));
                      }
                      else {
                        uVar9 = *(undefined4 *)(iVar13 + 0x18);
                        if (piVar18 == (int *)0x0) {
                          func_0x02457d50();
                        }
                        iVar5 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
                          iVar5 = func_0x02457d84(iVar5);
                        }
                        iVar8 = *piVar18;
                        uVar14 = (uint)*(ushort *)(iVar8 + 0xb6);
                        if (uVar14 != 0) {
                          piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
                          do {
                            if (piVar10[-1] == iVar5) {
                              puVar4 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xc0);
                              goto LAB_03dd0f6c;
                            }
                            uVar14 = uVar14 - 1;
                            piVar10 = piVar10 + 2;
                          } while (uVar14 != 0);
                        }
                        puVar4 = (undefined4 *)func_0x02457d88(piVar18,iVar5,0);
LAB_03dd0f6c:
                        iVar5 = (*(code *)*puVar4)(piVar18,uVar9,uVar16,puVar4[1]);
                      }
                      if (iVar5 != 0) {
                        if ((int)uVar17 < 0) {
                          iVar5 = *(int *)(iVar3 + 8);
                          iVar8 = *(int *)(iVar13 + 0x14);
                          if (iVar5 == 0) {
                            func_0x02457d50();
                          }
                          if (*(uint *)(iVar5 + 0xc) <= extraout_r1_00) {
                            func_0x02457d5c();
                          }
                          *(int *)(iVar5 + extraout_r1_00 * 4 + 0x10) = iVar8 + 1;
                        }
                        else {
                          iVar5 = *(int *)(iVar3 + 0xc);
                          if (iVar5 == 0) {
                            func_0x02457d50();
                          }
                          uVar16 = *(undefined4 *)(iVar13 + 0x14);
                          if (*(uint *)(iVar5 + 0xc) <= uVar17) {
                            func_0x02457d5c();
                          }
                          *(undefined4 *)(iVar5 + uVar17 * 0x10 + 0x14) = uVar16;
                        }
                        *extraout_r2 = *(undefined4 *)(iVar13 + 0x1c);
                        uVar16 = *(undefined4 *)(iVar3 + 0x14);
                        *(undefined4 *)(iVar13 + 0x1c) = 0;
                        iVar8 = *(int *)(iVar3 + 0x1c);
                        iVar5 = *(int *)(iVar3 + 0x18);
                        *(undefined4 *)(iVar13 + 0x14) = uVar16;
                        *(uint *)(iVar13 + 0x10) = 0xffffffff;
                        *(int *)(iVar3 + 0x1c) = iVar8 + 1;
                        *(uint *)(iVar3 + 0x14) = uVar7;
                        *(int *)(iVar3 + 0x18) = iVar5 + 1;
                        return 1;
                      }
                    }
                    uVar14 = *(uint *)(iVar13 + 0x14);
                    uVar17 = uVar7;
                  } while (*(uint *)(iVar13 + 0x14) < 0x80000000);
                }
              }
              *extraout_r2 = 0;
              return 0;
            }
          }
          uStack_2c = uVar6 & 0x7fffffff;
          func_0x02457e94(uStack_2c,*(undefined4 *)(uVar17 + 0xc));
          if (*(uint *)(uVar14 + 0xc) <= extraout_r1) {
            func_0x02457d5c();
          }
          uVar6 = *(int *)(uVar14 + extraout_r1 * 4 + 0x10) - 1;
          if (-1 < (int)uVar6) {
            iVar3 = iStack_30;
            uVar14 = 0xffffffff;
            uStack_38 = extraout_r1;
            do {
              uVar17 = uVar6;
              iVar13 = *(int *)(iVar3 + 0xc);
              if (iVar13 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar13 + 0xc) <= uVar17) {
                func_0x02457d5c();
              }
              uVar16 = uStack_28;
              iVar13 = iVar13 + uVar17 * 0x10;
              if (*(uint *)(iVar13 + 0x10) == uStack_2c) {
                piVar18 = *(int **)(iVar3 + 0x20);
                if (piVar18 == (int *)0x0) {
                  piVar18 = (int *)func_0x02ecb070(*(undefined4 *)
                                                    (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                    0xc));
                  uVar16 = uStack_28;
                  uVar9 = *(undefined4 *)(iVar13 + 0x18);
                  if (piVar18 == (int *)0x0) {
                    func_0x02457d50(0,uVar9);
                  }
                  iVar5 = (**(code **)(*piVar18 + 0x100))
                                    (piVar18,uVar9,uVar16,*(undefined4 *)(*piVar18 + 0x104));
                }
                else {
                  uVar9 = *(undefined4 *)(iVar13 + 0x18);
                  if (piVar18 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar3 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                    iVar3 = func_0x02457d84(iVar3);
                  }
                  iVar5 = *piVar18;
                  uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
                  if (uVar6 != 0) {
                    piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                    do {
                      if (piVar10[-1] == iVar3) {
                        puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
                        goto LAB_03dd0c0c;
                      }
                      uVar6 = uVar6 - 1;
                      piVar10 = piVar10 + 2;
                    } while (uVar6 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar18,iVar3,0);
LAB_03dd0c0c:
                  iVar5 = (*(code *)*puVar4)(piVar18,uVar9,uVar16,puVar4[1]);
                }
                iVar3 = iStack_30;
                if (iVar5 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar3 = *(int *)(iStack_30 + 8);
                    iVar5 = *(int *)(iVar13 + 0x14);
                    if (iVar3 == 0) {
                      func_0x02457d50();
                    }
                    uVar6 = uStack_38;
                    if (*(uint *)(iVar3 + 0xc) <= uStack_38) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar3 + uVar6 * 4 + 0x10) = iVar5 + 1;
                  }
                  else {
                    iVar3 = *(int *)(iStack_30 + 0xc);
                    if (iVar3 == 0) {
                      func_0x02457d50();
                    }
                    uVar16 = *(undefined4 *)(iVar13 + 0x14);
                    if (*(uint *)(iVar3 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar3 + uVar14 * 0x10 + 0x14) = uVar16;
                  }
                  uVar16 = *(undefined4 *)(iStack_30 + 0x14);
                  *(undefined4 *)(iVar13 + 0x1c) = 0;
                  iVar3 = *(int *)(iStack_30 + 0x18);
                  iVar5 = *(int *)(iStack_30 + 0x1c);
                  *(uint *)(iVar13 + 0x10) = 0xffffffff;
                  *(undefined4 *)(iVar13 + 0x14) = uVar16;
                  *(uint *)(iStack_30 + 0x14) = uVar17;
                  *(int *)(iStack_30 + 0x18) = iVar3 + 1;
                  *(int *)(iStack_30 + 0x1c) = iVar5 + 1;
                  return 1;
                }
              }
              uVar6 = *(uint *)(iVar13 + 0x14);
              uVar14 = uVar17;
            } while (*(uint *)(iVar13 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
      iVar3 = func_0x0229f13c(0x163d,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
LAB_021d0928:
      iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0x11,0);
      uStack_38 = uStack_50;
      if (*(int *)(iVar3 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,0x11,0);
      iVar13 = *(int *)(iVar3 + 8);
      uVar16 = *(undefined4 *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      uVar9 = 3;
      if (iVar3 == 0) {
        uVar9 = 2;
      }
      uStack_58 = 0;
      uStack_54 = 0;
      uVar6 = func_0x0245495c(iVar13,uVar16,&uStack_38,uVar9);
      return uVar6;
    }
    iVar3 = func_0x0229f13c(0xa0a3,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xa09c,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
SUB_02173f80:
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar13 = *(int *)(iVar3 + 8);
  uVar16 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 2;
  if (iVar3 == 0) {
    uVar9 = 1;
  }
  uStack_50 = 0;
  uVar6 = func_0x0245495c(iVar13,uVar16,&iStack_30,uVar9);
  return uVar6;
}



// ===== FAT.MBItemEffect$$_ShouldShowTeslaBuff RVA 0x1e07a50 =====

undefined4 FUN_01e17a50(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa09d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa09d,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x02116f5c(iVar1,0);
  if ((iVar1 != 1) && (uVar4 = 0, *(char *)(param_1 + 0x25) != '\0')) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.MBItemEffect$$_TryRefreshTimeScaleBuffEffect RVA 0x1e07ae8 =====

/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e182c8) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Removing unreachable block (ram,0x01e1841c) */
/* WARNING: Removing unreachable block (ram,0x01e18424) */
/* WARNING: Removing unreachable block (ram,0x01e18428) */
/* WARNING: Removing unreachable block (ram,0x01e18448) */
/* WARNING: Removing unreachable block (ram,0x01e1845c) */
/* WARNING: Removing unreachable block (ram,0x01e18480) */
/* WARNING: Removing unreachable block (ram,0x01e18484) */
/* WARNING: Removing unreachable block (ram,0x01e184a8) */
/* WARNING: Removing unreachable block (ram,0x01e184ac) */
/* WARNING: Removing unreachable block (ram,0x01e184d0) */
/* WARNING: Removing unreachable block (ram,0x01e184e4) */
/* WARNING: Removing unreachable block (ram,0x01e184fc) */
/* WARNING: Removing unreachable block (ram,0x01e18500) */
/* WARNING: Removing unreachable block (ram,0x01e18524) */
/* WARNING: Removing unreachable block (ram,0x01e18528) */
/* WARNING: Removing unreachable block (ram,0x01e18544) */
/* WARNING: Removing unreachable block (ram,0x01e18558) */
/* WARNING: Removing unreachable block (ram,0x01e1856c) */
/* WARNING: Removing unreachable block (ram,0x01e18570) */
/* WARNING: Removing unreachable block (ram,0x01e1859c) */
/* WARNING: Removing unreachable block (ram,0x01e185a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e17ae8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa09f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa09f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&stack0xffffffb8,0,0);
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uVar2 = func_0x0245495c(iVar11,uVar13,&iStack_30,uVar7);
    return uVar2;
  }
  iVar1 = FUN_01e17a50(param_1);
  if (iVar1 == 0) {
    pcVar9 = (char *)(_UNK_01e18a0c + 0x1e188fc);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
      func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
      func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
      *pcVar9 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x163d,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03dcf4b4(iVar1,0x25,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar13 = func_0x03dcf1b0(iVar1,0x25,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
      func_0x01e1a604(param_1,0x25,uVar13);
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
      uStack_28 = 0x25;
      if (*(int *)(iVar1 + 8) != 0) {
        piVar10 = *(int **)(iVar1 + 0x20);
        iStack_30 = iVar1;
        if (piVar10 == (int *)0x0) {
          uVar2 = func_0x04821a00(&uStack_28,0);
        }
        else {
          iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x02457d84(iVar1);
          }
          iVar11 = *piVar10;
          uVar2 = (uint)*(ushort *)(iVar11 + 0xb6);
          if (uVar2 != 0) {
            piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar1) {
                puVar3 = (undefined4 *)(iVar11 + *piVar8 * 8 + 200);
                goto LAB_03dd0a60;
              }
              uVar2 = uVar2 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined4 *)func_0x02457d88(piVar10,iVar1,1);
LAB_03dd0a60:
          uVar2 = (*(code *)*puVar3)(piVar10,0x25,puVar3[1]);
          iVar1 = iStack_30;
        }
        uVar14 = *(uint *)(iVar1 + 8);
        uVar12 = uVar14;
        if (uVar14 == 0) {
          func_0x02457d50();
          uVar12 = *(uint *)(iStack_30 + 8);
          if (uVar12 == 0) {
            uVar15 = func_0x02457d50();
            uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
            iVar1 = (int)uVar15;
            uStack_54 = 0;
            if (*(int *)(iVar1 + 8) != 0) {
              piVar10 = *(int **)(iVar1 + 0x20);
              uStack_60 = uVar13;
              uStack_5c = uVar2;
              uStack_58 = uVar12;
              uStack_50 = uVar14;
              if (piVar10 == (int *)0x0) {
                uVar2 = func_0x04821a00(&uStack_60,0);
              }
              else {
                iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                  iVar11 = func_0x02457d84(iVar11);
                }
                iVar4 = *piVar10;
                uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar2 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar11) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                      goto LAB_03dd0dc4;
                    }
                    uVar2 = uVar2 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar10,iVar11,1);
LAB_03dd0dc4:
                uVar2 = (*(code *)*puVar3)(piVar10,uVar13,puVar3[1]);
              }
              iVar4 = *(int *)(iVar1 + 8);
              iVar11 = iVar4;
              if (iVar4 == 0) {
                func_0x02457d50();
                iVar11 = *(int *)(iVar1 + 8);
                if (iVar11 == 0) {
                  uVar15 = func_0x02457d50();
                  uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84)
                                         );
                  if ((int)uVar2 < 0) {
                    uVar13 = 0;
                  }
                  else {
                    iVar1 = *(int *)((int)uVar15 + 0xc);
                    if (iVar1 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                      func_0x02457d5c();
                    }
                    uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
                  }
                  *extraout_r2_00 = uVar13;
                  return ~uVar2 >> 0x1f;
                }
              }
              func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
              if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                func_0x02457d5c();
              }
              uVar12 = *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) - 1;
              if (-1 < (int)uVar12) {
                uVar14 = 0xffffffff;
                do {
                  uVar5 = uVar12;
                  iVar11 = *(int *)(iVar1 + 0xc);
                  if (iVar11 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar11 + 0xc) <= uVar5) {
                    func_0x02457d5c();
                  }
                  uVar13 = uStack_60;
                  iVar11 = iVar11 + uVar5 * 0x10;
                  if (*(uint *)(iVar11 + 0x10) == (uVar2 & 0x7fffffff)) {
                    piVar10 = *(int **)(iVar1 + 0x20);
                    if (piVar10 == (int *)0x0) {
                      piVar10 = (int *)func_0x02ecb070(*(undefined4 *)
                                                        (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                 0x60) + 0xc));
                      uVar13 = uStack_60;
                      uVar7 = *(undefined4 *)(iVar11 + 0x18);
                      if (piVar10 == (int *)0x0) {
                        func_0x02457d50(0,uVar7);
                      }
                      iVar4 = (**(code **)(*piVar10 + 0x100))
                                        (piVar10,uVar7,uVar13,*(undefined4 *)(*piVar10 + 0x104));
                    }
                    else {
                      uVar7 = *(undefined4 *)(iVar11 + 0x18);
                      if (piVar10 == (int *)0x0) {
                        func_0x02457d50();
                      }
                      iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                        iVar4 = func_0x02457d84(iVar4);
                      }
                      iVar6 = *piVar10;
                      uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
                      if (uVar12 != 0) {
                        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar4) {
                            puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                            goto LAB_03dd0f6c;
                          }
                          uVar12 = uVar12 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar12 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar10,iVar4,0);
LAB_03dd0f6c:
                      iVar4 = (*(code *)*puVar3)(piVar10,uVar7,uVar13,puVar3[1]);
                    }
                    if (iVar4 != 0) {
                      if ((int)uVar14 < 0) {
                        iVar4 = *(int *)(iVar1 + 8);
                        iVar6 = *(int *)(iVar11 + 0x14);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                          func_0x02457d5c();
                        }
                        *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                      }
                      else {
                        iVar4 = *(int *)(iVar1 + 0xc);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        uVar13 = *(undefined4 *)(iVar11 + 0x14);
                        if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                          func_0x02457d5c();
                        }
                        *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                      }
                      *extraout_r2 = *(undefined4 *)(iVar11 + 0x1c);
                      uVar13 = *(undefined4 *)(iVar1 + 0x14);
                      *(undefined4 *)(iVar11 + 0x1c) = 0;
                      iVar6 = *(int *)(iVar1 + 0x1c);
                      iVar4 = *(int *)(iVar1 + 0x18);
                      *(undefined4 *)(iVar11 + 0x14) = uVar13;
                      *(uint *)(iVar11 + 0x10) = 0xffffffff;
                      *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                      *(uint *)(iVar1 + 0x14) = uVar5;
                      *(int *)(iVar1 + 0x18) = iVar4 + 1;
                      return 1;
                    }
                  }
                  uVar12 = *(uint *)(iVar11 + 0x14);
                  uVar14 = uVar5;
                } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
              }
            }
            *extraout_r2 = 0;
            return 0;
          }
        }
        uStack_2c = uVar2 & 0x7fffffff;
        func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
        if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
          func_0x02457d5c();
        }
        uVar2 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
        if (-1 < (int)uVar2) {
          iVar1 = iStack_30;
          uVar12 = 0xffffffff;
          uStack_38 = extraout_r1;
          do {
            uVar14 = uVar2;
            iVar11 = *(int *)(iVar1 + 0xc);
            if (iVar11 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar11 + 0xc) <= uVar14) {
              func_0x02457d5c();
            }
            uVar13 = uStack_28;
            iVar11 = iVar11 + uVar14 * 0x10;
            if (*(uint *)(iVar11 + 0x10) == uStack_2c) {
              piVar10 = *(int **)(iVar1 + 0x20);
              if (piVar10 == (int *)0x0) {
                piVar10 = (int *)func_0x02ecb070(*(undefined4 *)
                                                  (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc
                                                  ));
                uVar13 = uStack_28;
                uVar7 = *(undefined4 *)(iVar11 + 0x18);
                if (piVar10 == (int *)0x0) {
                  func_0x02457d50(0,uVar7);
                }
                iVar4 = (**(code **)(*piVar10 + 0x100))
                                  (piVar10,uVar7,uVar13,*(undefined4 *)(*piVar10 + 0x104));
              }
              else {
                uVar7 = *(undefined4 *)(iVar11 + 0x18);
                if (piVar10 == (int *)0x0) {
                  func_0x02457d50();
                }
                iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                  iVar1 = func_0x02457d84(iVar1);
                }
                iVar4 = *piVar10;
                uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar2 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar1) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                      goto LAB_03dd0c0c;
                    }
                    uVar2 = uVar2 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar2 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar10,iVar1,0);
LAB_03dd0c0c:
                iVar4 = (*(code *)*puVar3)(piVar10,uVar7,uVar13,puVar3[1]);
              }
              iVar1 = iStack_30;
              if (iVar4 != 0) {
                if ((int)uVar12 < 0) {
                  iVar1 = *(int *)(iStack_30 + 8);
                  iVar4 = *(int *)(iVar11 + 0x14);
                  if (iVar1 == 0) {
                    func_0x02457d50();
                  }
                  uVar2 = uStack_38;
                  if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                    func_0x02457d5c();
                  }
                  *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
                }
                else {
                  iVar1 = *(int *)(iStack_30 + 0xc);
                  if (iVar1 == 0) {
                    func_0x02457d50();
                  }
                  uVar13 = *(undefined4 *)(iVar11 + 0x14);
                  if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                    func_0x02457d5c();
                  }
                  *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar13;
                }
                uVar13 = *(undefined4 *)(iStack_30 + 0x14);
                *(undefined4 *)(iVar11 + 0x1c) = 0;
                iVar1 = *(int *)(iStack_30 + 0x18);
                iVar4 = *(int *)(iStack_30 + 0x1c);
                *(uint *)(iVar11 + 0x10) = 0xffffffff;
                *(undefined4 *)(iVar11 + 0x14) = uVar13;
                *(uint *)(iStack_30 + 0x14) = uVar14;
                *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
                return 1;
              }
            }
            uVar2 = *(uint *)(iVar11 + 0x14);
            uVar12 = uVar14;
          } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
        }
      }
      return 0;
    }
    iVar1 = func_0x0229f13c(0x163d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    pcVar9 = (char *)(_UNK_01e1882c + 0x1e18078);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
      func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
      func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
      func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
      func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
      func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
      *pcVar9 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x1636,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x03dcf4b4(iVar1,0x25,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
      if (uVar2 != 0) {
        return uVar2;
      }
      func_0x01e1a508(param_1,0x25);
                    /* WARNING: Could not recover jumptable at 0x01e18180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&UNK_01e18184 + _UNK_01e181c4))();
      return uVar2;
    }
    iVar1 = func_0x0229f13c(0x1636,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0x25,0);
  uStack_38 = uStack_50;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,0x25,0);
  iVar11 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar1 == 0) {
    uVar7 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  uVar2 = func_0x0245495c(iVar11,uVar13,&uStack_38,uVar7);
  return uVar2;
}



// ===== FAT.MBItemEffect$$TryRefreshOrderTip RVA 0x1e07b64 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e17b64(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  pcVar10 = (char *)(_UNK_01e17c90 + 0x1e17b78);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e17c94 + 0x1e17b8c));
    func_0x01384978(*(undefined4 *)(_UNK_01e17c98 + 0x1e17b98));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0a0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01e17c9c + 0x1e17bf0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x020843f8(0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(iVar1 + 0x30);
    if (*(int *)(**(int **)(_UNK_01e17ca0 + 0x1e17c2c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x01dec8c8(uVar14,0);
    if (iVar1 == 1) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x022a040c(iVar1,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f06c(0xa0a2,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0xa0a2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
        pcVar10 = (char *)(_UNK_01e1882c + 0x1e18078);
        if (*pcVar10 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
          func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
          func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
          func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
          func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
          func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
          *pcVar10 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x1636,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar4 = func_0x03dcf4b4(iVar1,0x11,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
          if (uVar4 == 0) {
            iVar1 = func_0x01e1a508(param_1,0x11);
            pcVar10 = (char *)(_UNK_01e1884c + 0x1e1816c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x024504c0(iVar1,0);
            uVar14 = *(undefined4 *)(param_1 + 0x14);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            func_0x024505b4(iVar11,uVar14,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x024504c0(iVar1,0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x02450158(iVar11,0,0);
            if (*pcVar10 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18850 + 0x1e18370));
              *pcVar10 = '\x01';
            }
            puVar2 = *(undefined4 **)(**(int **)(_UNK_01e18854 + 0x1e18388) + 0x5c);
            uVar7 = puVar2[2];
            uVar14 = *puVar2;
            uVar13 = puVar2[1];
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x024503a4(iVar11,uVar14,uVar13,uVar7);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = param_1;
            iVar11 = func_0x024504c0(iVar1,0);
            if (*pcVar10 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
              *pcVar10 = '\x01';
            }
            piVar16 = *(int **)(_UNK_01e18874 + 0x1e18470);
            puVar2 = *(undefined4 **)(*piVar16 + 0x5c);
            uVar14 = puVar2[2];
            uVar7 = *puVar2;
            uVar13 = puVar2[1];
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x0245068c(iVar11,uVar7,uVar13,uVar14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x024504c0(iVar1,0);
            pcVar9 = (char *)(_UNK_01e18878 + 0x1e184c8);
            if (*pcVar9 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
              *pcVar9 = '\x01';
            }
            iVar3 = *(int *)(*piVar16 + 0x5c);
            uVar14 = *(undefined4 *)(iVar3 + 0xc);
            uVar7 = *(undefined4 *)(iVar3 + 0x10);
            uVar13 = *(undefined4 *)(iVar3 + 0x14);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x024503a4(iVar11,uVar14,uVar7,uVar13);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x024504c0(iVar1,0);
            if (*pcVar10 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
              *pcVar10 = '\x01';
            }
            puVar2 = *(undefined4 **)(*piVar16 + 0x5c);
            uVar14 = *puVar2;
            uVar7 = puVar2[1];
            uVar13 = puVar2[2];
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x02450c24(iVar11,uVar14,uVar7,uVar13);
            iVar11 = *(int *)(iStack_34 + 0x20);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x03dcf268(iVar11,0x11,iVar1,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
          }
          return uVar4;
        }
        iVar1 = func_0x0229f13c(0x1636,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto LAB_021d0928;
      }
    }
    iVar1 = func_0x0229f06c(0xa0a3,0);
    if (iVar1 == 0) {
      pcVar10 = (char *)(_UNK_01e18a0c + 0x1e188fc);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
        *pcVar10 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x163d,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03dcf4b4(iVar1,0x11,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = *(int *)(param_1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar14 = func_0x03dcf1b0(iVar1,0x11,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
        func_0x01e1a604(param_1,0x11,uVar14);
        iVar1 = *(int *)(param_1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
        uStack_28 = 0x11;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar16 = *(int **)(iVar1 + 0x20);
          iStack_30 = iVar1;
          if (piVar16 == (int *)0x0) {
            uVar4 = func_0x04821a00(&uStack_28,0);
          }
          else {
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar11 = *piVar16;
            uVar4 = (uint)*(ushort *)(iVar11 + 0xb6);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar2 = (undefined4 *)(iVar11 + *piVar8 * 8 + 200);
                  goto LAB_03dd0a60;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar1,1);
LAB_03dd0a60:
            uVar4 = (*(code *)*puVar2)(piVar16,0x11,puVar2[1]);
            iVar1 = iStack_30;
          }
          uVar15 = *(uint *)(iVar1 + 8);
          uVar12 = uVar15;
          if (uVar15 == 0) {
            func_0x02457d50();
            uVar12 = *(uint *)(iStack_30 + 8);
            if (uVar12 == 0) {
              uVar17 = func_0x02457d50();
              uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
              iVar1 = (int)uVar17;
              uStack_54 = 0;
              if (*(int *)(iVar1 + 8) != 0) {
                piVar16 = *(int **)(iVar1 + 0x20);
                uStack_60 = uVar14;
                uStack_5c = uVar4;
                uStack_58 = uVar12;
                uStack_50 = uVar15;
                if (piVar16 == (int *)0x0) {
                  uVar4 = func_0x04821a00(&uStack_60,0);
                }
                else {
                  iVar11 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
                    iVar11 = func_0x02457d84(iVar11);
                  }
                  iVar3 = *piVar16;
                  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
                  if (uVar4 != 0) {
                    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar11) {
                        puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 200);
                        goto LAB_03dd0dc4;
                      }
                      uVar4 = uVar4 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar11,1);
LAB_03dd0dc4:
                  uVar4 = (*(code *)*puVar2)(piVar16,uVar14,puVar2[1]);
                }
                iVar3 = *(int *)(iVar1 + 8);
                iVar11 = iVar3;
                if (iVar3 == 0) {
                  func_0x02457d50();
                  iVar11 = *(int *)(iVar1 + 8);
                  if (iVar11 == 0) {
                    uVar17 = func_0x02457d50();
                    uVar4 = func_0x03dcfa64((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                             0x84));
                    if ((int)uVar4 < 0) {
                      uVar14 = 0;
                    }
                    else {
                      iVar1 = *(int *)((int)uVar17 + 0xc);
                      if (iVar1 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                        func_0x02457d5c();
                      }
                      uVar14 = *(undefined4 *)(iVar1 + uVar4 * 0x10 + 0x1c);
                    }
                    *extraout_r2_00 = uVar14;
                    return ~uVar4 >> 0x1f;
                  }
                }
                func_0x02457e94(uVar4 & 0x7fffffff,*(undefined4 *)(iVar3 + 0xc));
                if (*(uint *)(iVar11 + 0xc) <= extraout_r1_00) {
                  func_0x02457d5c();
                }
                uVar12 = *(int *)(iVar11 + extraout_r1_00 * 4 + 0x10) - 1;
                if (-1 < (int)uVar12) {
                  uVar15 = 0xffffffff;
                  do {
                    uVar5 = uVar12;
                    iVar11 = *(int *)(iVar1 + 0xc);
                    if (iVar11 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar11 + 0xc) <= uVar5) {
                      func_0x02457d5c();
                    }
                    uVar14 = uStack_60;
                    iVar11 = iVar11 + uVar5 * 0x10;
                    if (*(uint *)(iVar11 + 0x10) == (uVar4 & 0x7fffffff)) {
                      piVar16 = *(int **)(iVar1 + 0x20);
                      if (piVar16 == (int *)0x0) {
                        piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                          (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                   0x60) + 0xc));
                        uVar14 = uStack_60;
                        uVar7 = *(undefined4 *)(iVar11 + 0x18);
                        if (piVar16 == (int *)0x0) {
                          func_0x02457d50(0,uVar7);
                        }
                        iVar3 = (**(code **)(*piVar16 + 0x100))
                                          (piVar16,uVar7,uVar14,*(undefined4 *)(*piVar16 + 0x104));
                      }
                      else {
                        uVar7 = *(undefined4 *)(iVar11 + 0x18);
                        if (piVar16 == (int *)0x0) {
                          func_0x02457d50();
                        }
                        iVar3 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                          iVar3 = func_0x02457d84(iVar3);
                        }
                        iVar6 = *piVar16;
                        uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
                        if (uVar12 != 0) {
                          piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                          do {
                            if (piVar8[-1] == iVar3) {
                              puVar2 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                              goto LAB_03dd0f6c;
                            }
                            uVar12 = uVar12 - 1;
                            piVar8 = piVar8 + 2;
                          } while (uVar12 != 0);
                        }
                        puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar3,0);
LAB_03dd0f6c:
                        iVar3 = (*(code *)*puVar2)(piVar16,uVar7,uVar14,puVar2[1]);
                      }
                      if (iVar3 != 0) {
                        if ((int)uVar15 < 0) {
                          iVar3 = *(int *)(iVar1 + 8);
                          iVar6 = *(int *)(iVar11 + 0x14);
                          if (iVar3 == 0) {
                            func_0x02457d50();
                          }
                          if (*(uint *)(iVar3 + 0xc) <= extraout_r1_00) {
                            func_0x02457d5c();
                          }
                          *(int *)(iVar3 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                        }
                        else {
                          iVar3 = *(int *)(iVar1 + 0xc);
                          if (iVar3 == 0) {
                            func_0x02457d50();
                          }
                          uVar14 = *(undefined4 *)(iVar11 + 0x14);
                          if (*(uint *)(iVar3 + 0xc) <= uVar15) {
                            func_0x02457d5c();
                          }
                          *(undefined4 *)(iVar3 + uVar15 * 0x10 + 0x14) = uVar14;
                        }
                        *extraout_r2 = *(undefined4 *)(iVar11 + 0x1c);
                        uVar14 = *(undefined4 *)(iVar1 + 0x14);
                        *(undefined4 *)(iVar11 + 0x1c) = 0;
                        iVar6 = *(int *)(iVar1 + 0x1c);
                        iVar3 = *(int *)(iVar1 + 0x18);
                        *(undefined4 *)(iVar11 + 0x14) = uVar14;
                        *(uint *)(iVar11 + 0x10) = 0xffffffff;
                        *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                        *(uint *)(iVar1 + 0x14) = uVar5;
                        *(int *)(iVar1 + 0x18) = iVar3 + 1;
                        return 1;
                      }
                    }
                    uVar12 = *(uint *)(iVar11 + 0x14);
                    uVar15 = uVar5;
                  } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
                }
              }
              *extraout_r2 = 0;
              return 0;
            }
          }
          uStack_2c = uVar4 & 0x7fffffff;
          func_0x02457e94(uStack_2c,*(undefined4 *)(uVar15 + 0xc));
          if (*(uint *)(uVar12 + 0xc) <= extraout_r1) {
            func_0x02457d5c();
          }
          uVar4 = *(int *)(uVar12 + extraout_r1 * 4 + 0x10) - 1;
          if (-1 < (int)uVar4) {
            iVar1 = iStack_30;
            uVar12 = 0xffffffff;
            uStack_38 = extraout_r1;
            do {
              uVar15 = uVar4;
              iVar11 = *(int *)(iVar1 + 0xc);
              if (iVar11 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar11 + 0xc) <= uVar15) {
                func_0x02457d5c();
              }
              uVar14 = uStack_28;
              iVar11 = iVar11 + uVar15 * 0x10;
              if (*(uint *)(iVar11 + 0x10) == uStack_2c) {
                piVar16 = *(int **)(iVar1 + 0x20);
                if (piVar16 == (int *)0x0) {
                  piVar16 = (int *)func_0x02ecb070(*(undefined4 *)
                                                    (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                    0xc));
                  uVar14 = uStack_28;
                  uVar7 = *(undefined4 *)(iVar11 + 0x18);
                  if (piVar16 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar3 = (**(code **)(*piVar16 + 0x100))
                                    (piVar16,uVar7,uVar14,*(undefined4 *)(*piVar16 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar11 + 0x18);
                  if (piVar16 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                    iVar1 = func_0x02457d84(iVar1);
                  }
                  iVar3 = *piVar16;
                  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
                  if (uVar4 != 0) {
                    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar1) {
                        puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
                        goto LAB_03dd0c0c;
                      }
                      uVar4 = uVar4 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar4 != 0);
                  }
                  puVar2 = (undefined4 *)func_0x02457d88(piVar16,iVar1,0);
LAB_03dd0c0c:
                  iVar3 = (*(code *)*puVar2)(piVar16,uVar7,uVar14,puVar2[1]);
                }
                iVar1 = iStack_30;
                if (iVar3 != 0) {
                  if ((int)uVar12 < 0) {
                    iVar1 = *(int *)(iStack_30 + 8);
                    iVar3 = *(int *)(iVar11 + 0x14);
                    if (iVar1 == 0) {
                      func_0x02457d50();
                    }
                    uVar4 = uStack_38;
                    if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar1 + uVar4 * 4 + 0x10) = iVar3 + 1;
                  }
                  else {
                    iVar1 = *(int *)(iStack_30 + 0xc);
                    if (iVar1 == 0) {
                      func_0x02457d50();
                    }
                    uVar14 = *(undefined4 *)(iVar11 + 0x14);
                    if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar1 + uVar12 * 0x10 + 0x14) = uVar14;
                  }
                  uVar14 = *(undefined4 *)(iStack_30 + 0x14);
                  *(undefined4 *)(iVar11 + 0x1c) = 0;
                  iVar1 = *(int *)(iStack_30 + 0x18);
                  iVar3 = *(int *)(iStack_30 + 0x1c);
                  *(uint *)(iVar11 + 0x10) = 0xffffffff;
                  *(undefined4 *)(iVar11 + 0x14) = uVar14;
                  *(uint *)(iStack_30 + 0x14) = uVar15;
                  *(int *)(iStack_30 + 0x18) = iVar1 + 1;
                  *(int *)(iStack_30 + 0x1c) = iVar3 + 1;
                  return 1;
                }
              }
              uVar4 = *(uint *)(iVar11 + 0x14);
              uVar12 = uVar15;
            } while (*(uint *)(iVar11 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
      iVar1 = func_0x0229f13c(0x163d,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
LAB_021d0928:
      iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0x11,0);
      uStack_38 = uStack_50;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,0x11,0);
      iVar11 = *(int *)(iVar1 + 8);
      uVar14 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 3;
      if (iVar1 == 0) {
        uVar7 = 2;
      }
      uStack_58 = 0;
      uStack_54 = 0;
      uVar4 = func_0x0245495c(iVar11,uVar14,&uStack_38,uVar7);
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0xa0a3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0a0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
SUB_02173f80:
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar11 = *(int *)(iVar1 + 8);
  uVar14 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uVar4 = func_0x0245495c(iVar11,uVar14,&iStack_30,uVar7);
  return uVar4;
}



// ===== FAT.MBItemEffect$$TryAddFilterEffect RVA 0x1e07ca4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e17ca4(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e17df0 + 0x1e17cbc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e17df4 + 0x1e17cd0));
    func_0x01384978(*(undefined4 *)(_UNK_01e17df8 + 0x1e17cdc));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x1682,0);
  if (iVar1 == 0) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e17dfc + 0x1e17d3c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ddc5c0(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02feb690(iVar1,&iStack_14,0,**(undefined4 **)(_UNK_01e17e00 + 0x1e17d98));
      iVar1 = iStack_14;
      if (iVar2 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02123058(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar1 + 0x2d) != '\0') {
          return;
        }
      }
      func_0x01e17e04(param_1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1682,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$_ApplyFilter RVA 0x1e07e04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e17e04(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  
  iVar1 = func_0x0229f06c(0x1683,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1683,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar4 = (char *)(_UNK_01e17ec8 + 0x1e17e68);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e17ecc + 0x1e17e7c));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_01e17ed0 + 0x1e17e94) + 0x5c);
  uVar6 = *puVar2;
  uVar3 = puVar2[1];
  uVar7 = puVar2[2];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x024503a4(iVar1,uVar6,uVar3,uVar7);
  return;
}



// ===== FAT.MBItemEffect$$RemoveFilterEffect RVA 0x1e07ed4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e17ed4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  
  iVar1 = func_0x0229f06c(0x5da6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x5da7,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      pcVar3 = (char *)(_UNK_01e17ff4 + 0x1e17f90);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e17ff8 + 0x1e17fa4));
        *pcVar3 = '\x01';
      }
      iVar4 = *(int *)(**(int **)(_UNK_01e17ffc + 0x1e17fbc) + 0x5c);
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
      uVar2 = *(undefined4 *)(iVar4 + 0x10);
      uVar6 = *(undefined4 *)(iVar4 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x024503a4(iVar1,uVar5,uVar2,uVar6);
      return;
    }
    iVar1 = func_0x0229f13c(0x5da7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5da6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MBItemEffect$$_RemoveFilter RVA 0x1e07f2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e17f2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  
  iVar1 = func_0x0229f06c(0x5da7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5da7,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar3 = (char *)(_UNK_01e17ff4 + 0x1e17f90);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e17ff8 + 0x1e17fa4));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(**(int **)(_UNK_01e17ffc + 0x1e17fbc) + 0x5c);
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  uVar2 = *(undefined4 *)(iVar4 + 0x10);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x024503a4(iVar1,uVar5,uVar2,uVar6);
  return;
}



// ===== FAT.MBItemEffect$$AddHintForOrderCanFinish RVA 0x1e08000 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e18000(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa0a2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0a2,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4);
    return;
  }
  pcVar5 = (char *)(_UNK_01e1882c + 0x1e18078);
  uStack_24 = unaff_r4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1636,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dcf4b4(iVar1,0x11,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
    if (iVar1 == 0) {
      iVar1 = func_0x01e1a508(param_1,0x11);
      pcVar5 = (char *)(_UNK_01e1884c + 0x1e1816c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar1,0);
      uVar9 = *(undefined4 *)(param_1 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x024505b4(iVar7,uVar9,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar1,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02450158(iVar7,0,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18850 + 0x1e18370));
        *pcVar5 = '\x01';
      }
      puVar2 = *(undefined4 **)(**(int **)(_UNK_01e18854 + 0x1e18388) + 0x5c);
      uVar4 = puVar2[2];
      uVar9 = *puVar2;
      uVar8 = puVar2[1];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x024503a4(iVar7,uVar9,uVar8,uVar4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = param_1;
      iVar7 = func_0x024504c0(iVar1,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
        *pcVar5 = '\x01';
      }
      piVar10 = *(int **)(_UNK_01e18874 + 0x1e18470);
      puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = puVar2[2];
      uVar4 = *puVar2;
      uVar8 = puVar2[1];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x0245068c(iVar7,uVar4,uVar8,uVar9);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar1,0);
      pcVar6 = (char *)(_UNK_01e18878 + 0x1e184c8);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
        *pcVar6 = '\x01';
      }
      iVar3 = *(int *)(*piVar10 + 0x5c);
      uVar9 = *(undefined4 *)(iVar3 + 0xc);
      uVar4 = *(undefined4 *)(iVar3 + 0x10);
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x024503a4(iVar7,uVar9,uVar4,uVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar1,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
        *pcVar5 = '\x01';
      }
      puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = *puVar2;
      uVar4 = puVar2[1];
      uVar8 = puVar2[2];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x02450c24(iVar7,uVar9,uVar4,uVar8);
      iVar7 = *(int *)(iStack_34 + 0x20);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf268(iVar7,0x11,iVar1,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x1636,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_24;
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0x11,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,0x11,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBItemEffect$$_AddEffect RVA 0x1e0805c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1805c(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01e1882c + 0x1e18078);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1636,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1636,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03dcf4b4(iVar1,param_2,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
  if (iVar1 != 0) {
    return;
  }
  iVar1 = func_0x01e1a508(param_1,param_2);
  pcVar7 = (char *)(_UNK_01e1884c + 0x1e1816c);
  if ((int)param_2 < 0x12) {
    if ((param_2 < 3) || (param_2 == 0xb)) goto LAB_01e183bc;
    if (param_2 == 0x11) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x024504c0(iVar1,0);
      uVar11 = *(undefined4 *)(param_1 + 0x14);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x024505b4(iVar9,uVar11,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x024504c0(iVar1,0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x02450158(iVar9,0,0);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18850 + 0x1e18370));
        *pcVar7 = '\x01';
      }
      puVar2 = *(undefined4 **)(**(int **)(_UNK_01e18854 + 0x1e18388) + 0x5c);
      uVar6 = puVar2[2];
      uVar11 = *puVar2;
      uVar10 = puVar2[1];
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x024503a4(iVar9,uVar11,uVar10,uVar6);
      goto LAB_01e1841c;
    }
LAB_01e183e0:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x024504c0(iVar1,0);
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    goto LAB_01e18400;
  }
  switch(param_2) {
  default:
    goto LAB_01e183e0;
  case 0x17:
  case 0x1f:
  case 0x24:
  case 0x25:
LAB_01e183bc:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x024504c0(iVar1,0);
    uVar11 = *(undefined4 *)(param_1 + 0x14);
    break;
  case 0x1c:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x024504c0(iVar1,0);
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x024505b4(iVar9,uVar11,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x02fe2a20(iVar1,**(undefined4 **)(&UNK_01e18224 + _UNK_01e18858));
    piVar12 = (int *)func_0x021566f4(0);
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x30);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar11 = func_0x0210e2d4(iVar3,0);
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar12;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01e1828c + _UNK_01e1885c)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x100);
          goto code_r0x01e186ec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(&UNK_01e1828c + _UNK_01e1885c),8);
code_r0x01e186ec:
    iVar3 = (*(code *)*puVar2)(piVar12,uVar11,puVar2[1]);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar11 = *(undefined4 *)(iVar3 + 0x1c);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x0267cc24(iVar9,uVar11,0);
    goto LAB_01e1841c;
  case 0x1d:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x024504c0(iVar1,0);
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x024505b4(iVar9,uVar11,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x02fe2a20(iVar1,**(undefined4 **)(&UNK_01e18618 + _UNK_01e18860));
    piVar12 = (int *)func_0x021566f4(0);
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x30);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar11 = func_0x0210e2d4(iVar3,0);
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar12;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01e18680 + _UNK_01e18864)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0x100);
          goto code_r0x01e18744;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(&UNK_01e18680 + _UNK_01e18864),8);
code_r0x01e18744:
    iVar3 = (*(code *)*puVar2)(piVar12,uVar11,puVar2[1]);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar11 = *(undefined4 *)(iVar3 + 0x1c);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x0267cc24(iVar9,uVar11,0);
    uStack_28 = 0x1d;
    uStack_2c = 0xffffffff;
    uStack_30 = **(undefined4 **)(&UNK_01e1879c + _UNK_01e18868);
    uVar11 = func_0x0244f5f4(&uStack_30,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      func_0x02450840(0,uVar11,0);
      func_0x01384bf0();
    }
    else {
      func_0x02450840(iVar1,uVar11,0);
    }
    iVar9 = func_0x02fe27b8(iVar1,**(undefined4 **)(&UNK_01e187fc + _UNK_01e1886c));
    uVar11 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x0229f1d0(iVar9,uVar11,0);
    goto LAB_01e1841c;
  case 0x26:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x024504c0(iVar1,0);
    uVar11 = *(undefined4 *)(param_1 + 0x18);
  }
LAB_01e18400:
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x024505b4(iVar9,uVar11,0);
LAB_01e1841c:
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = param_1;
  iVar9 = func_0x024504c0(iVar1,0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
    *pcVar7 = '\x01';
  }
  piVar12 = *(int **)(_UNK_01e18874 + 0x1e18470);
  puVar2 = *(undefined4 **)(*piVar12 + 0x5c);
  uVar11 = puVar2[2];
  uVar6 = *puVar2;
  uVar10 = puVar2[1];
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uStack_38 = 0;
  func_0x0245068c(iVar9,uVar6,uVar10,uVar11);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x024504c0(iVar1,0);
  pcVar8 = (char *)(_UNK_01e18878 + 0x1e184c8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
    *pcVar8 = '\x01';
  }
  iVar3 = *(int *)(*piVar12 + 0x5c);
  uVar11 = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x10);
  uVar10 = *(undefined4 *)(iVar3 + 0x14);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uStack_38 = 0;
  func_0x024503a4(iVar9,uVar11,uVar6,uVar10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x024504c0(iVar1,0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
    *pcVar7 = '\x01';
  }
  puVar2 = *(undefined4 **)(*piVar12 + 0x5c);
  uVar11 = *puVar2;
  uVar6 = puVar2[1];
  uVar10 = puVar2[2];
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uStack_38 = 0;
  func_0x02450c24(iVar9,uVar11,uVar6,uVar10);
  iVar9 = *(int *)(iStack_34 + 0x20);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03dcf268(iVar9,param_2,iVar1,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
  return;
}



// ===== FAT.MBItemEffect$$RemoveHintForOrderCanFinish RVA 0x1e08888 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e18888(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa0a3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0a3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&stack0xffffffb8,0,0);
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
    return uVar2;
  }
  pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x163d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0x11,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,0x11,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03dcf4b4(iVar1,0x11,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x03dcf1b0(iVar1,0x11,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
  func_0x01e1a604(param_1,0x11,uVar13);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
  uStack_28 = 0x11;
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(&uStack_28,0);
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03dd0a60;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03dd0a60:
      uVar2 = (*(code *)*puVar3)(piVar9,0x11,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,0);
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03dd0dc4;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03dd0f6c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  *(undefined4 *)(iVar10 + 0x1c) = 0;
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = uStack_28;
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = uStack_28;
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03dd0c0c;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03dd0c0c:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            iVar1 = *(int *)(iStack_30 + 0x18);
            iVar4 = *(int *)(iStack_30 + 0x1c);
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x18) = iVar1 + 1;
            *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemEffect$$_RemoveEffect RVA 0x1e088e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e188e4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x163d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03dcf4b4(iVar1,param_2,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x03dcf1b0(iVar1,param_2,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
  func_0x01e1a604(param_1,param_2,uVar13);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    auStack_28[0] = param_2;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(auStack_28,0);
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03dd0a60;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03dd0a60:
      uVar2 = (*(code *)*puVar3)(piVar9,param_2,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,0);
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03dd0dc4;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03dd0f6c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  *(undefined4 *)(iVar10 + 0x1c) = 0;
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = auStack_28[0];
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = auStack_28[0];
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03dd0c0c;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03dd0c0c:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            iVar1 = *(int *)(iStack_30 + 0x18);
            iVar4 = *(int *)(iStack_30 + 0x1c);
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x18) = iVar1 + 1;
            *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemEffect$$AddHintForConsumeEnergy RVA 0x1e08a28 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e18a28(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x1641,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x1641,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4);
    return;
  }
  pcVar5 = (char *)(_UNK_01e1882c + 0x1e18078);
  uStack_24 = unaff_r4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x1636,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dcf4b4(iVar3,0,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
    if (iVar3 == 0) {
      iVar3 = func_0x01e1a508(param_1,0);
      pcVar5 = (char *)(_UNK_01e1884c + 0x1e1816c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar3,0);
      uVar9 = *(undefined4 *)(param_1 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x024505b4(iVar7,uVar9,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = param_1;
      iVar7 = func_0x024504c0(iVar3,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
        *pcVar5 = '\x01';
      }
      piVar10 = *(int **)(_UNK_01e18874 + 0x1e18470);
      puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = puVar1[2];
      uVar4 = *puVar1;
      uVar8 = puVar1[1];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x0245068c(iVar7,uVar4,uVar8,uVar9);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar3,0);
      pcVar6 = (char *)(_UNK_01e18878 + 0x1e184c8);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
        *pcVar6 = '\x01';
      }
      iVar2 = *(int *)(*piVar10 + 0x5c);
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      uVar4 = *(undefined4 *)(iVar2 + 0x10);
      uVar8 = *(undefined4 *)(iVar2 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x024503a4(iVar7,uVar9,uVar4,uVar8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar3,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
        *pcVar5 = '\x01';
      }
      puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = *puVar1;
      uVar4 = puVar1[1];
      uVar8 = puVar1[2];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x02450c24(iVar7,uVar9,uVar4,uVar8);
      iVar7 = *(int *)(iStack_34 + 0x20);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf268(iVar7,0,iVar3,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x1636,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_24;
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,0,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBItemEffect$$RemoveHintForConsumeEnergy RVA 0x1e08a84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e18a84(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0x1643,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1643,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&stack0xffffffb8,0,0);
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
    return uVar2;
  }
  pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x163d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,0,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03dcf4b4(iVar1,0,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x03dcf1b0(iVar1,0,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
  func_0x01e1a604(param_1,0,uVar13);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
  uStack_28 = 0;
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(&uStack_28,0);
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03dd0a60;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03dd0a60:
      uVar2 = (*(code *)*puVar3)(piVar9,0,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,0);
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03dd0dc4;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03dd0f6c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  *(undefined4 *)(iVar10 + 0x1c) = 0;
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = uStack_28;
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = uStack_28;
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03dd0c0c;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03dd0c0c:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            iVar1 = *(int *)(iStack_30 + 0x18);
            iVar4 = *(int *)(iStack_30 + 0x1c);
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x18) = iVar1 + 1;
            *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemEffect$$AddHintForConsumeBoostEnergy RVA 0x1e08ae0 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e18ae0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0xa075,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa075,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4);
    return;
  }
  pcVar5 = (char *)(_UNK_01e1882c + 0x1e18078);
  uStack_24 = unaff_r4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x1636,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dcf4b4(iVar3,0xb,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
    if (iVar3 == 0) {
      iVar3 = func_0x01e1a508(param_1,0xb);
      pcVar5 = (char *)(_UNK_01e1884c + 0x1e1816c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar3,0);
      uVar9 = *(undefined4 *)(param_1 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x024505b4(iVar7,uVar9,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = param_1;
      iVar7 = func_0x024504c0(iVar3,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
        *pcVar5 = '\x01';
      }
      piVar10 = *(int **)(_UNK_01e18874 + 0x1e18470);
      puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = puVar1[2];
      uVar4 = *puVar1;
      uVar8 = puVar1[1];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x0245068c(iVar7,uVar4,uVar8,uVar9);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar3,0);
      pcVar6 = (char *)(_UNK_01e18878 + 0x1e184c8);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
        *pcVar6 = '\x01';
      }
      iVar2 = *(int *)(*piVar10 + 0x5c);
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      uVar4 = *(undefined4 *)(iVar2 + 0x10);
      uVar8 = *(undefined4 *)(iVar2 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x024503a4(iVar7,uVar9,uVar4,uVar8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar3,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
        *pcVar5 = '\x01';
      }
      puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = *puVar1;
      uVar4 = puVar1[1];
      uVar8 = puVar1[2];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x02450c24(iVar7,uVar9,uVar4,uVar8);
      iVar7 = *(int *)(iStack_34 + 0x20);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf268(iVar7,0xb,iVar3,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x1636,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_24;
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0xb,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,0xb,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBItemEffect$$RemoveHintForConsumeBoostEnergy RVA 0x1e08b3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e18b3c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa077,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa077,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&stack0xffffffb8,0,0);
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
    return uVar2;
  }
  pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x163d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0xb,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,0xb,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03dcf4b4(iVar1,0xb,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x03dcf1b0(iVar1,0xb,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
  func_0x01e1a604(param_1,0xb,uVar13);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
  uStack_28 = 0xb;
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(&uStack_28,0);
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03dd0a60;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03dd0a60:
      uVar2 = (*(code *)*puVar3)(piVar9,0xb,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,0);
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03dd0dc4;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03dd0f6c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  *(undefined4 *)(iVar10 + 0x1c) = 0;
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = uStack_28;
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = uStack_28;
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03dd0c0c;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03dd0c0c:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            iVar1 = *(int *)(iStack_30 + 0x18);
            iVar4 = *(int *)(iStack_30 + 0x1c);
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x18) = iVar1 + 1;
            *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemEffect$$AddHintForLightbulb RVA 0x1e08b98 =====

/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e182c8) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Removing unreachable block (ram,0x01e1841c) */
/* WARNING: Removing unreachable block (ram,0x01e18424) */
/* WARNING: Removing unreachable block (ram,0x01e18428) */
/* WARNING: Removing unreachable block (ram,0x01e18448) */
/* WARNING: Removing unreachable block (ram,0x01e1845c) */
/* WARNING: Removing unreachable block (ram,0x01e18480) */
/* WARNING: Removing unreachable block (ram,0x01e18484) */
/* WARNING: Removing unreachable block (ram,0x01e184a8) */
/* WARNING: Removing unreachable block (ram,0x01e184ac) */
/* WARNING: Removing unreachable block (ram,0x01e184d0) */
/* WARNING: Removing unreachable block (ram,0x01e184e4) */
/* WARNING: Removing unreachable block (ram,0x01e184fc) */
/* WARNING: Removing unreachable block (ram,0x01e18500) */
/* WARNING: Removing unreachable block (ram,0x01e18524) */
/* WARNING: Removing unreachable block (ram,0x01e18528) */
/* WARNING: Removing unreachable block (ram,0x01e18544) */
/* WARNING: Removing unreachable block (ram,0x01e18558) */
/* WARNING: Removing unreachable block (ram,0x01e1856c) */
/* WARNING: Removing unreachable block (ram,0x01e18570) */
/* WARNING: Removing unreachable block (ram,0x01e1859c) */
/* WARNING: Removing unreachable block (ram,0x01e185a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e18b98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0xa07a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa07a,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
    return;
  }
  pcVar3 = (char *)(_UNK_01e1882c + 0x1e18078);
  uStack_24 = unaff_r4;
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1636,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dcf4b4(iVar1,0x17,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
    if (iVar1 == 0) {
      func_0x01e1a508(param_1,0x17);
                    /* WARNING: Could not recover jumptable at 0x01e18180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_01e18184 + _UNK_01e1818c))();
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x1636,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_24;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0x17,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,0x17,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MBItemEffect$$RemoveHintForLightbulb RVA 0x1e08bf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e18bf4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa07c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa07c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&stack0xffffffb8,0,0);
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
    return uVar2;
  }
  pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x163d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0x17,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,0x17,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03dcf4b4(iVar1,0x17,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x03dcf1b0(iVar1,0x17,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
  func_0x01e1a604(param_1,0x17,uVar13);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
  uStack_28 = 0x17;
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(&uStack_28,0);
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03dd0a60;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03dd0a60:
      uVar2 = (*(code *)*puVar3)(piVar9,0x17,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,0);
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03dd0dc4;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03dd0f6c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  *(undefined4 *)(iVar10 + 0x1c) = 0;
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = uStack_28;
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = uStack_28;
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03dd0c0c;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03dd0c0c:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            iVar1 = *(int *)(iStack_30 + 0x18);
            iVar4 = *(int *)(iStack_30 + 0x1c);
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x18) = iVar1 + 1;
            *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemEffect$$AddReadyToUseEffect RVA 0x1e08c50 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e18c50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x1635,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x1635,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4);
    return;
  }
  pcVar5 = (char *)(_UNK_01e1882c + 0x1e18078);
  uStack_24 = unaff_r4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x1636,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dcf4b4(iVar3,1,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
    if (iVar3 == 0) {
      iVar3 = func_0x01e1a508(param_1,1);
      pcVar5 = (char *)(_UNK_01e1884c + 0x1e1816c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar3,0);
      uVar9 = *(undefined4 *)(param_1 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x024505b4(iVar7,uVar9,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = param_1;
      iVar7 = func_0x024504c0(iVar3,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
        *pcVar5 = '\x01';
      }
      piVar10 = *(int **)(_UNK_01e18874 + 0x1e18470);
      puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = puVar1[2];
      uVar4 = *puVar1;
      uVar8 = puVar1[1];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x0245068c(iVar7,uVar4,uVar8,uVar9);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar3,0);
      pcVar6 = (char *)(_UNK_01e18878 + 0x1e184c8);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
        *pcVar6 = '\x01';
      }
      iVar2 = *(int *)(*piVar10 + 0x5c);
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      uVar4 = *(undefined4 *)(iVar2 + 0x10);
      uVar8 = *(undefined4 *)(iVar2 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x024503a4(iVar7,uVar9,uVar4,uVar8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x024504c0(iVar3,0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
        *pcVar5 = '\x01';
      }
      puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar9 = *puVar1;
      uVar4 = puVar1[1];
      uVar8 = puVar1[2];
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x02450c24(iVar7,uVar9,uVar4,uVar8);
      iVar7 = *(int *)(iStack_34 + 0x20);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf268(iVar7,1,iVar3,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x1636,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_24;
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,1,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,1,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBItemEffect$$RemoveReadyToUseEffect RVA 0x1e08cac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e18cac(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0x163c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&stack0xffffffb8,0,0);
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
    return uVar2;
  }
  pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x163d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,1,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03dcf4b4(iVar1,1,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x03dcf1b0(iVar1,1,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
  func_0x01e1a604(param_1,1,uVar13);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
  uStack_28 = 1;
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(&uStack_28,0);
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03dd0a60;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03dd0a60:
      uVar2 = (*(code *)*puVar3)(piVar9,1,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,0);
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03dd0dc4;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03dd0f6c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  *(undefined4 *)(iVar10 + 0x1c) = 0;
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = uStack_28;
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = uStack_28;
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03dd0c0c;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03dd0c0c:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            iVar1 = *(int *)(iStack_30 + 0x18);
            iVar4 = *(int *)(iStack_30 + 0x1c);
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x18) = iVar1 + 1;
            *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemEffect$$AddSelectOutlineEffect RVA 0x1e08d08 =====

void FUN_01e18d08(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e7a,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9e7a,0);
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



// ===== FAT.MBItemEffect$$RemoveSelectOutlineEffect RVA 0x1e08d54 =====

void FUN_01e18d54(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ef5,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5ef5,0);
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



// ===== FAT.MBItemEffect$$AddShadowEffect RVA 0x1e08da0 =====

/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e182c8) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Removing unreachable block (ram,0x01e1841c) */
/* WARNING: Removing unreachable block (ram,0x01e18424) */
/* WARNING: Removing unreachable block (ram,0x01e18428) */
/* WARNING: Removing unreachable block (ram,0x01e18448) */
/* WARNING: Removing unreachable block (ram,0x01e1845c) */
/* WARNING: Removing unreachable block (ram,0x01e18480) */
/* WARNING: Removing unreachable block (ram,0x01e18484) */
/* WARNING: Removing unreachable block (ram,0x01e184a8) */
/* WARNING: Removing unreachable block (ram,0x01e184ac) */
/* WARNING: Removing unreachable block (ram,0x01e184d0) */
/* WARNING: Removing unreachable block (ram,0x01e184e4) */
/* WARNING: Removing unreachable block (ram,0x01e184fc) */
/* WARNING: Removing unreachable block (ram,0x01e18500) */
/* WARNING: Removing unreachable block (ram,0x01e18524) */
/* WARNING: Removing unreachable block (ram,0x01e18528) */
/* WARNING: Removing unreachable block (ram,0x01e18544) */
/* WARNING: Removing unreachable block (ram,0x01e18558) */
/* WARNING: Removing unreachable block (ram,0x01e1856c) */
/* WARNING: Removing unreachable block (ram,0x01e18570) */
/* WARNING: Removing unreachable block (ram,0x01e1859c) */
/* WARNING: Removing unreachable block (ram,0x01e185a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e18da0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0xa0a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0a4,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
    return;
  }
  pcVar3 = (char *)(_UNK_01e1882c + 0x1e18078);
  uStack_24 = unaff_r4;
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1636,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dcf4b4(iVar1,0x1d,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
    if (iVar1 == 0) {
      func_0x01e1a508(param_1,0x1d);
                    /* WARNING: Could not recover jumptable at 0x01e18180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_01e18184 + _UNK_01e181a4))();
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x1636,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_24;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0x1d,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,0x1d,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MBItemEffect$$RemoveShadowEffect RVA 0x1e08dfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e18dfc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar1 = func_0x0229f06c(0xa0a5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0a5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&stack0xffffffb8,0,0);
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
    return uVar2;
  }
  pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x163d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0x1d,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,0x1d,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03dcf4b4(iVar1,0x1d,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar13 = func_0x03dcf1b0(iVar1,0x1d,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
  func_0x01e1a604(param_1,0x1d,uVar13);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
  uStack_28 = 0x1d;
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(&uStack_28,0);
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03dd0a60;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03dd0a60:
      uVar2 = (*(code *)*puVar3)(piVar9,0x1d,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,0);
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03dd0dc4;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03dd0f6c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  *(undefined4 *)(iVar10 + 0x1c) = 0;
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = uStack_28;
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = uStack_28;
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03dd0c0c;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03dd0c0c:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            iVar1 = *(int *)(iStack_30 + 0x18);
            iVar4 = *(int *)(iStack_30 + 0x1c);
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x18) = iVar1 + 1;
            *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.MBItemEffect$$TrySetGirdRewardLocalPos RVA 0x1e08f80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e18f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01e19124 + 0x1e18fa0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e19128 + 0x1e18fb8));
    func_0x01384978(*(undefined4 *)(_UNK_01e1912c + 0x1e18fc4));
    func_0x01384978(*(undefined4 *)(_UNK_01e19130 + 0x1e18fd0));
    *pcVar3 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xa0a6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03dd1078(iVar1,0x1f,&iStack_24,**(undefined4 **)(_UNK_01e19134 + 0x1e19058));
    iVar1 = iStack_24;
    if (iVar2 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01e19138 + 0x1e19084));
      if (*(int *)(**(int **)(_UNK_01e1913c + 0x1e1909c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(iVar1,0,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02450cb0(&uStack_30,iVar2,param_2,param_3,param_4,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e19140(iVar1,uStack_30,uStack_2c,uStack_28);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b96bc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$TryPlayGirdRewardTween RVA 0x1e091e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e191e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01e19344 + 0x1e19204);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e19348 + 0x1e19218));
    func_0x01384978(*(undefined4 *)(_UNK_01e1934c + 0x1e19224));
    func_0x01384978(*(undefined4 *)(_UNK_01e19350 + 0x1e19230));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0xa0a8,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03dd1078(iVar1,0x1f,&iStack_1c,**(undefined4 **)(_UNK_01e19354 + 0x1e192b4));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01e19358 + 0x1e192e0));
      if (*(int *)(**(int **)(_UNK_01e1935c + 0x1e192f8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(iVar1,0,0);
      if (iVar2 == 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e19360(iVar1,param_2,param_3);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0a8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a82bc(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$TryConsumeGirdReward RVA 0x1e097b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e197b4(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e198f8 + 0x1e197cc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e198fc + 0x1e197e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e19900 + 0x1e197ec));
    func_0x01384978(*(undefined4 *)(_UNK_01e19904 + 0x1e197f8));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9fdc,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03dd1078(iVar1,0x1f,&iStack_14,**(undefined4 **)(_UNK_01e19908 + 0x1e19870));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01e1990c + 0x1e1989c));
      if (*(int *)(**(int **)(_UNK_01e19910 + 0x1e198b4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(iVar1,0,0);
      if (iVar2 == 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e19914(iVar1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fdc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$TryClickGirdReward RVA 0x1e099a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e199a8(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e19aec + 0x1e199c0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e19af0 + 0x1e199d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e19af4 + 0x1e199e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e19af8 + 0x1e199ec));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9ebb,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03dd1078(iVar1,0x1f,&iStack_14,**(undefined4 **)(_UNK_01e19afc + 0x1e19a64));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01e19b00 + 0x1e19a90));
      if (*(int *)(**(int **)(_UNK_01e19b04 + 0x1e19aa8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(iVar1,0,0);
      if (iVar2 == 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e19b08(iVar1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9ebb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$_SetTimeScaleBuffUsable RVA 0x1e09e28 =====

void FUN_01e19e28(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x165c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x165c,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
  *(char *)(param_1 + 0x25) = (char)param_2;
  return;
}



// ===== FAT.MBItemEffect$$SetOrderTipDirty RVA 0x1e09e84 =====

void FUN_01e19e84(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f1a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f1a,0);
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
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}



// ===== FAT.MBItemEffect$$AddOnBoardEffect RVA 0x1e09edc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e19edc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01e1a070 + 0x1e19ef8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a074 + 0x1e19f0c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1a078 + 0x1e19f18));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0ac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0ac,0);
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
    func_0x01485258(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01e1a07c + 0x1e19f78) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar7 = func_0x01dda730(3,0);
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a080 + 0x1e19fa4));
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0243c430(iVar1,uVar7,uVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x024504c0(iVar1,0);
  pcVar4 = (char *)(_UNK_01e1a084 + 0x1e19ffc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a088 + 0x1e1a010));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_01e1a08c + 0x1e1a028) + 0x5c);
  uVar3 = *puVar2;
  uVar5 = puVar2[1];
  uVar8 = puVar2[2];
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x0245068c(iVar6,uVar3,uVar5,uVar8);
  pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),param_2,uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x5f34,0);
  if (iVar6 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
    uVar7 = func_0x0244f5f4(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dda7a0(iVar1,param_2,uVar7);
  }
  else {
    iVar6 = func_0x0229f13c(0x5f34,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02238c78(iVar6,iVar1,param_2,uVar7);
  }
  return;
}



// ===== FAT.MBItemEffect$$AddOnBoardEffect4X RVA 0x1e0a090 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1a090(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01e1a224 + 0x1e1a0ac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a228 + 0x1e1a0c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e1a22c + 0x1e1a0cc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0ad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0ad,0);
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
    func_0x01485258(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01e1a230 + 0x1e1a12c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar7 = func_0x01dda730(0x12,0);
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a234 + 0x1e1a158));
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0243c430(iVar1,uVar7,uVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x024504c0(iVar1,0);
  pcVar4 = (char *)(_UNK_01e1a238 + 0x1e1a1b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a23c + 0x1e1a1c4));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_01e1a240 + 0x1e1a1dc) + 0x5c);
  uVar3 = *puVar2;
  uVar5 = puVar2[1];
  uVar8 = puVar2[2];
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x0245068c(iVar6,uVar3,uVar5,uVar8);
  pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),param_2,uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x5f34,0);
  if (iVar6 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
    uVar7 = func_0x0244f5f4(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dda7a0(iVar1,param_2,uVar7);
  }
  else {
    iVar6 = func_0x0229f13c(0x5f34,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02238c78(iVar6,iVar1,param_2,uVar7);
  }
  return;
}



// ===== FAT.MBItemEffect$$AddOnBoardEffectForBubble RVA 0x1e0a244 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1a244(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0xa0ae,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0ae,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3);
    return;
  }
  pcVar4 = (char *)(_UNK_01e1a070 + 0x1e19ef8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a074 + 0x1e19f0c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1a078 + 0x1e19f18));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa0ac,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0ac,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0x3f800000,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,0x3f800000,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01e1a07c + 0x1e19f78) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar7 = func_0x01dda730(3,0);
  iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a080 + 0x1e19fa4));
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0243c430(iVar2,uVar7,uVar3,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x024504c0(iVar2,0);
  pcVar4 = (char *)(_UNK_01e1a084 + 0x1e19ffc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a088 + 0x1e1a010));
    *pcVar4 = '\x01';
  }
  puVar1 = *(undefined4 **)(**(int **)(_UNK_01e1a08c + 0x1e1a028) + 0x5c);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar8 = puVar1[2];
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x0245068c(iVar6,uVar3,uVar5,uVar8);
  pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),0x3f800000,uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x5f34,0);
  if (iVar6 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
    uStack_20 = 0xffffffff;
    uStack_1c = uVar7;
    uVar7 = func_0x0244f5f4(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dda7a0(iVar2,0x3f800000,uVar7);
  }
  else {
    iVar6 = func_0x0229f13c(0x5f34,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02238c78(iVar6,iVar2,0x3f800000,uVar7);
  }
  return;
}



// ===== FAT.MBItemEffect$$AddOutOfInventoryEffect RVA 0x1e0a2a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1a2a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0xa0af,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0af,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3);
    return;
  }
  pcVar4 = (char *)(_UNK_01e1a070 + 0x1e19ef8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a074 + 0x1e19f0c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1a078 + 0x1e19f18));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa0ac,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0ac,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0x40400000,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,0x40400000,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01e1a07c + 0x1e19f78) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar7 = func_0x01dda730(3,0);
  iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a080 + 0x1e19fa4));
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0243c430(iVar2,uVar7,uVar3,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x024504c0(iVar2,0);
  pcVar4 = (char *)(_UNK_01e1a084 + 0x1e19ffc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a088 + 0x1e1a010));
    *pcVar4 = '\x01';
  }
  puVar1 = *(undefined4 **)(**(int **)(_UNK_01e1a08c + 0x1e1a028) + 0x5c);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar8 = puVar1[2];
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x0245068c(iVar6,uVar3,uVar5,uVar8);
  pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),0x40400000,uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x5f34,0);
  if (iVar6 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
    uStack_20 = 0xffffffff;
    uStack_1c = uVar7;
    uVar7 = func_0x0244f5f4(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dda7a0(iVar2,0x40400000,uVar7);
  }
  else {
    iVar6 = func_0x0229f13c(0x5f34,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02238c78(iVar6,iVar2,0x40400000,uVar7);
  }
  return;
}



// ===== FAT.MBItemEffect$$AddTokenMultiEffect RVA 0x1e0a300 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1a300(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01e1a494 + 0x1e1a318);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a498 + 0x1e1a32c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1a49c + 0x1e1a338));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f33,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f33,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01e1a4a0 + 0x1e1a394) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x01dda730(0x1a,0);
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a4a4 + 0x1e1a3c0));
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0243c430(iVar1,uVar6,uVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x024504c0(iVar1,0);
  pcVar4 = (char *)(_UNK_01e1a4a8 + 0x1e1a418);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a4ac + 0x1e1a42c));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_01e1a4b0 + 0x1e1a444) + 0x5c);
  uVar7 = *puVar2;
  uVar3 = puVar2[1];
  uVar8 = puVar2[2];
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x0245068c(iVar5,uVar7,uVar3,uVar8);
  pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),0x40400000,uVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
    *pcVar4 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x5f34,0);
  if (iVar5 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
    uVar6 = func_0x0244f5f4(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dda7a0(iVar1,0x40400000,uVar6);
  }
  else {
    iVar5 = func_0x0229f13c(0x5f34,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02238c78(iVar5,iVar1,0x40400000,uVar6);
  }
  return;
}



// ===== FAT.MBItemEffect$$_IsTapGuideFinished RVA 0x1e0a4b4 =====

undefined4 FUN_01e1a4b4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa0b0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0b0,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.MBItemEffect$$_CreateEffect RVA 0x1e0a508 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1a508(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_01e1a5f0 + 0x1e1a520);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a5f4 + 0x1e1a534));
    func_0x01384978(*(undefined4 *)(_UNK_01e1a5f8 + 0x1e1a540));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1637,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1637,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021d091c + 0x21d0828);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d0920 + 0x21d083c),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021d0924 + 0x21d090c));
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a5fc + 0x1e1a59c));
  if (*(int *)(**(int **)(_UNK_01e1a600 + 0x1e1a5b0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x01dda730(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_02440fc4 + 0x2440f24);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02440fc8 + 0x2440f38),uVar6,0);
    *pcVar5 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x48b,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x48b,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0218b0d8 + 0x218afe4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218b0dc + 0x218aff8),iVar1,uVar6,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar6,0);
    iVar3 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
    func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0218b0e0 + 0x218b0c8));
    return;
  }
  uStack_1c = **(undefined4 **)(_UNK_02440fcc + 0x2440f9c);
  uStack_18 = 0xffffffff;
  uVar6 = func_0x0244f5f4(&uStack_1c,0);
  func_0x0244ad68(iVar1,uVar6);
  return;
}



// ===== FAT.MBItemEffect$$_ReleaseEffect RVA 0x1e0a604 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1a604(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01e1a708 + 0x1e1a624);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a70c + 0x1e1a638));
    func_0x01384978(*(undefined4 *)(_UNK_01e1a710 + 0x1e1a644));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x163e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x021d09f8(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a714 + 0x1e1a6ac));
  if (*(int *)(**(int **)(_UNK_01e1a718 + 0x1e1a6c0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar2 = func_0x01dda730(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_0243be3c + 0x243bd94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0243be40 + 0x243bda8),uVar2,param_3,0);
    *pcVar4 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x397,0);
  if (iVar3 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_0243be44 + 0x243be10);
    uStack_20 = 0xffffffff;
    uStack_1c = uVar2;
    uVar2 = func_0x0244f5f4(&uStack_24,0);
    func_0x0244adcc(iVar1,uVar2,param_3);
  }
  else {
    iVar3 = func_0x0229f13c(0x397,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x021872a4(iVar3,iVar1,uVar2,param_3,0);
  }
  return;
}



// ===== FAT.MBItemEffect$$.ctor RVA 0x1e0a71c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1a71c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01e1a794 + 0x1e1a730);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a798 + 0x1e1a744));
    func_0x01384978(*(undefined4 *)(_UNK_01e1a79c + 0x1e1a750));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e1a7a0 + 0x1e1a764));
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_01e1a7a4 + 0x1e1a778));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


