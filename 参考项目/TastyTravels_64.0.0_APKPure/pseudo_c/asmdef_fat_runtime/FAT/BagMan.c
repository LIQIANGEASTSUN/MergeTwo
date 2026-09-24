/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BagMan$$get_CurItemBagUnlockId RVA 0x1c7de30 =====

undefined4 FUN_01c8de30(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x76f5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x76f5,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.BagMan$$get_CanPutItemInBag RVA 0x1c7de84 =====

uint FUN_01c8de84(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x94a6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94a6,0);
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
  return (uint)(0 < *(int *)(param_1 + 8));
}



// ===== FAT.BagMan$$get_ItemBagEmptyGirdNum RVA 0x1c7dee8 =====

undefined4 FUN_01c8dee8(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.BagMan$$set_ItemBagEmptyGirdNum RVA 0x1c7def0 =====

void FUN_01c8def0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.BagMan$$TryOpenUIBag RVA 0x1c7def8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8def8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01c8e2b8 + 0x1c8df10);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2bc + 0x1c8df24));
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2c0 + 0x1c8df30));
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2c4 + 0x1c8df3c));
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2c8 + 0x1c8df48));
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2cc + 0x1c8df54));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9592,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9592,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01d64a88(iVar1,0);
  puVar8 = *(undefined4 **)(_UNK_01c8e2d0 + 0x1c8dffc);
  iVar6 = func_0x01384a00(*puVar8,1);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (iVar1 == 0) {
    if (*(int *)(iVar6 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar6 + 0x10) = 1;
    iVar1 = func_0x01c8e304(param_1,iVar6);
    if (iVar1 != 0) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01c8e2e4 + 0x1c8e07c));
      piVar5 = *(int **)(_UNK_01c8e2e8 + 0x1c8e090);
      iVar6 = *piVar5;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *piVar5;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xec);
      piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c8e2ec + 0x1c8e0b8),1);
      uStack_1c = 1;
      uVar3 = **(undefined4 **)(_UNK_01c8e2f0 + 0x1c8e0d4);
      goto LAB_01c8e18c;
    }
    iVar1 = func_0x01384a00(*puVar8,1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar1 + 0x10) = 3;
    iVar1 = func_0x01c8e304(param_1,iVar1);
    if (iVar1 != 0) goto LAB_01c8e124;
    iVar1 = func_0x01384a00(*puVar8,1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar1 + 0x10) = 2;
    iVar1 = func_0x01c8e304(param_1,iVar1);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01c8e2f4 + 0x1c8e260));
    piVar5 = *(int **)(_UNK_01c8e2f8 + 0x1c8e274);
    iVar6 = *piVar5;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = *piVar5;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xec);
    piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c8e2fc + 0x1c8e298),1);
    uStack_1c = 2;
    puVar8 = *(undefined4 **)(&UNK_01c8e2b8 + _UNK_01c8e300);
  }
  else {
    if (*(int *)(iVar6 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar6 + 0x10) = 3;
    iVar1 = func_0x01c8e304(param_1,iVar6);
    if (iVar1 == 0) {
      return;
    }
LAB_01c8e124:
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01c8e2d4 + 0x1c8e130));
    piVar5 = *(int **)(_UNK_01c8e2d8 + 0x1c8e144);
    iVar6 = *piVar5;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = *piVar5;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xec);
    piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c8e2dc + 0x1c8e168),1);
    uStack_1c = 3;
    puVar8 = *(undefined4 **)(_UNK_01c8e2e0 + 0x1c8e188);
  }
  uVar3 = *puVar8;
LAB_01c8e18c:
  iVar6 = func_0x01384abc(uVar3,&uStack_1c);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar6 != 0) && (iVar2 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if (piVar5[3] == 0) {
    func_0x01384bf4();
  }
  piVar5[4] = iVar6;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee858c(iVar1,uVar7,piVar5,0);
  return;
}



// ===== FAT.BagMan$$CheckBagUnlock RVA 0x1c7e304 =====

uint FUN_01c8e304(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
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
  
  iVar1 = func_0x0229f06c(0x94a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94a4,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(uint *)(param_2 + 0xc);
  if ((int)uVar2 < 1) {
    bVar7 = false;
  }
  else {
    bVar7 = false;
    uVar6 = 0;
    do {
      if (uVar2 <= uVar6) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(param_2 + 0x10 + uVar6 * 4);
      if (iVar1 == 3) {
        iVar1 = 1;
        if (!bVar7) {
          uVar5 = 3;
LAB_01c8e3e8:
          iVar1 = func_0x01c8e418(param_1,uVar5);
        }
LAB_01c8e3ec:
        bVar7 = iVar1 != 0;
      }
      else {
        if (iVar1 == 2) {
          iVar1 = 1;
          if (!bVar7) {
            uVar5 = 2;
            goto LAB_01c8e3e8;
          }
          goto LAB_01c8e3ec;
        }
        if (iVar1 == 1) {
          iVar1 = 1;
          if (!bVar7) {
            uVar5 = 1;
            goto LAB_01c8e3e8;
          }
          goto LAB_01c8e3ec;
        }
      }
      uVar2 = *(uint *)(param_2 + 0xc);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar2);
  }
  return (uint)bVar7;
}



// ===== FAT.BagMan$$_CheckBagIsUnlock RVA 0x1c7e418 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c8e418(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
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
  
  iVar1 = func_0x0229f06c(0x94a5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94a5,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  if (param_2 == 3) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 4;
  }
  else if (param_2 == 2) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 3;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 2;
  }
  iVar11 = func_0x0229f06c(0xf6,0,0);
  if (iVar11 == 0) {
    iVar11 = func_0x0229f06c(0xf7,0);
    if (iVar11 == 0) {
      iVar11 = func_0x01cc0400(iVar1,uVar12);
      if (iVar11 != 0) {
        return 0;
      }
      pcVar9 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
        *pcVar9 = '\x01';
      }
      iVar11 = func_0x0229f06c(0xf9,0);
      if (iVar11 == 0) {
        iVar11 = *(int *)(iVar1 + 8);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x02451990(iVar11,uVar12,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar11 != 0) {
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 8);
          iVar11 = *(int *)(iVar11 + 0x68);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02451948(iVar1,uVar12,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar1 + 0x28)) {
            iVar10 = func_0x01c24918(0);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar10 + 0x9c);
            uVar12 = *(undefined4 *)(iVar1 + 0x28);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar10 = FUN_01c77708(iVar10,uVar12,0);
            if (iVar10 != 0) {
              return 1;
            }
          }
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar10 + 0x48);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          iVar10 = func_0x01dd2b98(iVar10,0);
          iVar5 = *(int *)(iVar1 + 0x18);
          if (iVar5 <= iVar10) {
            iVar5 = *(int *)(iVar1 + 0x3c);
          }
          if (iVar5 <= iVar10) {
            iVar10 = *(int *)(iVar1 + 0x40);
            if (iVar10 == 0) {
              func_0x01384bf0();
              iVar5 = iRam0000000c;
              iVar10 = *(int *)(iVar1 + 0x40);
              if (iVar10 == 0) {
                func_0x01384bf0();
                iVar10 = 0;
              }
            }
            else {
              iVar5 = *(int *)(iVar10 + 0xc);
            }
            uVar4 = (uint)(iVar5 < 1);
            piVar2 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
            piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
            piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
            do {
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar2;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar13) {
                    puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc07d0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0);
LAB_01cc07d0:
              iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
              if (iVar1 == 0) goto LAB_01cc0884;
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar2;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar14) {
                    puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc0848;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar14,0);
LAB_01cc0848:
              uVar12 = (*(code *)*puVar3)(piVar2,puVar3[1]);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x01e6c0b0(iVar11,uVar12,0);
            } while (iVar1 == 0);
            uVar4 = 1;
LAB_01cc0884:
            if (piVar2 != (int *)0x0) {
              iVar1 = *piVar2;
              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                    puVar3 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
                    goto LAB_01cc08e4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 2;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0)
              ;
