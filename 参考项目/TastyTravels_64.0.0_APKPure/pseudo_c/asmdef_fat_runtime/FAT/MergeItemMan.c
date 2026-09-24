/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeItemMan$$GetItemCategoryIdAndLevel RVA 0x1da1798 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db1798(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01db1878 + 0x1db17b8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db187c + 0x1db17d0));
    *pcVar2 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x817,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d37358(iVar1,param_2,&uStack_28,**(undefined4 **)(_UNK_01db1880 + 0x1db1858));
    *param_3 = uStack_28;
    *param_4 = uStack_24;
  }
  else {
    iVar1 = func_0x0229f13c(0x817,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021964b0(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeItemMan$$GetCategoryConfig RVA 0x1da1884 =====

undefined4 FUN_01db1884(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x424,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 0x54) == 0) ||
       (iVar1 = FUN_01caf654(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
      uStack_14 = func_0x01dcfd78(param_1,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x424,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02188e6c(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.MergeItemMan$$GetChainItemIdByLevel RVA 0x1da20e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01db20e8(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01db2204 + 0x1db2108);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db2208 + 0x1db2120));
    func_0x01384978(*(undefined4 *)(_UNK_01db220c + 0x1db212c));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x5c98,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    iVar1 = FUN_01db1884(param_1,param_2);
    uVar2 = 0;
    if ((iVar1 != 0) &&
       (iVar3 = func_0x03005740(*(undefined4 *)(iVar1 + 0x44),param_3 + -1,&uStack_24,
                                **(undefined4 **)(_UNK_01db2210 + 0x1db21c0)), iVar3 != 0)) {
      iVar1 = *(int *)(iVar1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *param_4 = *(int *)(iVar1 + 0xc) <= param_3;
      uVar2 = uStack_24;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c98,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02235f40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.MergeItemMan$$GetItemComConfig RVA 0x1da5714 =====

undefined4 FUN_01db5714(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7f3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 0x54) == 0) ||
       (iVar1 = FUN_01caef24(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
      uStack_14 = func_0x01dcfd10(param_1,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7f3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x021970b4(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.MergeItemMan$$GetMergeTapCostConfig RVA 0x1da6254 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01db6254(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01db62f0 + 0x1db626c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db62f4 + 0x1db6280));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9af,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_021a2f40 + 0x21a2e4c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a2f44 + 0x21a2e60),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021a2f48 + 0x21a2f30));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01db62f8 + 0x1db62e4);
  piVar2 = *(int **)(param_1 + 0x14);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetAliveCheckChain RVA 0x1daacac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dbacac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_01dbafb0 + 0x1dbacc4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbafb4 + 0x1dbacd8));
    func_0x01384978(*(undefined4 *)(_UNK_01dbafb8 + 0x1dbace4));
    func_0x01384978(*(undefined4 *)(_UNK_01dbafbc + 0x1dbacf0));
    func_0x01384978(*(undefined4 *)(_UNK_01dbafc0 + 0x1dbacfc));
    func_0x01384978(*(undefined4 *)(_UNK_01dbafc4 + 0x1dbad08));
    func_0x01384978(*(undefined4 *)(_UNK_01dbafc8 + 0x1dbad14));
    func_0x01384978(*(undefined4 *)(_UNK_01dbafcc + 0x1dbad20));
    func_0x01384978(*(undefined4 *)(_UNK_01dbafd0 + 0x1dbad2c));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  iStack_50 = 0;
  iVar2 = func_0x0229f06c(0xf3d,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dbafd4 + 0x1dbadb4));
    func_0x03258eb8(iVar2,**(undefined4 **)(_UNK_01dbafd8 + 0x1dbadc8));
    iVar5 = *(int *)(param_1 + 0x54);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64e30(&uStack_68,iVar5,**(undefined4 **)(_UNK_01dbafdc + 0x1dbadf4));
    uStack_40 = uStack_68;
    uStack_3c = uStack_64;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    while (iVar5 = func_0x01475878(&uStack_40,**(undefined4 **)(_UNK_01dbafe8 + 0x1dbae24)),
          iVar5 != 0) {
      uStack_44 = (undefined4)uStack_30;
      uStack_48 = uStack_34;
      func_0x014842b8(&uStack_48,&uStack_4c,&iStack_50,**(undefined4 **)(_UNK_01dbafe0 + 0x1dbae44))
      ;
      uVar1 = uStack_4c;
      iVar5 = iStack_50;
      if (iStack_50 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar5 + 0x31) != '\0') {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar2 + 8);
        uVar6 = *(uint *)(iVar2 + 0xc);
        piVar3 = *(int **)(_UNK_01dbafe4 + 0x1dbaeb8);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar7 = *piVar3;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar5 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar1;
        }
        else {
          func_0x0325970c(iVar2,uVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    func_0x0245013c(&uStack_40,**(undefined4 **)(_UNK_01dbafec + 0x1dbaf0c));
  }
  else {
    iVar2 = func_0x0229f13c(0xf3d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021a9e7c(iVar2,param_1,0);
  }
  return iVar2;
}



// ===== FAT.MergeItemMan$$get_fixedCategoryOutputDB RVA 0x1db6ed0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc6ed0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x9d95,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d95,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021b6610 + 0x21b6530);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021b6614 + 0x21b6544),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b6618 + 0x21b6600));
    return uVar5;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01dbb5b8(iVar1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.MergeItemMan$$get_fixedItemOutputDB RVA 0x1db6f64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc6f64(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x9d96,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d96,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021b6610 + 0x21b6530);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021b6614 + 0x21b6544),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b6618 + 0x21b6600));
    return uVar5;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01dbb5b8(iVar1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x24);
}



// ===== FAT.MergeItemMan$$get_mMergeChainGroupByCategoryDict RVA 0x1db6ff8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc6ff8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_01dc7408 + 0x1dc7010);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc740c + 0x1dc7024));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7410 + 0x1dc7030));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7414 + 0x1dc703c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7418 + 0x1dc7048));
    func_0x01384978(*(undefined4 *)(_UNK_01dc741c + 0x1dc7054));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7420 + 0x1dc7060));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7424 + 0x1dc706c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7428 + 0x1dc7078));
    func_0x01384978(*(undefined4 *)(_UNK_01dc742c + 0x1dc7084));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7430 + 0x1dc7090));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7434 + 0x1dc709c));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  iVar1 = func_0x0229f06c(0x5b62,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6463c(iVar1,**(undefined4 **)(_UNK_01dc7438 + 0x1dc7128));
    if (iVar1 < 1) {
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_60,iVar1,**(undefined4 **)(_UNK_01dc743c + 0x1dc7160));
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      while (iVar1 = func_0x01475878(&uStack_40,**(undefined4 **)(_UNK_01dc7458 + 0x1dc718c)),
            iVar1 != 0) {
        iVar1 = (int)uStack_30;
        if ((int)uStack_30 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar1 + 8);
        iVar1 = *(int *)(param_1 + 100);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar2 = *(undefined4 *)(iVar7 + 0x24);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03d66780(iVar1,uVar2,&iStack_44,**(undefined4 **)(_UNK_01dc7440 + 0x1dc71e0))
        ;
        iVar1 = iStack_44;
        if (iVar3 == 0) {
          uVar2 = *(undefined4 *)(iVar7 + 0x24);
          iVar3 = *(int *)(param_1 + 100);
          iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dc7448 + 0x1dc7270));
          func_0x03258eb8(iVar1,**(undefined4 **)(_UNK_01dc744c + 0x1dc7284));
          uVar8 = *(undefined4 *)(iVar7 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar1 + 8);
          uVar6 = *(uint *)(iVar1 + 0xc);
          piVar4 = *(int **)(_UNK_01dc7450 + 0x1dc72bc);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar9 = *piVar4;
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (uVar6 < *(uint *)(iVar7 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar6 + 1;
            *(undefined4 *)(iVar7 + uVar6 * 4 + 0x10) = uVar8;
          }
          else {
            func_0x0325970c(iVar1,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
          }
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x03d64944(iVar3,uVar2,iVar1,**(undefined4 **)(_UNK_01dc7454 + 0x1dc7334));
        }
        else {
          uVar2 = *(undefined4 *)(iVar7 + 0x10);
          if (iStack_44 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar1 + 8);
          uVar6 = *(uint *)(iVar1 + 0xc);
          piVar4 = *(int **)(_UNK_01dc7444 + 0x1dc722c);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar7 = *piVar4;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar6 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar6 + 1;
            *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar2;
          }
          else {
            func_0x0325970c(iVar1,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x0245013c(&uStack_40,**(undefined4 **)(_UNK_01dc745c + 0x1dc7354));
    }
    uVar2 = *(undefined4 *)(param_1 + 100);
  }
  else {
    iVar1 = func_0x0229f13c(0x5b62,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ca638(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.MergeItemMan$$FillCollectionCategoryOrdered RVA 0x1db7468 =====

/* WARNING: Removing unreachable block (ram,0x01dc7844) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dc7468(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01dc7964 + 0x1dc7484);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc7968 + 0x1dc7498));
    func_0x01384978(*(undefined4 *)(_UNK_01dc796c + 0x1dc74a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7970 + 0x1dc74b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7974 + 0x1dc74bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7978 + 0x1dc74c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc797c + 0x1dc74d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7980 + 0x1dc74e0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7984 + 0x1dc74ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7988 + 0x1dc74f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc798c + 0x1dc7504));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7990 + 0x1dc7510));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7994 + 0x1dc751c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc7998 + 0x1dc7528));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  iVar1 = func_0x0229f06c(0x5b5d,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_01dc799c + 0x1dc75a4);
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar8;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar1,&iStack_28,**(undefined4 **)(_UNK_01dc79a0 + 0x1dc75e0));
    iVar1 = iStack_28;
    piVar8 = *(int **)(param_1 + 0x60);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dc79a4 + 0x1dc760c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd8);
          goto LAB_01dc7654;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01dc79a4 + 0x1dc760c),3);
LAB_01dc7654:
    uVar4 = (*(code *)*puVar3)(piVar8,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(iVar1,uVar4,**(undefined4 **)(_UNK_01dc79a8 + 0x1dc7680));
    iVar1 = iStack_28;
    piVar8 = *(int **)(_UNK_01dc79ac + 0x1dc7698);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4(iVar2);
      iVar2 = *piVar8;
    }
    iVar10 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
    if (iVar10 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4(iVar2);
        iVar2 = *piVar8;
      }
      uVar4 = **(undefined4 **)(iVar2 + 0x5c);
      iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01dc79b0 + 0x1dc76f0));
      func_0x03c751dc(iVar10,uVar4,**(undefined4 **)(_UNK_01dc79b4 + 0x1dc7704),0);
      *(int *)(*(int *)(*piVar8 + 0x5c) + 4) = iVar10;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03290edc(iVar1,iVar10,**(undefined4 **)(_UNK_01dc79b8 + 0x1dc7738));
    iVar1 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_50,iVar1,**(undefined4 **)(_UNK_01dc79bc + 0x1dc7760));
    iVar1 = 0;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    iStack_34 = iStack_44;
    puVar3 = *(undefined4 **)(_UNK_01dc79c0 + 0x1dc778c);
    piVar8 = *(int **)(_UNK_01dc79c4 + 0x1dc7794);
    while (iVar10 = func_0x0145b12c(&uStack_40,*puVar3), iVar2 = iStack_34, iVar10 != 0) {
      if (param_2 != 0) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(param_2 + 8);
        iVar9 = *piVar8;
        uVar5 = *(uint *)(param_2 + 0xc);
        uVar4 = *(undefined4 *)(iVar2 + 0xc);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (uVar5 < *(uint *)(iVar10 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar5 + 1;
          *(undefined4 *)(iVar10 + uVar5 * 4 + 0x10) = uVar4;
        }
        else {
          func_0x0325970c(param_2,uVar4,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
      }
      iVar1 = iVar1 + 1;
    }
    func_0x0145b14c(&uStack_40,**(undefined4 **)(_UNK_01dc79c8 + 0x1dc7834));
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5b5d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0217bafc(iVar1,param_1,param_2,0);
  }
  return iVar1;
}



// ===== FAT.MergeItemMan$$FillSeriesInCategoryOrdered RVA 0x1db79d0 =====

/* WARNING: Removing unreachable block (ram,0x01dc7e7c) */
/* WARNING: Removing unreachable block (ram,0x01dc7d04) */
/* WARNING: Removing unreachable block (ram,0x01dc7d10) */
/* WARNING: Removing unreachable block (ram,0x01dc7d14) */
/* WARNING: Removing unreachable block (ram,0x01dc7e88) */
/* WARNING: Removing unreachable block (ram,0x01dc7e8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc79d0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01dc802c + 0x1dc79f4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc8030 + 0x1dc7a08));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8034 + 0x1dc7a14));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8038 + 0x1dc7a20));
    func_0x01384978(*(undefined4 *)(_UNK_01dc803c + 0x1dc7a2c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8040 + 0x1dc7a38));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8044 + 0x1dc7a44));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8048 + 0x1dc7a50));
    func_0x01384978(*(undefined4 *)(_UNK_01dc804c + 0x1dc7a5c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8050 + 0x1dc7a68));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8054 + 0x1dc7a74));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8058 + 0x1dc7a80));
    func_0x01384978(*(undefined4 *)(_UNK_01dc805c + 0x1dc7a8c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8060 + 0x1dc7a98));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8064 + 0x1dc7aa4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8068 + 0x1dc7ab0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc806c + 0x1dc7abc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8070 + 0x1dc7ac8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc8074 + 0x1dc7ad4));
    *pcVar6 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  iStack_34 = iStack_44;
  iVar1 = func_0x0229f06c(0x5b61,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b61,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02232c04(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  piVar3 = *(int **)(_UNK_01dc8078 + 0x1dc7b64);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&uStack_30,iVar1,&iStack_28,**(undefined4 **)(_UNK_01dc807c + 0x1dc7ba0));
  uVar2 = FUN_01dc6ff8(param_1);
  iVar1 = func_0x02f7c0f8(uVar2,param_2,0,**(undefined4 **)(_UNK_01dc8080 + 0x1dc7bbc));
  if (iVar1 != 0) {
    func_0x0325a3b4(&uStack_60,iVar1,**(undefined4 **)(_UNK_01dc8084 + 0x1dc7be0));
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    iStack_34 = iStack_54;
    puVar7 = *(undefined4 **)(_UNK_01dc8088 + 0x1dc7c04);
    puVar8 = *(undefined4 **)(_UNK_01dc808c + 0x1dc7c0c);
LAB_01dc7c08:
    do {
      iVar1 = func_0x01470118(&uStack_40,*puVar7);
      if (iVar1 == 0) goto LAB_01dc7ce0;
      iVar1 = func_0x02f7c0f8(*(undefined4 *)(param_1 + 0x54),iStack_34,0,*puVar8);
      if (iVar1 != 0) {
        if (param_4 == 0) {
          iVar4 = *(int *)(iVar1 + 8);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(char *)(iVar4 + 0x30) != '\0') goto LAB_01dc7c08;
        }
        iVar4 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar4 + 8);
        uVar10 = *(uint *)(iVar4 + 0xc);
        piVar3 = *(int **)(_UNK_01dc8090 + 0x1dc7c98);
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
        iVar5 = *piVar3;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (uVar10 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar4 + 0xc) = uVar10 + 1;
          *(int *)(iVar9 + uVar10 * 4 + 0x10) = iVar1;
        }
        else {
          func_0x0328f170(iVar4,iVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
        }
      }
    } while( true );
  }
LAB_01dc7d74:
  iVar1 = iStack_28;
  if (iStack_28 == 0) {
    func_0x01384bf0();
  }
  func_0x0328fe1c(&uStack_60,iVar1,**(undefined4 **)(_UNK_01dc80a4 + 0x1dc7d90));
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  iStack_44 = iStack_54;
  puVar7 = *(undefined4 **)(_UNK_01dc80a8 + 0x1dc7db8);
  piVar3 = *(int **)(_UNK_01dc80ac + 0x1dc7dc0);
  while (iVar4 = func_0x0145b12c(&uStack_50,*puVar7), iVar1 = iStack_44, iVar4 != 0) {
    if (param_3 != 0) {
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x01dd2848(iVar1,0);
      iVar4 = *(int *)(param_3 + 8);
      uVar10 = *(uint *)(param_3 + 0xc);
      iVar1 = *piVar3;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (uVar10 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(param_3 + 0xc) = uVar10 + 1;
        *(undefined4 *)(iVar4 + uVar10 * 4 + 0x10) = uVar2;
      }
      else {
        func_0x0325970c(param_3,uVar2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      }
    }
  }
  func_0x0145b14c(&uStack_50,**(undefined4 **)(_UNK_01dc80b4 + 0x1dc7e6c));
  iVar1 = iStack_28;
  if (iStack_28 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  func_0x028c98a0(&uStack_30,0);
  return uVar2;
LAB_01dc7ce0:
  func_0x02450828(&uStack_40,**(undefined4 **)(_UNK_01dc8094 + 0x1dc7cf4));
  iVar1 = iStack_28;
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dc8098 + 0x1dc7d2c));
  func_0x03c751dc(uVar2,param_1,**(undefined4 **)(_UNK_01dc809c + 0x1dc7d40),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03290edc(iVar1,uVar2,**(undefined4 **)(_UNK_01dc80a0 + 0x1dc7d68));
  goto LAB_01dc7d74;
}



// ===== FAT.MergeItemMan$$_CategorySort RVA 0x1db80bc =====

int FUN_01dc80bc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = func_0x0229f06c(0x5b63,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x48);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_3 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 8);
    iVar3 = *(int *)(iVar3 + 0x48);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 == iVar3) {
      iVar3 = *(int *)(param_3 + 8);
      iVar1 = *(int *)(iVar2 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x10);
    }
    else {
      iVar3 = *(int *)(param_3 + 8);
      iVar1 = *(int *)(iVar2 + 0x48);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x48);
    }
    iVar1 = iVar1 - iVar3;
  }
  else {
    iVar1 = func_0x0229f13c(0x5b63,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021806fc(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.MergeItemMan$$_OnConfigLoaded RVA 0x1db81b8 =====

/* WARNING: Removing unreachable block (ram,0x01dcefa8) */
/* WARNING: Removing unreachable block (ram,0x01dce7e8) */
/* WARNING: Removing unreachable block (ram,0x01dce084) */
/* WARNING: Removing unreachable block (ram,0x01dcdbb8) */
/* WARNING: Removing unreachable block (ram,0x01dcd7a4) */
/* WARNING: Removing unreachable block (ram,0x01dcbb98) */
/* WARNING: Removing unreachable block (ram,0x01dcb910) */
/* WARNING: Removing unreachable block (ram,0x01dcb904) */
/* WARNING: Removing unreachable block (ram,0x01dcb414) */
/* WARNING: Removing unreachable block (ram,0x01dcb408) */
/* WARNING: Removing unreachable block (ram,0x01dcaf98) */
/* WARNING: Removing unreachable block (ram,0x01dcaf8c) */
/* WARNING: Removing unreachable block (ram,0x01dcab20) */
/* WARNING: Removing unreachable block (ram,0x01dcab14) */
/* WARNING: Removing unreachable block (ram,0x01dca6a8) */
/* WARNING: Removing unreachable block (ram,0x01dca69c) */
/* WARNING: Removing unreachable block (ram,0x01dca234) */
/* WARNING: Removing unreachable block (ram,0x01dca228) */
/* WARNING: Removing unreachable block (ram,0x01dc9dd0) */
/* WARNING: Removing unreachable block (ram,0x01dc9dc4) */
/* WARNING: Removing unreachable block (ram,0x01dc9950) */
/* WARNING: Removing unreachable block (ram,0x01dc9944) */
/* WARNING: Removing unreachable block (ram,0x01dc94e8) */
/* WARNING: Removing unreachable block (ram,0x01dc94dc) */
/* WARNING: Removing unreachable block (ram,0x01dc8fbc) */
/* WARNING: Removing unreachable block (ram,0x01dc8fb0) */
/* WARNING: Removing unreachable block (ram,0x01dc8b70) */
/* WARNING: Removing unreachable block (ram,0x01dc8b64) */
/* WARNING: Removing unreachable block (ram,0x01dc8d90) */
/* WARNING: Removing unreachable block (ram,0x01dc9220) */
/* WARNING: Removing unreachable block (ram,0x01dc922c) */
/* WARNING: Removing unreachable block (ram,0x01dc970c) */
/* WARNING: Removing unreachable block (ram,0x01dc9718) */
/* WARNING: Removing unreachable block (ram,0x01dc9b88) */
/* WARNING: Removing unreachable block (ram,0x01dc9b94) */
/* WARNING: Removing unreachable block (ram,0x01dca000) */
/* WARNING: Removing unreachable block (ram,0x01dca460) */
/* WARNING: Removing unreachable block (ram,0x01dca46c) */
/* WARNING: Removing unreachable block (ram,0x01dca8d8) */
/* WARNING: Removing unreachable block (ram,0x01dca8e4) */
/* WARNING: Removing unreachable block (ram,0x01dcad50) */
/* WARNING: Removing unreachable block (ram,0x01dcad5c) */
/* WARNING: Removing unreachable block (ram,0x01dcb1c8) */
/* WARNING: Removing unreachable block (ram,0x01dcb1d4) */
/* WARNING: Removing unreachable block (ram,0x01dcb684) */
/* WARNING: Removing unreachable block (ram,0x01dcb690) */
/* WARNING: Removing unreachable block (ram,0x01dcbb8c) */
/* WARNING: Removing unreachable block (ram,0x01dcd798) */
/* WARNING: Removing unreachable block (ram,0x01dcdbc4) */
/* WARNING: Removing unreachable block (ram,0x01dce090) */
/* WARNING: Removing unreachable block (ram,0x01dce7dc) */
/* WARNING: Removing unreachable block (ram,0x01dcea88) */
/* WARNING: Removing unreachable block (ram,0x01dcbe1c) */
/* WARNING: Removing unreachable block (ram,0x01dcdca0) */
/* WARNING: Removing unreachable block (ram,0x01dcdbcc) */
/* WARNING: Removing unreachable block (ram,0x01dce7f0) */
/* WARNING: Removing unreachable block (ram,0x01dcdca8) */
/* WARNING: Removing unreachable block (ram,0x01dcea94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc81b8(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  int iVar18;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  pcVar13 = (char *)(_UNK_01dc91bc + 0x1dc81d0);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc91c0 + 0x1dc81e4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91c4 + 0x1dc81f0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91c8 + 0x1dc81fc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91cc + 0x1dc8208));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91d0 + 0x1dc8214));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91d4 + 0x1dc8220));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91d8 + 0x1dc822c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91dc + 0x1dc8238));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91e0 + 0x1dc8244));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91e4 + 0x1dc8250));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91e8 + 0x1dc825c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91ec + 0x1dc8268));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91f0 + 0x1dc8274));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91f4 + 0x1dc8280));
    func_0x01384978(*(undefined4 *)(_UNK_01dc91f8 + 0x1dc828c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9290 + 0x1dc8298));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9294 + 0x1dc82a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9298 + 0x1dc82b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc929c + 0x1dc82bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92a0 + 0x1dc82c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92a4 + 0x1dc82d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92a8 + 0x1dc82e0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92ac + 0x1dc82ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92b0 + 0x1dc82f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92b4 + 0x1dc8304));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92b8 + 0x1dc8310));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92bc + 0x1dc831c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92c0 + 0x1dc8328));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92c4 + 0x1dc8334));
    func_0x01384978(*(undefined4 *)(_UNK_01dc92c8 + 0x1dc8340));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9344 + 0x1dc834c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9348 + 0x1dc8358));
    func_0x01384978(*(undefined4 *)(_UNK_01dc934c + 0x1dc8364));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9350 + 0x1dc8370));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9354 + 0x1dc837c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9358 + 0x1dc8388));
    func_0x01384978(*(undefined4 *)(_UNK_01dc935c + 0x1dc8394));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9360 + 0x1dc83a0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9364 + 0x1dc83ac));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9368 + 0x1dc83b8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc936c + 0x1dc83c4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9370 + 0x1dc83d0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9374 + 0x1dc83dc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9378 + 0x1dc83e8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc937c + 0x1dc83f4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc93f4 + 0x1dc8400));
    func_0x01384978(*(undefined4 *)(_UNK_01dc93f8 + 0x1dc840c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc93fc + 0x1dc8418));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9400 + 0x1dc8424));
    func_0x01384978(*(undefined4 *)(_UNK_01dc9404 + 0x1dc8430));
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d97,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d97,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piStack_30 = (int *)0x0;
    func_0x0245494c(&piStack_48,0,0);
    piStack_30 = piStack_48;
    piStack_2c = piStack_44;
    piStack_28 = piStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&piStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&piStack_30,param_1,0);
    iVar14 = *(int *)(iVar1 + 8);
    uVar16 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 2;
    if (iVar1 == 0) {
      uVar12 = 1;
    }
    piStack_50 = (int *)0x0;
    piStack_4c = (int *)0x0;
    func_0x0245495c(iVar14,uVar16,&piStack_30,uVar12);
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
  uVar16 = func_0x01ca6408(iVar1,0);
  *(undefined4 *)(param_1 + 0x60) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca59b8(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01ca53f0(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca54a0(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_28 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5ac0(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_2c = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5b70(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_34 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5290(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_38 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5340(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_3c = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5c20(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_30 = (int *)func_0x01ca5908(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_40 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5cd0(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_48 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5d80(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_44 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5e30(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_4c = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5ee0(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_50 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca5f90(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_54 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca6040(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_58 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca61a0(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_5c = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca6250(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_60 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca6358(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piStack_64 = piVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x01ca60f0(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dc9918 + 0x1dc8938));
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_01dc991c + 0x1dc895c)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
        goto LAB_01dc89a4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dc991c + 0x1dc895c),0);
LAB_01dc89a4:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar10 = *(int **)(_UNK_01dc99b4 + 0x1dc89c4);
  piVar17 = *(int **)(_UNK_01dc99b8 + 0x1dc89cc);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
          goto LAB_01dc8a24;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc8a24:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == *piVar17) {
          puVar5 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
          goto LAB_01dc8a98;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar17,0);
LAB_01dc8a98:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 8) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == **(int **)(_UNK_01dc9afc + 0x1dc8b04)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8b4c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dc9afc + 0x1dc8b04),0);
LAB_01dc8b4c:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar3;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dc9b5c + 0x1dc8b94)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_01dc8bdc;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dc9b5c + 0x1dc8b94),0);
LAB_01dc8bdc:
  piVar2 = (int *)(*(code *)*puVar5)(piVar3,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dc9b60 + 0x1dc8bfc);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8c54;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc8c54:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    piVar17 = piStack_28;
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8cc8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dc8cc8:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0xc) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dc9ce4 + 0x1dc8d30)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dc8d78;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dc9ce4 + 0x1dc8d30),0);
LAB_01dc8d78:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  if (piVar17 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar17;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dc9d98 + 0x1dc8db4)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_01dc8dfc;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar17,**(int **)(_UNK_01dc9d98 + 0x1dc8db4),0);
LAB_01dc8dfc:
  piVar2 = (int *)(*(code *)*puVar5)(piVar17,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dc9d9c + 0x1dc8e1c);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8e74;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc8e74:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8ee8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dc8ee8:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x10) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dc9f20 + 0x1dc8f50)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dc8f98;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dc9f20 + 0x1dc8f50),0);
LAB_01dc8f98:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_2c;
  if (piStack_2c == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dc9fd4 + 0x1dc8fe4)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dc902c;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dc9fd4 + 0x1dc8fe4),0);
LAB_01dc902c:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dc9fd8 + 0x1dc904c);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc90a4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc90a4:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9118;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dc9118:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x24) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dca14c + 0x1dc9180)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dc9208;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dca14c + 0x1dc9180),0);
LAB_01dc9208:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_30;
  if (piStack_30 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dca200 + 0x1dc9254)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dc92d8;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dca200 + 0x1dc9254),0);
LAB_01dc92d8:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dca298 + 0x1dc92f8);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc938c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc938c:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9414;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dc9414:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x18) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dca438 + 0x1dc947c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dc94c4;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dca438 + 0x1dc947c),0);
LAB_01dc94c4:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_34;
  if (piStack_34 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dca4d0 + 0x1dc9510)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dc9558;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dca4d0 + 0x1dc9510),0);
LAB_01dc9558:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dca54c + 0x1dc9578);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc95d0;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc95d0:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9644;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dc9644:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x28) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dca674 + 0x1dc96ac)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dc96f4;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dca674 + 0x1dc96ac),0);
LAB_01dc96f4:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_38;
  if (piStack_38 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dca70c + 0x1dc9740)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dc9788;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dca70c + 0x1dc9740),0);
LAB_01dc9788:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dca788 + 0x1dc97a8);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9800;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc9800:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9874;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dc9874:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x1c) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dca8b0 + 0x1dc98dc)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dc992c;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dca8b0 + 0x1dc98dc),0);
LAB_01dc992c:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_3c;
  if (piStack_3c == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dca948 + 0x1dc9978)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dc99c8;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dca948 + 0x1dc9978),0);
LAB_01dc99c8:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dca9c4 + 0x1dc99e8);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9a40;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc9a40:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9ab4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dc9ab4:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x2c) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcaaec + 0x1dc9b20)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dc9b70;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcaaec + 0x1dc9b20),0);
LAB_01dc9b70:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_40;
  if (piStack_40 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcab84 + 0x1dc9bbc)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dc9c04;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcab84 + 0x1dc9bbc),0);
LAB_01dc9c04:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcac00 + 0x1dc9c24);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9c7c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc9c7c:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9cf4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dc9cf4:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x30) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcad28 + 0x1dc9d5c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dc9dac;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcad28 + 0x1dc9d5c),0);
LAB_01dc9dac:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_48;
  if (piStack_48 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcadc0 + 0x1dc9df8)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dc9e40;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcadc0 + 0x1dc9df8),0);
LAB_01dc9e40:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcae3c + 0x1dc9e60);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9eb8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dc9eb8:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    piVar17 = piStack_44;
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9f30;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dc9f30:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x34) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcaf64 + 0x1dc9f98)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dc9fe8;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcaf64 + 0x1dc9f98),0);
LAB_01dc9fe8:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  if (piVar17 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar17;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcaffc + 0x1dca024)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_01dca06c;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar17,**(int **)(_UNK_01dcaffc + 0x1dca024),0);
LAB_01dca06c:
  piVar2 = (int *)(*(code *)*puVar5)(piVar17,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcb078 + 0x1dca08c);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca0e4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dca0e4:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca15c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dca15c:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x38) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcb1a0 + 0x1dca1c4)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dca210;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcb1a0 + 0x1dca1c4),0);
LAB_01dca210:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_4c;
  if (piStack_4c == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcb238 + 0x1dca25c)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dca2a8;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcb238 + 0x1dca25c),0);
LAB_01dca2a8:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcb2b4 + 0x1dca2c8);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca320;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dca320:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca394;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dca394:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x3c) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcb3dc + 0x1dca3fc)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dca448;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcb3dc + 0x1dca3fc),0);
LAB_01dca448:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_50;
  if (piStack_50 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcb3e0 + 0x1dca494)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dca4e0;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcb3e0 + 0x1dca494),0);
LAB_01dca4e0:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcb4ac + 0x1dca500);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca55c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dca55c:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca5d0;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dca5d0:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x40) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcb5fc + 0x1dca638)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dca684;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcb5fc + 0x1dca638),0);
LAB_01dca684:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_54;
  if (piStack_54 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcb65c + 0x1dca6d0)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dca71c;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcb65c + 0x1dca6d0),0);
LAB_01dca71c:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcb728 + 0x1dca73c);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca798;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dca798:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca80c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dca80c:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x48) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcb820 + 0x1dca874)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dca8c0;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcb820 + 0x1dca874),0);
LAB_01dca8c0:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_58;
  if (piStack_58 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcb8d8 + 0x1dca90c)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dca958;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcb8d8 + 0x1dca90c),0);
LAB_01dca958:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcb8dc + 0x1dca978);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca9d4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dca9d4:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcaa48;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcaa48:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x44) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcba9c + 0x1dcaab0)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcaafc;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcba9c + 0x1dcaab0),0);
LAB_01dcaafc:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_5c;
  if (piStack_5c == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcbaf8 + 0x1dcab48)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcab94;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcbaf8 + 0x1dcab48),0);
LAB_01dcab94:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcbb58 + 0x1dcabb4);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcac10;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dcac10:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcac84;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcac84:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x4c) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcbb5c + 0x1dcacec)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcad38;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcbb5c + 0x1dcacec),0);
LAB_01dcad38:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_60;
  if (piStack_60 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcbb60 + 0x1dcad84)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcadd0;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcbb60 + 0x1dcad84),0);
LAB_01dcadd0:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcbb64 + 0x1dcadf0);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcae4c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dcae4c:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcaec0;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcaec0:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x50) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcbf20 + 0x1dcaf28)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcaf74;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcbf20 + 0x1dcaf28),0);
LAB_01dcaf74:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  piVar2 = piStack_64;
  if (piStack_64 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcbfb4 + 0x1dcafc0)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcb00c;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcbfb4 + 0x1dcafc0),0);
LAB_01dcb00c:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcc004 + 0x1dcb02c);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcb088;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dcb088:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcb0fc;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcb0fc:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x54) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcc158 + 0x1dcb164)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb1b0;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcc158 + 0x1dcb164),0);
LAB_01dcb1b0:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar4;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcc1d0 + 0x1dcb1fc)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcb248;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01dcc1d0 + 0x1dcb1fc),0);
LAB_01dcb248:
  piVar2 = (int *)(*(code *)*puVar5)(piVar4,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcc25c + 0x1dcb268);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcb2c4;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dcb2c4:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar3) {
          puVar5 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcb338;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcb338:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x58) = iVar1;
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcc370 + 0x1dcb3a0)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb3f0;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcc370 + 0x1dcb3a0),0);
LAB_01dcb3f0:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca4d5c(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcc440 + 0x1dcb470)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcb4bc;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcc440 + 0x1dcb470),0);
LAB_01dcb4bc:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcc4d0 + 0x1dcb4dc);
  puVar5 = *(undefined4 **)(_UNK_01dcc4dc + 0x1dcb4e4);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar10) {
          puVar6 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcb53c;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dcb53c:
    iVar1 = (*(code *)*puVar6)(piVar2,puVar6[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar3) {
          puVar6 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcb5b0;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcb5b0:
    iVar1 = (*(code *)*puVar6)(piVar2,puVar6[1]);
    iVar14 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar14,uVar16,iVar1,*puVar5);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcc5f4 + 0x1dcb620)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb66c;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcc5f4 + 0x1dcb620),0);
LAB_01dcb66c:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca4e0c(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcc6c8 + 0x1dcb6ec)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcb738;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcc6c8 + 0x1dcb6ec),0);
LAB_01dcb738:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcc724 + 0x1dcb758);
  puVar5 = *(undefined4 **)(_UNK_01dcc758 + 0x1dcb760);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar10) {
          puVar6 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcb7b8;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dcb7b8:
    iVar1 = (*(code *)*puVar6)(piVar2,puVar6[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar3) {
          puVar6 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcb830;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcb830:
    iVar1 = (*(code *)*puVar6)(piVar2,puVar6[1]);
    iVar14 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar14,uVar16,iVar1,*puVar5);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcc854 + 0x1dcb89c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb8ec;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcc854 + 0x1dcb89c),0);
LAB_01dcb8ec:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca51e0(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dcc924 + 0x1dcb96c)) {
        puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcb9b4;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcc924 + 0x1dcb96c),0);
LAB_01dcb9b4:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dcc9c8 + 0x1dcb9d4);
  puVar5 = *(undefined4 **)(_UNK_01dcc9cc + 0x1dcb9dc);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar10) {
          puVar6 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcba34;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dcba34:
    iVar1 = (*(code *)*puVar6)(piVar2,puVar6[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar3) {
          puVar6 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcbaac;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcbaac:
    iVar1 = (*(code *)*puVar6)(piVar2,puVar6[1]);
    iVar14 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar14,uVar16,iVar1,*puVar5);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dccac8 + 0x1dcbb1c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcbb74;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dccac8 + 0x1dcbb1c),0);
LAB_01dcbb74:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca4ebc(iVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca4f14(iVar1,0);
  *(undefined4 *)(param_1 + 0xc) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca5080(iVar1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca5028(iVar1,0);
  *(undefined4 *)(param_1 + 0x10) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca6768(iVar1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca6300(iVar1,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca50d8(iVar1,0);
  *(undefined4 *)(param_1 + 0x20) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca7144(iVar1,0);
  *(undefined4 *)(param_1 + 0x24) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca719c(iVar1,0);
  *(undefined4 *)(param_1 + 0x28) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca6fc0(iVar1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar16;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca7018(iVar1,0);
  *(undefined4 *)(param_1 + 0x30) = uVar16;
  pcVar13 = (char *)(_UNK_01dce1ac + 0x1dcd204);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dce1b0 + 0x1dcd218));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1b4 + 0x1dcd224));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1b8 + 0x1dcd230));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1bc + 0x1dcd23c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1c0 + 0x1dcd248));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1c4 + 0x1dcd254));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1c8 + 0x1dcd260));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1cc + 0x1dcd26c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1d0 + 0x1dcd278));
    func_0x01384978(*(undefined4 *)(_UNK_01dce278 + 0x1dcd284));
    func_0x01384978(*(undefined4 *)(_UNK_01dce27c + 0x1dcd290));
    func_0x01384978(*(undefined4 *)(_UNK_01dce280 + 0x1dcd29c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce284 + 0x1dcd2a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce288 + 0x1dcd2b4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce28c + 0x1dcd2c0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce290 + 0x1dcd2cc));
    func_0x01384978(*(undefined4 *)(_UNK_01dce294 + 0x1dcd2d8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce298 + 0x1dcd2e4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce29c + 0x1dcd2f0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2a0 + 0x1dcd2fc));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2a4 + 0x1dcd308));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2a8 + 0x1dcd314));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2ac + 0x1dcd320));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2b0 + 0x1dcd32c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2b4 + 0x1dcd338));
    func_0x01384978(*(undefined4 *)(_UNK_01dce338 + 0x1dcd344));
    func_0x01384978(*(undefined4 *)(_UNK_01dce33c + 0x1dcd350));
    func_0x01384978(*(undefined4 *)(_UNK_01dce340 + 0x1dcd35c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce344 + 0x1dcd368));
    func_0x01384978(*(undefined4 *)(_UNK_01dce348 + 0x1dcd374));
    func_0x01384978(*(undefined4 *)(_UNK_01dce34c + 0x1dcd380));
    func_0x01384978(*(undefined4 *)(_UNK_01dce350 + 0x1dcd38c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce354 + 0x1dcd398));
    func_0x01384978(*(undefined4 *)(_UNK_01dce358 + 0x1dcd3a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce35c + 0x1dcd3b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce360 + 0x1dcd3bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dce364 + 0x1dcd3c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce368 + 0x1dcd3d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce36c + 0x1dcd3e0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce370 + 0x1dcd3ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dce374 + 0x1dcd3f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce3fc + 0x1dcd404));
    func_0x01384978(*(undefined4 *)(_UNK_01dce400 + 0x1dcd410));
    func_0x01384978(*(undefined4 *)(_UNK_01dce404 + 0x1dcd41c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce408 + 0x1dcd428));
    func_0x01384978(*(undefined4 *)(_UNK_01dce40c + 0x1dcd434));
    func_0x01384978(*(undefined4 *)(_UNK_01dce410 + 0x1dcd440));
    *pcVar13 = '\x01';
  }
  piStack_4c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piStack_48 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_44 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piStack_28 = (int *)0x0;
  piStack_40 = (int *)0x0;
  piStack_50 = (int *)0x0;
  piStack_2c = (int *)0x0;
  piStack_54 = (int *)0x0;
  piStack_3c = piStack_4c;
  piStack_38 = piStack_48;
  piStack_34 = piStack_44;
  iVar1 = func_0x0229f06c(0x9d98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d98,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dce414 + 0x1dcd4d4));
  iVar14 = func_0x01c24918(0);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  iVar14 = *(int *)(iVar14 + 0xc);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca7620(iVar14,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dce4fc + 0x1dcd530)) {
        puVar5 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcd57c;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dce4fc + 0x1dcd530),0);
LAB_01dcd57c:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
  piVar3 = *(int **)(_UNK_01dce57c + 0x1dcd59c);
  puVar5 = *(undefined4 **)(_UNK_01dce580 + 0x1dcd5a4);
LAB_01dcd5a0:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
  if (uVar9 != 0) {
    piVar4 = (int *)(*(int *)(iVar14 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dce584 + 0x1dcd5bc)) {
        puVar6 = (undefined4 *)(iVar14 + *piVar4 * 8 + 0xc0);
        goto LAB_01dcd604;
      }
      uVar9 = uVar9 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dce584 + 0x1dcd5bc),0);
LAB_01dcd604:
  iVar14 = (*(code *)*puVar6)(piVar2,puVar6[1]);
  if (iVar14 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar14 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar4[-1] == *piVar3) {
          puVar6 = (undefined4 *)(iVar14 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcd678;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcd678:
    iVar14 = (*(code *)*puVar6)(piVar2,puVar6[1]);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar14 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x03d64b90(iVar1,uVar16,*puVar5);
    if (iVar7 == 0) {
      uVar12 = *(undefined4 *)(iVar14 + 0xc);
      uVar16 = func_0x01384be4(**(undefined4 **)(_UNK_01dce694 + 0x1dcd6d0));
      func_0x03258eb8(uVar16,**(undefined4 **)(_UNK_01dce698 + 0x1dcd6e4));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64944(iVar1,uVar12,uVar16,**(undefined4 **)(_UNK_01dce69c + 0x1dcd704));
    }
    goto LAB_01dcd5a0;
  }
  if (piVar2 != (int *)0x0) {
    iVar14 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dce6a0 + 0x1dcd738)) {
          puVar5 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcd780;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dce6a0 + 0x1dcd738),0);
LAB_01dcd780:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  iVar14 = func_0x01c24918(0);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  iVar14 = *(int *)(iVar14 + 0xc);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca454c(iVar14,0,&piStack_2c,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dce800 + 0x1dcd808)) {
        puVar5 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcd850;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dce800 + 0x1dcd808),0);
LAB_01dcd850:
  piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
LAB_01dcd864:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dce860 + 0x1dcd884)) {
        puVar5 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcd8cc;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dce860 + 0x1dcd884),0);
LAB_01dcd8cc:
  iVar14 = (*(code *)*puVar5)(piVar2,puVar5[1]);
  if (iVar14 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar14 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dce8ec + 0x1dcd908)) {
          puVar5 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcd950;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dce8ec + 0x1dcd908),0);
LAB_01dcd950:
    iVar14 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar14 + 0x4c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar7,**(undefined4 **)(_UNK_01dce984 + 0x1dcd98c));
LAB_01dcd998:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar3;
    uVar9 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01dce9ac + 0x1dcd9b4)) {
          puVar5 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
          goto LAB_01dcd9fc;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dce9ac + 0x1dcd9b4),0);
LAB_01dcd9fc:
    iVar7 = (*(code *)*puVar5)(piVar3,puVar5[1]);
    if (iVar7 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar9 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01dce9d8 + 0x1dcda30)) {
            puVar5 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
            goto LAB_01dcda78;
          }
          uVar9 = uVar9 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dce9d8 + 0x1dcda30),0);
LAB_01dcda78:
      uVar16 = (*(code *)*puVar5)(piVar3,puVar5[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x03d6488c(iVar1,uVar16,**(undefined4 **)(_UNK_01dcea58 + 0x1dcdaa4));
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      uVar16 = *(undefined4 *)(iVar14 + 0x10);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar15 = *(int *)(iVar7 + 8);
      uVar9 = *(uint *)(iVar7 + 0xc);
      piVar4 = *(int **)(_UNK_01dcea5c + 0x1dcdaf0);
      *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
      iVar18 = *piVar4;
      if (iVar15 == 0) {
        func_0x01384bf0();
      }
      if (uVar9 < *(uint *)(iVar15 + 0xc)) {
        *(uint *)(iVar7 + 0xc) = uVar9 + 1;
        *(undefined4 *)(iVar15 + uVar9 * 4 + 0x10) = uVar16;
      }
      else {
        func_0x0325970c(iVar7,uVar16,
                        *(undefined4 *)(*(int *)(*(int *)(iVar18 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01dcd998;
    }
    if (piVar3 != (int *)0x0) {
      iVar14 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar4 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01dcea60 + 0x1dcdb58)) {
            puVar5 = (undefined4 *)(iVar14 + *piVar4 * 8 + 0xc0);
            goto LAB_01dcdba0;
          }
          uVar9 = uVar9 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcea60 + 0x1dcdb58),0);
LAB_01dcdba0:
      (*(code *)*puVar5)(piVar3,puVar5[1]);
    }
    goto LAB_01dcd864;
  }
  if (piVar2 != (int *)0x0) {
    iVar14 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcebc0 + 0x1dcdc34)) {
          puVar5 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcdc84;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcebc0 + 0x1dcdc34),0);
LAB_01dcdc84:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01dcec54 + 0x1dcdcc8));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0382ab5c(&piStack_68,iVar1,**(undefined4 **)(_UNK_01dcecd8 + 0x1dcdcf4));
  piStack_40 = piStack_68;
  piStack_3c = piStack_64;
  piStack_38 = piStack_60;
  piStack_34 = piStack_5c;
  puVar5 = *(undefined4 **)(_UNK_01dcecdc + 0x1dcdd14);
  puVar6 = *(undefined4 **)(_UNK_01dcece0 + 0x1dcdd1c);
  while (iVar1 = func_0x01475908(&piStack_40,*puVar5), piVar2 = piStack_34, iVar1 != 0) {
    if (piStack_34 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x0325b328(piVar2,*puVar6);
  }
  func_0x02450874(&piStack_40,**(undefined4 **)(_UNK_01dcece4 + 0x1dcdd58));
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca5550(iVar1,0,&piStack_28,0);
  if (piStack_28 != *(int **)(param_1 + 0x68)) {
    iVar1 = *(int *)(param_1 + 0x34);
    *(int **)(param_1 + 0x68) = piStack_28;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01dcece8 + 0x1dcdddc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&piStack_68,iVar1,**(undefined4 **)(_UNK_01dcecec + 0x1dcde04));
    piStack_50 = piStack_68;
    piStack_4c = piStack_64;
    piStack_48 = piStack_60;
    piStack_44 = piStack_5c;
    puVar5 = *(undefined4 **)(_UNK_01dcee14 + 0x1dcde28);
    while (iVar1 = func_0x01475908(&piStack_50,*puVar5), piVar3 = piStack_44, iVar1 != 0) {
      if (piStack_44 == (int *)0x0) {
        func_0x01384bf0();
      }
      piVar3[5] = 0;
    }
    func_0x02450874(&piStack_50,**(undefined4 **)(_UNK_01dcee18 + 0x1dcde5c));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcee1c + 0x1dcde80)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcdec8;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcee1c + 0x1dcde80),0);
LAB_01dcdec8:
    piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
    piVar3 = *(int **)(_UNK_01dcee20 + 0x1dcdee8);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar9 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01dcee24 + 0x1dcdf00)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_01dcdf48;
          }
          uVar9 = uVar9 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcee24 + 0x1dcdf00),0);
LAB_01dcdf48:
      iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
      if (iVar1 == 0) goto LAB_01dce004;
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar9 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == *piVar3) {
            puVar5 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto LAB_01dcdfbc;
          }
          uVar9 = uVar9 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_01dcdfbc:
      iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0x10),1);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar14 + 0x14) = iVar1;
    } while( true );
  }
  goto LAB_01dce098;
LAB_01dce004:
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcefc0 + 0x1dce024)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dce06c;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcefc0 + 0x1dce024),0);
LAB_01dce06c:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
LAB_01dce098:
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca572c(iVar1,0,&piStack_28,0);
  if (piStack_28 != *(int **)(param_1 + 0x6c)) {
    iVar1 = *(int *)(param_1 + 0x48);
    *(int **)(param_1 + 0x6c) = piStack_28;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dcf0fc + 0x1dce114));
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01dcf100 + 0x1dce138));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&piStack_68,iVar1,**(undefined4 **)(_UNK_01dcf150 + 0x1dce160));
    piStack_50 = piStack_68;
    piStack_4c = piStack_64;
    piStack_48 = piStack_60;
    piStack_44 = piStack_5c;
    puVar5 = *(undefined4 **)(_UNK_01dcf154 + 0x1dce184);
    while (iVar1 = func_0x01475908(&piStack_50,*puVar5), piVar3 = piStack_44, iVar1 != 0) {
      if (piStack_44 == (int *)0x0) {
        func_0x01384bf0();
      }
      piVar3[8] = 0;
    }
    func_0x02450874(&piStack_50,**(undefined4 **)(_UNK_01dcf1d0 + 0x1dce1e0));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar16 = func_0x01ca5080(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcf22c + 0x1dce23c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dce2c4;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf22c + 0x1dce23c),0);
LAB_01dce2c4:
    piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
LAB_01dce2e0:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcf2ec + 0x1dce2fc)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dce384;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf2ec + 0x1dce2fc),0);
LAB_01dce384:
    iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_01dcf388 + 0x1dce3bc)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
            goto LAB_01dce424;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf388 + 0x1dce3bc),0);
LAB_01dce424:
      iVar1 = (*(code *)*puVar5)(piVar2,puVar5[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar14 = func_0x01dcd048(param_1,*(undefined4 *)(iVar1 + 0x10),1);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar14 + 0x20) = iVar1;
      iVar14 = func_0x01dcf600(param_1,iVar1);
      if (iVar14 == 0) goto LAB_01dcea04;
      iVar14 = *(int *)(iVar1 + 0x18);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x0364c2b4(iVar14,**(undefined4 **)(_UNK_01dcf490 + 0x1dce498));
LAB_01dce4a4:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar14 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar4 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01dcf4a0 + 0x1dce4c0)) {
            puVar5 = (undefined4 *)(iVar14 + *piVar4 * 8 + 0xc0);
            goto LAB_01dce50c;
          }
          uVar9 = uVar9 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf4a0 + 0x1dce4c0),0);
LAB_01dce50c:
      iVar14 = (*(code *)*puVar5)(piVar3,puVar5[1]);
      if (iVar14 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar3;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar4 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(_UNK_01dcf52c + 0x1dce540)) {
              puVar5 = (undefined4 *)(iVar14 + *piVar4 * 8 + 0xc0);
              goto LAB_01dce594;
            }
            uVar9 = uVar9 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf52c + 0x1dce540),0);
LAB_01dce594:
        uVar12 = (*(code *)*puVar5)(piVar3,puVar5[1]);
        iVar14 = func_0x02f7c0f8(uVar16,uVar12,0,**(undefined4 **)(_UNK_01dcf590 + 0x1dce5b4));
        if (iVar14 != 0) {
          iVar7 = *(int *)(iVar14 + 0x18);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x0345fcc8(iVar7,**(undefined4 **)(_UNK_01dcf594 + 0x1dce5e8));
          if (0 < iVar7) {
            iVar7 = *(int *)(param_1 + 0x48);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar12 = *(undefined4 *)(iVar1 + 0x10);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x03d66780(iVar7,uVar12,&piStack_54,
                                    **(undefined4 **)(_UNK_01dcf598 + 0x1dce628));
            piVar4 = piStack_54;
            if (iVar7 == 0) {
              piVar4 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01dcf5a4 + 0x1dce6b0));
              func_0x03258eb8(piVar4,**(undefined4 **)(_UNK_01dcf5a8 + 0x1dce6c4));
              iVar14 = *(int *)(iVar14 + 0x18);
              piStack_54 = piVar4;
              if (iVar14 == 0) {
                func_0x01384bf0();
              }
              uVar12 = func_0x0345f264(iVar14,**(undefined4 **)(_UNK_01dcf5ac + 0x1dce6ec));
              if (piVar4 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0325992c(piVar4,uVar12,**(undefined4 **)(_UNK_01dcf5b0 + 0x1dce710));
              piVar4 = piStack_54;
              uVar12 = *(undefined4 *)(iVar1 + 0x10);
              iVar14 = *(int *)(param_1 + 0x48);
              if (iVar14 == 0) {
                func_0x01384bf0();
              }
              func_0x03d64944(iVar14,uVar12,piVar4,**(undefined4 **)(_UNK_01dcf5b4 + 0x1dce744));
            }
            else {
              iVar14 = *(int *)(iVar14 + 0x18);
              if (iVar14 == 0) {
                func_0x01384bf0();
              }
              uVar12 = func_0x0345f264(iVar14,**(undefined4 **)(_UNK_01dcf59c + 0x1dce660));
              if (piVar4 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0325992c(piVar4,uVar12,**(undefined4 **)(_UNK_01dcf5a0 + 0x1dce684));
            }
          }
        }
        goto LAB_01dce4a4;
      }
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar9 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(_UNK_01dcf5b8 + 0x1dce77c)) {
              puVar5 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto LAB_01dce7c4;
            }
            uVar9 = uVar9 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf5b8 + 0x1dce77c),0);
LAB_01dce7c4:
        (*(code *)*puVar5)(piVar3,puVar5[1]);
      }
      goto LAB_01dce2e0;
    }
LAB_01dcea04:
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_01dcf5c0 + 0x1dcea1c)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
            goto LAB_01dcea70;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf5c0 + 0x1dcea1c),0);
LAB_01dcea70:
      (*(code *)*puVar5)(piVar2,puVar5[1]);
    }
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01ca4b80(iVar1,0,&piStack_28,0);
  if (*(int **)(param_1 + 0x70) != piStack_28) {
    iVar1 = *(int *)(param_1 + 0x4c);
    *(int **)(param_1 + 0x70) = piStack_28;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01dcf5c4 + 0x1dceb18));
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d3570c(iVar1,**(undefined4 **)(_UNK_01dcf5c8 + 0x1dceb3c));
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dcf5cc + 0x1dceb60));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcf5d0 + 0x1dceb84)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcebd0;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf5d0 + 0x1dceb84),0);
LAB_01dcebd0:
    piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
    puVar5 = *(undefined4 **)(_UNK_01dcf5d8 + 0x1dcebf4);
    puVar6 = *(undefined4 **)(_UNK_01dcf5dc + 0x1dcebfc);
LAB_01dcebf8:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dcf5e0 + 0x1dcec18)) {
          puVar8 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcec64;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf5e0 + 0x1dcec18),0);
LAB_01dcec64:
    iVar1 = (*(code *)*puVar8)(piVar2,puVar8[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_01dcf5e4 + 0x1dcec9c)) {
            puVar8 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
            goto LAB_01dcecfc;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf5e4 + 0x1dcec9c),0);
LAB_01dcecfc:
      iVar1 = (*(code *)*puVar8)(piVar2,puVar8[1]);
      iVar14 = 0;
      while( true ) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar1 + 0x44);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar14) break;
        iVar15 = *(int *)(iVar1 + 0x44);
        iVar7 = *(int *)(param_1 + 0x4c);
        if (iVar15 == 0) {
          func_0x01384bf0();
        }
        uVar16 = func_0x0364c9b8(iVar15,iVar14,*puVar5);
        uVar12 = *(undefined4 *)(iVar1 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar7,uVar16,uVar12,*puVar6);
        iVar15 = *(int *)(iVar1 + 0x44);
        iVar7 = *(int *)(param_1 + 0x50);
        if (iVar15 == 0) {
          func_0x01384bf0();
        }
        uVar16 = func_0x0364c9b8(iVar15,iVar14,*puVar5);
        piStack_64 = (int *)0x0;
        piStack_68 = (int *)0x0;
        func_0x038fd264(&piStack_68,*(undefined4 *)(iVar1 + 0x10),iVar14,
                        **(undefined4 **)(_UNK_01dcf5e8 + 0x1dcedc8));
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03d354b0(iVar7,uVar16,piStack_68,piStack_64,
                        **(undefined4 **)(_UNK_01dcf5ec + 0x1dcedfc));
        iVar14 = iVar14 + 1;
      }
      uVar16 = *(undefined4 *)(iVar1 + 0x10);
      iVar7 = *(int *)(param_1 + 0x54);
      iVar14 = func_0x01384be4(**(undefined4 **)(_UNK_01dcf5f0 + 0x1dcee40));
      func_0x01dd2910(iVar14,0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar14 + 8) = iVar1;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x03d6491c(iVar7,uVar16,iVar14,**(undefined4 **)(_UNK_01dcf5f4 + 0x1dcee78));
      iVar14 = func_0x01c24918(0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar1 + 0x44);
      iVar14 = *(int *)(iVar14 + 0x38);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar16 = func_0x0364c9b8(iVar7,0,*puVar5);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = func_0x01cccae0(iVar14,uVar16,0);
      if (iVar14 != 0) {
        uVar16 = *(undefined4 *)(iVar14 + 0x1c);
        uVar12 = *(undefined4 *)(iVar1 + 0x10);
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar1,uVar12,uVar16,*puVar6);
      }
      goto LAB_01dcebf8;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_01dcf5f8 + 0x1dcef40)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
            goto LAB_01dcef90;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf5f8 + 0x1dcef40),0);
LAB_01dcef90:
      (*(code *)*puVar5)(piVar2,puVar5[1]);
    }
  }
  return;
}



// ===== FAT.MergeItemMan$$_GetOrCreateItemConfig RVA 0x1dbd048 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dcd048(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01dcd1c4 + 0x1dcd068);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dcd1c8 + 0x1dcd07c));
    func_0x01384978(*(undefined4 *)(_UNK_01dcd1cc + 0x1dcd088));
    func_0x01384978(*(undefined4 *)(_UNK_01dcd1d0 + 0x1dcd094));
    func_0x01384978(*(undefined4 *)(_UNK_01dcd1d4 + 0x1dcd0a0));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x7f7,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d66780(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_01dcd1d8 + 0x1dcd124));
    if ((iVar1 == 0) && (param_3 != 0)) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dcd1dc + 0x1dcd148));
      func_0x0211b18c(iVar1,0);
      iVar3 = *(int *)(param_1 + 0x34);
      iStack_1c = iVar1;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03d6491c(iVar3,param_2,iVar1,**(undefined4 **)(_UNK_01dcd1e0 + 0x1dcd180));
    }
    if (iStack_1c == 0) {
      piVar2 = *(int **)(_UNK_01dcd1e4 + 0x1dcd1a0);
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      iStack_1c = **(int **)(iVar1 + 0x5c);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7f7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_1c = func_0x02196f80(iVar1,param_1,param_2,param_3,0);
  }
  return iStack_1c;
}



// ===== FAT.MergeItemMan$$OnMergeBoardVersionUpdate RVA 0x1dbd1e8 =====

/* WARNING: Removing unreachable block (ram,0x01dcea88) */
/* WARNING: Removing unreachable block (ram,0x01dce090) */
/* WARNING: Removing unreachable block (ram,0x01dce084) */
/* WARNING: Removing unreachable block (ram,0x01dcd7a4) */
/* WARNING: Removing unreachable block (ram,0x01dcd798) */
/* WARNING: Removing unreachable block (ram,0x01dcdbb8) */
/* WARNING: Removing unreachable block (ram,0x01dce7dc) */
/* WARNING: Removing unreachable block (ram,0x01dcefa8) */
/* WARNING: Removing unreachable block (ram,0x01dcdca0) */
/* WARNING: Removing unreachable block (ram,0x01dcdbc4) */
/* WARNING: Removing unreachable block (ram,0x01dce7e8) */
/* WARNING: Removing unreachable block (ram,0x01dcdbcc) */
/* WARNING: Removing unreachable block (ram,0x01dce7f0) */
/* WARNING: Removing unreachable block (ram,0x01dcdca8) */
/* WARNING: Removing unreachable block (ram,0x01dcea94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dcd1e8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar11 = (char *)(_UNK_01dce1ac + 0x1dcd204);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dce1b0 + 0x1dcd218));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1b4 + 0x1dcd224));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1b8 + 0x1dcd230));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1bc + 0x1dcd23c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1c0 + 0x1dcd248));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1c4 + 0x1dcd254));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1c8 + 0x1dcd260));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1cc + 0x1dcd26c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1d0 + 0x1dcd278));
    func_0x01384978(*(undefined4 *)(_UNK_01dce278 + 0x1dcd284));
    func_0x01384978(*(undefined4 *)(_UNK_01dce27c + 0x1dcd290));
    func_0x01384978(*(undefined4 *)(_UNK_01dce280 + 0x1dcd29c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce284 + 0x1dcd2a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce288 + 0x1dcd2b4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce28c + 0x1dcd2c0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce290 + 0x1dcd2cc));
    func_0x01384978(*(undefined4 *)(_UNK_01dce294 + 0x1dcd2d8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce298 + 0x1dcd2e4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce29c + 0x1dcd2f0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2a0 + 0x1dcd2fc));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2a4 + 0x1dcd308));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2a8 + 0x1dcd314));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2ac + 0x1dcd320));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2b0 + 0x1dcd32c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2b4 + 0x1dcd338));
    func_0x01384978(*(undefined4 *)(_UNK_01dce338 + 0x1dcd344));
    func_0x01384978(*(undefined4 *)(_UNK_01dce33c + 0x1dcd350));
    func_0x01384978(*(undefined4 *)(_UNK_01dce340 + 0x1dcd35c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce344 + 0x1dcd368));
    func_0x01384978(*(undefined4 *)(_UNK_01dce348 + 0x1dcd374));
    func_0x01384978(*(undefined4 *)(_UNK_01dce34c + 0x1dcd380));
    func_0x01384978(*(undefined4 *)(_UNK_01dce350 + 0x1dcd38c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce354 + 0x1dcd398));
    func_0x01384978(*(undefined4 *)(_UNK_01dce358 + 0x1dcd3a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce35c + 0x1dcd3b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce360 + 0x1dcd3bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dce364 + 0x1dcd3c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce368 + 0x1dcd3d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce36c + 0x1dcd3e0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce370 + 0x1dcd3ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dce374 + 0x1dcd3f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce3fc + 0x1dcd404));
    func_0x01384978(*(undefined4 *)(_UNK_01dce400 + 0x1dcd410));
    func_0x01384978(*(undefined4 *)(_UNK_01dce404 + 0x1dcd41c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce408 + 0x1dcd428));
    func_0x01384978(*(undefined4 *)(_UNK_01dce40c + 0x1dcd434));
    func_0x01384978(*(undefined4 *)(_UNK_01dce410 + 0x1dcd440));
    *pcVar11 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_2c = 0;
  iStack_54 = 0;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  iStack_34 = iStack_44;
  iVar1 = func_0x0229f06c(0x9d98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d98,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dce414 + 0x1dcd4d4));
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01ca7620(iVar2,0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar3;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01dce4fc + 0x1dcd530)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_01dcd57c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dce4fc + 0x1dcd530),0);
LAB_01dcd57c:
  piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
  piVar9 = *(int **)(_UNK_01dce57c + 0x1dcd59c);
  puVar4 = *(undefined4 **)(_UNK_01dce580 + 0x1dcd5a4);
LAB_01dcd5a0:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar3;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_01dce584 + 0x1dcd5bc)) {
        puVar5 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
        goto LAB_01dcd604;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dce584 + 0x1dcd5bc),0);
LAB_01dcd604:
  iVar2 = (*(code *)*puVar5)(piVar3,puVar5[1]);
  if (iVar2 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar9) {
          puVar5 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_01dcd678;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,*piVar9,0);
LAB_01dcd678:
    iVar2 = (*(code *)*puVar5)(piVar3,puVar5[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x03d64b90(iVar1,uVar14,*puVar4);
    if (iVar6 == 0) {
      uVar12 = *(undefined4 *)(iVar2 + 0xc);
      uVar14 = func_0x01384be4(**(undefined4 **)(_UNK_01dce694 + 0x1dcd6d0));
      func_0x03258eb8(uVar14,**(undefined4 **)(_UNK_01dce698 + 0x1dcd6e4));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64944(iVar1,uVar12,uVar14,**(undefined4 **)(_UNK_01dce69c + 0x1dcd704));
    }
    goto LAB_01dcd5a0;
  }
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dce6a0 + 0x1dcd738)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_01dcd780;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dce6a0 + 0x1dcd738),0);
LAB_01dcd780:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01ca454c(iVar2,param_2,&uStack_2c,0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar3;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01dce800 + 0x1dcd808)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_01dcd850;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dce800 + 0x1dcd808),0);
LAB_01dcd850:
  piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
LAB_01dcd864:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar3;
  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_01dce860 + 0x1dcd884)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
        goto LAB_01dcd8cc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dce860 + 0x1dcd884),0);
LAB_01dcd8cc:
  iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar2 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dce8ec + 0x1dcd908)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_01dcd950;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dce8ec + 0x1dcd908),0);
LAB_01dcd950:
    iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar2 + 0x4c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    piVar9 = (int *)func_0x0364c2b4(iVar6,**(undefined4 **)(_UNK_01dce984 + 0x1dcd98c));
LAB_01dcd998:
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01dce9ac + 0x1dcd9b4)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
          goto LAB_01dcd9fc;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01dce9ac + 0x1dcd9b4),0);
LAB_01dcd9fc:
    iVar6 = (*(code *)*puVar4)(piVar9,puVar4[1]);
    if (iVar6 != 0) {
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01dce9d8 + 0x1dcda30)) {
            puVar4 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
            goto LAB_01dcda78;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01dce9d8 + 0x1dcda30),0);
LAB_01dcda78:
      uVar14 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6488c(iVar1,uVar14,**(undefined4 **)(_UNK_01dcea58 + 0x1dcdaa4));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar14 = *(undefined4 *)(iVar2 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar6 + 8);
      uVar8 = *(uint *)(iVar6 + 0xc);
      piVar10 = *(int **)(_UNK_01dcea5c + 0x1dcdaf0);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      iVar15 = *piVar10;
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      if (uVar8 < *(uint *)(iVar13 + 0xc)) {
        *(uint *)(iVar6 + 0xc) = uVar8 + 1;
        *(undefined4 *)(iVar13 + uVar8 * 4 + 0x10) = uVar14;
      }
      else {
        func_0x0325970c(iVar6,uVar14,
                        *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01dcd998;
    }
    if (piVar9 != (int *)0x0) {
      iVar2 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01dcea60 + 0x1dcdb58)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
            goto LAB_01dcdba0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01dcea60 + 0x1dcdb58),0);
LAB_01dcdba0:
      (*(code *)*puVar4)(piVar9,puVar4[1]);
    }
    goto LAB_01dcd864;
  }
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dcebc0 + 0x1dcdc34)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_01dcdc84;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcebc0 + 0x1dcdc34),0);
LAB_01dcdc84:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01dcec54 + 0x1dcdcc8));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0382ab5c(&uStack_68,iVar1,**(undefined4 **)(_UNK_01dcecd8 + 0x1dcdcf4));
  uStack_40 = uStack_68;
  uStack_3c = uStack_64;
  uStack_38 = uStack_60;
  iStack_34 = iStack_5c;
  puVar4 = *(undefined4 **)(_UNK_01dcecdc + 0x1dcdd14);
  puVar5 = *(undefined4 **)(_UNK_01dcece0 + 0x1dcdd1c);
  while (iVar2 = func_0x01475908(&uStack_40,*puVar4), iVar1 = iStack_34, iVar2 != 0) {
    if (iStack_34 == 0) {
      func_0x01384bf0();
    }
    func_0x0325b328(iVar1,*puVar5);
  }
  func_0x02450874(&uStack_40,**(undefined4 **)(_UNK_01dcece4 + 0x1dcdd58));
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01ca5550(iVar1,param_2,&iStack_28,0);
  if (iStack_28 != *(int *)(param_1 + 0x68)) {
    iVar1 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x68) = iStack_28;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01dcece8 + 0x1dcdddc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_68,iVar1,**(undefined4 **)(_UNK_01dcecec + 0x1dcde04));
    uStack_50 = uStack_68;
    uStack_4c = uStack_64;
    uStack_48 = uStack_60;
    iStack_44 = iStack_5c;
    puVar4 = *(undefined4 **)(_UNK_01dcee14 + 0x1dcde28);
    while (iVar2 = func_0x01475908(&uStack_50,*puVar4), iVar1 = iStack_44, iVar2 != 0) {
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    func_0x02450874(&uStack_50,**(undefined4 **)(_UNK_01dcee18 + 0x1dcde5c));
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dcee1c + 0x1dcde80)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01dcdec8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcee1c + 0x1dcde80),0);
LAB_01dcdec8:
    piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
    piVar9 = *(int **)(_UNK_01dcee20 + 0x1dcdee8);
    do {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01dcee24 + 0x1dcdf00)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_01dcdf48;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcee24 + 0x1dcdf00),0);
LAB_01dcdf48:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 == 0) goto LAB_01dce004;
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == *piVar9) {
            puVar4 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_01dcdfbc;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar9,0);
LAB_01dcdfbc:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_01dcd048(param_1,*(undefined4 *)(iVar1 + 0x10),1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar2 + 0x14) = iVar1;
    } while( true );
  }
  goto LAB_01dce098;
LAB_01dce004:
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dcefc0 + 0x1dce024)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01dce06c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcefc0 + 0x1dce024),0);
LAB_01dce06c:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
LAB_01dce098:
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01ca572c(iVar1,param_2,&iStack_28,0);
  if (iStack_28 != *(int *)(param_1 + 0x6c)) {
    iVar1 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x6c) = iStack_28;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dcf0fc + 0x1dce114));
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01dcf100 + 0x1dce138));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_68,iVar1,**(undefined4 **)(_UNK_01dcf150 + 0x1dce160));
    uStack_50 = uStack_68;
    uStack_4c = uStack_64;
    uStack_48 = uStack_60;
    iStack_44 = iStack_5c;
    puVar4 = *(undefined4 **)(_UNK_01dcf154 + 0x1dce184);
    while (iVar2 = func_0x01475908(&uStack_50,*puVar4), iVar1 = iStack_44, iVar2 != 0) {
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    func_0x02450874(&uStack_50,**(undefined4 **)(_UNK_01dcf1d0 + 0x1dce1e0));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar14 = func_0x01ca5080(iVar1,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dcf22c + 0x1dce23c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01dce2c4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf22c + 0x1dce23c),0);
LAB_01dce2c4:
    piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
LAB_01dce2e0:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dcf2ec + 0x1dce2fc)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01dce384;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf2ec + 0x1dce2fc),0);
LAB_01dce384:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_01dcf388 + 0x1dce3bc)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_01dce424;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf388 + 0x1dce3bc),0);
LAB_01dce424:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_01dcd048(param_1,*(undefined4 *)(iVar1 + 0x10),1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar2 + 0x20) = iVar1;
      iVar2 = func_0x01dcf600(param_1,iVar1);
      if (iVar2 == 0) goto LAB_01dcea04;
      iVar2 = *(int *)(iVar1 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar9 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01dcf490 + 0x1dce498));
LAB_01dce4a4:
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01dcf4a0 + 0x1dce4c0)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
            goto LAB_01dce50c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01dcf4a0 + 0x1dce4c0),0);
LAB_01dce50c:
      iVar2 = (*(code *)*puVar4)(piVar9,puVar4[1]);
      if (iVar2 != 0) {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_01dcf52c + 0x1dce540)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
              goto LAB_01dce594;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01dcf52c + 0x1dce540),0);
LAB_01dce594:
        uVar12 = (*(code *)*puVar4)(piVar9,puVar4[1]);
        iVar2 = func_0x02f7c0f8(uVar14,uVar12,0,**(undefined4 **)(_UNK_01dcf590 + 0x1dce5b4));
        if (iVar2 != 0) {
          iVar6 = *(int *)(iVar2 + 0x18);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x0345fcc8(iVar6,**(undefined4 **)(_UNK_01dcf594 + 0x1dce5e8));
          if (0 < iVar6) {
            iVar6 = *(int *)(param_1 + 0x48);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar12 = *(undefined4 *)(iVar1 + 0x10);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar13 = func_0x03d66780(iVar6,uVar12,&iStack_54,
                                     **(undefined4 **)(_UNK_01dcf598 + 0x1dce628));
            iVar6 = iStack_54;
            if (iVar13 == 0) {
              iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01dcf5a4 + 0x1dce6b0));
              func_0x03258eb8(iVar6,**(undefined4 **)(_UNK_01dcf5a8 + 0x1dce6c4));
              iVar2 = *(int *)(iVar2 + 0x18);
              iStack_54 = iVar6;
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              uVar12 = func_0x0345f264(iVar2,**(undefined4 **)(_UNK_01dcf5ac + 0x1dce6ec));
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              func_0x0325992c(iVar6,uVar12,**(undefined4 **)(_UNK_01dcf5b0 + 0x1dce710));
              iVar2 = iStack_54;
              uVar12 = *(undefined4 *)(iVar1 + 0x10);
              iVar6 = *(int *)(param_1 + 0x48);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              func_0x03d64944(iVar6,uVar12,iVar2,**(undefined4 **)(_UNK_01dcf5b4 + 0x1dce744));
            }
            else {
              iVar2 = *(int *)(iVar2 + 0x18);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              uVar12 = func_0x0345f264(iVar2,**(undefined4 **)(_UNK_01dcf59c + 0x1dce660));
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              func_0x0325992c(iVar6,uVar12,**(undefined4 **)(_UNK_01dcf5a0 + 0x1dce684));
            }
          }
        }
        goto LAB_01dce4a4;
      }
      if (piVar9 != (int *)0x0) {
        iVar1 = *piVar9;
        uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_01dcf5b8 + 0x1dce77c)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
              goto LAB_01dce7c4;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01dcf5b8 + 0x1dce77c),0);
LAB_01dce7c4:
        (*(code *)*puVar4)(piVar9,puVar4[1]);
      }
      goto LAB_01dce2e0;
    }
LAB_01dcea04:
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_01dcf5c0 + 0x1dcea1c)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_01dcea70;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf5c0 + 0x1dcea1c),0);
LAB_01dcea70:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01ca4b80(iVar1,param_2,&iStack_28,0);
  if (*(int *)(param_1 + 0x70) != iStack_28) {
    iVar1 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x70) = iStack_28;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01dcf5c4 + 0x1dceb18));
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d3570c(iVar1,**(undefined4 **)(_UNK_01dcf5c8 + 0x1dceb3c));
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dcf5cc + 0x1dceb60));
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dcf5d0 + 0x1dceb84)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01dcebd0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf5d0 + 0x1dceb84),0);
LAB_01dcebd0:
    piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
    puVar4 = *(undefined4 **)(_UNK_01dcf5d8 + 0x1dcebf4);
    puVar5 = *(undefined4 **)(_UNK_01dcf5dc + 0x1dcebfc);
LAB_01dcebf8:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dcf5e0 + 0x1dcec18)) {
          puVar7 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01dcec64;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf5e0 + 0x1dcec18),0);
LAB_01dcec64:
    iVar1 = (*(code *)*puVar7)(piVar3,puVar7[1]);
    if (iVar1 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_01dcf5e4 + 0x1dcec9c)) {
            puVar7 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_01dcecfc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf5e4 + 0x1dcec9c),0);
LAB_01dcecfc:
      iVar1 = (*(code *)*puVar7)(piVar3,puVar7[1]);
      iVar2 = 0;
      while( true ) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar1 + 0x44);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar2) break;
        iVar13 = *(int *)(iVar1 + 0x44);
        iVar6 = *(int *)(param_1 + 0x4c);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        uVar14 = func_0x0364c9b8(iVar13,iVar2,*puVar4);
        uVar12 = *(undefined4 *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar6,uVar14,uVar12,*puVar5);
        iVar13 = *(int *)(iVar1 + 0x44);
        iVar6 = *(int *)(param_1 + 0x50);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        uVar14 = func_0x0364c9b8(iVar13,iVar2,*puVar4);
        uStack_64 = 0;
        uStack_68 = 0;
        func_0x038fd264(&uStack_68,*(undefined4 *)(iVar1 + 0x10),iVar2,
                        **(undefined4 **)(_UNK_01dcf5e8 + 0x1dcedc8));
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03d354b0(iVar6,uVar14,uStack_68,uStack_64,
                        **(undefined4 **)(_UNK_01dcf5ec + 0x1dcedfc));
        iVar2 = iVar2 + 1;
      }
      uVar14 = *(undefined4 *)(iVar1 + 0x10);
      iVar6 = *(int *)(param_1 + 0x54);
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dcf5f0 + 0x1dcee40));
      func_0x01dd2910(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar2 + 8) = iVar1;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x03d6491c(iVar6,uVar14,iVar2,**(undefined4 **)(_UNK_01dcf5f4 + 0x1dcee78));
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar1 + 0x44);
      iVar2 = *(int *)(iVar2 + 0x38);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar14 = func_0x0364c9b8(iVar6,0,*puVar4);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01cccae0(iVar2,uVar14,0);
      if (iVar2 != 0) {
        uVar14 = *(undefined4 *)(iVar2 + 0x1c);
        uVar12 = *(undefined4 *)(iVar1 + 0x10);
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar1,uVar12,uVar14,*puVar5);
      }
      goto LAB_01dcebf8;
    }
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_01dcf5f8 + 0x1dcef40)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_01dcef90;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcf5f8 + 0x1dcef40),0);
LAB_01dcef90:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
  }
  return;
}



// ===== FAT.MergeItemMan$$_ValidateItemSourceFixedOutput RVA 0x1dbf600 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dcf600(undefined4 param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01dcf748 + 0x1dcf61c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dcf74c + 0x1dcf630));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d99,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d99,0);
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
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_2 + 0x48);
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (iVar1 < *(int *)(iVar3 + 0xc) * 2) {
    func_0x01062b78(param_2);
    uVar5 = func_0x01384988(*(undefined4 *)(_UNK_01dcf750 + 0x1dcf6e4));
    uVar5 = func_0x01384abc(uVar5,&stack0xffffffec);
    uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01dcf754 + 0x1dcf6fc));
    uVar5 = func_0x0244f6a0(uVar2,uVar5,0);
    func_0x01384988(*(undefined4 *)(_UNK_01dcf758 + 0x1dcf718));
    uVar2 = func_0x01384be4();
    func_0x0244f904(uVar2,uVar5,0);
    uVar5 = func_0x01384988(*(undefined4 *)(_UNK_01dcf75c + 0x1dcf738));
    func_0x01384aa0(uVar2,uVar5);
    func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 1;
}



// ===== FAT.MergeItemMan$$FillMatchItemByGridTemplate RVA 0x1dbf760 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dcf760(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01dcf884 + 0x1dcf780);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dcf888 + 0x1dcf794));
    func_0x01384978(*(undefined4 *)(_UNK_01dcf88c + 0x1dcf7a0));
    func_0x01384978(*(undefined4 *)(_UNK_01dcf890 + 0x1dcf7ac));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x764b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d66780(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_01dcf894 + 0x1dcf830));
    uVar2 = 0;
    if (iVar1 != 0) {
      if (param_3 != 0) {
        uVar2 = func_0x0325992c(param_3,iStack_1c,**(undefined4 **)(_UNK_01dcf898 + 0x1dcf85c));
      }
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0(uVar2);
      }
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x764b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021c279c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.MergeItemMan$$GetExpItemByCount RVA 0x1dbf89c =====

/* WARNING: Removing unreachable block (ram,0x01dcfc0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dcf89c(undefined4 param_1,int param_2)

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
  
  iVar2 = func_0x0229f06c(0x9d9a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9d9a,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar2 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar9,0,0);
    uVar12 = func_0x0245498c(&uStack_38,0,0);
    return uVar12;
  }
  pcVar10 = (char *)(_UNK_01dcfce8 + 0x1dcf924);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dcfcec + 0x1dcf938));
    func_0x01384978(*(undefined4 *)(_UNK_01dcfcf0 + 0x1dcf944));
    func_0x01384978(*(undefined4 *)(_UNK_01dcfcf4 + 0x1dcf950));
    func_0x01384978(*(undefined4 *)(_UNK_01dcfcf8 + 0x1dcf95c));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x428,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x01ca53f0(iVar2,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01dcfcfc + 0x1dcfa08)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01dcfa50;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcfcfc + 0x1dcfa08),0);
LAB_01dcfa50:
    piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
    uVar12 = 0;
    piVar7 = *(int **)(_UNK_01dcfd00 + 0x1dcfa78);
    piVar13 = *(int **)(_UNK_01dcfd04 + 0x1dcfa80);
    iVar2 = 0;
LAB_01dcfa7c:
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
          goto LAB_01dcfad8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_01dcfad8:
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
          if (piVar8[-1] == *piVar13) {
            puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
            goto LAB_01dcfb4c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar13,0);
LAB_01dcfb4c:
      iVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar11 + 0x1c) == 0x1e) {
        iVar5 = *(int *)(iVar11 + 0x18);
        bVar14 = SBORROW4(iVar5,param_2);
        iVar1 = iVar5 - param_2;
        if (iVar5 <= param_2) {
          bVar14 = SBORROW4(iVar2,iVar5);
          iVar1 = iVar2 - iVar5;
        }
        if (iVar1 < 0 != bVar14) {
          uVar12 = *(undefined4 *)(iVar11 + 0xc);
          iVar2 = iVar5;
        }
      }
      goto LAB_01dcfa7c;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01dcfd08 + 0x1dcfbac)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_01dcfbf4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcfd08 + 0x1dcfbac),0);
LAB_01dcfbf4:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x428,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uVar12 = func_0x02180128(iVar2,param_1,0x1e,param_2);
  }
  return uVar12;
}



// ===== FAT.MergeItemMan$$GetBonusItemByCount RVA 0x1dbf904 =====

/* WARNING: Removing unreachable block (ram,0x01dcfc0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dcf904(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  bool bVar13;
  
  pcVar11 = (char *)(_UNK_01dcfce8 + 0x1dcf924);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dcfcec + 0x1dcf938));
    func_0x01384978(*(undefined4 *)(_UNK_01dcfcf0 + 0x1dcf944));
    func_0x01384978(*(undefined4 *)(_UNK_01dcfcf4 + 0x1dcf950));
    func_0x01384978(*(undefined4 *)(_UNK_01dcfcf8 + 0x1dcf95c));
    *pcVar11 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x428,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x01ca53f0(iVar2,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dcfcfc + 0x1dcfa08)) {
          puVar5 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_01dcfa50;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01dcfcfc + 0x1dcfa08),0);
LAB_01dcfa50:
    piVar4 = (int *)(*(code *)*puVar5)(piVar4,puVar5[1]);
    uVar3 = 0;
    piVar9 = *(int **)(_UNK_01dcfd00 + 0x1dcfa78);
    piVar12 = *(int **)(_UNK_01dcfd04 + 0x1dcfa80);
    iVar2 = 0;
LAB_01dcfa7c:
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar4;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar9) {
          puVar5 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
          goto LAB_01dcfad8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar9,0);
LAB_01dcfad8:
    iVar6 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    if (iVar6 != 0) {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar4;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar10[-1] == *piVar12) {
            puVar5 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
            goto LAB_01dcfb4c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar12,0);
LAB_01dcfb4c:
      iVar6 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar6 + 0x1c) == param_2) {
        iVar7 = *(int *)(iVar6 + 0x18);
        bVar13 = SBORROW4(iVar7,param_3);
        iVar1 = iVar7 - param_3;
        if (iVar7 <= param_3) {
          bVar13 = SBORROW4(iVar2,iVar7);
          iVar1 = iVar2 - iVar7;
        }
        if (iVar1 < 0 != bVar13) {
          uVar3 = *(undefined4 *)(iVar6 + 0xc);
          iVar2 = iVar7;
        }
      }
      goto LAB_01dcfa7c;
    }
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_01dcfd08 + 0x1dcfbac)) {
            puVar5 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
            goto LAB_01dcfbf4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01dcfd08 + 0x1dcfbac),0);
LAB_01dcfbf4:
      (*(code *)*puVar5)(piVar4,puVar5[1]);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x428,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02180128(iVar2,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.MergeItemMan$$GetItemComConfigRaw RVA 0x1dbfd10 =====

/* WARNING: Removing unreachable block (ram,0x01dcd13c) */
/* WARNING: Removing unreachable block (ram,0x01dcd168) */
/* WARNING: Removing unreachable block (ram,0x01dcd16c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dcfd10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iVar1 = func_0x0229f06c(0x7f6,0);
  if (iVar1 == 0) {
    pcVar6 = (char *)(_UNK_01dcd1c4 + 0x1dcd068);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dcd1c8 + 0x1dcd07c));
      func_0x01384978(*(undefined4 *)(_UNK_01dcd1cc + 0x1dcd088));
      func_0x01384978(*(undefined4 *)(_UNK_01dcd1d0 + 0x1dcd094));
      func_0x01384978(*(undefined4 *)(_UNK_01dcd1d4 + 0x1dcd0a0));
      *pcVar6 = '\x01';
    }
    aiStack_1c[0] = 0;
    iVar1 = func_0x0229f06c(0x7f7,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d66780(iVar1,param_2,aiStack_1c,**(undefined4 **)(_UNK_01dcd1d8 + 0x1dcd124));
      if (aiStack_1c[0] == 0) {
        piVar3 = *(int **)(_UNK_01dcd1e4 + 0x1dcd1a0);
        iVar1 = *piVar3;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar3;
        }
        aiStack_1c[0] = **(int **)(iVar1 + 0x5c);
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x7f7,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      aiStack_1c[0] = func_0x02196f80(iVar1,param_1,param_2,0);
    }
    return aiStack_1c[0];
  }
  iVar1 = func_0x0229f13c(0x7f6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_021971c8 + 0x21970d4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021971cc + 0x21970e8),param_1,param_2,0);
    *pcVar6 = '\x01';
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021971d0 + 0x21971b8));
  return iVar1;
}



// ===== FAT.MergeItemMan$$GetCategoryConfigRaw RVA 0x1dbfd78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dcfd78(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01dcfe24 + 0x1dcfd90);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dcfe28 + 0x1dcfda4));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x427,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x427,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02188f80 + 0x2188e8c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02188f84 + 0x2188ea0),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02188f88 + 0x2188f70));
    return uVar5;
  }
  iVar1 = func_0x02f7c0f8(*(undefined4 *)(param_1 + 0x54),param_2,0,
                          **(undefined4 **)(_UNK_01dcfe2c + 0x1dcfe0c));
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar5;
}



// ===== FAT.MergeItemMan$$GetFixedOutputConfig RVA 0x1dbfe30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dcfe30(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dcfecc + 0x1dcfe48);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dcfed0 + 0x1dcfe5c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d9b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d9b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02283fb4 + 0x2283ec0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02283fb8 + 0x2283ed4),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02283fbc + 0x2283fa4));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dcfed4 + 0x1dcfec0);
  piVar2 = *(int **)(param_1 + 0x3c);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetFixedOutputByItemConfig RVA 0x1dbfed8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dcfed8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dcff74 + 0x1dcfef0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dcff78 + 0x1dcff04));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d9c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d9c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_022840d4 + 0x2283fe0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022840d8 + 0x2283ff4),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022840dc + 0x22840c4));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dcff7c + 0x1dcff68);
  piVar2 = *(int **)(param_1 + 0x40);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetMergeRuleByItem RVA 0x1dbff80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dcff80(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd001c + 0x1dcff98);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd0020 + 0x1dcffac));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d9d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d9d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_022841f4 + 0x2284100);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022841f8 + 0x2284114),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022841fc + 0x22841e4));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd0024 + 0x1dd0010);
  piVar2 = *(int **)(param_1 + 0x38);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetNextLevelItemId RVA 0x1dc0028 =====

undefined4 FUN_01dd0028(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  iStack_20 = 0;
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x9d9e,0);
  if (iVar1 == 0) {
    FUN_01db1798(param_1,param_2,&uStack_1c,&iStack_20);
    func_0x01dd00d8(param_1,uStack_1c,param_3 + iStack_20 + 1,&uStack_24);
  }
  else {
    iVar1 = func_0x0229f13c(0x9d9e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return uStack_24;
}



// ===== FAT.MergeItemMan$$GetClampedChainItemIdByLevel RVA 0x1dc00d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd00d8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01dd021c + 0x1dd00f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd0220 + 0x1dd0110));
    func_0x01384978(*(undefined4 *)(_UNK_01dd0224 + 0x1dd011c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d9f,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01db1884(param_1,param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0x44);
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar3 = iRam0000000c;
      iVar5 = *(int *)(iVar1 + 0x44);
      if (iVar5 == 0) {
        func_0x01384bf0();
        iVar5 = 0;
      }
    }
    else {
      iVar3 = *(int *)(iVar5 + 0xc);
    }
    if (iVar3 < param_3) {
      uVar2 = func_0x0364c9b8(iVar5,*(int *)(iVar5 + 0xc) + -1,
                              **(undefined4 **)(_UNK_01dd0228 + 0x1dd01b4));
      *param_4 = uVar2;
      uVar2 = 0;
    }
    else {
      uVar2 = func_0x0364c9b8(iVar5,param_3 + -1,**(undefined4 **)(_UNK_01dd022c + 0x1dd0204));
      *param_4 = uVar2;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9d9f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02284200(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.MergeItemMan$$GetCategoryConfigByItemId RVA 0x1dc0230 =====

/* WARNING: Possible PIC construction at 0x01db18dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01db18e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd0230(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 uVar4;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x9ad,0);
  if (iVar1 == 0) {
    param_2 = func_0x01dd02a0(param_1,param_2);
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x424,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar1 + 0x54) == 0) ||
         (iVar1 = FUN_01caf654(*(int *)(iVar1 + 0x54),param_2,&uStack_14,0), iVar1 == 0)) {
        uStack_14 = FUN_01dcfd78(param_1,param_2);
      }
      return uStack_14;
    }
    iVar1 = func_0x0229f13c(0x424,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1db18e0;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x9ad,0);
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
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  pcVar5 = (char *)(_UNK_02188f80 + 0x2188e8c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02188f84 + 0x2188ea0),param_1,param_2,0);
    *pcVar5 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  uVar4 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                          **(undefined4 **)(_UNK_02188f88 + 0x2188f70));
  return uVar4;
}



// ===== FAT.MergeItemMan$$GetItemCategoryId RVA 0x1dc02a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd02a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd033c + 0x1dd02b8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd0340 + 0x1dd02cc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x889,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x889,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x0245498c(&uStack_38,0,0);
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd0344 + 0x1dd0330);
  piVar2 = *(int **)(param_1 + 0x4c);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c0c8;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c0c8:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$OnItemShow RVA 0x1dc0348 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd0348(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  undefined8 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01dd08c0 + 0x1dd0364);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd08c4 + 0x1dd0378));
    func_0x01384978(*(undefined4 *)(_UNK_01dd08c8 + 0x1dd0384));
    func_0x01384978(*(undefined4 *)(_UNK_01dd08cc + 0x1dd0390));
    func_0x01384978(*(undefined4 *)(_UNK_01dd08d0 + 0x1dd039c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd08d4 + 0x1dd03a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd08d8 + 0x1dd03b4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd08dc + 0x1dd03c0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd08e0 + 0x1dd03cc));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_40 = 0;
  uStack_34 = 0;
  uStack_2c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_38);
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_30 = uStack_3c;
  iVar2 = func_0x0229f06c(0x9da0,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01aa5ee0(iVar2,param_2,0);
    uVar7 = 1;
    if (iVar2 == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xc4);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01ab7764(iVar2,param_2,0);
      if (iVar2 == 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 200);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01a6b790(iVar2,param_2,0);
        if (iVar2 == 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0xd8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x03cd6fc4(&uStack_88,iVar2,**(undefined4 **)(_UNK_01dd08e4 + 0x1dd0574));
          uStack_34 = uStack_7c;
          uStack_30 = uStack_78;
          uStack_40 = uStack_88;
          uStack_3c = uStack_84;
          uStack_38 = uStack_80;
          uStack_2c = uStack_74;
          puVar9 = *(undefined4 **)(_UNK_01dd08e8 + 0x1dd05ac);
          puVar10 = *(undefined4 **)(_UNK_01dd08ec + 0x1dd05b4);
          piVar8 = *(int **)(_UNK_01dd08f0 + 0x1dd05bc);
          do {
            iVar2 = func_0x01473bf8(&uStack_40,*puVar9);
            if (iVar2 == 0) {
              iVar2 = 0;
              goto LAB_01dd0690;
            }
            uStack_48 = (undefined4)uStack_2c;
            uStack_50 = uStack_34;
            uStack_4c = uStack_30;
            func_0x01483df8(&uStack_50,&uStack_58,&uStack_5c,*puVar10);
            piVar3 = (int *)func_0x01384ab8(uStack_5c,*piVar8);
          } while (piVar3 == (int *)0x0);
          iVar2 = *piVar3;
          iVar4 = *piVar8;
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar4) {
                puVar9 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                goto LAB_01dd0678;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined4 *)func_0x014002dc(piVar3,iVar4,0);
LAB_01dd0678:
          iVar2 = (*(code *)*puVar9)(piVar3,param_2,puVar9[1]);
LAB_01dd0690:
          func_0x0245081c(&uStack_40,**(undefined4 **)(_UNK_01dd08f4 + 0x1dd069c));
          uVar7 = 0;
          if (iVar2 != 0) {
            uVar7 = 1;
          }
        }
      }
    }
    piVar8 = *(int **)(_UNK_01dd08fc + 0x1dd06b8);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_68,iVar2,&uStack_60,**(undefined4 **)(_UNK_01dd0900 + 0x1dd06f4));
    iVar2 = func_0x01dd0908(param_1,param_2,uStack_60);
    if (iVar2 == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x3c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01cc14fc(iVar2,param_2,uVar7,0);
    }
    else {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = uStack_60;
      iVar2 = *(int *)(iVar2 + 0x3c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01cc16b8(iVar2,uVar1,param_2,uVar7,0);
    }
    func_0x028c98a0(&uStack_68,0);
  }
  else {
    iVar2 = func_0x0229f13c(0x9da0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MergeItemMan$$_FillUnlockPreItemList RVA 0x1dc0908 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01dd0908(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  
  pcVar9 = (char *)(_UNK_01dd0c14 + 0x1dd0928);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd0c18 + 0x1dd093c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd0c1c + 0x1dd0948));
    func_0x01384978(*(undefined4 *)(_UNK_01dd0c20 + 0x1dd0954));
    func_0x01384978(*(undefined4 *)(_UNK_01dd0c24 + 0x1dd0960));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9da1,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar4 = func_0x01cc44e8(0,param_2,0);
      if (iVar4 != 0) {
        return 0;
      }
      func_0x01384bf0();
    }
    else {
      iVar4 = func_0x01cc44e8(iVar2,param_2,0);
      if (iVar4 != 0) {
        return 0;
      }
    }
    uVar3 = 0;
    iVar4 = func_0x01cc45d4(iVar2,param_2,0);
    if (iVar4 == 0) {
      iVar4 = FUN_01dd0230(param_1,param_2);
      cVar1 = '\0';
      if (iVar4 != 0) {
        cVar1 = *(char *)(iVar4 + 0x50);
        param_1 = iVar4;
      }
      if (iVar4 != 0 && cVar1 != '\0') {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x60);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 0;
        iVar4 = func_0x01cc0100(iVar4,0xb0,0);
        if (iVar4 != 0) {
          iVar4 = *(int *)(param_1 + 0x44);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0364c54c(iVar4,param_2,**(undefined4 **)(_UNK_01dd0c28 + 0x1dd0acc));
          if (-1 < iVar5) {
            iVar10 = 0;
            puVar11 = *(undefined4 **)(_UNK_01dd0c2c + 0x1dd0af0);
            do {
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              uVar6 = func_0x0364c9b8(iVar4,iVar10,*puVar11);
              if (iVar2 == 0) {
                func_0x01384bf0();
                iVar7 = func_0x01cc44e8(0,uVar6,0);
                if (iVar7 == 0) {
                  func_0x01384bf0();
                  goto LAB_01dd0b54;
                }
              }
              else {
                iVar7 = func_0x01cc44e8(iVar2,uVar6,0);
                if (iVar7 == 0) {
LAB_01dd0b54:
                  iVar7 = func_0x01cc45d4(iVar2,uVar6,0);
                  if (iVar7 == 0) {
                    if (param_3 == 0) {
                      func_0x01384bf0();
                    }
                    iVar12 = *(int *)(param_3 + 8);
                    uVar3 = *(uint *)(param_3 + 0xc);
                    piVar8 = *(int **)(_UNK_01dd0c30 + 0x1dd0b98);
                    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
                    iVar7 = *piVar8;
                    if (iVar12 == 0) {
                      func_0x01384bf0();
                    }
                    if (uVar3 < *(uint *)(iVar12 + 0xc)) {
                      *(uint *)(param_3 + 0xc) = uVar3 + 1;
                      *(undefined4 *)(iVar12 + uVar3 * 4 + 0x10) = uVar6;
                    }
                    else {
                      func_0x0325970c(param_3,uVar6,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    puVar11 = *(undefined4 **)(_UNK_01dd0c34 + 0x1dd0bec);
                  }
                }
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 <= iVar5);
            if (param_3 == 0) {
              func_0x01384bf0();
            }
            uVar3 = (uint)(0 < *(int *)(param_3 + 0xc));
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9da1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021846e8(iVar2,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.MergeItemMan$$IsLastItemInChain RVA 0x1dc0c38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01dd0c38(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  pcVar5 = (char *)(_UNK_01dd0d34 + 0x1dd0c50);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd0d38 + 0x1dd0c64));
    func_0x01384978(*(undefined4 *)(_UNK_01dd0d3c + 0x1dd0c70));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x79b6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x79b6,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = FUN_01dd0230(param_1,param_2);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x44);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0364c54c(iVar4,param_2,**(undefined4 **)(_UNK_01dd0d40 + 0x1dd0cf8));
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return (uint)(iVar4 - *(int *)(iVar1 + 0xc) == -1);
  }
  return 1;
}



// ===== FAT.MergeItemMan$$GetMaxUnlockLevelItemIdInChain RVA 0x1dc0d44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dd0d44(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01dd0ef4 + 0x1dd0d64);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd0ef8 + 0x1dd0d7c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd0efc + 0x1dd0d88));
    func_0x01384978(*(undefined4 *)(_UNK_01dd0f00 + 0x1dd0d94));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x96d9,0);
  if (iVar2 == 0) {
    iStack_24 = 0;
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar2 + 0x3c);
    iVar2 = FUN_01db1884(param_1,param_2);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar7 = *(int *)(iVar2 + 0x44);
      if (param_3 < 1) {
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        param_3 = *(int *)(iVar7 + 0xc);
      }
      puVar8 = *(undefined4 **)(_UNK_01dd0f04 + 0x1dd0e58);
      do {
        param_3 = param_3 + -1;
        if (param_3 < 0) {
          iVar3 = 0;
          iVar1 = iStack_24;
          break;
        }
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0364c9b8(iVar7,param_3,*puVar8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x01cc44e8(iVar6,iVar3,0);
        iVar1 = iVar3;
      } while (iVar4 == 0);
      iStack_24 = iVar1;
      if ((iVar3 < 1) && (param_4 != 0)) {
        func_0x03005740(*(undefined4 *)(iVar2 + 0x44),0,&iStack_24,
                        **(undefined4 **)(_UNK_01dd0f08 + 0x1dd0edc));
        iVar3 = iStack_24;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x96d9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0223f430(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return iVar3;
}



// ===== FAT.MergeItemMan$$TryIncMergeTestSpawnBubbleCount RVA 0x1dc0f0c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01dd12e0) */
/* WARNING: Removing unreachable block (ram,0x01dd1270) */
/* WARNING: Removing unreachable block (ram,0x01dd128c) */
/* WARNING: Removing unreachable block (ram,0x01dd1294) */
/* WARNING: Removing unreachable block (ram,0x01dd12bc) */
/* WARNING: Removing unreachable block (ram,0x01dd12a0) */
/* WARNING: Removing unreachable block (ram,0x01dd12ac) */
/* WARNING: Removing unreachable block (ram,0x01dd12c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dd0f0c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_01dd12f4 + 0x1dd0f28);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd12f8 + 0x1dd0f3c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd12fc + 0x1dd0f48));
    func_0x01384978(*(undefined4 *)(_UNK_01dd1300 + 0x1dd0f54));
    func_0x01384978(*(undefined4 *)(_UNK_01dd1304 + 0x1dd0f60));
    func_0x01384978(*(undefined4 *)(_UNK_01dd1308 + 0x1dd0f6c));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x9da2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9da2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02179234(iVar1,param_1,param_2,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d66780(iVar1,param_2,&iStack_24,**(undefined4 **)(_UNK_01dd130c + 0x1dd0fec));
  if (iVar1 == 0) {
    return 0;
  }
  if (iStack_24 == 0) {
    func_0x01384bf0();
    iRam0000000c = iRam0000000c + 1;
    if (iStack_24 == 0) {
      uVar11 = func_0x01384bf0();
      if ((int)((ulonglong)uVar11 >> 0x20) != 1) {
        func_0x01459844((int)uVar11);
        func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      piVar2 = (int *)func_0x0145b008((int)uVar11);
      iVar4 = *piVar2;
      iVar1 = 0;
      func_0x0145b0f8();
      piVar2 = (int *)0x0;
      goto LAB_01dd1198;
    }
  }
  else {
    *(int *)(iStack_24 + 0xc) = *(int *)(iStack_24 + 0xc) + 1;
  }
  iVar1 = *(int *)(iStack_24 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01dd1310 + 0x1dd1068));
  piVar10 = *(int **)(_UNK_01dd1314 + 0x1dd1080);
  piVar9 = *(int **)(_UNK_01dd1318 + 0x1dd1088);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01dd10e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01dd10e0:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) {
      iVar4 = 0;
      iVar1 = 0;
      goto LAB_01dd1198;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
          goto LAB_01dd1158;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_01dd1158:
    iVar5 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar4 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
  } while (*(int *)(iVar4 + 0xc) != iVar5);
  iVar4 = 0;
LAB_01dd1198:
  if (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dd131c + 0x1dd11b0)) {
          puVar3 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
          goto LAB_01dd11f8;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dd131c + 0x1dd11b0),0);
LAB_01dd11f8:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  if (iVar4 != 0) {
    func_0x01384bec(iVar4);
  }
  return iVar1;
}



// ===== FAT.MergeItemMan$$GetItemCategoryMap RVA 0x1dc1324 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd1324(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x96ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96ba,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02216790 + 0x22166b0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02216794 + 0x22166c4),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02216798 + 0x2216780));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.MergeItemMan$$GetGalleryCategoryConfigById RVA 0x1dc1378 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd1378(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd1414 + 0x1dd1390);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1418 + 0x1dd13a4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9da3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9da3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02284444 + 0x2284350);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02284448 + 0x2284364),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0228444c + 0x2284434));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd141c + 0x1dd1408);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetToolConfigMap RVA 0x1dc1420 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd1420(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x9da4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9da4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0226cdd4 + 0x226ccf4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0226cdd8 + 0x226cd08),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0226cddc + 0x226cdc4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.MergeItemMan$$GetToolBasicConfig RVA 0x1dc1474 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd1474(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd1510 + 0x1dd148c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1514 + 0x1dd14a0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9da5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9da5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02177c28 + 0x2177b34);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02177c2c + 0x2177b48),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02177c30 + 0x2177c18));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd1518 + 0x1dd1504);
  piVar2 = *(int **)(param_1 + 8);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetToolMergeConfig RVA 0x1dc151c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd151c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd15b8 + 0x1dd1534);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd15bc + 0x1dd1548));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9da6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9da6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02284564 + 0x2284470);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02284568 + 0x2284484),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0228456c + 0x2284554));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd15c0 + 0x1dd15ac);
  piVar2 = *(int **)(param_1 + 0xc);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetMergeMixCostConfig RVA 0x1dc15c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd15c4(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd1660 + 0x1dd15dc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1664 + 0x1dd15f0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9da7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9da7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02284684 + 0x2284590);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02284688 + 0x22845a4),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0228468c + 0x2284674));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd1668 + 0x1dd1654);
  piVar2 = *(int **)(param_1 + 0x10);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$TryGetDropLimitItemConfig RVA 0x1dc166c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd166c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01dd1784 + 0x1dd168c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1788 + 0x1dd16a0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9da8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9da8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02284690(iVar1,param_1,param_2,param_3,0);
    return;
  }
  piVar5 = *(int **)(param_1 + 0x18);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dd178c + 0x1dd171c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xf8);
        goto LAB_01dd1764;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01dd178c + 0x1dd171c),7);
LAB_01dd1764:
                    /* WARNING: Could not recover jumptable at 0x01dd1780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar5,param_2,param_3,puVar2[1]);
  return;
}



// ===== FAT.MergeItemMan$$TryGetTrigAutoDetailConfig RVA 0x1dc1790 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd1790(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01dd18a8 + 0x1dd17b0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd18ac + 0x1dd17c4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9b1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9b1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a2f4c(iVar1,param_1,param_2,param_3,0);
    return;
  }
  piVar5 = *(int **)(param_1 + 0x1c);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dd18b0 + 0x1dd1840)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xf8);
        goto LAB_01dd1888;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01dd18b0 + 0x1dd1840),7);
LAB_01dd1888:
                    /* WARNING: Could not recover jumptable at 0x01dd18a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar5,param_2,param_3,puVar2[1]);
  return;
}



// ===== FAT.MergeItemMan$$GetMergeTapCostOutPuts RVA 0x1dc18b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd18b4(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd1950 + 0x1dd18cc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1954 + 0x1dd18e0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96be,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96be,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02235f34 + 0x2235e40);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02235f38 + 0x2235e54),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02235f3c + 0x2235f24));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd1958 + 0x1dd1944);
  piVar2 = *(int **)(param_1 + 0x48);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetOrderBoxDetailConfig RVA 0x1dc195c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd195c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd19f8 + 0x1dd1974);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd19fc + 0x1dd1988));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9da9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9da9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_022848fc + 0x2284808);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02284900 + 0x228481c),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02284904 + 0x22848ec));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd1a00 + 0x1dd19ec);
  piVar2 = *(int **)(param_1 + 0x20);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetOrderDiffConfig RVA 0x1dc1a04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd1a04(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd1aa0 + 0x1dd1a1c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1aa4 + 0x1dd1a30));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x21f6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x21f6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_021f3c24 + 0x21f3b30);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021f3c28 + 0x21f3b44),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021f3c2c + 0x21f3c14));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd1aa8 + 0x1dd1a94);
  piVar2 = *(int **)(param_1 + 0x24);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetOrderRewardConfig RVA 0x1dc1aac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd1aac(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd1b48 + 0x1dd1ac4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1b4c + 0x1dd1ad8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3241,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3241,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02208f8c + 0x2208e98);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02208f90 + 0x2208eac),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02208f94 + 0x2208f7c));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd1b50 + 0x1dd1b3c);
  piVar2 = *(int **)(param_1 + 0x28);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$GetOrderCategoryConfig RVA 0x1dc1b54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd1b54(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_01dd1bf0 + 0x1dd1b6c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1bf4 + 0x1dd1b80));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9daa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9daa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02284a1c + 0x2284928);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02284a20 + 0x228493c),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02284a24 + 0x2284a0c));
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_01dd1bf8 + 0x1dd1be4);
  piVar2 = *(int **)(param_1 + 0x2c);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c1a4;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c1a4:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.MergeItemMan$$CheckFpIdInOrderApiWhiteList RVA 0x1dc1bfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd1bfc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
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
  
  pcVar8 = (char *)(_UNK_01dd1cf8 + 0x1dd1c14);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1cfc + 0x1dd1c28));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4055,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4055,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    func_0x0245496c(&uStack_38,0,0);
    return;
  }
  piVar6 = *(int **)(param_1 + 0x30);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dd1d00 + 0x1dd1c98)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xe0);
        goto LAB_01dd1ce0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dd1d00 + 0x1dd1c98),4);
LAB_01dd1ce0:
                    /* WARNING: Could not recover jumptable at 0x01dd1cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,param_2,puVar2[1]);
  return;
}



// ===== FAT.MergeItemMan$$_ItemIdToMask RVA 0x1dc1d04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd1d04(undefined4 param_1,int param_2,uint *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_01dd1ed0 + 0x1dd1d24);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd1ed4 + 0x1dd1d3c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd1ed8 + 0x1dd1d48));
    func_0x01384978(*(undefined4 *)(_UNK_01dd1edc + 0x1dd1d54));
    func_0x01384978(*(undefined4 *)(_UNK_01dd1ee0 + 0x1dd1d60));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dab,0);
  if (iVar1 == 0) {
    uVar2 = param_2 - 0xb71b01;
    if (uVar2 < 1000000) {
      uVar3 = uVar2 & 0x3f;
      *param_3 = uVar2 >> 6;
      uVar2 = 1 >> (0x20 - uVar3 & 0xff);
      iVar1 = 1 << uVar3;
      if (-1 < (int)(uVar3 - 0x20)) {
        uVar2 = 1 << (uVar3 - 0x20 & 0xff);
        iVar1 = 0;
      }
      *param_4 = iVar1;
      param_4[1] = uVar2;
    }
    else {
      puVar4 = *(undefined4 **)(_UNK_01dd1ee4 + 0x1dd1e14);
      *param_4 = 0;
      param_4[1] = 0;
      uVar5 = *puVar4;
      *param_3 = 0;
      piVar6 = (int *)func_0x01384a00(uVar5,1);
      iStack_24 = param_2;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01dd1ee8 + 0x1dd1e3c),&iStack_24);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar7 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar1;
      if (*(int *)(**(int **)(_UNK_01dd1eec + 0x1dd1ea0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(**(undefined4 **)(_UNK_01dd1ef0 + 0x1dd1ec4),piVar6,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9dab,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02284a28(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MergeItemMan$$_MaskToItemId RVA 0x1dc1ef4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dd1ef4(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                uint param_6)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  pcVar4 = (char *)(_UNK_01dd2040 + 0x1dd1f14);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd2044 + 0x1dd1f28));
    *pcVar4 = '\x01';
  }
  iVar7 = 0;
  iVar2 = func_0x0229f06c(0x9dac,0);
  if (iVar2 == 0) {
    if (param_5 != 0 || param_6 != 0) {
      iVar7 = 0;
      puVar5 = &UNK_00b71b01 + param_3 * 0x40;
      do {
        if ((param_5 & 1) != 0) {
          if (param_2 != 0) {
            iVar2 = *(int *)(param_2 + 8);
            uVar8 = *(uint *)(param_2 + 0xc);
            piVar3 = *(int **)(_UNK_01dd2048 + 0x1dd1fd8);
            *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
            iVar6 = *piVar3;
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            if (uVar8 < *(uint *)(iVar2 + 0xc)) {
              *(uint *)(param_2 + 0xc) = uVar8 + 1;
              *(undefined **)(iVar2 + uVar8 * 4 + 0x10) = puVar5;
            }
            else {
              func_0x0325970c(param_2,puVar5,
                              *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
            }
          }
          iVar7 = iVar7 + 1;
        }
        bVar1 = (byte)param_6;
        param_6 = param_6 >> 1;
        puVar5 = puVar5 + 1;
        param_5 = (uint)(bVar1 & 1) << 0x1f | param_5 >> 1;
      } while (param_5 != 0 || param_6 != 0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9dac,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x02284b70(iVar2,param_1,param_2,param_3,param_5,param_6,0);
  }
  return iVar7;
}



// ===== FAT.MergeItemMan$$FAT.IGameModule.Reset RVA 0x1dc204c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd204c(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
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
  
  pcVar5 = (char *)(_UNK_01dd234c + 0x1dd2060);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd2350 + 0x1dd2074));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2354 + 0x1dd2080));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2358 + 0x1dd208c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd235c + 0x1dd2098));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2360 + 0x1dd20a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2364 + 0x1dd20b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2368 + 0x1dd20bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dd236c + 0x1dd20c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2370 + 0x1dd20d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2374 + 0x1dd20e0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9dad,0);
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
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dd2378 + 0x1dd2148));
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dd237c + 0x1dd216c));
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dd2380 + 0x1dd2190));
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dd2384 + 0x1dd21b4));
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dd2388 + 0x1dd21d8));
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01dd238c + 0x1dd2200);
  func_0x03d64b20(iVar1,*puVar8);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_01dd2390 + 0x1dd2224);
  func_0x03d59f58(iVar1,*puVar10);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d3570c(iVar1,**(undefined4 **)(_UNK_01dd2394 + 0x1dd2244));
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01dd2398 + 0x1dd2268));
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar10);
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,*puVar8);
  piVar6 = *(int **)(param_1 + 0x60);
  if (piVar6 != (int *)0x0) {
    iVar1 = *piVar6;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dd239c + 0x1dd22c4)) {
          puVar10 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xd8);
          goto LAB_01dd230c;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dd239c + 0x1dd22c4),3);
LAB_01dd230c:
    (*(code *)*puVar10)(piVar6,puVar10[1]);
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,*puVar8);
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  return;
}



// ===== FAT.MergeItemMan$$FAT.IGameModule.LoadConfig RVA 0x1dc23a0 =====

/* WARNING: Removing unreachable block (ram,0x01dcefa8) */
/* WARNING: Removing unreachable block (ram,0x01dce7e8) */
/* WARNING: Removing unreachable block (ram,0x01dce084) */
/* WARNING: Removing unreachable block (ram,0x01dcdbb8) */
/* WARNING: Removing unreachable block (ram,0x01dcd7a4) */
/* WARNING: Removing unreachable block (ram,0x01dcbb98) */
/* WARNING: Removing unreachable block (ram,0x01dcb910) */
/* WARNING: Removing unreachable block (ram,0x01dcb904) */
/* WARNING: Removing unreachable block (ram,0x01dcb414) */
/* WARNING: Removing unreachable block (ram,0x01dcb408) */
/* WARNING: Removing unreachable block (ram,0x01dcaf98) */
/* WARNING: Removing unreachable block (ram,0x01dcaf8c) */
/* WARNING: Removing unreachable block (ram,0x01dcab20) */
/* WARNING: Removing unreachable block (ram,0x01dcab14) */
/* WARNING: Removing unreachable block (ram,0x01dca6a8) */
/* WARNING: Removing unreachable block (ram,0x01dca69c) */
/* WARNING: Removing unreachable block (ram,0x01dca234) */
/* WARNING: Removing unreachable block (ram,0x01dca228) */
/* WARNING: Removing unreachable block (ram,0x01dc9dd0) */
/* WARNING: Removing unreachable block (ram,0x01dc9dc4) */
/* WARNING: Removing unreachable block (ram,0x01dc9950) */
/* WARNING: Removing unreachable block (ram,0x01dc9944) */
/* WARNING: Removing unreachable block (ram,0x01dc94e8) */
/* WARNING: Removing unreachable block (ram,0x01dc94dc) */
/* WARNING: Removing unreachable block (ram,0x01dc8fbc) */
/* WARNING: Removing unreachable block (ram,0x01dc8fb0) */
/* WARNING: Removing unreachable block (ram,0x01dc8b70) */
/* WARNING: Removing unreachable block (ram,0x01dc8b64) */
/* WARNING: Removing unreachable block (ram,0x01dc8d90) */
/* WARNING: Removing unreachable block (ram,0x01dc9220) */
/* WARNING: Removing unreachable block (ram,0x01dc922c) */
/* WARNING: Removing unreachable block (ram,0x01dc970c) */
/* WARNING: Removing unreachable block (ram,0x01dc9718) */
/* WARNING: Removing unreachable block (ram,0x01dc9b88) */
/* WARNING: Removing unreachable block (ram,0x01dc9b94) */
/* WARNING: Removing unreachable block (ram,0x01dca000) */
/* WARNING: Removing unreachable block (ram,0x01dca460) */
/* WARNING: Removing unreachable block (ram,0x01dca46c) */
/* WARNING: Removing unreachable block (ram,0x01dca8d8) */
/* WARNING: Removing unreachable block (ram,0x01dca8e4) */
/* WARNING: Removing unreachable block (ram,0x01dcad50) */
/* WARNING: Removing unreachable block (ram,0x01dcad5c) */
/* WARNING: Removing unreachable block (ram,0x01dcb1c8) */
/* WARNING: Removing unreachable block (ram,0x01dcb1d4) */
/* WARNING: Removing unreachable block (ram,0x01dcb684) */
/* WARNING: Removing unreachable block (ram,0x01dcb690) */
/* WARNING: Removing unreachable block (ram,0x01dcbb8c) */
/* WARNING: Removing unreachable block (ram,0x01dcd798) */
/* WARNING: Removing unreachable block (ram,0x01dcdbc4) */
/* WARNING: Removing unreachable block (ram,0x01dce090) */
/* WARNING: Removing unreachable block (ram,0x01dce7dc) */
/* WARNING: Removing unreachable block (ram,0x01dcea88) */
/* WARNING: Removing unreachable block (ram,0x01dcbe1c) */
/* WARNING: Removing unreachable block (ram,0x01dcdca0) */
/* WARNING: Removing unreachable block (ram,0x01dcdbcc) */
/* WARNING: Removing unreachable block (ram,0x01dce7f0) */
/* WARNING: Removing unreachable block (ram,0x01dcdca8) */
/* WARNING: Removing unreachable block (ram,0x01dcea94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd23a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  int iVar18;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar8 = func_0x0229f06c(0x9dae,0);
  if (iVar8 == 0) {
    pcVar13 = (char *)(_UNK_01dc91bc + 0x1dc81d0);
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dc91c0 + 0x1dc81e4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91c4 + 0x1dc81f0));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91c8 + 0x1dc81fc));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91cc + 0x1dc8208));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91d0 + 0x1dc8214));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91d4 + 0x1dc8220));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91d8 + 0x1dc822c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91dc + 0x1dc8238));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91e0 + 0x1dc8244));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91e4 + 0x1dc8250));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91e8 + 0x1dc825c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91ec + 0x1dc8268));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91f0 + 0x1dc8274));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91f4 + 0x1dc8280));
      func_0x01384978(*(undefined4 *)(_UNK_01dc91f8 + 0x1dc828c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9290 + 0x1dc8298));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9294 + 0x1dc82a4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9298 + 0x1dc82b0));
      func_0x01384978(*(undefined4 *)(_UNK_01dc929c + 0x1dc82bc));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92a0 + 0x1dc82c8));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92a4 + 0x1dc82d4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92a8 + 0x1dc82e0));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92ac + 0x1dc82ec));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92b0 + 0x1dc82f8));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92b4 + 0x1dc8304));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92b8 + 0x1dc8310));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92bc + 0x1dc831c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92c0 + 0x1dc8328));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92c4 + 0x1dc8334));
      func_0x01384978(*(undefined4 *)(_UNK_01dc92c8 + 0x1dc8340));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9344 + 0x1dc834c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9348 + 0x1dc8358));
      func_0x01384978(*(undefined4 *)(_UNK_01dc934c + 0x1dc8364));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9350 + 0x1dc8370));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9354 + 0x1dc837c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9358 + 0x1dc8388));
      func_0x01384978(*(undefined4 *)(_UNK_01dc935c + 0x1dc8394));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9360 + 0x1dc83a0));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9364 + 0x1dc83ac));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9368 + 0x1dc83b8));
      func_0x01384978(*(undefined4 *)(_UNK_01dc936c + 0x1dc83c4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9370 + 0x1dc83d0));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9374 + 0x1dc83dc));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9378 + 0x1dc83e8));
      func_0x01384978(*(undefined4 *)(_UNK_01dc937c + 0x1dc83f4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc93f4 + 0x1dc8400));
      func_0x01384978(*(undefined4 *)(_UNK_01dc93f8 + 0x1dc840c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc93fc + 0x1dc8418));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9400 + 0x1dc8424));
      func_0x01384978(*(undefined4 *)(_UNK_01dc9404 + 0x1dc8430));
      *pcVar13 = '\x01';
    }
    iVar8 = func_0x0229f06c(0x9d97,0);
    if (iVar8 == 0) {
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar16 = func_0x01ca6408(iVar8,0);
      *(undefined4 *)(param_1 + 0x60) = uVar16;
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x01ca59b8(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x01ca53f0(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca54a0(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_28 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5ac0(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_2c = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5b70(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_34 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5290(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_38 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5340(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_3c = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5c20(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piStack_30 = (int *)func_0x01ca5908(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_40 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5cd0(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_48 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5d80(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_44 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5e30(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_4c = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5ee0(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_50 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca5f90(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_54 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca6040(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_58 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca61a0(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_5c = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca6250(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_60 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca6358(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      piStack_64 = piVar3;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x01ca60f0(iVar8,0);
      iVar8 = *(int *)(param_1 + 0x34);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64b20(iVar8,**(undefined4 **)(_UNK_01dc9918 + 0x1dc8938));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar1;
      uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01dc991c + 0x1dc895c)) {
            puVar4 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xc0);
            goto LAB_01dc89a4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dc991c + 0x1dc895c),0);
LAB_01dc89a4:
      piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
      piVar10 = *(int **)(_UNK_01dc99b4 + 0x1dc89c4);
      piVar17 = *(int **)(_UNK_01dc99b8 + 0x1dc89cc);
      do {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar1;
        uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar10) {
              puVar4 = (undefined4 *)(iVar8 + *piVar11 * 8 + 0xc0);
              goto LAB_01dc8a24;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc8a24:
        iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
        if (iVar8 == 0) goto LAB_01dc8ae0;
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar1;
        uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar17) {
              puVar4 = (undefined4 *)(iVar8 + *piVar11 * 8 + 0xc0);
              goto LAB_01dc8a98;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar17,0);
LAB_01dc8a98:
        iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar14 + 8) = iVar8;
      } while( true );
    }
    iVar8 = func_0x0229f13c(0x9d97,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar8 = func_0x0229f13c(0x9dae,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
  }
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piStack_30 = (int *)0x0;
  uStack_20 = 0;
  func_0x0245494c(&piStack_48,0,0);
  piStack_30 = piStack_48;
  piStack_2c = piStack_44;
  piStack_28 = piStack_40;
  uStack_24 = piStack_3c;
  uStack_20 = piStack_38;
  if (*(int *)(iVar8 + 0x10) != 0) {
    func_0x01485278(&piStack_30,*(int *)(iVar8 + 0x10),0);
  }
  func_0x01485278(&piStack_30,param_1,0);
  iVar14 = *(int *)(iVar8 + 8);
  uVar16 = *(undefined4 *)(iVar8 + 0xc);
  iVar8 = *(int *)(iVar8 + 0x10);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  uVar12 = 2;
  if (iVar8 == 0) {
    uVar12 = 1;
  }
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  func_0x0245495c(iVar14,uVar16,&piStack_30,uVar12);
  return;
LAB_01dc8ae0:
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == **(int **)(_UNK_01dc9afc + 0x1dc8b04)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8b4c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dc9afc + 0x1dc8b04),0);
LAB_01dc8b4c:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar1 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar1[-1] == **(int **)(_UNK_01dc9b5c + 0x1dc8b94)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar1 * 8 + 0xc0);
        goto LAB_01dc8bdc;
      }
      uVar9 = uVar9 - 1;
      piVar1 = piVar1 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dc9b5c + 0x1dc8b94),0);
LAB_01dc8bdc:
  piVar1 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dc9b60 + 0x1dc8bfc);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8c54;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc8c54:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    piVar17 = piStack_28;
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8cc8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dc8cc8:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0xc) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dc9ce4 + 0x1dc8d30)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dc8d78;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dc9ce4 + 0x1dc8d30),0);
LAB_01dc8d78:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  if (piVar17 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar17;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar1 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar1[-1] == **(int **)(_UNK_01dc9d98 + 0x1dc8db4)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar1 * 8 + 0xc0);
        goto LAB_01dc8dfc;
      }
      uVar9 = uVar9 - 1;
      piVar1 = piVar1 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar17,**(int **)(_UNK_01dc9d98 + 0x1dc8db4),0);
LAB_01dc8dfc:
  piVar1 = (int *)(*(code *)*puVar4)(piVar17,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dc9d9c + 0x1dc8e1c);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8e74;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc8e74:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc8ee8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dc8ee8:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x10) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dc9f20 + 0x1dc8f50)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dc8f98;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dc9f20 + 0x1dc8f50),0);
LAB_01dc8f98:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_2c;
  if (piStack_2c == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dc9fd4 + 0x1dc8fe4)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dc902c;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dc9fd4 + 0x1dc8fe4),0);
LAB_01dc902c:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dc9fd8 + 0x1dc904c);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc90a4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc90a4:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9118;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dc9118:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x24) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dca14c + 0x1dc9180)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dc9208;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dca14c + 0x1dc9180),0);
LAB_01dc9208:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_30;
  if (piStack_30 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dca200 + 0x1dc9254)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dc92d8;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dca200 + 0x1dc9254),0);
LAB_01dc92d8:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dca298 + 0x1dc92f8);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc938c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc938c:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9414;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dc9414:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x18) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dca438 + 0x1dc947c)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dc94c4;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dca438 + 0x1dc947c),0);
LAB_01dc94c4:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_34;
  if (piStack_34 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dca4d0 + 0x1dc9510)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dc9558;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dca4d0 + 0x1dc9510),0);
LAB_01dc9558:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dca54c + 0x1dc9578);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc95d0;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc95d0:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9644;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dc9644:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x28) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dca674 + 0x1dc96ac)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dc96f4;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dca674 + 0x1dc96ac),0);
LAB_01dc96f4:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_38;
  if (piStack_38 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dca70c + 0x1dc9740)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dc9788;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dca70c + 0x1dc9740),0);
LAB_01dc9788:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dca788 + 0x1dc97a8);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9800;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc9800:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9874;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dc9874:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x1c) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dca8b0 + 0x1dc98dc)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dc992c;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dca8b0 + 0x1dc98dc),0);
LAB_01dc992c:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_3c;
  if (piStack_3c == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dca948 + 0x1dc9978)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dc99c8;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dca948 + 0x1dc9978),0);
LAB_01dc99c8:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dca9c4 + 0x1dc99e8);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9a40;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc9a40:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9ab4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dc9ab4:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x2c) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcaaec + 0x1dc9b20)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dc9b70;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcaaec + 0x1dc9b20),0);
LAB_01dc9b70:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_40;
  if (piStack_40 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcab84 + 0x1dc9bbc)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dc9c04;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcab84 + 0x1dc9bbc),0);
LAB_01dc9c04:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcac00 + 0x1dc9c24);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9c7c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc9c7c:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9cf4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dc9cf4:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x30) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcad28 + 0x1dc9d5c)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dc9dac;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcad28 + 0x1dc9d5c),0);
LAB_01dc9dac:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_48;
  if (piStack_48 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcadc0 + 0x1dc9df8)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dc9e40;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcadc0 + 0x1dc9df8),0);
LAB_01dc9e40:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcae3c + 0x1dc9e60);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9eb8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dc9eb8:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    piVar17 = piStack_44;
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dc9f30;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dc9f30:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x34) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcaf64 + 0x1dc9f98)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dc9fe8;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcaf64 + 0x1dc9f98),0);
LAB_01dc9fe8:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  if (piVar17 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar17;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar1 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar1[-1] == **(int **)(_UNK_01dcaffc + 0x1dca024)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar1 * 8 + 0xc0);
        goto LAB_01dca06c;
      }
      uVar9 = uVar9 - 1;
      piVar1 = piVar1 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar17,**(int **)(_UNK_01dcaffc + 0x1dca024),0);
LAB_01dca06c:
  piVar1 = (int *)(*(code *)*puVar4)(piVar17,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcb078 + 0x1dca08c);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca0e4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dca0e4:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca15c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dca15c:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x38) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcb1a0 + 0x1dca1c4)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dca210;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcb1a0 + 0x1dca1c4),0);
LAB_01dca210:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_4c;
  if (piStack_4c == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcb238 + 0x1dca25c)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dca2a8;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcb238 + 0x1dca25c),0);
LAB_01dca2a8:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcb2b4 + 0x1dca2c8);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca320;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dca320:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca394;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dca394:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x3c) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcb3dc + 0x1dca3fc)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dca448;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcb3dc + 0x1dca3fc),0);
LAB_01dca448:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_50;
  if (piStack_50 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcb3e0 + 0x1dca494)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dca4e0;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcb3e0 + 0x1dca494),0);
LAB_01dca4e0:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcb4ac + 0x1dca500);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca55c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dca55c:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca5d0;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dca5d0:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x40) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcb5fc + 0x1dca638)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dca684;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcb5fc + 0x1dca638),0);
LAB_01dca684:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_54;
  if (piStack_54 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcb65c + 0x1dca6d0)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dca71c;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcb65c + 0x1dca6d0),0);
LAB_01dca71c:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcb728 + 0x1dca73c);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca798;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dca798:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca80c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dca80c:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x48) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcb820 + 0x1dca874)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dca8c0;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcb820 + 0x1dca874),0);
LAB_01dca8c0:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_58;
  if (piStack_58 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcb8d8 + 0x1dca90c)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dca958;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcb8d8 + 0x1dca90c),0);
LAB_01dca958:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcb8dc + 0x1dca978);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dca9d4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dca9d4:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcaa48;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcaa48:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x44) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcba9c + 0x1dcaab0)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcaafc;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcba9c + 0x1dcaab0),0);
LAB_01dcaafc:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_5c;
  if (piStack_5c == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcbaf8 + 0x1dcab48)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcab94;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcbaf8 + 0x1dcab48),0);
LAB_01dcab94:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcbb58 + 0x1dcabb4);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcac10;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dcac10:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcac84;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcac84:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x4c) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcbb5c + 0x1dcacec)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcad38;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcbb5c + 0x1dcacec),0);
LAB_01dcad38:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_60;
  if (piStack_60 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcbb60 + 0x1dcad84)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcadd0;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcbb60 + 0x1dcad84),0);
LAB_01dcadd0:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcbb64 + 0x1dcadf0);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcae4c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dcae4c:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcaec0;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcaec0:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x50) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcbf20 + 0x1dcaf28)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcaf74;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcbf20 + 0x1dcaf28),0);
LAB_01dcaf74:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  piVar1 = piStack_64;
  if (piStack_64 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcbfb4 + 0x1dcafc0)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcb00c;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcbfb4 + 0x1dcafc0),0);
LAB_01dcb00c:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcc004 + 0x1dcb02c);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcb088;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dcb088:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar17[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar17 * 8 + 0xc0);
          goto LAB_01dcb0fc;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcb0fc:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x54) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcc158 + 0x1dcb164)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcb1b0;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcc158 + 0x1dcb164),0);
LAB_01dcb1b0:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar3;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar1 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar1[-1] == **(int **)(_UNK_01dcc1d0 + 0x1dcb1fc)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar1 * 8 + 0xc0);
        goto LAB_01dcb248;
      }
      uVar9 = uVar9 - 1;
      piVar1 = piVar1 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dcc1d0 + 0x1dcb1fc),0);
LAB_01dcb248:
  piVar1 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcc25c + 0x1dcb268);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb2c4;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dcb2c4:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb338;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcb338:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0xc),1);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar14 + 0x58) = iVar8;
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcc370 + 0x1dcb3a0)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcb3f0;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcc370 + 0x1dcb3a0),0);
LAB_01dcb3f0:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x01ca4d5c(iVar8,0);
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcc440 + 0x1dcb470)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcb4bc;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcc440 + 0x1dcb470),0);
LAB_01dcb4bc:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcc4d0 + 0x1dcb4dc);
  puVar4 = *(undefined4 **)(_UNK_01dcc4dc + 0x1dcb4e4);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb53c;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dcb53c:
    iVar8 = (*(code *)*puVar5)(piVar1,puVar5[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar2) {
          puVar5 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb5b0;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcb5b0:
    iVar8 = (*(code *)*puVar5)(piVar1,puVar5[1]);
    iVar14 = *(int *)(param_1 + 0x3c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar8 + 0xc);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar14,uVar16,iVar8,*puVar4);
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcc5f4 + 0x1dcb620)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcb66c;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcc5f4 + 0x1dcb620),0);
LAB_01dcb66c:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x01ca4e0c(iVar8,0);
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcc6c8 + 0x1dcb6ec)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcb738;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcc6c8 + 0x1dcb6ec),0);
LAB_01dcb738:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcc724 + 0x1dcb758);
  puVar4 = *(undefined4 **)(_UNK_01dcc758 + 0x1dcb760);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb7b8;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dcb7b8:
    iVar8 = (*(code *)*puVar5)(piVar1,puVar5[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar2) {
          puVar5 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcb830;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcb830:
    iVar8 = (*(code *)*puVar5)(piVar1,puVar5[1]);
    iVar14 = *(int *)(param_1 + 0x40);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar8 + 0xc);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar14,uVar16,iVar8,*puVar4);
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcc854 + 0x1dcb89c)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcb8ec;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcc854 + 0x1dcb89c),0);
LAB_01dcb8ec:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x01ca51e0(iVar8,0);
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dcc924 + 0x1dcb96c)) {
        puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcb9b4;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcc924 + 0x1dcb96c),0);
LAB_01dcb9b4:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dcc9c8 + 0x1dcb9d4);
  puVar4 = *(undefined4 **)(_UNK_01dcc9cc + 0x1dcb9dc);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar10) {
          puVar5 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcba34;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01dcba34:
    iVar8 = (*(code *)*puVar5)(piVar1,puVar5[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar2) {
          puVar5 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcbaac;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcbaac:
    iVar8 = (*(code *)*puVar5)(piVar1,puVar5[1]);
    iVar14 = *(int *)(param_1 + 0x38);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar8 + 0xc);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar14,uVar16,iVar8,*puVar4);
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dccac8 + 0x1dcbb1c)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcbb74;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dccac8 + 0x1dcbb1c),0);
LAB_01dcbb74:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca4ebc(iVar8,0);
  *(undefined4 *)(param_1 + 8) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca4f14(iVar8,0);
  *(undefined4 *)(param_1 + 0xc) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca5080(iVar8,0);
  *(undefined4 *)(param_1 + 0x14) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca5028(iVar8,0);
  *(undefined4 *)(param_1 + 0x10) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca6768(iVar8,0);
  *(undefined4 *)(param_1 + 0x18) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca6300(iVar8,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca50d8(iVar8,0);
  *(undefined4 *)(param_1 + 0x20) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca7144(iVar8,0);
  *(undefined4 *)(param_1 + 0x24) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca719c(iVar8,0);
  *(undefined4 *)(param_1 + 0x28) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca6fc0(iVar8,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar16;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x01ca7018(iVar8,0);
  *(undefined4 *)(param_1 + 0x30) = uVar16;
  pcVar13 = (char *)(_UNK_01dce1ac + 0x1dcd204);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dce1b0 + 0x1dcd218));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1b4 + 0x1dcd224));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1b8 + 0x1dcd230));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1bc + 0x1dcd23c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1c0 + 0x1dcd248));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1c4 + 0x1dcd254));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1c8 + 0x1dcd260));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1cc + 0x1dcd26c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce1d0 + 0x1dcd278));
    func_0x01384978(*(undefined4 *)(_UNK_01dce278 + 0x1dcd284));
    func_0x01384978(*(undefined4 *)(_UNK_01dce27c + 0x1dcd290));
    func_0x01384978(*(undefined4 *)(_UNK_01dce280 + 0x1dcd29c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce284 + 0x1dcd2a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce288 + 0x1dcd2b4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce28c + 0x1dcd2c0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce290 + 0x1dcd2cc));
    func_0x01384978(*(undefined4 *)(_UNK_01dce294 + 0x1dcd2d8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce298 + 0x1dcd2e4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce29c + 0x1dcd2f0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2a0 + 0x1dcd2fc));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2a4 + 0x1dcd308));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2a8 + 0x1dcd314));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2ac + 0x1dcd320));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2b0 + 0x1dcd32c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce2b4 + 0x1dcd338));
    func_0x01384978(*(undefined4 *)(_UNK_01dce338 + 0x1dcd344));
    func_0x01384978(*(undefined4 *)(_UNK_01dce33c + 0x1dcd350));
    func_0x01384978(*(undefined4 *)(_UNK_01dce340 + 0x1dcd35c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce344 + 0x1dcd368));
    func_0x01384978(*(undefined4 *)(_UNK_01dce348 + 0x1dcd374));
    func_0x01384978(*(undefined4 *)(_UNK_01dce34c + 0x1dcd380));
    func_0x01384978(*(undefined4 *)(_UNK_01dce350 + 0x1dcd38c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce354 + 0x1dcd398));
    func_0x01384978(*(undefined4 *)(_UNK_01dce358 + 0x1dcd3a4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce35c + 0x1dcd3b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce360 + 0x1dcd3bc));
    func_0x01384978(*(undefined4 *)(_UNK_01dce364 + 0x1dcd3c8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce368 + 0x1dcd3d4));
    func_0x01384978(*(undefined4 *)(_UNK_01dce36c + 0x1dcd3e0));
    func_0x01384978(*(undefined4 *)(_UNK_01dce370 + 0x1dcd3ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dce374 + 0x1dcd3f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dce3fc + 0x1dcd404));
    func_0x01384978(*(undefined4 *)(_UNK_01dce400 + 0x1dcd410));
    func_0x01384978(*(undefined4 *)(_UNK_01dce404 + 0x1dcd41c));
    func_0x01384978(*(undefined4 *)(_UNK_01dce408 + 0x1dcd428));
    func_0x01384978(*(undefined4 *)(_UNK_01dce40c + 0x1dcd434));
    func_0x01384978(*(undefined4 *)(_UNK_01dce410 + 0x1dcd440));
    *pcVar13 = '\x01';
  }
  piStack_4c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piStack_48 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_44 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piStack_28 = (int *)0x0;
  piStack_40 = (int *)0x0;
  piStack_50 = (int *)0x0;
  piStack_2c = (int *)0x0;
  piStack_54 = (int *)0x0;
  piStack_3c = piStack_4c;
  piStack_38 = piStack_48;
  piStack_34 = piStack_44;
  iVar8 = func_0x0229f06c(0x9d98,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x9d98,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar8,param_1,0,0);
    return;
  }
  iVar8 = *(int *)(param_1 + 0x5c);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar8,**(undefined4 **)(_UNK_01dce414 + 0x1dcd4d4));
  iVar14 = func_0x01c24918(0);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  iVar14 = *(int *)(iVar14 + 0xc);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x01ca7620(iVar14,0);
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dce4fc + 0x1dcd530)) {
        puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcd57c;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dce4fc + 0x1dcd530),0);
LAB_01dcd57c:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
  piVar2 = *(int **)(_UNK_01dce57c + 0x1dcd59c);
  puVar4 = *(undefined4 **)(_UNK_01dce580 + 0x1dcd5a4);
LAB_01dcd5a0:
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_01dce584 + 0x1dcd5bc)) {
        puVar5 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
        goto LAB_01dcd604;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dce584 + 0x1dcd5bc),0);
LAB_01dcd604:
  iVar14 = (*(code *)*puVar5)(piVar1,puVar5[1]);
  if (iVar14 != 0) {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar14 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar2) {
          puVar5 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcd678;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcd678:
    iVar14 = (*(code *)*puVar5)(piVar1,puVar5[1]);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar16 = *(undefined4 *)(iVar14 + 0xc);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x03d64b90(iVar8,uVar16,*puVar4);
    if (iVar6 == 0) {
      uVar12 = *(undefined4 *)(iVar14 + 0xc);
      uVar16 = func_0x01384be4(**(undefined4 **)(_UNK_01dce694 + 0x1dcd6d0));
      func_0x03258eb8(uVar16,**(undefined4 **)(_UNK_01dce698 + 0x1dcd6e4));
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64944(iVar8,uVar12,uVar16,**(undefined4 **)(_UNK_01dce69c + 0x1dcd704));
    }
    goto LAB_01dcd5a0;
  }
  if (piVar1 != (int *)0x0) {
    iVar14 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dce6a0 + 0x1dcd738)) {
          puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcd780;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dce6a0 + 0x1dcd738),0);
LAB_01dcd780:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  iVar14 = func_0x01c24918(0);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  iVar14 = *(int *)(iVar14 + 0xc);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x01ca454c(iVar14,0,&piStack_2c,0);
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dce800 + 0x1dcd808)) {
        puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcd850;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dce800 + 0x1dcd808),0);
LAB_01dcd850:
  piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
LAB_01dcd864:
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar1;
  uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01dce860 + 0x1dcd884)) {
        puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
        goto LAB_01dcd8cc;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dce860 + 0x1dcd884),0);
LAB_01dcd8cc:
  iVar14 = (*(code *)*puVar4)(piVar1,puVar4[1]);
  if (iVar14 != 0) {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar14 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dce8ec + 0x1dcd908)) {
          puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcd950;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dce8ec + 0x1dcd908),0);
LAB_01dcd950:
    iVar14 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar14 + 0x4c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar6,**(undefined4 **)(_UNK_01dce984 + 0x1dcd98c));
LAB_01dcd998:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_01dce9ac + 0x1dcd9b4)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xc0);
          goto LAB_01dcd9fc;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dce9ac + 0x1dcd9b4),0);
LAB_01dcd9fc:
    iVar6 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (iVar6 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_01dce9d8 + 0x1dcda30)) {
            puVar4 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xc0);
            goto LAB_01dcda78;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dce9d8 + 0x1dcda30),0);
LAB_01dcda78:
      uVar16 = (*(code *)*puVar4)(piVar2,puVar4[1]);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6488c(iVar8,uVar16,**(undefined4 **)(_UNK_01dcea58 + 0x1dcdaa4));
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      uVar16 = *(undefined4 *)(iVar14 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar15 = *(int *)(iVar6 + 8);
      uVar9 = *(uint *)(iVar6 + 0xc);
      piVar3 = *(int **)(_UNK_01dcea5c + 0x1dcdaf0);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      iVar18 = *piVar3;
      if (iVar15 == 0) {
        func_0x01384bf0();
      }
      if (uVar9 < *(uint *)(iVar15 + 0xc)) {
        *(uint *)(iVar6 + 0xc) = uVar9 + 1;
        *(undefined4 *)(iVar15 + uVar9 * 4 + 0x10) = uVar16;
      }
      else {
        func_0x0325970c(iVar6,uVar16,
                        *(undefined4 *)(*(int *)(*(int *)(iVar18 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01dcd998;
    }
    if (piVar2 != (int *)0x0) {
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_01dcea60 + 0x1dcdb58)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
            goto LAB_01dcdba0;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcea60 + 0x1dcdb58),0);
LAB_01dcdba0:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    goto LAB_01dcd864;
  }
  if (piVar1 != (int *)0x0) {
    iVar14 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcebc0 + 0x1dcdc34)) {
          puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcdc84;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcebc0 + 0x1dcdc34),0);
LAB_01dcdc84:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = func_0x03d6476c(iVar8,**(undefined4 **)(_UNK_01dcec54 + 0x1dcdcc8));
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x0382ab5c(&piStack_68,iVar8,**(undefined4 **)(_UNK_01dcecd8 + 0x1dcdcf4));
  piStack_40 = piStack_68;
  piStack_3c = piStack_64;
  piStack_38 = piStack_60;
  piStack_34 = piStack_5c;
  puVar4 = *(undefined4 **)(_UNK_01dcecdc + 0x1dcdd14);
  puVar5 = *(undefined4 **)(_UNK_01dcece0 + 0x1dcdd1c);
  while (iVar8 = func_0x01475908(&piStack_40,*puVar4), piVar1 = piStack_34, iVar8 != 0) {
    if (piStack_34 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x0325b328(piVar1,*puVar5);
  }
  func_0x02450874(&piStack_40,**(undefined4 **)(_UNK_01dcece4 + 0x1dcdd58));
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x01ca5550(iVar8,0,&piStack_28,0);
  if (piStack_28 != *(int **)(param_1 + 0x68)) {
    iVar8 = *(int *)(param_1 + 0x34);
    *(int **)(param_1 + 0x68) = piStack_28;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x03d6476c(iVar8,**(undefined4 **)(_UNK_01dcece8 + 0x1dcdddc));
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&piStack_68,iVar8,**(undefined4 **)(_UNK_01dcecec + 0x1dcde04));
    piStack_50 = piStack_68;
    piStack_4c = piStack_64;
    piStack_48 = piStack_60;
    piStack_44 = piStack_5c;
    puVar4 = *(undefined4 **)(_UNK_01dcee14 + 0x1dcde28);
    while (iVar8 = func_0x01475908(&piStack_50,*puVar4), piVar2 = piStack_44, iVar8 != 0) {
      if (piStack_44 == (int *)0x0) {
        func_0x01384bf0();
      }
      piVar2[5] = 0;
    }
    func_0x02450874(&piStack_50,**(undefined4 **)(_UNK_01dcee18 + 0x1dcde5c));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcee1c + 0x1dcde80)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcdec8;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcee1c + 0x1dcde80),0);
LAB_01dcdec8:
    piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
    piVar2 = *(int **)(_UNK_01dcee20 + 0x1dcdee8);
    do {
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar1;
      uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_01dcee24 + 0x1dcdf00)) {
            puVar4 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
            goto LAB_01dcdf48;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcee24 + 0x1dcdf00),0);
LAB_01dcdf48:
      iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
      if (iVar8 == 0) goto LAB_01dce004;
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar1;
      uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar3[-1] == *piVar2) {
            puVar4 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
            goto LAB_01dcdfbc;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar2,0);
LAB_01dcdfbc:
      iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0x10),1);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar14 + 0x14) = iVar8;
    } while( true );
  }
  goto LAB_01dce098;
LAB_01dce004:
  if (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcefc0 + 0x1dce024)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dce06c;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcefc0 + 0x1dce024),0);
LAB_01dce06c:
    (*(code *)*puVar4)(piVar1,puVar4[1]);
  }
LAB_01dce098:
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x01ca572c(iVar8,0,&piStack_28,0);
  if (piStack_28 != *(int **)(param_1 + 0x6c)) {
    iVar8 = *(int *)(param_1 + 0x48);
    *(int **)(param_1 + 0x6c) = piStack_28;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64b20(iVar8,**(undefined4 **)(_UNK_01dcf0fc + 0x1dce114));
    iVar8 = *(int *)(param_1 + 0x34);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x03d6476c(iVar8,**(undefined4 **)(_UNK_01dcf100 + 0x1dce138));
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&piStack_68,iVar8,**(undefined4 **)(_UNK_01dcf150 + 0x1dce160));
    piStack_50 = piStack_68;
    piStack_4c = piStack_64;
    piStack_48 = piStack_60;
    piStack_44 = piStack_5c;
    puVar4 = *(undefined4 **)(_UNK_01dcf154 + 0x1dce184);
    while (iVar8 = func_0x01475908(&piStack_50,*puVar4), piVar2 = piStack_44, iVar8 != 0) {
      if (piStack_44 == (int *)0x0) {
        func_0x01384bf0();
      }
      piVar2[8] = 0;
    }
    func_0x02450874(&piStack_50,**(undefined4 **)(_UNK_01dcf1d0 + 0x1dce1e0));
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar16 = func_0x01ca5080(iVar8,0);
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcf22c + 0x1dce23c)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dce2c4;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcf22c + 0x1dce23c),0);
LAB_01dce2c4:
    piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
LAB_01dce2e0:
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcf2ec + 0x1dce2fc)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dce384;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcf2ec + 0x1dce2fc),0);
LAB_01dce384:
    iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
    if (iVar8 != 0) {
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar1;
      uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(_UNK_01dcf388 + 0x1dce3bc)) {
            puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
            goto LAB_01dce424;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcf388 + 0x1dce3bc),0);
LAB_01dce424:
      iVar8 = (*(code *)*puVar4)(piVar1,puVar4[1]);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar14 = FUN_01dcd048(param_1,*(undefined4 *)(iVar8 + 0x10),1);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar14 + 0x20) = iVar8;
      iVar14 = FUN_01dcf600(param_1,iVar8);
      if (iVar14 == 0) goto LAB_01dcea04;
      iVar14 = *(int *)(iVar8 + 0x18);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x0364c2b4(iVar14,**(undefined4 **)(_UNK_01dcf490 + 0x1dce498));
LAB_01dce4a4:
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_01dcf4a0 + 0x1dce4c0)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
            goto LAB_01dce50c;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf4a0 + 0x1dce4c0),0);
LAB_01dce50c:
      iVar14 = (*(code *)*puVar4)(piVar2,puVar4[1]);
      if (iVar14 != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar3 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar3[-1] == **(int **)(_UNK_01dcf52c + 0x1dce540)) {
              puVar4 = (undefined4 *)(iVar14 + *piVar3 * 8 + 0xc0);
              goto LAB_01dce594;
            }
            uVar9 = uVar9 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf52c + 0x1dce540),0);
LAB_01dce594:
        uVar12 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        iVar14 = func_0x02f7c0f8(uVar16,uVar12,0,**(undefined4 **)(_UNK_01dcf590 + 0x1dce5b4));
        if (iVar14 != 0) {
          iVar6 = *(int *)(iVar14 + 0x18);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x0345fcc8(iVar6,**(undefined4 **)(_UNK_01dcf594 + 0x1dce5e8));
          if (0 < iVar6) {
            iVar6 = *(int *)(param_1 + 0x48);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            uVar12 = *(undefined4 *)(iVar8 + 0x10);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar6 = func_0x03d66780(iVar6,uVar12,&piStack_54,
                                    **(undefined4 **)(_UNK_01dcf598 + 0x1dce628));
            piVar3 = piStack_54;
            if (iVar6 == 0) {
              piVar3 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01dcf5a4 + 0x1dce6b0));
              func_0x03258eb8(piVar3,**(undefined4 **)(_UNK_01dcf5a8 + 0x1dce6c4));
              iVar14 = *(int *)(iVar14 + 0x18);
              piStack_54 = piVar3;
              if (iVar14 == 0) {
                func_0x01384bf0();
              }
              uVar12 = func_0x0345f264(iVar14,**(undefined4 **)(_UNK_01dcf5ac + 0x1dce6ec));
              if (piVar3 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0325992c(piVar3,uVar12,**(undefined4 **)(_UNK_01dcf5b0 + 0x1dce710));
              piVar3 = piStack_54;
              uVar12 = *(undefined4 *)(iVar8 + 0x10);
              iVar14 = *(int *)(param_1 + 0x48);
              if (iVar14 == 0) {
                func_0x01384bf0();
              }
              func_0x03d64944(iVar14,uVar12,piVar3,**(undefined4 **)(_UNK_01dcf5b4 + 0x1dce744));
            }
            else {
              iVar14 = *(int *)(iVar14 + 0x18);
              if (iVar14 == 0) {
                func_0x01384bf0();
              }
              uVar12 = func_0x0345f264(iVar14,**(undefined4 **)(_UNK_01dcf59c + 0x1dce660));
              if (piVar3 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0325992c(piVar3,uVar12,**(undefined4 **)(_UNK_01dcf5a0 + 0x1dce684));
            }
          }
        }
        goto LAB_01dce4a4;
      }
      if (piVar2 != (int *)0x0) {
        iVar8 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar9 != 0) {
          piVar3 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar3[-1] == **(int **)(_UNK_01dcf5b8 + 0x1dce77c)) {
              puVar4 = (undefined4 *)(iVar8 + *piVar3 * 8 + 0xc0);
              goto LAB_01dce7c4;
            }
            uVar9 = uVar9 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dcf5b8 + 0x1dce77c),0);
LAB_01dce7c4:
        (*(code *)*puVar4)(piVar2,puVar4[1]);
      }
      goto LAB_01dce2e0;
    }
LAB_01dcea04:
    if (piVar1 != (int *)0x0) {
      iVar8 = *piVar1;
      uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(_UNK_01dcf5c0 + 0x1dcea1c)) {
            puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
            goto LAB_01dcea70;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcf5c0 + 0x1dcea1c),0);
LAB_01dcea70:
      (*(code *)*puVar4)(piVar1,puVar4[1]);
    }
  }
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x01ca4b80(iVar8,0,&piStack_28,0);
  if (*(int **)(param_1 + 0x70) != piStack_28) {
    iVar8 = *(int *)(param_1 + 0x4c);
    *(int **)(param_1 + 0x70) = piStack_28;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar8,**(undefined4 **)(_UNK_01dcf5c4 + 0x1dceb18));
    iVar8 = *(int *)(param_1 + 0x50);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x03d3570c(iVar8,**(undefined4 **)(_UNK_01dcf5c8 + 0x1dceb3c));
    iVar8 = *(int *)(param_1 + 0x54);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64b20(iVar8,**(undefined4 **)(_UNK_01dcf5cc + 0x1dceb60));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcf5d0 + 0x1dceb84)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcebd0;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcf5d0 + 0x1dceb84),0);
LAB_01dcebd0:
    piVar1 = (int *)(*(code *)*puVar4)(piVar1,puVar4[1]);
    puVar4 = *(undefined4 **)(_UNK_01dcf5d8 + 0x1dcebf4);
    puVar5 = *(undefined4 **)(_UNK_01dcf5dc + 0x1dcebfc);
LAB_01dcebf8:
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01dcf5e0 + 0x1dcec18)) {
          puVar7 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
          goto LAB_01dcec64;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcf5e0 + 0x1dcec18),0);
LAB_01dcec64:
    iVar8 = (*(code *)*puVar7)(piVar1,puVar7[1]);
    if (iVar8 != 0) {
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar1;
      uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(_UNK_01dcf5e4 + 0x1dcec9c)) {
            puVar7 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
            goto LAB_01dcecfc;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcf5e4 + 0x1dcec9c),0);
LAB_01dcecfc:
      iVar8 = (*(code *)*puVar7)(piVar1,puVar7[1]);
      iVar14 = 0;
      while( true ) {
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar8 + 0x44);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar14) break;
        iVar15 = *(int *)(iVar8 + 0x44);
        iVar6 = *(int *)(param_1 + 0x4c);
        if (iVar15 == 0) {
          func_0x01384bf0();
        }
        uVar16 = func_0x0364c9b8(iVar15,iVar14,*puVar4);
        uVar12 = *(undefined4 *)(iVar8 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar6,uVar16,uVar12,*puVar5);
        iVar15 = *(int *)(iVar8 + 0x44);
        iVar6 = *(int *)(param_1 + 0x50);
        if (iVar15 == 0) {
          func_0x01384bf0();
        }
        uVar16 = func_0x0364c9b8(iVar15,iVar14,*puVar4);
        piStack_64 = (int *)0x0;
        piStack_68 = (int *)0x0;
        func_0x038fd264(&piStack_68,*(undefined4 *)(iVar8 + 0x10),iVar14,
                        **(undefined4 **)(_UNK_01dcf5e8 + 0x1dcedc8));
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03d354b0(iVar6,uVar16,piStack_68,piStack_64,
                        **(undefined4 **)(_UNK_01dcf5ec + 0x1dcedfc));
        iVar14 = iVar14 + 1;
      }
      uVar16 = *(undefined4 *)(iVar8 + 0x10);
      iVar6 = *(int *)(param_1 + 0x54);
      iVar14 = func_0x01384be4(**(undefined4 **)(_UNK_01dcf5f0 + 0x1dcee40));
      func_0x01dd2910(iVar14,0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar14 + 8) = iVar8;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x03d6491c(iVar6,uVar16,iVar14,**(undefined4 **)(_UNK_01dcf5f4 + 0x1dcee78));
      iVar14 = func_0x01c24918(0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar8 + 0x44);
      iVar14 = *(int *)(iVar14 + 0x38);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar16 = func_0x0364c9b8(iVar6,0,*puVar4);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = func_0x01cccae0(iVar14,uVar16,0);
      if (iVar14 != 0) {
        uVar16 = *(undefined4 *)(iVar14 + 0x1c);
        uVar12 = *(undefined4 *)(iVar8 + 0x10);
        iVar8 = *(int *)(param_1 + 0x58);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar8,uVar12,uVar16,*puVar5);
      }
      goto LAB_01dcebf8;
    }
    if (piVar1 != (int *)0x0) {
      iVar8 = *piVar1;
      uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(_UNK_01dcf5f8 + 0x1dcef40)) {
            puVar4 = (undefined4 *)(iVar8 + *piVar2 * 8 + 0xc0);
            goto LAB_01dcef90;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01dcf5f8 + 0x1dcef40),0);
LAB_01dcef90:
      (*(code *)*puVar4)(piVar1,puVar4[1]);
    }
  }
  return;
}



// ===== FAT.MergeItemMan$$FAT.IGameModule.Startup RVA 0x1dc23f8 =====

void FUN_01dd23f8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9daf,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9daf,0);
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



// ===== FAT.MergeItemMan$$.ctor RVA 0x1dc2444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd2444(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01dd272c + 0x1dd2458);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd2730 + 0x1dd246c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2734 + 0x1dd2478));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2738 + 0x1dd2484));
    func_0x01384978(*(undefined4 *)(_UNK_01dd273c + 0x1dd2490));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2740 + 0x1dd249c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2744 + 0x1dd24a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2748 + 0x1dd24b4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd274c + 0x1dd24c0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2750 + 0x1dd24cc));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2754 + 0x1dd24d8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2758 + 0x1dd24e4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd275c + 0x1dd24f0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2760 + 0x1dd24fc));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2764 + 0x1dd2508));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2768 + 0x1dd2514));
    func_0x01384978(*(undefined4 *)(_UNK_01dd276c + 0x1dd2520));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2770 + 0x1dd252c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2774 + 0x1dd2538));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dd2778 + 0x1dd254c));
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_01dd277c + 0x1dd2560));
  puVar2 = *(undefined4 **)(_UNK_01dd2780 + 0x1dd2574);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_01dd2784 + 0x1dd258c));
  puVar2 = *(undefined4 **)(_UNK_01dd2788 + 0x1dd25a0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_01dd278c + 0x1dd25b8));
  puVar2 = *(undefined4 **)(_UNK_01dd2790 + 0x1dd25cc);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_01dd2794 + 0x1dd25e4));
  puVar2 = *(undefined4 **)(_UNK_01dd2798 + 0x1dd25f8);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_01dd279c + 0x1dd2610));
  puVar7 = *(undefined4 **)(_UNK_01dd27a0 + 0x1dd2624);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_01dd27a4 + 0x1dd263c);
  func_0x03d63eec(uVar1,*puVar8);
  puVar5 = *(undefined4 **)(_UNK_01dd27a8 + 0x1dd264c);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01dd27ac + 0x1dd2664);
  func_0x03d59324(uVar1,*puVar6);
  puVar2 = *(undefined4 **)(_UNK_01dd27b0 + 0x1dd2674);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d34a50(uVar1,**(undefined4 **)(_UNK_01dd27b4 + 0x1dd268c));
  puVar2 = *(undefined4 **)(_UNK_01dd27b8 + 0x1dd26a0);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_01dd27bc + 0x1dd26b8));
  uVar3 = *puVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d59324(uVar1,*puVar6);
  uVar3 = *puVar7;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d63eec(uVar1,*puVar8);
  uVar3 = *puVar7;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d63eec(uVar1,*puVar8);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeItemMan$$.cctor RVA 0x1dc27c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd27c0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01dd282c + 0x1dd27d0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd2830 + 0x1dd27e4));
    func_0x01384978(*(undefined4 *)(_UNK_01dd2834 + 0x1dd27f0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dd2838 + 0x1dd2804));
  func_0x0211b18c(uVar1,0);
  **(undefined4 **)(**(int **)(_UNK_01dd283c + 0x1dd2820) + 0x5c) = uVar1;
  return;
}



// ===== FAT.MergeItemMan.ItemBubbleSpawnData$$.ctor RVA 0x1dc2840 =====

void FUN_01dd2840(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeItemMan.MergeItemCategoryRuntimeConfig$$get_id RVA 0x1dc2848 =====

undefined4 FUN_01dd2848(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b64,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b64,0);
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
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}



// ===== FAT.MergeItemMan.MergeItemCategoryRuntimeConfig$$get_name RVA 0x1dc28ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd28ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x9db0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9db0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x38);
}



// ===== FAT.MergeItemMan.MergeItemCategoryRuntimeConfig$$.ctor RVA 0x1dc2910 =====

void FUN_01dd2910(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeItemMan.<>c$$.cctor RVA 0x1dc2918 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd2918(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd2970 + 0x1dd2928);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd2974 + 0x1dd293c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd2978 + 0x1dd2950);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.MergeItemMan.<>c$$.ctor RVA 0x1dc297c =====

void FUN_01dd297c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeItemMan.<>c$$<FillCollectionCategoryOrdered>b__32_0 RVA 0x1dc2984 =====

int FUN_01dd2984(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  return iVar1 - *(int *)(param_3 + 0x20);
}