LAB_01cc08e4:
              (*(code *)*puVar3)(piVar2,puVar3[1]);
            }
          }
        }
        return uVar4;
      }
      iVar11 = func_0x0229f13c(0xf9,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar11 = func_0x0229f13c(0xf7,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar11 = func_0x0229f13c(0xf6,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar12,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar11 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar11 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar1,0);
  func_0x01485238(&uStack_38,uVar12,0);
  iVar10 = *(int *)(iVar11 + 8);
  uVar12 = *(undefined4 *)(iVar11 + 0xc);
  iVar1 = *(int *)(iVar11 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar1 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar10,uVar12,&uStack_38,uVar8,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.BagMan$$GetBagGirdDataList RVA 0x1c7e524 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c8e524(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01c8e5f0 + 0x1c8e540);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8e5f4 + 0x1c8e554));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9593,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0245185c(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01c8e5f8 + 0x1c8e5d0));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9593,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x0226ae40(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.BagMan$$OnMergeLevelChange RVA 0x1c7e5fc =====

/* WARNING: Possible PIC construction at 0x01c8e6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c8e6c8) */
/* WARNING: Removing unreachable block (ram,0x01c8e6dc) */
/* WARNING: Removing unreachable block (ram,0x01c8e6e0) */
/* WARNING: Removing unreachable block (ram,0x01c8e6ec) */
/* WARNING: Removing unreachable block (ram,0x01c8e6f0) */
/* WARNING: Removing unreachable block (ram,0x01c8e704) */
/* WARNING: Removing unreachable block (ram,0x01c8e708) */
/* WARNING: Removing unreachable block (ram,0x01c8e70c) */
/* WARNING: Removing unreachable block (ram,0x01c8e724) */
/* WARNING: Removing unreachable block (ram,0x01c8e728) */
/* WARNING: Removing unreachable block (ram,0x01c8e734) */
/* WARNING: Removing unreachable block (ram,0x01c8e738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8e5fc(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_r4;
  int unaff_r5;
  char *pcVar5;
  int iVar6;
  undefined4 *unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  uint uVar8;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 *puVar9;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  
  puVar9 = (undefined4 *)&stack0xfffffff0;
  pcVar5 = (char *)(_UNK_01c8e750 + 0x1c8e610);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8e754 + 0x1c8e624));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x559,0);
  if (iVar1 == 0) {
    func_0x01c8e75c(param_1);
    func_0x01c8e9e8(param_1);
    unaff_r6 = *(undefined4 **)(_UNK_01c8e758 + 0x1c8e690);
    iVar1 = func_0x01384a00(*unaff_r6,1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar1 + 0x10) = 2;
    pcVar5 = (char *)(_UNK_01c8f02c + 0x1c8eeec);
    puStack_28 = (undefined4 *)param_1;
    iStack_24 = iVar1;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c8f030 + 0x1c8ef00));
      func_0x01384978(*(undefined4 *)(_UNK_01c8f034 + 0x1c8ef0c));
      *pcVar5 = '\x01';
    }
    iVar3 = func_0x0229f06c(700,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(700,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iStack_2c = iStack_24;
      iStack_30 = (int)puStack_28;
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_48 = 0;
      uStack_38 = 0;
      puStack_28 = unaff_r6;
      func_0x0245494c(&uStack_60,0,iVar1,0);
      uStack_48 = uStack_60;
      uStack_44 = uStack_5c;
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      if (*(int *)(iVar3 + 0x10) != 0) {
        func_0x01485278(&uStack_48,*(int *)(iVar3 + 0x10),0);
      }
      func_0x01485278(&uStack_48,param_1,0);
      func_0x01485278(&uStack_48,iVar1,0);
      iVar6 = *(int *)(iVar3 + 8);
      uVar7 = *(undefined4 *)(iVar3 + 0xc);
      iVar1 = *(int *)(iVar3 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 3;
      if (iVar1 == 0) {
        uVar4 = 2;
      }
      func_0x0245495c(iVar6,uVar7,&uStack_48,uVar4,0,0);
      return;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (uVar2 == 0) {
      return;
    }
    if (0 < (int)uVar2) {
      uVar8 = 0;
      do {
        if (uVar2 <= uVar8) {
          func_0x01384bf4();
        }
        iVar3 = *(int *)(iVar1 + 0x10 + uVar8 * 4);
        if (iVar3 == 3) {
          func_0x01c9430c(param_1);
        }
        else if (iVar3 == 2) {
          func_0x01c93dc8(param_1);
        }
        else if (iVar3 == 1) {
          func_0x01c93bc0(param_1);
        }
        uVar2 = *(uint *)(iVar1 + 0xc);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar2);
    }
    if (*(int *)(**(int **)(_UNK_01c8f038 + 0x1c8efe8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01c8f03c + 0x1c8f004));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    unaff_r5 = iStack_24;
    unaff_r4 = puStack_28;
    puVar9 = (undefined4 *)&stack0xffffffe0;
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1c8e6c8;
  }
  else {
    iVar1 = func_0x0229f13c(0x559,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  puVar9[3] = unaff_lr;
  puVar9[2] = unaff_r8;
  puVar9[1] = unaff_r7;
  *puVar9 = unaff_r6;
  puVar9[-1] = unaff_r5;
  puVar9[-2] = unaff_r4;
  puVar9[-8] = 0;
  puVar9[-7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar9[-6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar9[-5] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar9[-4] = 0;
  func_0x0245494c(puVar9 + -0xe,0,0);
  iVar3 = *(int *)(iVar1 + 0x10);
  puVar9[-8] = puVar9[-0xe];
  puVar9[-7] = puVar9[-0xd];
  puVar9[-6] = puVar9[-0xc];
  puVar9[-5] = puVar9[-0xb];
  puVar9[-4] = puVar9[-10];
  if (iVar3 != 0) {
    func_0x01485278(puVar9 + -8,iVar3,0);
  }
  func_0x01485278(puVar9 + -8,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  puVar9[-0x10] = 0;
  puVar9[-0xf] = 0;
  func_0x0245495c(iVar3,uVar7,puVar9 + -8,uVar4);
  return;
}



// ===== FAT.BagMan$$_CheckProducerBagCapacity RVA 0x1c7e75c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8e75c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
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
  
  pcVar9 = (char *)(_UNK_01c8e9dc + 0x1c8e770);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8e9e0 + 0x1c8e784));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x55a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x55a,0);
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
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_30,uVar8,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar11 = func_0x01dd2c04(iVar1,0);
  iVar1 = func_0x01c91e40(param_1,uVar11);
  iVar10 = *(int *)(param_1 + 0xc);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x02115ca0(iVar10,iVar1,2,0);
  iVar10 = *(int *)(param_1 + 0xc);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x021137d8(iVar10,2,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01c91054(iVar2);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x28c);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *piVar3;
  iVar2 = iVar2 + iVar1;
  piVar12 = *(int **)(_UNK_01c8e9e4 + 0x1c8e8ec);
  uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
  iVar1 = *piVar12;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar1) {
        puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
        goto LAB_01c8e934;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar1,0);
LAB_01c8e934:
  iVar1 = (*(code *)*puVar5)(piVar3,puVar5[1]);
  if (iVar1 < iVar2) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    iVar2 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == iVar2) {
          puVar5 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
          goto LAB_01c8e9b0;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar2,0);
LAB_01c8e9b0:
    iVar2 = (*(code *)*puVar5)(piVar3,puVar5[1]);
  }
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar10 + 0xc) = iVar2;
  return;
}



// ===== FAT.BagMan$$_CheckProducerBagRedPoint RVA 0x1c7e9e8 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c8e9e8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar10 = (char *)(_UNK_01c8eea4 + 0x1c8e9fc);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8eea8 + 0x1c8ea10));
    func_0x01384978(*(undefined4 *)(_UNK_01c8eeac + 0x1c8ea1c));
    func_0x01384978(*(undefined4 *)(_UNK_01c8eeb0 + 0x1c8ea28));
    func_0x01384978(*(undefined4 *)(_UNK_01c8eeb4 + 0x1c8ea34));
    func_0x01384978(*(undefined4 *)(_UNK_01c8eeb8 + 0x1c8ea40));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x560,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x560,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar2 == 0) {
      uVar9 = 1;
    }
    iVar2 = func_0x0245495c(iVar11,uVar12,&uStack_30,uVar9,0,0);
    return iVar2;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x48);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01dd2c04(iVar2,0);
  iVar11 = func_0x01c24918(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01c91054(iVar11);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar3;
  uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01c8eebc + 0x1c8eb14)) {
        puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xd8);
        goto LAB_01c8eb5c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c8eebc + 0x1c8eb14),3);
LAB_01c8eb5c:
  piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar3;
  uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01c8eec0 + 0x1c8eb8c)) {
        puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
        goto LAB_01c8ebd4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c8eec0 + 0x1c8eb8c),0);
LAB_01c8ebd4:
  piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
  piVar7 = *(int **)(_UNK_01c8eec4 + 0x1c8ebf4);
  piVar13 = *(int **)(_UNK_01c8eec8 + 0x1c8ebfc);
LAB_01c8ebf8:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar3;
  uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar7) {
        puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
        goto LAB_01c8ec54;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_01c8ec54:
  iVar5 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  iVar11 = 0;
  if (iVar5 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar13) {
          puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
          goto LAB_01c8eccc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01c8eccc:
    iVar5 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar5 + 0x18);
    bVar15 = SBORROW4(iVar11,1);
    iVar1 = iVar11 + -1;
    bVar14 = iVar11 == 1;
    if (0 < iVar11) {
      iVar11 = *(int *)(iVar5 + 0x1c);
      bVar15 = SBORROW4(iVar2,iVar11);
      iVar1 = iVar2 - iVar11;
      bVar14 = iVar2 == iVar11;
    }
    if (iVar1 < 0 != bVar15) goto LAB_01c8ed84;
    if (bVar14) {
      iVar11 = *(int *)(param_1 + 0xc);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x021137d8(iVar11,2,0);
      uVar12 = *(undefined4 *)(iVar5 + 0x18);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x02116624(iVar11,uVar12,0);
    }
    goto LAB_01c8ebf8;
  }
LAB_01c8ed84:
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01c8eecc + 0x1c8ed9c)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01c8ede4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c8eecc + 0x1c8ed9c),0);
LAB_01c8ede4:
    iVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  return iVar11;
}



// ===== FAT.BagMan$$_UpdateBagGirdData RVA 0x1c7eed4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8eed4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
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
  
  pcVar6 = (char *)(_UNK_01c8f02c + 0x1c8eeec);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8f030 + 0x1c8ef00));
    func_0x01384978(*(undefined4 *)(_UNK_01c8f034 + 0x1c8ef0c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(700,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(700,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(uint *)(param_2 + 0xc);
  if (uVar2 != 0) {
    if (0 < (int)uVar2) {
      uVar8 = 0;
      do {
        if (uVar2 <= uVar8) {
          func_0x01384bf4();
        }
        iVar1 = *(int *)(param_2 + 0x10 + uVar8 * 4);
        if (iVar1 == 3) {
          func_0x01c9430c(param_1);
        }
        else if (iVar1 == 2) {
          func_0x01c93dc8(param_1);
        }
        else if (iVar1 == 1) {
          func_0x01c93bc0(param_1);
        }
        uVar2 = *(uint *)(param_2 + 0xc);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar2);
    }
    if (*(int *)(**(int **)(_UNK_01c8f038 + 0x1c8efe8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01c8f03c + 0x1c8f004));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0229f06c(0x3f,0);
    if (iVar5 != 0) {
      iVar5 = func_0x0229f13c(0x3f,0);
      if (iVar5 == 0) {
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
      if (*(int *)(iVar5 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
      }
      func_0x01485278(&uStack_30,iVar1,0);
      iVar4 = *(int *)(iVar5 + 8);
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      iVar1 = *(int *)(iVar5 + 0x10);
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
      return;
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    return;
  }
  return;
}



// ===== FAT.BagMan$$_TryMoveToolItemsToRewardBox RVA 0x1c7f040 =====

undefined4 FUN_01c8f040(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x562,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x562,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar4 = 0;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x5c) != 0) {
      uVar4 = 0;
      iVar1 = func_0x01db7b78(*(int *)(iVar1 + 0x5c),0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 0;
        iVar1 = func_0x021137d8(iVar1,1,0);
        if (iVar1 != 0) {
          uVar4 = 0;
          iVar5 = func_0x02111eb4(iVar1,0);
          uVar6 = iVar5 - 1;
          if (-1 < (int)uVar6) {
            uVar4 = 0;
            do {
              iVar5 = func_0x02113150(iVar1,uVar6,0);
              if ((iVar5 != 0) && (iVar2 = func_0x0210e2d4(iVar5,0), 0 < iVar2)) {
                uVar3 = func_0x0210e2d4(iVar5,0);
                iVar5 = func_0x01c9453c(param_1,uVar3);
                if ((iVar5 != 0) && (iVar5 = func_0x02114d08(iVar1,uVar6,0), iVar5 != 0)) {
                  iVar2 = func_0x01c24918(0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *(int *)(iVar2 + 0x5c);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = func_0x01db7b78(iVar2,0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  uVar4 = 1;
                  func_0x02144d84(iVar2,iVar5,1,0);
                }
              }
              uVar6 = uVar6 - 1;
            } while (uVar6 < 0x80000000);
          }
        }
      }
    }
  }
  return uVar4;
}



// ===== FAT.BagMan$$OnItemEnterBag RVA 0x1c7f1f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8f1f8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01c8f2d0 + 0x1c8f20c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8f2d4 + 0x1c8f220));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75ee,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_01c8f2d8 + 0x1c8f27c),2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (uVar2 == 0) {
      func_0x01384bf4();
      uVar2 = *(uint *)(iVar1 + 0xc);
    }
    *(undefined4 *)(iVar1 + 0x10) = 1;
    if (uVar2 < 2) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar1 + 0x14) = 2;
    pcVar4 = (char *)(_UNK_01c8f02c + 0x1c8eeec);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c8f030 + 0x1c8ef00));
      func_0x01384978(*(undefined4 *)(_UNK_01c8f034 + 0x1c8ef0c));
      *pcVar4 = '\x01';
    }
    iVar5 = func_0x0229f06c(700,0);
    if (iVar5 != 0) {
      iVar5 = func_0x0229f13c(700,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar1,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar5 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485278(&uStack_38,iVar1,0);
      iVar6 = *(int *)(iVar5 + 8);
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      iVar1 = *(int *)(iVar5 + 0x10);
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
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (uVar2 == 0) {
      return;
    }
    if (0 < (int)uVar2) {
      uVar8 = 0;
      do {
        if (uVar2 <= uVar8) {
          func_0x01384bf4();
        }
        iVar5 = *(int *)(iVar1 + 0x10 + uVar8 * 4);
        if (iVar5 == 3) {
          func_0x01c9430c(param_1);
        }
        else if (iVar5 == 2) {
          func_0x01c93dc8(param_1);
        }
        else if (iVar5 == 1) {
          func_0x01c93bc0(param_1);
        }
        uVar2 = *(uint *)(iVar1 + 0xc);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar2);
    }
    if (*(int *)(**(int **)(_UNK_01c8f038 + 0x1c8efe8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01c8f03c + 0x1c8f004));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x75ee,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3);
  return;
}



// ===== FAT.BagMan$$OnItemLeaveBag RVA 0x1c7f2dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8f2dc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01c8f3b4 + 0x1c8f2f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8f3b8 + 0x1c8f304));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(699,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_01c8f3bc + 0x1c8f360),2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (uVar2 == 0) {
      func_0x01384bf4();
      uVar2 = *(uint *)(iVar1 + 0xc);
    }
    *(undefined4 *)(iVar1 + 0x10) = 1;
    if (uVar2 < 2) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar1 + 0x14) = 2;
    pcVar4 = (char *)(_UNK_01c8f02c + 0x1c8eeec);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c8f030 + 0x1c8ef00));
      func_0x01384978(*(undefined4 *)(_UNK_01c8f034 + 0x1c8ef0c));
      *pcVar4 = '\x01';
    }
    iVar5 = func_0x0229f06c(700,0);
    if (iVar5 != 0) {
      iVar5 = func_0x0229f13c(700,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar1,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar5 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485278(&uStack_38,iVar1,0);
      iVar6 = *(int *)(iVar5 + 8);
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      iVar1 = *(int *)(iVar5 + 0x10);
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
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (uVar2 == 0) {
      return;
    }
    if (0 < (int)uVar2) {
      uVar8 = 0;
      do {
        if (uVar2 <= uVar8) {
          func_0x01384bf4();
        }
        iVar5 = *(int *)(iVar1 + 0x10 + uVar8 * 4);
        if (iVar5 == 3) {
          func_0x01c9430c(param_1);
        }
        else if (iVar5 == 2) {
          func_0x01c93dc8(param_1);
        }
        else if (iVar5 == 1) {
          func_0x01c93bc0(param_1);
        }
        uVar2 = *(uint *)(iVar1 + 0xc);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar2);
    }
    if (*(int *)(**(int **)(_UNK_01c8f038 + 0x1c8efe8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01c8f03c + 0x1c8f004));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(699,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3);
  return;
}



// ===== FAT.BagMan$$OnGalleryUnlock RVA 0x1c7f3c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8f3c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01c8f480 + 0x1c8f3d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8f484 + 0x1c8f3e8));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7a99,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384a00(**(undefined4 **)(_UNK_01c8f488 + 0x1c8f444),1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar2 + 0x10) = 3;
    pcVar4 = (char *)(_UNK_01c8f02c + 0x1c8eeec);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c8f030 + 0x1c8ef00));
      func_0x01384978(*(undefined4 *)(_UNK_01c8f034 + 0x1c8ef0c));
      *pcVar4 = '\x01';
    }
    iVar5 = func_0x0229f06c(700,0);
    if (iVar5 != 0) {
      iVar5 = func_0x0229f13c(700,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar2,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar5 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485278(&uStack_38,iVar2,0);
      iVar6 = *(int *)(iVar5 + 8);
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      iVar2 = *(int *)(iVar5 + 0x10);
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
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = *(uint *)(iVar2 + 0xc);
    if (uVar1 == 0) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
          func_0x01384bf4();
        }
        iVar5 = *(int *)(iVar2 + 0x10 + uVar8 * 4);
        if (iVar5 == 3) {
          func_0x01c9430c(param_1);
        }
        else if (iVar5 == 2) {
          func_0x01c93dc8(param_1);
        }
        else if (iVar5 == 1) {
          func_0x01c93bc0(param_1);
        }
        uVar1 = *(uint *)(iVar2 + 0xc);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    if (*(int *)(**(int **)(_UNK_01c8f038 + 0x1c8efe8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01c8f03c + 0x1c8f004));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x3f,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
      return;
    }
    iVar2 = func_0x0229f13c(0x3f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7a99,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3);
  return;
}



// ===== FAT.BagMan$$CanBuyNewItemBagGird RVA 0x1c7f48c =====

undefined4 FUN_01c8f48c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9594,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9594,0);
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
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x021137d8(iVar1,1,0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
    uVar4 = 0;
    iVar1 = func_0x02111eb4(iVar1,0);
    if (iVar1 < iVar3) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.BagMan$$PurchaseItemBagGird RVA 0x1c7f524 =====

/* WARNING: Removing unreachable block (ram,0x01c90364) */
/* WARNING: Removing unreachable block (ram,0x01c90370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8f524(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar9 = (char *)(_UNK_01c8f824 + 0x1c8f544);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8f828 + 0x1c8f558));
    func_0x01384978(*(undefined4 *)(_UNK_01c8f82c + 0x1c8f564));
    func_0x01384978(*(undefined4 *)(_UNK_01c8f830 + 0x1c8f570));
    func_0x01384978(*(undefined4 *)(_UNK_01c8f834 + 0x1c8f57c));
    func_0x01384978(*(undefined4 *)(_UNK_01c8f838 + 0x1c8f588));
    func_0x01384978(*(undefined4 *)(_UNK_01c8f83c + 0x1c8f594));
    func_0x01384978(*(undefined4 *)(_UNK_01c8f840 + 0x1c8f5a0));
    func_0x01384978(*(undefined4 *)(_UNK_01c8f844 + 0x1c8f5ac));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9595,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01c8f848 + 0x1c8f610));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    iVar2 = FUN_01c8f48c(param_1);
    if (iVar2 != 0) {
      if (param_2 < 1) {
        piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c8f84c + 0x1c8f770),1);
        iStack_1c = *(int *)(param_1 + 0x10) + 1;
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c8f850 + 0x1c8f78c),&iStack_1c);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)) {
          uVar12 = func_0x01384c10();
          func_0x01384aa0(uVar12,0);
        }
        if (piVar8[3] == 0) {
          func_0x01384bf4();
        }
        piVar8[4] = iVar1;
        if (*(int *)(**(int **)(_UNK_01c8f854 + 0x1c8f7f4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c23bc(**(undefined4 **)(_UNK_01c8f858 + 0x1c8f818),piVar8,0);
      }
      else {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x44);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01c8f870(iVar2,1,param_2,1);
        if (iVar2 != 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar8 = *(int **)(_UNK_01c8f85c + 0x1c8f6b4);
          iVar10 = *(int *)(iVar2 + 0x44);
          iVar2 = *piVar8;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar8;
          }
          uVar12 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x58);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01c8f9a0(iVar10,1,param_2,uVar12);
          uVar12 = func_0x01384be4(**(undefined4 **)(_UNK_01c8f860 + 0x1c8f704));
          func_0x024500b4(uVar12,iVar1,**(undefined4 **)(_UNK_01c8f864 + 0x1c8f720),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01c8fa70(iVar2,uVar12);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          pcVar9 = (char *)(_UNK_01c90850 + 0x1c8fae8);
          if (*pcVar9 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01c90854 + 0x1c8fafc));
            func_0x01384978(*(undefined4 *)(_UNK_01c90858 + 0x1c8fb08));
            func_0x01384978(*(undefined4 *)(_UNK_01c9085c + 0x1c8fb14));
            func_0x01384978(*(undefined4 *)(_UNK_01c90860 + 0x1c8fb20));
            func_0x01384978(*(undefined4 *)(_UNK_01c90864 + 0x1c8fb2c));
            func_0x01384978(*(undefined4 *)(_UNK_01c90868 + 0x1c8fb38));
            func_0x01384978(*(undefined4 *)(_UNK_01c9086c + 0x1c8fb44));
            func_0x01384978(*(undefined4 *)(_UNK_01c90870 + 0x1c8fb50));
            func_0x01384978(*(undefined4 *)(_UNK_01c90874 + 0x1c8fb5c));
            func_0x01384978(*(undefined4 *)(_UNK_01c90878 + 0x1c8fb68));
            func_0x01384978(*(undefined4 *)(_UNK_01c9087c + 0x1c8fb74));
            func_0x01384978(*(undefined4 *)(_UNK_01c90880 + 0x1c8fb80));
            func_0x01384978(*(undefined4 *)(_UNK_01c90884 + 0x1c8fb8c));
            func_0x01384978(*(undefined4 *)(_UNK_01c90888 + 0x1c8fb98));
            func_0x01384978(*(undefined4 *)(_UNK_01c9088c + 0x1c8fba4));
            func_0x01384978(*(undefined4 *)(_UNK_01c90890 + 0x1c8fbb0));
            func_0x01384978(*(undefined4 *)(_UNK_01c90894 + 0x1c8fbbc));
            func_0x01384978(*(undefined4 *)(_UNK_01c90898 + 0x1c8fbc8));
            func_0x01384978(*(undefined4 *)(_UNK_01c9089c + 0x1c8fbd4));
            func_0x01384978(*(undefined4 *)(_UNK_01c908a0 + 0x1c8fbe0));
            func_0x01384978(*(undefined4 *)(_UNK_01c908a4 + 0x1c8fbec));
            *pcVar9 = '\x01';
          }
          aiStack_28[0] = 0;
          iVar2 = func_0x0229f06c(0xb9,0);
          if (iVar2 == 0) {
            iVar2 = func_0x01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x44);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x10);
            uVar12 = *(undefined4 *)(iVar1 + 8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar10 = func_0x0245185c(iVar2,uVar12,aiStack_28,
                                     **(undefined4 **)(_UNK_01c908a8 + 0x1c8fc90));
            iVar2 = aiStack_28[0];
            if (iVar10 == 0) {
              piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c908ac + 0x1c8fe4c),2);
              uStack_2c = *(undefined4 *)(iVar1 + 0xc);
              iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01c908b0 + 0x1c8fe64),&uStack_2c);
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar2 != 0) &&
                 (iVar10 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar10 == 0)) {
                uVar12 = func_0x01384c10();
                func_0x01384aa0(uVar12,0);
              }
              if (piVar8[3] == 0) {
                func_0x01384bf4();
              }
              piVar8[4] = iVar2;
              piVar13 = *(int **)(iVar1 + 0x10);
              if (piVar13 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = (**(code **)(*piVar13 + 0xd8))(piVar13,*(undefined4 *)(*piVar13 + 0xdc));
              if ((iVar1 != 0) &&
                 (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)) {
                uVar12 = func_0x01384c10();
                func_0x01384aa0(uVar12,0);
              }
              if ((uint)piVar8[3] < 2) {
                func_0x01384bf4();
              }
              piVar8[5] = iVar1;
              if (*(int *)(**(int **)(_UNK_01c908b4 + 0x1c8ff34) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c23bc(**(undefined4 **)(_UNK_01c908b8 + 0x1c8ff58),piVar8,0);
            }
            else if (*(int *)(iVar1 + 0xc) < 0) {
              piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c908bc + 0x1c8ff70),3);
              uStack_2c = *(undefined4 *)(iVar1 + 8);
              iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01c908c0 + 0x1c8ff88),&uStack_2c);
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar2 != 0) &&
                 (iVar10 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar10 == 0)) {
                uVar12 = func_0x01384c10();
                func_0x01384aa0(uVar12,0);
              }
              if (piVar8[3] == 0) {
                func_0x01384bf4();
              }
              piVar8[4] = iVar2;
              uStack_30 = *(undefined4 *)(iVar1 + 0xc);
              iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01c908c4 + 0x1c8fff4),&uStack_30);
              if ((iVar2 != 0) &&
                 (iVar10 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar10 == 0)) {
                uVar12 = func_0x01384c10();
                func_0x01384aa0(uVar12,0);
              }
              if ((uint)piVar8[3] < 2) {
                func_0x01384bf4();
              }
              piVar8[5] = iVar2;
              iVar1 = *(int *)(iVar1 + 0x10);
              if ((iVar1 != 0) &&
                 (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)) {
                uVar12 = func_0x01384c10();
                func_0x01384aa0(uVar12,0);
              }
              if ((uint)piVar8[3] < 3) {
                func_0x01384bf4();
              }
              piVar8[6] = iVar1;
              if (*(int *)(**(int **)(_UNK_01c908c8 + 0x1c90094) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2f28(**(undefined4 **)(_UNK_01c908cc + 0x1c900b8),piVar8,0);
              iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c908d0 + 0x1c900c8));
              if (*(int *)(**(int **)(_UNK_01c908d4 + 0x1c900dc) + 0x74) == 0) {
                func_0x01384ab4();
              }
              uVar12 = func_0x028c0c80(0x12,0,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x01c37da4(iVar1,uVar12,0x12,0,**(undefined4 **)(_UNK_01c908d8 + 0x1c90128),1,0);
            }
            else {
              if (aiStack_28[0] == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x02451860(iVar2,**(undefined4 **)(_UNK_01c908dc + 0x1c8fcc8));
              if (iVar2 < *(int *)(iVar1 + 0xc)) {
                piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c90914 + 0x1c8fcec),3);
                uStack_2c = *(undefined4 *)(iVar1 + 8);
                iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01c90918 + 0x1c8fd04),&uStack_2c);
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                if ((iVar2 != 0) &&
                   (iVar10 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar10 == 0)) {
                  uVar12 = func_0x01384c10();
                  func_0x01384aa0(uVar12,0);
                }
                if (piVar8[3] == 0) {
                  func_0x01384bf4();
                }
                piVar8[4] = iVar2;
                uStack_30 = *(undefined4 *)(iVar1 + 0xc);
                iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01c9091c + 0x1c8fd70),&uStack_30);
                if ((iVar2 != 0) &&
                   (iVar10 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar10 == 0)) {
                  uVar12 = func_0x01384c10();
                  func_0x01384aa0(uVar12,0);
                }
                if ((uint)piVar8[3] < 2) {
                  func_0x01384bf4();
                }
                piVar8[5] = iVar2;
                iVar1 = *(int *)(iVar1 + 0x10);
                if ((iVar1 != 0) &&
                   (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)) {
                  uVar12 = func_0x01384c10();
                  func_0x01384aa0(uVar12,0);
                }
                if ((uint)piVar8[3] < 3) {
                  func_0x01384bf4();
                }
                piVar8[6] = iVar1;
                if (*(int *)(**(int **)(_UNK_01c90920 + 0x1c8fe10) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x028c2f28(**(undefined4 **)(_UNK_01c90924 + 0x1c8fe34),piVar8,0);
              }
              else {
                iVar2 = func_0x01c24918(0);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar2 + 0xc);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar2 + 8);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar2 + 0x280);
                uVar14 = 0;
                if (iVar2 != 0) {
                  piVar8 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01c908e0 + 0x1c90194)
                                                 );
                  piVar15 = *(int **)(_UNK_01c908e4 + 0x1c901a8);
                  piVar13 = *(int **)(_UNK_01c908e8 + 0x1c901b0);
                  do {
                    if (piVar8 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *piVar8;
                    uVar14 = (uint)*(ushort *)(iVar2 + 0xb6);
                    if (uVar14 != 0) {
                      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == *piVar15) {
                          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
                          goto LAB_01c90208;
                        }
                        uVar14 = uVar14 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar14 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar15,0);
LAB_01c90208:
                    uVar14 = (*(code *)*puVar3)(piVar8,puVar3[1]);
                    if (uVar14 == 0) {
                      uVar14 = 0;
                      break;
                    }
                    if (piVar8 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *piVar8;
                    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == *piVar13) {
                          puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
                          goto LAB_01c90284;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar3 = (undefined4 *)func_0x014002dc(piVar8,*piVar13,0);
LAB_01c90284:
                    uVar12 = (*(code *)*puVar3)(piVar8,puVar3[1]);
                    piVar7 = *(int **)(iVar1 + 0x10);
                    if (piVar7 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    uVar4 = (**(code **)(*piVar7 + 0xd8))(piVar7,*(undefined4 *)(*piVar7 + 0xdc));
                    iVar2 = func_0x014855c8(uVar12,uVar4,5,0);
                  } while (iVar2 == 0);
                  if (piVar8 != (int *)0x0) {
                    iVar2 = *piVar8;
                    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
                    if (uVar6 != 0) {
                      piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                      do {
                        if (piVar13[-1] == **(int **)(_UNK_01c908ec + 0x1c90304)) {
                          puVar3 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
                          goto LAB_01c9034c;
                        }
                        uVar6 = uVar6 - 1;
                        piVar13 = piVar13 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar3 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(_UNK_01c908ec + 0x1c90304),0);
LAB_01c9034c:
                    (*(code *)*puVar3)(piVar8,puVar3[1]);
                  }
                }
                uVar6 = 0;
                if ((*(int *)(iVar1 + 8) == 1) && (*(int *)(iVar1 + 0x14) != 0)) {
                  iVar10 = *(int *)(iVar1 + 0xc);
                  iVar2 = func_0x01c24918(0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *(int *)(iVar2 + 0xc);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *(int *)(iVar2 + 8);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  uVar6 = 0;
                  if (*(int *)(iVar2 + 0x450) <= iVar10) {
                    iVar2 = func_0x01c24918(0);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *(int *)(iVar2 + 0x60);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    uVar6 = func_0x01cc0100(iVar2,0x66,0);
                  }
                }
                if ((uVar6 & uVar14) == 0) {
                  iVar2 = *(int *)(iVar1 + 0x14);
                  if (iVar2 != 0) {
                    (**(code **)(iVar2 + 0xc))
                              (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
                  }
                  iVar2 = func_0x01c24918(0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *(int *)(iVar2 + 0x44);
                  uVar12 = *(undefined4 *)(iVar1 + 8);
                  uVar4 = *(undefined4 *)(iVar1 + 0xc);
                  uVar11 = *(undefined4 *)(iVar1 + 0x10);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x01c9e7c0(iVar2,uVar12,uVar4,uVar11);
                }
                else {
                  iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01c908f0 + 0x1c9042c));
                  piVar8 = *(int **)(_UNK_01c908f4 + 0x1c90440);
                  iVar10 = *piVar8;
                  if (*(int *)(iVar10 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar10 = *piVar8;
                  }
                  uVar12 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x24c);
                  piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c908f8 + 0x1c90464),7);
                  uStack_2c = *(undefined4 *)(iVar1 + 8);
                  iVar10 = func_0x01384abc(**(undefined4 **)(_UNK_01c908fc + 0x1c90484),&uStack_2c);
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  if ((iVar10 != 0) &&
                     (iVar5 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar8 + 0x20)), iVar5 == 0))
                  {
                    uVar4 = func_0x01384c10();
                    func_0x01384aa0(uVar4,0);
                  }
                  if (piVar8[3] == 0) {
                    func_0x01384bf4();
                  }
                  piVar8[4] = iVar10;
                  uStack_30 = *(undefined4 *)(iVar1 + 0xc);
                  iVar10 = func_0x01384abc(**(undefined4 **)(_UNK_01c90900 + 0x1c904f0),&uStack_30);
                  if ((iVar10 != 0) &&
                     (iVar5 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar8 + 0x20)), iVar5 == 0))
                  {
                    uVar4 = func_0x01384c10();
                    func_0x01384aa0(uVar4,0);
                  }
                  if ((uint)piVar8[3] < 2) {
                    func_0x01384bf4();
                  }
                  piVar8[5] = iVar10;
                  iVar10 = *(int *)(iVar1 + 0x10);
                  if ((iVar10 != 0) &&
                     (iVar5 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar8 + 0x20)), iVar5 == 0))
                  {
                    uVar4 = func_0x01384c10();
                    func_0x01384aa0(uVar4,0);
                  }
                  if ((uint)piVar8[3] < 3) {
                    func_0x01384bf4();
                  }
                  piVar8[6] = iVar10;
                  uStack_31 = *(undefined1 *)(iVar1 + 0x18);
                  puVar3 = *(undefined4 **)(_UNK_01c90904 + 0x1c90594);
                  iVar10 = func_0x01384abc(*puVar3,&uStack_31);
                  if ((iVar10 != 0) &&
                     (iVar5 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar8 + 0x20)), iVar5 == 0))
                  {
                    uVar4 = func_0x01384c10();
                    func_0x01384aa0(uVar4,0);
                  }
                  if ((uint)piVar8[3] < 4) {
                    func_0x01384bf4();
                  }
                  piVar8[7] = iVar10;
                  iVar10 = *(int *)(iVar1 + 0x1c);
                  if ((iVar10 != 0) &&
                     (iVar5 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar8 + 0x20)), iVar5 == 0))
                  {
                    uVar4 = func_0x01384c10();
                    func_0x01384aa0(uVar4,0);
                  }
                  if ((uint)piVar8[3] < 5) {
                    func_0x01384bf4();
                  }
                  piVar8[8] = iVar10;
                  uStack_32 = *(undefined1 *)(iVar1 + 0x20);
                  iVar10 = func_0x01384abc(*puVar3,&uStack_32);
                  if ((iVar10 != 0) &&
                     (iVar5 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar8 + 0x20)), iVar5 == 0))
                  {
                    uVar4 = func_0x01384c10();
                    func_0x01384aa0(uVar4,0);
                  }
                  if ((uint)piVar8[3] < 6) {
                    func_0x01384bf4();
                  }
                  piVar8[9] = iVar10;
                  iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01c90908 + 0x1c9068c));
                  func_0x024500b4(iVar10,iVar1,**(undefined4 **)(_UNK_01c9090c + 0x1c906a8),0);
                  if ((iVar10 != 0) &&
                     (iVar1 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar8 + 0x20)), iVar1 == 0))
                  {
                    uVar4 = func_0x01384c10();
                    func_0x01384aa0(uVar4,0);
                  }
                  if ((uint)piVar8[3] < 7) {
                    func_0x01384bf4();
                  }
                  piVar8[10] = iVar10;
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x01ee858c(iVar2,uVar12,piVar8,0);
                }
              }
            }
          }
          else {
            iVar2 = func_0x0229f13c(0xb9,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x02173f80(iVar2,iVar1,0);
          }
          return;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9595,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0217ab90(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.BagMan.<>c__DisplayClass22_0$$.ctor RVA 0x1c7f868 =====

void FUN_01c8f868(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BagMan$$CheckCanPutProducerBag RVA 0x1c80928 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c90928(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01c90b94 + 0x1c90944);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c90b98 + 0x1c90958));
    func_0x01384978(*(undefined4 *)(_UNK_01c90b9c + 0x1c90964));
    func_0x01384978(*(undefined4 *)(_UNK_01c90ba0 + 0x1c90970));
    func_0x01384978(*(undefined4 *)(_UNK_01c90ba4 + 0x1c9097c));
    func_0x01384978(*(undefined4 *)(_UNK_01c90ba8 + 0x1c90988));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = 0;
  iStack_1c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x2c4,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar4 = 0;
      iVar1 = func_0x0210e2d4(param_2,0);
      if (0 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0245185c(iVar1,2,&iStack_1c,**(undefined4 **)(_UNK_01c90bac + 0x1c90a34));
        iVar1 = iStack_1c;
        if (iVar2 != 0) {
          if (iStack_1c == 0) {
            func_0x01384bf0();
          }
          func_0x0328fe1c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01c90bb0 + 0x1c90a68));
          puVar5 = *(undefined4 **)(_UNK_01c90bb4 + 0x1c90a7c);
          do {
            iVar1 = func_0x0145b12c(&uStack_30,*puVar5);
            iVar4 = iStack_24;
            if (iVar1 == 0) {
              func_0x0145b14c(&uStack_30,**(undefined4 **)(_UNK_01c90bb8 + 0x1c90af0));
              return 0;
            }
            if (iStack_24 == 0) {
              func_0x01384bf0();
            }
          } while (((*(char *)(iVar4 + 0x18) == '\0') ||
                   (iVar2 = *(int *)(iVar4 + 0x20), iVar1 = func_0x0210e2d4(param_2,0),
                   iVar2 != iVar1)) || (0 < *(int *)(iVar4 + 0x14)));
          func_0x0145b14c(&uStack_30,**(undefined4 **)(_UNK_01c90bc4 + 0x1c90ad8));
        }
      }
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x2c4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02182fd0(iVar4,param_1,param_2,0);
  }
  return iVar4;
}



// ===== FAT.BagMan$$GetProduceIdByLevel RVA 0x1c80bc8 =====

/* WARNING: Removing unreachable block (ram,0x01c90f48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c90bc8(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar8 = (char *)(_UNK_01c91024 + 0x1c90be0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c91028 + 0x1c90bf4));
    func_0x01384978(*(undefined4 *)(_UNK_01c9102c + 0x1c90c00));
    func_0x01384978(*(undefined4 *)(_UNK_01c91030 + 0x1c90c0c));
    func_0x01384978(*(undefined4 *)(_UNK_01c91034 + 0x1c90c18));
    func_0x01384978(*(undefined4 *)(_UNK_01c91038 + 0x1c90c24));
    *pcVar8 = '\x01';
  }
  uVar10 = 0;
  iVar1 = func_0x0229f06c(0x9598,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9598,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    uVar10 = func_0x0245498c(&uStack_38,0,0);
    return uVar10;
  }
  if (0 < param_2) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x01c91054(iVar1);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01c9103c + 0x1c90cd0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
          goto LAB_01c90d18;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c9103c + 0x1c90cd0),3);
LAB_01c90d18:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01c91040 + 0x1c90d48)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01c90d90;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c91040 + 0x1c90d48),0);
LAB_01c90d90:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    piVar11 = *(int **)(_UNK_01c91044 + 0x1c90db0);
    piVar5 = *(int **)(_UNK_01c91048 + 0x1c90db8);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01c90e10;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01c90e10:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        uVar10 = 0;
        goto LAB_01c90ed0;
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar5) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01c90e84;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar5,0);
LAB_01c90e84:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    } while ((*(char *)(iVar1 + 0x14) == '\0') || (*(int *)(iVar1 + 0x1c) != param_2));
    uVar10 = *(undefined4 *)(iVar1 + 0x18);
LAB_01c90ed0:
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01c9104c + 0x1c90ee8)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01c90f30;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c9104c + 0x1c90ee8),0);
LAB_01c90f30:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return uVar10;
}



// ===== FAT.BagMan$$FindItemAndJumpToUIBag RVA 0x1c810ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c910ac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01c9145c + 0x1c910c8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c91460 + 0x1c910dc));
    func_0x01384978(*(undefined4 *)(_UNK_01c91464 + 0x1c910e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c91468 + 0x1c910f4));
    func_0x01384978(*(undefined4 *)(_UNK_01c9146c + 0x1c91100));
    func_0x01384978(*(undefined4 *)(_UNK_01c91470 + 0x1c9110c));
    func_0x01384978(*(undefined4 *)(_UNK_01c91474 + 0x1c91118));
    func_0x01384978(*(undefined4 *)(_UNK_01c91478 + 0x1c91124));
    func_0x01384978(*(undefined4 *)(_UNK_01c9147c + 0x1c91130));
    func_0x01384978(*(undefined4 *)(_UNK_01c91480 + 0x1c9113c));
    func_0x01384978(*(undefined4 *)(_UNK_01c91484 + 0x1c91148));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  iStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9599,0);
  if (iVar1 == 0) {
    iStack_50 = 0;
    iVar1 = 0;
    puVar9 = *(undefined4 **)(_UNK_01c91488 + 0x1c911cc);
    do {
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0245185c(iVar7,iVar1,&iStack_28,**(undefined4 **)(_UNK_01c9148c + 0x1c911ec));
      iVar7 = iStack_28;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&iStack_48,iVar7,**(undefined4 **)(_UNK_01c91490 + 0x1c9121c));
        iStack_38 = iStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        do {
          iVar4 = func_0x0145b12c(&iStack_38,*puVar9);
          iVar7 = iStack_2c;
          iVar3 = iStack_50;
          if (iVar4 == 0) break;
          if (iStack_2c == 0) {
            func_0x01384bf0();
          }
          iVar3 = iVar1;
        } while (*(int *)(iVar7 + 0x14) != param_2);
        iStack_50 = iVar3;
        func_0x0145b14c(&iStack_38,**(undefined4 **)(_UNK_01c91494 + 0x1c9126c));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    if (iStack_50 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01c914a0 + 0x1c912dc));
      piVar8 = *(int **)(_UNK_01c914a4 + 0x1c912f0);
      iVar7 = *piVar8;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar8;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xec);
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c914a8 + 0x1c91314),2);
      iStack_48 = iStack_50;
      iVar7 = func_0x01384abc(**(undefined4 **)(_UNK_01c914ac + 0x1c91334),&iStack_48);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar7 != 0) &&
         (iVar3 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar7;
      iStack_4c = param_2;
      iVar7 = func_0x01384abc(**(undefined4 **)(_UNK_01c914b0 + 0x1c9139c),&iStack_4c);
      if ((iVar7 != 0) &&
         (iVar3 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if ((uint)piVar8[3] < 2) {
        func_0x01384bf4();
      }
      piVar8[5] = iVar7;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar1,uVar2,piVar8,0);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9599,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.BagMan$$Reset RVA 0x1c814b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c914b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar3 = (char *)(_UNK_01c9155c + 0x1c914c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c91560 + 0x1c914dc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x959a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x959a,0);
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
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x10);
  if (0 < iVar4) {
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
      func_0x02457d50(iVar1,**(undefined4 **)(_UNK_01c91564 + 0x1c91550));
    }
    func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,iVar4,0);
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}



// ===== FAT.BagMan$$LoadConfig RVA 0x1c81568 =====

void FUN_01c91568(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x959b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x959b,0);
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



// ===== FAT.BagMan$$Startup RVA 0x1c815b4 =====

void FUN_01c915b4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x959c,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x959c,0);
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



// ===== FAT.BagMan$$FAT.IUserDataHolder.SetData RVA 0x1c81600 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c91600(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
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
  
  pcVar6 = (char *)(_UNK_01c91788 + 0x1c91618);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c9178c + 0x1c9162c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x959d,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01db7b78(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x02141880(iVar2,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    func_0x01c91794(param_1);
    FUN_01c8e75c(param_1);
    func_0x01c91d2c(param_1);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x60);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01cc0100(iVar2,0x98,0);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_01c8f040(param_1);
    if (iVar2 == 0) {
      return;
    }
    param_2 = func_0x01384a00(**(undefined4 **)(_UNK_01c91790 + 0x1c91748),1);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(param_2 + 0x10) = 1;
    pcVar6 = (char *)(_UNK_01c8f02c + 0x1c8eeec);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c8f030 + 0x1c8ef00));
      func_0x01384978(*(undefined4 *)(_UNK_01c8f034 + 0x1c8ef0c));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(700,0);
    if (iVar2 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = *(uint *)(param_2 + 0xc);
      if (uVar1 == 0) {
        return;
      }
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
            func_0x01384bf4();
          }
          iVar2 = *(int *)(param_2 + 0x10 + uVar8 * 4);
          if (iVar2 == 3) {
            func_0x01c9430c(param_1);
          }
          else if (iVar2 == 2) {
            func_0x01c93dc8(param_1);
          }
          else if (iVar2 == 1) {
            func_0x01c93bc0(param_1);
          }
          uVar1 = *(uint *)(param_2 + 0xc);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      if (*(int *)(**(int **)(_UNK_01c8f038 + 0x1c8efe8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01c8f03c + 0x1c8f004));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0229f06c(0x3f,0);
      if (iVar5 == 0) {
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        return;
      }
      iVar5 = func_0x0229f13c(0x3f,0);
      if (iVar5 == 0) {
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
      if (*(int *)(iVar5 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
      }
      func_0x01485278(&uStack_30,iVar2,0);
      iVar4 = *(int *)(iVar5 + 8);
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 2;
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
      return;
    }
    iVar2 = func_0x0229f13c(700,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x959d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.BagMan$$_CheckItemBagCapacity RVA 0x1c81794 =====

/* WARNING: Removing unreachable block (ram,0x01c91b48) */
/* WARNING: Removing unreachable block (ram,0x01c91b54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c91794(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01c91cf4 + 0x1c917ac);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c91cf8 + 0x1c917c0));
    func_0x01384978(*(undefined4 *)(_UNK_01c91cfc + 0x1c917cc));
    func_0x01384978(*(undefined4 *)(_UNK_01c91d00 + 0x1c917d8));
    func_0x01384978(*(undefined4 *)(_UNK_01c91d04 + 0x1c917e4));
    func_0x01384978(*(undefined4 *)(_UNK_01c91d08 + 0x1c917f0));
    func_0x01384978(*(undefined4 *)(_UNK_01c91d0c + 0x1c917fc));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x959e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x959e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar12 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    func_0x0245495c(iVar12,uVar13,&uStack_30,uVar9,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_28 = param_1;
  piVar2 = (int *)func_0x01c91de8(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01c91d10 + 0x1c918a0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd8);
        goto LAB_01c918e8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c91d10 + 0x1c918a0),3);
LAB_01c918e8:
  piVar6 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01c91d14 + 0x1c91918)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_01c91960;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01c91d14 + 0x1c91918),0);
LAB_01c91960:
  piVar6 = (int *)(*(code *)*puVar3)(piVar6,puVar3[1]);
  piVar14 = *(int **)(_UNK_01c91d18 + 0x1c9198c);
  piVar7 = *(int **)(_UNK_01c91d1c + 0x1c91994);
  iVar1 = 0;
LAB_01c91990:
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar6;
  uVar5 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar14) {
        puVar3 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_01c919ec;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar6,*piVar14,0);
LAB_01c919ec:
  iVar12 = (*(code *)*puVar3)(piVar6,puVar3[1]);
  if (iVar12 != 0) {
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar3 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_01c91a64;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,*piVar7,0);
LAB_01c91a64:
    iVar12 = (*(code *)*puVar3)(piVar6,puVar3[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar12 + 0x14) != 0) goto LAB_01c91ad0;
    if (iVar1 < *(int *)(iVar12 + 0xc)) {
      iVar1 = *(int *)(iVar12 + 0xc);
    }
    goto LAB_01c91990;
  }
LAB_01c91ad0:
  if (piVar6 != (int *)0x0) {
    iVar12 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01c91d20 + 0x1c91ae8)) {
          puVar3 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_01c91b30;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01c91d20 + 0x1c91ae8),0);
LAB_01c91b30:
    (*(code *)*puVar3)(piVar6,puVar3[1]);
  }
  iVar12 = iStack_28;
  iVar11 = *(int *)(iStack_28 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x021137d8(iVar11,1,0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02111eb4(iVar11,0);
  if (iVar1 < iVar4) {
    *(int *)(iVar12 + 0x10) = iVar4;
  }
  else {
    *(int *)(iVar12 + 0x10) = iVar1;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02115fd8(iVar11,iVar1,0);
  }
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01c91d28 + 0x1c91be8)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_01c91c30;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c91d28 + 0x1c91be8),0);
LAB_01c91c30:
  uVar13 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar11 + 0xc) = uVar13;
  return;
}



// ===== FAT.BagMan$$_InitBagGirdGirdData RVA 0x1c81d2c =====

/* WARNING: Removing unreachable block (ram,0x01c92d98) */
/* WARNING: Removing unreachable block (ram,0x01c92d8c) */
/* WARNING: Removing unreachable block (ram,0x01c92dd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c91d2c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = func_0x0229f06c(0x95a0,0);
  if (iVar2 == 0) {
    func_0x01c922b4(param_1);
    func_0x01c925c4(param_1);
    pcVar10 = (char *)(_UNK_01c92eb8 + 0x1c92908);
    iStack_28 = param_1;
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c92ebc + 0x1c9291c));
      func_0x01384978(*(undefined4 *)(_UNK_01c92ec0 + 0x1c92928));
      func_0x01384978(*(undefined4 *)(_UNK_01c92ec4 + 0x1c92934));
      func_0x01384978(*(undefined4 *)(_UNK_01c92ec8 + 0x1c92940));
      func_0x01384978(*(undefined4 *)(_UNK_01c92ecc + 0x1c9294c));
      func_0x01384978(*(undefined4 *)(_UNK_01c92ed0 + 0x1c92958));
      func_0x01384978(*(undefined4 *)(_UNK_01c92ed4 + 0x1c92964));
      func_0x01384978(*(undefined4 *)(_UNK_01c92ed8 + 0x1c92970));
      func_0x01384978(*(undefined4 *)(_UNK_01c92edc + 0x1c9297c));
      func_0x01384978(*(undefined4 *)(_UNK_01c92ee0 + 0x1c92988));
      *pcVar10 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x95a3,0);
    if (iVar2 == 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01c92ee4 + 0x1c929e4));
      func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01c92ee8 + 0x1c929f8));
      iVar11 = func_0x01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xc);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01c93ad8(iVar11);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01c92eec + 0x1c92a50)) {
            puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xd8);
            goto LAB_01c92a98;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c92eec + 0x1c92a50),3);
LAB_01c92a98:
      piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01c92ef0 + 0x1c92ac8)) {
            puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
            goto LAB_01c92b10;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c92ef0 + 0x1c92ac8),0);
LAB_01c92b10:
      piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
      piVar7 = *(int **)(_UNK_01c92ef4 + 0x1c92b34);
LAB_01c92b30:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar7) {
            puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
            goto LAB_01c92b8c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_01c92b8c:
      iVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar11 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_01c92ef8 + 0x1c92bc0)) {
              puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
              goto LAB_01c92c08;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c92ef8 + 0x1c92bc0),0);
LAB_01c92c08:
        iVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar11 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(iVar11 + 0x18);
        }
        iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01c92efc + 0x1c92c34));
        func_0x0244f5a0(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar5 + 8) = 3;
        *(undefined4 *)(iVar5 + 0xc) = 3;
        if (iVar11 == 0) {
          *(undefined4 *)(iVar5 + 0x10) = 0xffffffff;
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(iVar11 + 0x14);
          *(int *)(iVar5 + 0x10) = *(int *)(iVar11 + 0xc) + -1;
        }
        *(undefined4 *)(iVar5 + 0x14) = uVar9;
        uVar1 = func_0x01c93b30(iStack_28,uVar12);
        *(undefined4 *)(iVar5 + 0x24) = uVar12;
        *(undefined1 *)(iVar5 + 0x18) = uVar1;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar2 + 8);
        uVar6 = *(uint *)(iVar2 + 0xc);
        piVar8 = *(int **)(_UNK_01c92f00 + 0x1c92cc4);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar13 = *piVar8;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar11 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar6 + 1;
          *(int *)(iVar11 + uVar6 * 4 + 0x10) = iVar5;
        }
        else {
          func_0x0328f170(iVar2,iVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
        }
        goto LAB_01c92b30;
      }
      if (piVar3 != (int *)0x0) {
        iVar11 = *piVar3;
        uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01c92f04 + 0x1c92d2c)) {
              puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
              goto LAB_01c92d74;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c92f04 + 0x1c92d2c),0);
LAB_01c92d74:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
      iVar11 = *(int *)(iStack_28 + 0x14);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcfe28(iVar11,3,iVar2,2);
      return;
    }
    iVar2 = func_0x0229f13c(0x95a3,0);
    param_1 = iStack_28;
    if (iVar2 == 0) {
      func_0x01384bf0();
      param_1 = iStack_28;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x95a0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar11 = *(int *)(iVar2 + 8);
  uVar12 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 2;
  if (iVar2 == 0) {
    uVar9 = 1;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_30,uVar9,0,0);
  return;
}



// ===== FAT.BagMan$$FAT.IUserDataHolder.FillData RVA 0x1c81d94 =====

void FUN_01c91d94(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x95a5,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x95a5,0);
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



// ===== FAT.BagMan$$_CalcProducerBagCapacityByConfigAndLevel RVA 0x1c81e40 =====

/* WARNING: Removing unreachable block (ram,0x01c921dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c91e40(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar9 = (char *)(_UNK_01c92284 + 0x1c91e58);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c92288 + 0x1c91e6c));
    func_0x01384978(*(undefined4 *)(_UNK_01c9228c + 0x1c91e78));
    func_0x01384978(*(undefined4 *)(_UNK_01c92290 + 0x1c91e84));
    func_0x01384978(*(undefined4 *)(_UNK_01c92294 + 0x1c91e90));
    func_0x01384978(*(undefined4 *)(_UNK_01c92298 + 0x1c91e9c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x55b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x55b,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar7,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01c91054(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01c9229c + 0x1c91f3c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
        goto LAB_01c91f84;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c9229c + 0x1c91f3c),3);
LAB_01c91f84:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01c922a0 + 0x1c91fb4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_01c91ffc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c922a0 + 0x1c91fb4),0);
LAB_01c91ffc:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  piVar5 = *(int **)(_UNK_01c922a4 + 0x1c92024);
  piVar11 = *(int **)(_UNK_01c922a8 + 0x1c9202c);
  iVar1 = 0;
LAB_01c92028:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar5) {
        puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
        goto LAB_01c92084;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar5,0);
LAB_01c92084:
  iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar8 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_01c920fc;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01c920fc:
    iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (((iVar8 == 0) || (*(int *)(iVar8 + 0x18) < 1)) || (param_2 < *(int *)(iVar8 + 0x1c)))
    goto LAB_01c92164;
    if (iVar1 < *(int *)(iVar8 + 0xc)) {
      iVar1 = *(int *)(iVar8 + 0xc);
    }
    goto LAB_01c92028;
  }
LAB_01c92164:
  if (piVar2 != (int *)0x0) {
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01c922ac + 0x1c9217c)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
          goto LAB_01c921c4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c922ac + 0x1c9217c),0);
LAB_01c921c4:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return iVar1;
}



// ===== FAT.BagMan$$_InitItemGirdData RVA 0x1c822b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c922b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01c92598 + 0x1c922cc);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c9259c + 0x1c922e0));
    func_0x01384978(*(undefined4 *)(_UNK_01c925a0 + 0x1c922ec));
    func_0x01384978(*(undefined4 *)(_UNK_01c925a4 + 0x1c922f8));
    func_0x01384978(*(undefined4 *)(_UNK_01c925a8 + 0x1c92304));
    func_0x01384978(*(undefined4 *)(_UNK_01c925ac + 0x1c92310));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x95a1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x95a1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar11,uVar13,&uStack_30,uVar8,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x021137d8(iVar1,1,0);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01c925b0 + 0x1c92394));
  func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01c925b4 + 0x1c923a8));
  iStack_28 = 0;
  iVar1 = 0;
  iStack_2c = param_1;
  while( true ) {
    iVar6 = iStack_2c;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar11 + 0xc) <= iVar1) break;
    iVar3 = func_0x02113150(iVar11,iVar1,0);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar10 = iVar1 + 1;
    iVar4 = func_0x01c92f10(iVar4,iVar10);
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01c925b8 + 0x1c92430));
    func_0x0244f5a0(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar5 + 8) = 1;
    uVar8 = 0;
    uVar13 = func_0x021127c8(iVar11,0);
    iVar6 = *(int *)(iVar6 + 0x10);
    *(undefined4 *)(iVar5 + 0xc) = uVar13;
    *(int *)(iVar5 + 0x10) = iVar1;
    *(bool *)(iVar5 + 0x18) = iVar1 < iVar6;
    if (iVar3 != 0) {
      uVar8 = func_0x0210e2d4(iVar3,0);
    }
    *(undefined4 *)(iVar5 + 0x14) = uVar8;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar4 + 0x14);
    if ((iVar3 != 0) && (iVar1 = func_0x0210e2d4(iVar3,0), 0 < iVar1)) {
      iStack_28 = iStack_28 + 1;
    }
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar2 + 8);
    uVar12 = *(uint *)(iVar2 + 0xc);
    piVar7 = *(int **)(_UNK_01c925bc + 0x1c92504);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar3 = *piVar7;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar1 = iVar10;
    if (uVar12 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar12 + 1;
      *(int *)(iVar6 + uVar12 * 4 + 0x10) = iVar5;
    }
    else {
      func_0x0328f170(iVar2,iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
    }
  }
  iVar1 = *(int *)(iVar6 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02451868(iVar1,1,iVar2,**(undefined4 **)(_UNK_01c925c0 + 0x1c92578));
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 0x10) - iStack_28;
  return;
}



// ===== FAT.BagMan$$_InitProducerGirdData RVA 0x1c825c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c925c4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  pcVar9 = (char *)(_UNK_01c928c4 + 0x1c925dc);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c928c8 + 0x1c925f0));
    func_0x01384978(*(undefined4 *)(_UNK_01c928cc + 0x1c925fc));
    func_0x01384978(*(undefined4 *)(_UNK_01c928d0 + 0x1c92608));
    func_0x01384978(*(undefined4 *)(_UNK_01c928d4 + 0x1c92614));
    func_0x01384978(*(undefined4 *)(_UNK_01c928d8 + 0x1c92620));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x95a2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x95a2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar10,uVar12,&iStack_30,uVar8,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  iStack_30 = param_1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x021137d8(iVar1,2,0);
  iVar10 = func_0x01c24918(0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar10 + 0x48);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x01dd2c04(iVar10,0);
  iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01c928dc + 0x1c926e0));
  func_0x0328e950(iVar3,**(undefined4 **)(_UNK_01c928e0 + 0x1c926f4));
  uStack_2c = ~uVar2 >> 0x1f;
  iVar10 = 0;
  uStack_28 = uVar2;
  while( true ) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar10) break;
    iVar4 = func_0x02113150(iVar1,iVar10,0);
    iVar5 = func_0x01c24918(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar11 = iVar10 + 1;
    iVar5 = func_0x01c92f7c(iVar5,iVar11);
    iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01c928e4 + 0x1c92780));
    func_0x0244f5a0(iVar6,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar6 + 8) = 2;
    uVar8 = 0;
    uVar12 = func_0x021127c8(iVar1,0);
    *(undefined4 *)(iVar6 + 0xc) = uVar12;
    *(int *)(iVar6 + 0x10) = iVar10;
    if (iVar4 != 0) {
      uVar8 = func_0x0210e2d4(iVar4,0);
    }
    *(undefined4 *)(iVar6 + 0x14) = uVar8;
    if (iVar5 == 0) {
      *(char *)(iVar6 + 0x18) = (char)uStack_2c;
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(iVar5 + 0x18);
      *(bool *)(iVar6 + 0x18) = *(int *)(iVar5 + 0x1c) <= (int)uStack_28;
    }
    *(undefined4 *)(iVar6 + 0x20) = uVar12;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar3 + 8);
    uVar2 = *(uint *)(iVar3 + 0xc);
    piVar7 = *(int **)(_UNK_01c928e8 + 0x1c92840);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    iVar5 = *piVar7;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar10 = iVar11;
    if (uVar2 < *(uint *)(iVar4 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar2 + 1;
      *(int *)(iVar4 + uVar2 * 4 + 0x10) = iVar6;
    }
    else {
      func_0x0328f170(iVar3,iVar6,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
    }
  }
  iVar1 = *(int *)(iStack_30 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03dcfe28(iVar1,2,iVar3,2);
  return;
}



// ===== FAT.BagMan$$_InitToolGirdData RVA 0x1c828f0 =====

/* WARNING: Removing unreachable block (ram,0x01c92d98) */
/* WARNING: Removing unreachable block (ram,0x01c92d8c) */
/* WARNING: Removing unreachable block (ram,0x01c92dd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c928f0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01c92eb8 + 0x1c92908);
  iStack_28 = param_1;
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c92ebc + 0x1c9291c));
    func_0x01384978(*(undefined4 *)(_UNK_01c92ec0 + 0x1c92928));
    func_0x01384978(*(undefined4 *)(_UNK_01c92ec4 + 0x1c92934));
    func_0x01384978(*(undefined4 *)(_UNK_01c92ec8 + 0x1c92940));
    func_0x01384978(*(undefined4 *)(_UNK_01c92ecc + 0x1c9294c));
    func_0x01384978(*(undefined4 *)(_UNK_01c92ed0 + 0x1c92958));
    func_0x01384978(*(undefined4 *)(_UNK_01c92ed4 + 0x1c92964));
    func_0x01384978(*(undefined4 *)(_UNK_01c92ed8 + 0x1c92970));
    func_0x01384978(*(undefined4 *)(_UNK_01c92edc + 0x1c9297c));
    func_0x01384978(*(undefined4 *)(_UNK_01c92ee0 + 0x1c92988));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x95a3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x95a3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar11 = iStack_28;
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar11,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar2 == 0) {
      uVar9 = 1;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_30,uVar9,0,0);
    return;
  }
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01c92ee4 + 0x1c929e4));
  func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01c92ee8 + 0x1c929f8));
  iVar11 = func_0x01c24918(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01c93ad8(iVar11);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar3;
  uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01c92eec + 0x1c92a50)) {
        puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xd8);
        goto LAB_01c92a98;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c92eec + 0x1c92a50),3);
LAB_01c92a98:
  piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar3;
  uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01c92ef0 + 0x1c92ac8)) {
        puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
        goto LAB_01c92b10;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c92ef0 + 0x1c92ac8),0);
LAB_01c92b10:
  piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
  piVar7 = *(int **)(_UNK_01c92ef4 + 0x1c92b34);
LAB_01c92b30:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar3;
  uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar7) {
        puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
        goto LAB_01c92b8c;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_01c92b8c:
  iVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar11 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01c92ef8 + 0x1c92bc0)) {
          puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
          goto LAB_01c92c08;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c92ef8 + 0x1c92bc0),0);
LAB_01c92c08:
    iVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar11 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(iVar11 + 0x18);
    }
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01c92efc + 0x1c92c34));
    func_0x0244f5a0(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar5 + 8) = 3;
    *(undefined4 *)(iVar5 + 0xc) = 3;
    if (iVar11 == 0) {
      *(undefined4 *)(iVar5 + 0x10) = 0xffffffff;
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(iVar11 + 0x14);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar11 + 0xc) + -1;
    }
    *(undefined4 *)(iVar5 + 0x14) = uVar9;
    uVar1 = func_0x01c93b30(iStack_28,uVar12);
    *(undefined4 *)(iVar5 + 0x24) = uVar12;
    *(undefined1 *)(iVar5 + 0x18) = uVar1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar2 + 8);
    uVar6 = *(uint *)(iVar2 + 0xc);
    piVar8 = *(int **)(_UNK_01c92f00 + 0x1c92cc4);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar13 = *piVar8;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if (uVar6 < *(uint *)(iVar11 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar6 + 1;
      *(int *)(iVar11 + uVar6 * 4 + 0x10) = iVar5;
    }
    else {
      func_0x0328f170(iVar2,iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
    }
    goto LAB_01c92b30;
  }
  if (piVar3 != (int *)0x0) {
    iVar11 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01c92f04 + 0x1c92d2c)) {
          puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_01c92d74;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c92f04 + 0x1c92d2c),0);
LAB_01c92d74:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  iVar11 = *(int *)(iStack_28 + 0x14);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x03dcfe28(iVar11,3,iVar2,2);
  return;
}



// ===== FAT.BagMan.BagGirdData$$.ctor RVA 0x1c82f74 =====

void FUN_01c92f74(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BagMan$$AlignProducerBagWithConfig RVA 0x1c82fe0 =====

/* WARNING: Removing unreachable block (ram,0x01c93790) */
/* WARNING: Removing unreachable block (ram,0x01c9379c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c92fe0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int iStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar14 = (char *)(_UNK_01c93a40 + 0x1c92ffc);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c93a44 + 0x1c93010));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a48 + 0x1c9301c));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a4c + 0x1c93028));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a50 + 0x1c93034));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a54 + 0x1c93040));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a58 + 0x1c9304c));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a5c + 0x1c93058));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a60 + 0x1c93064));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a64 + 0x1c93070));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a68 + 0x1c9307c));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a6c + 0x1c93088));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a70 + 0x1c93094));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a74 + 0x1c930a0));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a78 + 0x1c930ac));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a7c + 0x1c930b8));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a80 + 0x1c930c4));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a84 + 0x1c930d0));
    func_0x01384978(*(undefined4 *)(_UNK_01c93a88 + 0x1c930dc));
    *pcVar14 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_3c = 0;
  iVar1 = func_0x0229f06c(0x95a6,0);
  if (iVar1 == 0) {
    if (((param_2 != 0) && (iVar1 = func_0x02141880(param_2,0), iVar1 != 0)) &&
       (iVar1 = func_0x021137d8(iVar1,2,0), iVar1 != 0)) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01dd2c04(iVar2,0);
      iVar3 = FUN_01c91e40(param_1);
      iVar4 = func_0x02111eb4(iVar1,0);
      if (iVar4 < iVar3) {
        func_0x02115fd8(iVar1,iVar3,0);
      }
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar5 = (int *)func_0x01c91054(iVar3);
      iStack_60 = 0;
      iVar3 = func_0x02111eb4(iVar1,0);
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          iVar6 = func_0x02113150(iVar1,iVar4,0);
          if ((iVar6 != 0) && (iVar7 = func_0x0210e2d4(iVar6,0), 0 < iVar7)) {
            iVar7 = func_0x01c24918(0);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = *(int *)(iVar7 + 0xc);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x01c92f7c(iVar7,iVar4 + 1);
            iVar15 = 0x7fffffff;
            if (iVar7 == 0) {
              iVar13 = 0;
            }
            else {
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              iVar13 = *(int *)(iVar7 + 0x18);
              if (iVar7 != 0) {
                if (iVar7 == 0) {
                  func_0x01384bf0();
                }
                iVar15 = *(int *)(iVar7 + 0x1c);
              }
            }
            iVar6 = func_0x0210e2d4(iVar6,0);
            if (((iVar2 < iVar15) || (iVar6 != iVar13)) &&
               (iVar6 = func_0x02114d08(iVar1,iVar4,0), iVar6 != 0)) {
              if (iStack_60 == 0) {
                iStack_60 = func_0x01384be4(**(undefined4 **)(_UNK_01c93a8c + 0x1c93374));
                func_0x0328e950(iStack_60,**(undefined4 **)(_UNK_01c93a90 + 0x1c93388));
                if (iStack_60 == 0) {
                  func_0x01384bf0();
                  iStack_60 = 0;
                }
              }
              iVar7 = *(int *)(iStack_60 + 8);
              uVar16 = *(uint *)(iStack_60 + 0xc);
              piVar11 = *(int **)(_UNK_01c93a94 + 0x1c933c4);
              *(int *)(iStack_60 + 0x10) = *(int *)(iStack_60 + 0x10) + 1;
              iVar15 = *piVar11;
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              if (uVar16 < *(uint *)(iVar7 + 0xc)) {
                *(uint *)(iStack_60 + 0xc) = uVar16 + 1;
                *(int *)(iVar7 + uVar16 * 4 + 0x10) = iVar6;
              }
              else {
                func_0x0328f170(iStack_60,iVar6,
                                *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
              }
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar3 != iVar4);
        iVar3 = 0;
        if (iStack_60 != 0) {
          iVar3 = *(int *)(iStack_60 + 0xc);
        }
        if (iStack_60 != 0 && iVar3 != 0) {
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar5;
          uVar16 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar16 != 0) {
            piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar11[-1] == **(int **)(_UNK_01c93a98 + 0x1c93460)) {
                puVar8 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
                goto LAB_01c934a8;
              }
              uVar16 = uVar16 - 1;
              piVar11 = piVar11 + 2;
            } while (uVar16 != 0);
          }
          puVar8 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01c93a98 + 0x1c93460),0);
LAB_01c934a8:
          uVar9 = (*(code *)*puVar8)(piVar5,puVar8[1]);
          iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01c93a9c + 0x1c934c8));
          func_0x0245186c(iVar3,uVar9,**(undefined4 **)(_UNK_01c93aa0 + 0x1c934e0));
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = *piVar5;
          uVar16 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar16 != 0) {
            piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar11[-1] == **(int **)(_UNK_01c93aa4 + 0x1c93504)) {
                puVar8 = (undefined4 *)(iVar4 + *piVar11 * 8 + 0xd8);
                goto LAB_01c9354c;
              }
              uVar16 = uVar16 - 1;
              piVar11 = piVar11 + 2;
            } while (uVar16 != 0);
          }
          puVar8 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01c93aa4 + 0x1c93504),3);
LAB_01c9354c:
          piVar5 = (int *)(*(code *)*puVar8)(piVar5,puVar8[1]);
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = *piVar5;
          uVar16 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar16 != 0) {
            piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar11[-1] == **(int **)(_UNK_01c93aa8 + 0x1c9357c)) {
                puVar8 = (undefined4 *)(iVar4 + *piVar11 * 8 + 0xc0);
                goto LAB_01c935c4;
              }
              uVar16 = uVar16 - 1;
              piVar11 = piVar11 + 2;
            } while (uVar16 != 0);
          }
          puVar8 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01c93aa8 + 0x1c9357c),0);
LAB_01c935c4:
          piVar5 = (int *)(*(code *)*puVar8)(piVar5,puVar8[1]);
          piVar11 = *(int **)(_UNK_01c93aac + 0x1c935e4);
          piVar17 = *(int **)(_UNK_01c93ab0 + 0x1c935ec);
          puVar8 = *(undefined4 **)(_UNK_01c93ab4 + 0x1c935f4);
LAB_01c935f0:
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = *piVar5;
          uVar16 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar16 != 0) {
            piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar12[-1] == *piVar11) {
                puVar10 = (undefined4 *)(iVar4 + *piVar12 * 8 + 0xc0);
                goto LAB_01c9364c;
              }
              uVar16 = uVar16 - 1;
              piVar12 = piVar12 + 2;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_01c9364c:
          iVar4 = (*(code *)*puVar10)(piVar5,puVar10[1]);
          if (iVar4 != 0) {
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar4 = *piVar5;
            uVar16 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar16 != 0) {
              piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar12[-1] == *piVar17) {
                  puVar10 = (undefined4 *)(iVar4 + *piVar12 * 8 + 0xc0);
                  goto LAB_01c936c0;
                }
                uVar16 = uVar16 - 1;
                piVar12 = piVar12 + 2;
              } while (uVar16 != 0);
            }
            puVar10 = (undefined4 *)func_0x014002dc(piVar5,*piVar17,0);
LAB_01c936c0:
            iVar4 = (*(code *)*puVar10)(piVar5,puVar10[1]);
            if ((iVar4 != 0) && (iVar6 = *(int *)(iVar4 + 0x18), 0 < iVar6)) {
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              func_0x024505a4(iVar3,iVar6,iVar4,*puVar8);
            }
            goto LAB_01c935f0;
          }
          if (piVar5 != (int *)0x0) {
            iVar4 = *piVar5;
            uVar16 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar16 != 0) {
              piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar11[-1] == **(int **)(_UNK_01c93ab8 + 0x1c93730)) {
                  puVar8 = (undefined4 *)(iVar4 + *piVar11 * 8 + 0xc0);
                  goto LAB_01c93778;
                }
                uVar16 = uVar16 - 1;
                piVar11 = piVar11 + 2;
              } while (uVar16 != 0);
            }
            puVar8 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01c93ab8 + 0x1c93730),0);
LAB_01c93778:
            (*(code *)*puVar8)(piVar5,puVar8[1]);
          }
          func_0x0328fe1c(&uStack_50,iStack_60,**(undefined4 **)(_UNK_01c93abc + 0x1c937b4));
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          iStack_2c = iStack_44;
          puVar8 = *(undefined4 **)(_UNK_01c93ac0 + 0x1c937dc);
          puVar10 = *(undefined4 **)(_UNK_01c93ac4 + 0x1c937e4);
          while (iVar6 = func_0x0145b12c(&uStack_38,*puVar8), iVar4 = iStack_2c, iVar6 != 0) {
            if (iStack_2c == 0) {
              func_0x01384bf0();
            }
            uVar9 = func_0x0210e2d4(iVar4,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x02450cc8(iVar3,uVar9,&iStack_3c,*puVar10);
            iVar6 = iStack_3c;
            if (iVar7 == 0) goto LAB_01c9388c;
            if (iStack_3c == 0) {
              func_0x01384bf0();
            }
            iVar7 = iStack_3c;
            if (iVar2 < *(int *)(iVar6 + 0x1c)) goto LAB_01c9388c;
            if (iStack_3c == 0) {
              func_0x01384bf0();
            }
            iVar7 = *(int *)(iVar7 + 0xc) + -1;
            iVar6 = func_0x02113150(iVar1,iVar7,0);
            if ((iVar6 != 0) || (uVar16 = func_0x02115850(iVar1,iVar4,iVar7,0), 0x7fffffff < uVar16)
               ) {
LAB_01c9388c:
              func_0x02144d84(param_2,iVar4,0,0);
            }
          }
          func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01c93ac8 + 0x1c938d0));
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x95a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.BagMan$$_CheckIsUnlockInGallery RVA 0x1c83b30 =====

/* WARNING: Possible PIC construction at 0x01cc4568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc456c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c93b30(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  uint uStack_14;
  
  iVar1 = func_0x0229f06c(0x2c9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01cc45c8 + 0x1cc4504);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc45cc + 0x1cc4518),param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x2ca,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02451924(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01cc45d0 + 0x1cc4594))
      ;
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = (uint)((uStack_14 & 0xfffffffe) == 2);
      }
      return uVar2;
    }
    iVar1 = func_0x0229f13c(0x2ca,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cc456c;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x2c9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar2 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar2;
}



// ===== FAT.BagMan$$_UpdateItemGirdData RVA 0x1c83bc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c93bc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01c93db4 + 0x1c93bd8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c93db8 + 0x1c93bec));
    func_0x01384978(*(undefined4 *)(_UNK_01c93dbc + 0x1c93bf8));
    *pcVar7 = '\x01';
  }
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0x2bd,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0245185c(iVar2,1,&iStack_28,**(undefined4 **)(_UNK_01c93dc0 + 0x1c93c74));
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x021137d8(iVar2,1,0);
      iVar11 = 0;
      iVar2 = 0;
      iVar8 = 0;
      iVar10 = 0;
      while( true ) {
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar3 + 0xc) <= iVar8) break;
        iVar4 = func_0x02113150(iVar3,iVar8,0);
        iVar5 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0328eea8(iVar5,iVar8,**(undefined4 **)(_UNK_01c93dc4 + 0x1c93d08));
        iVar9 = *(int *)(param_1 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar1 = iVar5;
        if (iVar4 == 0) {
          iVar11 = iVar5;
          iVar1 = iVar2;
        }
        iVar2 = iVar1;
        *(bool *)(iVar5 + 0x18) = iVar8 < iVar9;
        if (iVar4 == 0) {
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          *(undefined4 *)(iVar11 + 0x14) = 0;
        }
        else {
          uVar6 = func_0x0210e2d4(iVar4,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          *(undefined4 *)(iVar2 + 0x14) = uVar6;
          iVar5 = func_0x0210e2d4(iVar4,0);
          if (0 < iVar5) {
            iVar10 = iVar10 + 1;
          }
        }
        iVar8 = iVar8 + 1;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 0x10) - iVar10;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x2bd,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.BagMan$$_UpdateProducerGirdData RVA 0x1c83dc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c93dc8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01c942e0 + 0x1c93de0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c942e4 + 0x1c93df4));
    func_0x01384978(*(undefined4 *)(_UNK_01c942e8 + 0x1c93e00));
    func_0x01384978(*(undefined4 *)(_UNK_01c942ec + 0x1c93e0c));
    func_0x01384978(*(undefined4 *)(_UNK_01c942f0 + 0x1c93e18));
    func_0x01384978(*(undefined4 *)(_UNK_01c942f4 + 0x1c93e24));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x2c1,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0245185c(iVar1,2,&iStack_28,**(undefined4 **)(_UNK_01c942f8 + 0x1c93e9c));
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x021137d8(iVar1,2,0);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01dd2c04(iVar2,0);
      iVar2 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar2 + 0xc);
      iVar2 = 0;
      while( true ) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0xc) <= iVar2) break;
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar13 = iVar2 + 1;
        iVar5 = func_0x01c92f7c(iVar4,iVar13);
        iVar6 = func_0x02113150(iVar1,iVar2,0);
        iVar4 = iStack_28;
        if (iVar2 < iVar12) {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0328eea8(iVar4,iVar2,**(undefined4 **)(_UNK_01c942fc + 0x1c93fc4));
          if (iVar6 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = func_0x0210e2d4(iVar6,0);
          }
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (iVar5 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar5 + 0x1c);
          }
          *(undefined4 *)(iVar2 + 0x14) = uVar7;
          *(bool *)(iVar2 + 0x18) = iVar4 <= iVar3;
          iVar2 = iVar13;
        }
        else {
          iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01c94300 + 0x1c93ff8));
          func_0x0244f5a0(iVar4,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          *(undefined4 *)(iVar4 + 8) = 2;
          uVar11 = 0;
          uVar7 = func_0x021127c8(iVar1,0);
          *(undefined4 *)(iVar4 + 0xc) = uVar7;
          *(int *)(iVar4 + 0x10) = iVar2;
          if (iVar6 != 0) {
            uVar11 = func_0x0210e2d4(iVar6,0);
          }
          iVar2 = iStack_28;
          *(undefined4 *)(iVar4 + 0x14) = uVar11;
          if (iVar5 == 0) {
            *(byte *)(iVar4 + 0x18) = (byte)~(byte)((uint)iVar3 >> 0x18) >> 7;
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined4 *)(iVar5 + 0x18);
            *(bool *)(iVar4 + 0x18) = *(int *)(iVar5 + 0x1c) <= iVar3;
          }
          *(undefined4 *)(iVar4 + 0x20) = uVar7;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar2 + 8);
          uVar10 = *(uint *)(iVar2 + 0xc);
          piVar8 = *(int **)(_UNK_01c94304 + 0x1c940f0);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar6 = *piVar8;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (uVar10 < *(uint *)(iVar5 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar10 + 1;
            *(int *)(iVar5 + uVar10 * 4 + 0x10) = iVar4;
            iVar2 = iVar13;
          }
          else {
            func_0x0328f170(iVar2,iVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
            iVar2 = iVar13;
          }
        }
      }
      if (iVar12 < *(int *)(iVar1 + 0xc)) {
        iVar2 = *(int *)(param_1 + 0xc);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x021137d8(iVar2,1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02111eb4(iVar2,0);
        uVar10 = iVar3 - 1;
        if (-1 < (int)uVar10) {
          do {
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar7 = func_0x02113150(iVar2,uVar10,0);
            iVar3 = FUN_01c90928(param_1,uVar7);
            if (iVar3 != 0) {
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar12 = func_0x02114d08(iVar2,uVar10,0);
              uVar7 = *(undefined4 *)(iVar3 + 0x10);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar4 = func_0x02115850(iVar1,iVar12,uVar7,0);
              iVar3 = iStack_28;
              if (-1 < iVar4) {
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x0328eea8(iVar3,iVar4,**(undefined4 **)(_UNK_01c94308 + 0x1c94230));
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                uVar7 = func_0x0210e2d4(iVar12,0);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                *(undefined4 *)(iVar3 + 0x14) = uVar7;
                iVar3 = *(int *)(param_1 + 0xc);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x021137d8(iVar3,2,0);
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                uVar7 = func_0x0210e2d4(iVar12,0);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                func_0x02115954(iVar3,uVar7,0);
              }
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 < 0x80000000);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x2c1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.BagMan$$_UpdateToolGirdData RVA 0x1c8430c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c9430c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01c9450c + 0x1c94324);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c94510 + 0x1c94338));
    func_0x01384978(*(undefined4 *)(_UNK_01c94514 + 0x1c94344));
    func_0x01384978(*(undefined4 *)(_UNK_01c94518 + 0x1c94350));
    func_0x01384978(*(undefined4 *)(_UNK_01c9451c + 0x1c9435c));
    func_0x01384978(*(undefined4 *)(_UNK_01c94520 + 0x1c94368));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_1c = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x2c8,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0245185c(iVar2,3,&iStack_1c,**(undefined4 **)(_UNK_01c94524 + 0x1c943ec));
    iVar2 = iStack_1c;
    if (iVar3 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_30,iVar2,**(undefined4 **)(_UNK_01c94528 + 0x1c94420));
      puVar5 = *(undefined4 **)(_UNK_01c9452c + 0x1c94434);
      while (iVar3 = func_0x0145b12c(&uStack_30,*puVar5), iVar2 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        uVar1 = FUN_01c93b30(param_1,*(undefined4 *)(iVar2 + 0x24));
        *(undefined1 *)(iVar2 + 0x18) = uVar1;
      }
      func_0x0145b14c(&uStack_30,**(undefined4 **)(_UNK_01c94530 + 0x1c94474));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x2c8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.BagMan$$_IsToolBoxOrToolItem RVA 0x1c8453c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c9453c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
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
  
  pcVar7 = (char *)(_UNK_01c946ac + 0x1c94554);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c946b0 + 0x1c94568));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x563,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x563,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar9,&uStack_38,uVar5,0,0);
    uVar8 = func_0x0245496c(&uStack_38,0,0);
    return uVar8;
  }
  if (0 < param_2) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01c946b8(iVar1,param_2);
    uVar8 = 1;
    if (iVar1 == 0) {
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01c946b4 + 0x1c9462c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x110);
            goto LAB_01c94674;
          }
          uVar8 = uVar8 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01c946b4 + 0x1c9462c),10);
LAB_01c94674:
      iVar1 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
      if (iVar1 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(*(int *)(iVar1 + 0x38) != 0);
      }
    }
  }
  return uVar8;
}



// ===== FAT.BagMan$$.ctor RVA 0x1c84774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c94774(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01c947ec + 0x1c94788);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c947f0 + 0x1c9479c));
    func_0x01384978(*(undefined4 *)(_UNK_01c947f4 + 0x1c947a8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01c947f8 + 0x1c947bc));
  func_0x02451870(uVar1,**(undefined4 **)(_UNK_01c947fc + 0x1c947d0));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BagMan.BagGirdData$$ToString RVA 0x1c84800 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c94800(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_31;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01c94b48 + 0x1c94818);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c94b4c + 0x1c9482c));
    func_0x01384978(*(undefined4 *)(_UNK_01c94b50 + 0x1c94838));
    func_0x01384978(*(undefined4 *)(_UNK_01c94b54 + 0x1c94844));
    func_0x01384978(*(undefined4 *)(_UNK_01c94b58 + 0x1c94850));
    func_0x01384978(*(undefined4 *)(_UNK_01c94b5c + 0x1c9485c));
    func_0x01384978(*(undefined4 *)(_UNK_01c94b60 + 0x1c94868));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x95a7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x95a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar6 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c94b64 + 0x1c948c8),5);
  uStack_24 = *(undefined4 *)(param_1 + 8);
  iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c94b68 + 0x1c948e0),&uStack_24);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0))
  {
    uVar8 = func_0x01384c10();
    func_0x01384aa0(uVar8,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = iVar1;
  uStack_28 = *(undefined4 *)(param_1 + 0xc);
  puVar9 = *(undefined4 **)(_UNK_01c94b6c + 0x1c9494c);
  iVar1 = func_0x01384abc(*puVar9,&uStack_28);
  if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0))
  {
    uVar8 = func_0x01384c10();
    func_0x01384aa0(uVar8,0);
  }
  if ((uint)piVar2[3] < 2) {
    func_0x01384bf4();
  }
  piVar2[5] = iVar1;
  uStack_2c = *(undefined4 *)(param_1 + 0x10);
  iVar1 = func_0x01384abc(*puVar9,&uStack_2c);
  if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0))
  {
    uVar8 = func_0x01384c10();
    func_0x01384aa0(uVar8,0);
  }
  if ((uint)piVar2[3] < 3) {
    func_0x01384bf4();
  }
  piVar2[6] = iVar1;
  uStack_30 = *(undefined4 *)(param_1 + 0x14);
  iVar1 = func_0x01384abc(*puVar9,&uStack_30);
  if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0))
  {
    uVar8 = func_0x01384c10();
    func_0x01384aa0(uVar8,0);
  }
  if ((uint)piVar2[3] < 4) {
    func_0x01384bf4();
  }
  piVar2[7] = iVar1;
  uStack_31 = *(undefined1 *)(param_1 + 0x18);
  iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c94b70 + 0x1c94a5c),&uStack_31);
  if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0))
  {
    uVar8 = func_0x01384c10();
    func_0x01384aa0(uVar8,0);
  }
  if ((uint)piVar2[3] < 5) {
    func_0x01384bf4();
  }
  piVar2[8] = iVar1;
  uVar8 = func_0x0244f708(**(undefined4 **)(_UNK_01c94b74 + 0x1c94ac4),piVar2,0);
  uStack_38 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = func_0x01384abc(*puVar9,&uStack_38);
  uStack_3c = *(undefined4 *)(param_1 + 0x20);
  uVar3 = func_0x01384abc(*puVar9,&uStack_3c);
  uStack_40 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = func_0x01384abc(*puVar9,&uStack_40);
  uStack_48 = 0;
  uVar5 = func_0x02450228(**(undefined4 **)(_UNK_01c94b78 + 0x1c94b28),uVar5,uVar3,uVar4);
  func_0x0244fb1c(uVar8,uVar5,0);
  return;
}



// ===== FAT.BagMan.BagGirdData$$<>iFixBaseProxy_ToString RVA 0x1c84b7c =====

void FUN_01c94b7c(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}



// ===== FAT.BagMan.<>c__DisplayClass22_0$$<PurchaseItemBagGird>b__0 RVA 0x1c84b84 =====

/* WARNING: Removing unreachable block (ram,0x01c94fd8) */
/* WARNING: Removing unreachable block (ram,0x01c94fcc) */
/* WARNING: Removing unreachable block (ram,0x01c95044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c94b84(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint unaff_r7;
  int *piVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  pcVar8 = (char *)(iRam01c94ccc + 0x1c94b98);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam01c94cd0 + 0x1c94bac));
    *pcVar8 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
    iVar9 = *(int *)(param_1 + 8);
    iRam00000010 = iRam00000010 + 1;
    iStack_24 = iVar9;
    if (iVar9 == 0) {
      func_0x01384bf0();
      iStack_24 = *(int *)(param_1 + 8);
      bVar13 = iStack_24 == 0;
      if (bVar13) {
        uVar14 = func_0x01384bf0();
        uVar4 = (uint)((ulonglong)uVar14 >> 0x20);
        piVar3 = (int *)uVar14;
        if (bVar13) {
          uVar4 = unaff_r7 & 0xffff3fff;
        }
        pcVar8 = (char *)(_UNK_01c95114 + 0x1c94cec);
        iStack_28 = param_1;
        iStack_20 = iVar9;
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01c95118 + 0x1c94d00),uVar4);
          func_0x01384978(*(undefined4 *)(_UNK_01c9511c + 0x1c94d0c));
          func_0x01384978(*(undefined4 *)(_UNK_01c95120 + 0x1c94d18));
          func_0x01384978(*(undefined4 *)(_UNK_01c95124 + 0x1c94d24));
          func_0x01384978(*(undefined4 *)(_UNK_01c95128 + 0x1c94d30));
          func_0x01384978(*(undefined4 *)(_UNK_01c9512c + 0x1c94d3c));
          func_0x01384978(*(undefined4 *)(_UNK_01c95130 + 0x1c94d48));
          *pcVar8 = '\x01';
        }
        iVar9 = func_0x0229f06c(0xf04,0);
        if (iVar9 != 0) {
          iVar9 = func_0x0229f13c(0xf04,0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          pcVar8 = (char *)(_UNK_02173f74 + 0x2173e94);
          if (*pcVar8 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),piVar3,0);
            *pcVar8 = '\x01';
          }
          uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_40 = 0;
          uStack_30 = 0;
          func_0x0245494c(&uStack_58,0);
          uStack_40 = uStack_58;
          uStack_3c = uStack_54;
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          if (*(int *)(iVar9 + 0x10) != 0) {
            func_0x01485278(&uStack_40,*(int *)(iVar9 + 0x10),0);
          }
          func_0x01485278(&uStack_40,piVar3,0);
          iVar11 = *(int *)(iVar9 + 8);
          uVar10 = *(undefined4 *)(iVar9 + 0xc);
          iVar9 = *(int *)(iVar9 + 0x10);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 2;
          if (iVar9 == 0) {
            uVar7 = 1;
          }
          func_0x0245495c(iVar11,uVar10,&uStack_40,uVar7,0,0);
          func_0x02f5db90(&uStack_40,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
          return;
        }
        piVar1 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01c95134 + 0x1c94da0));
        func_0x029f37d0(piVar1,0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar9 = *piVar3;
        uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar9 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01c95138 + 0x1c94dcc)) {
              puVar2 = (undefined4 *)(iVar9 + *piVar5 * 8 + 0xc0);
              goto LAB_01c94e14;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c95138 + 0x1c94dcc),0);
LAB_01c94e14:
        piVar3 = (int *)(*(code *)*puVar2)(piVar3,puVar2[1]);
        piVar5 = *(int **)(_UNK_01c9513c + 0x1c94e34);
        piVar12 = *(int **)(_UNK_01c95140 + 0x1c94e3c);
        do {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar9 = *piVar3;
          uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar5) {
                puVar2 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
                goto LAB_01c94e94;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar3,*piVar5,0);
LAB_01c94e94:
          iVar9 = (*(code *)*puVar2)(piVar3,puVar2[1]);
          if (iVar9 == 0) goto LAB_01c94f4c;
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar9 = *piVar3;
          uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar12) {
                puVar2 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
                goto LAB_01c94f08;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar3,*piVar12,0);
LAB_01c94f08:
          uVar10 = (*(code *)*puVar2)(piVar3,puVar2[1]);
          uVar10 = func_0x029f23f4(uVar10,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          (**(code **)(*piVar1 + 0x168))(piVar1,uVar10,*(undefined4 *)(*piVar1 + 0x16c));
        } while( true );
      }
    }
  }
  else {
    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
    iStack_24 = iVar9;
  }
  iVar9 = *(int *)(iVar9 + 0xc);
  uVar10 = *(undefined4 *)(iStack_24 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x02115ca0(iVar9,uVar10,1,0);
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x019a6090(*(undefined4 *)(iVar9 + 0x10),0);
  iVar11 = *(int *)(param_1 + 8);
  iVar9 = func_0x01384a00(**(undefined4 **)(iRam01c94cd4 + 0x1c94c60),1);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar9 + 0xc) == 0) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar9 + 0x10) = 1;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  FUN_01c8eed4(iVar11,iVar9);
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01c94cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar9 + 0xc))(*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar9 + 0x14));
    return;
  }
  return;
LAB_01c94f4c:
  if (piVar3 != (int *)0x0) {
    iVar9 = *piVar3;
    uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01c95144 + 0x1c94f6c)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar5 * 8 + 0xc0);
          goto LAB_01c94fb4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01c95144 + 0x1c94f6c),0);
LAB_01c94fb4:
    (*(code *)*puVar2)(piVar3,puVar2[1]);
  }
  piVar3 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01c95148 + 0x1c94fec));
  func_0x029f3744(piVar3,0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar3 + 0x100))
            (piVar3,**(undefined4 **)(_UNK_01c9514c + 0x1c9501c),piVar1,
             *(undefined4 *)(*piVar3 + 0x104));
                    /* WARNING: Could not recover jumptable at 0x01c95040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
  return;
}


